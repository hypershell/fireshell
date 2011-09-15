#include "hyDataChannel.h"
#include "nsIClassInfoImpl.h"
#include "hyHttpHeaderFields.h"
#include "hyChannelToStreamConverter.h"
#include "hyDataBuffer.h"
#include "nsNetUtil.h"
#include "nsIUploadChannel.h"
#include "hyHttpHeaderCopier.h"
  
NS_IMPL_ISUPPORTS3(hyDataChannel, hyIDataChannel, hyIHttpChannel, nsIStreamListener)
NS_IMPL_CI_INTERFACE_GETTER3(hyDataChannel, hyIDataChannel, hyIHttpChannel, nsIStreamListener)
NS_IMPL_CLASSINFO(hyDataChannel, NULL, 0, HY_DATACHANNEL_CID)

hyDataChannel::hyDataChannel()
  : mURI(0)
  , mMethod("GET")
  , mRequestHeaders(new hyHttpHeaderFields())
  , mResponseHeaders(new hyHttpHeaderFields())
  , mChannelConverter(0)
  , mResponseStatusCode(0)
  , mOpeningState(false)
  , mOpenedState(false)
  , mClosedState(false)
  , mHasUpload(false)
{
  /* member initializers and constructor code */
}

hyDataChannel::~hyDataChannel()
{
  /* destructor code */
}

NS_IMETHODIMP hyDataChannel::Init(nsIURI *aURI)
{
    mURI = aURI;
    return NS_OK;
}

/* void setInputChannel (in hyIDataChannel aChannel); */
NS_IMETHODIMP hyDataChannel::SetIncomingChannel(hyIDataChannel *aChannel)
{
    if(mOpeningState) {
        // The channel is already been opening
        return NS_ERROR_FAILURE;
    }

    mIncomingChannel = aChannel;
    SetMethod(NS_LITERAL_CSTRING("POST"));
    return NS_OK;
}

/* void openChannel (in hyIDataChannelListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyDataChannel::OpenChannel(hyIDataChannelListener *aListener, nsISupports *aContext)
{        
    if(!mURI || mOpeningState) {
        return NS_ERROR_FAILURE;
    }
    mOpeningState = true;

    mListener = aListener;
    mContext = aContext;

    nsresult rv;

    nsCOMPtr<nsIIOService> ioServ(do_GetIOService(&rv));
    NS_ENSURE_SUCCESS(rv, rv);

    nsCOMPtr<nsIChannel> channel;
    rv = ioServ->NewChannelFromURI(mURI, getter_AddRefs(channel));
    NS_ENSURE_SUCCESS(rv, rv);

    mActualChannel = do_QueryInterface(channel, &rv);
    NS_ENSURE_SUCCESS(rv, rv);

    if(mMethod == "GET" || !mIncomingChannel) {
        // do GET request without any upload
        return OpenActualChannel();
    } else {
        mHasUpload = true;
        mChannelConverter = new hyChannelToStreamConverter();
        return mChannelConverter->ConvertChannel(mIncomingChannel, this, NULL);
    }
}

/* void onDataAvailable (
 *          in nsIRequest aRequest, in nsISupports aContext, 
 *          in nsIInputStream aInputStream, in unsigned long aOffset, 
 *          in unsigned long aCount); */
NS_IMETHODIMP hyDataChannel::OnDataAvailable
        ( nsIRequest *aRequest
        , nsISupports *aContext
        , nsIInputStream *aInputStream
        , PRUint32 aOffset
        , PRUint32 aCount
        )
{
    if(!mOpenedState || mClosedState) {
        // The channel is not opened yet or has been closed
        return NS_ERROR_FAILURE;
    }

    nsresult rv;

    nsCOMPtr<hyDataBuffer> buffer = new hyDataBuffer();
    rv = buffer->Init(aCount);
    NS_ENSURE_SUCCESS(rv, rv);

    char *rawBuffer;
    rv = buffer->GetBuffer(&rawBuffer);
    NS_ENSURE_SUCCESS(rv, rv);

    PRUint32 actualSize;
    rv = aInputStream->Read(rawBuffer, aCount, &actualSize);
    NS_ENSURE_SUCCESS(rv, rv);

    rv = buffer->SetEffectiveSize(actualSize);
    NS_ENSURE_SUCCESS(rv, rv);

    return mListener->OnDataReceive(buffer, mContext);
}

/* void onStartRequest (in nsIRequest aRequest, in nsISupports aContext); */
NS_IMETHODIMP hyDataChannel::OnStartRequest(nsIRequest *aRequest, nsISupports *aContext)
{
    // Copy response headers to our header structure.
    return mActualChannel->VisitResponseHeaders(mResponseHeaders);
}

/* void onStopRequest (in nsIRequest aRequest, in nsISupports aContext, in nsresult aStatusCode); */
NS_IMETHODIMP hyDataChannel::OnStopRequest(nsIRequest *aRequest, nsISupports *aContext, nsresult aStatusCode)
{
    return mListener->OnDataClose(mContext);
}

/* void onChannelConversionComplete (in nsIInputStream aStream, in unsigned long long aSize, in nsISupports aContext); */
NS_IMETHODIMP hyDataChannel::OnChannelConversionComplete(nsIInputStream *aStream, PRUint64 aSize, nsISupports *aContext)
{
    if(!mHasUpload) {
        return NS_ERROR_FAILURE;
    }

    nsresult rv;
    
    if(mRequestContentType == "") {
        // If no request content-type is specified, we will use the
        // same content-type as the incoming channel.
        rv = mIncomingChannel->GetContentType(mRequestContentType);
        NS_ENSURE_SUCCESS(rv, rv);
    }

    nsCOMPtr<nsIUploadChannel> uploadChannel(do_QueryInterface(mActualChannel, &rv));
    NS_ENSURE_SUCCESS(rv, rv);

    rv = uploadChannel->SetUploadStream(aStream, mRequestContentType, aSize);
    NS_ENSURE_SUCCESS(rv, rv);

    nsCOMPtr<hyIHttpChannel> incomingHttpChannel(do_QueryInterface(mIncomingChannel));
    if(incomingHttpChannel) {
        // Our upload channel is a HTTP channel. Copying the headers.
        nsCOMPtr<hyIHttpHeaderFields> responseHeaders;
        incomingHttpChannel->GetResponseHeaders(getter_AddRefs(responseHeaders));

        rv = ConvertResponseToRequest(responseHeaders, getter_AddRefs(mRequestHeaders));
        NS_ENSURE_SUCCESS(rv, rv);
    }

    return OpenActualChannel();
}

NS_IMETHODIMP hyDataChannel::ConvertResponseToRequest(hyIHttpHeaderFields *response, hyIHttpHeaderFields **request) {
    // TODO: Do some filtering and copying of different headers
    *request = response;

    return NS_OK;
}

NS_IMETHODIMP hyDataChannel::OpenActualChannel() {
    if(mOpenedState) {
        return NS_ERROR_FAILURE;
    }
    mOpenedState = true;

    nsresult rv;
    nsCOMPtr<hyHttpHeaderCopier> copier = new hyHttpHeaderCopier();

    rv = copier->Init(mRequestHeaders, mActualChannel);
    NS_ENSURE_SUCCESS(rv, rv);

    rv = copier->DoCopy();
    NS_ENSURE_SUCCESS(rv, rv);

    if(mRequestContentType != "") {
        rv = mActualChannel->SetRequestHeader(NS_LITERAL_CSTRING("CONTENT-TYPE"), mRequestContentType, false);
        NS_ENSURE_SUCCESS(rv, rv);
    }

    return mActualChannel->AsyncOpen(this, NULL);
}

/* readonly attribute ACString ContentType; */
NS_IMETHODIMP hyDataChannel::GetContentType(nsACString & aContentType)
{
    return GetResponseContentType(aContentType);
}

/* attribute nsIURI URI; */
NS_IMETHODIMP hyDataChannel::GetURI(nsIURI * *aURI)
{
    *aURI = mURI;
    NS_ADDREF(*aURI);
    return NS_OK;
}

/* attribute ACString method; */
NS_IMETHODIMP hyDataChannel::GetMethod(nsACString & aMethod)
{
    aMethod = mMethod;
    return NS_OK;
}
NS_IMETHODIMP hyDataChannel::SetMethod(const nsACString & aMethod)
{
    ToUpperCase(aMethod, mMethod);
    return NS_OK;
}

/* attribute ACString requestContentType; */
NS_IMETHODIMP hyDataChannel::GetRequestContentType(nsACString & aRequestContentType)
{
    aRequestContentType = mRequestContentType;
    return NS_OK;
}

NS_IMETHODIMP hyDataChannel::SetRequestContentType(const nsACString & aRequestContentType)
{
    if(mOpeningState) {
        return NS_ERROR_FAILURE;
    }

    mRequestContentType = aRequestContentType;
    return NS_OK;
}

/* attribute hyIHttpHeaderFields requestHeaders; */
NS_IMETHODIMP hyDataChannel::GetRequestHeaders(hyIHttpHeaderFields * *aRequestHeaders)
{
    *aRequestHeaders = mRequestHeaders;
    NS_ADDREF(*aRequestHeaders);
    return NS_OK;
}

NS_IMETHODIMP hyDataChannel::SetRequestHeaders(hyIHttpHeaderFields *aRequestHeaders)
{
    if(mOpeningState) {
        return NS_ERROR_FAILURE;
    }

    mRequestHeaders = aRequestHeaders;
    return NS_OK;
}

/* readonly attribute long responseStatusCode; */
NS_IMETHODIMP hyDataChannel::GetResponseStatusCode(PRInt32 *aResponseStatusCode)
{
    *aResponseStatusCode = mResponseStatusCode;
    return NS_OK;
}

/* readonly attribute ACString responseStatusMessage; */
NS_IMETHODIMP hyDataChannel::GetResponseStatusText(nsACString & aResponseStatusText)
{
    aResponseStatusText = mResponseStatusText;
    return NS_OK;
}

/* readonly attribute ACString responseContentType; */
NS_IMETHODIMP hyDataChannel::GetResponseContentType(nsACString & aResponseContentType)
{
    aResponseContentType = mResponseContentType;
    return NS_OK;
}

/* readonly attribute hyIHttpHeaderFields responseHeaders; */
NS_IMETHODIMP hyDataChannel::GetResponseHeaders(hyIHttpHeaderFields * *aResponseHeaders)
{
    *aResponseHeaders = mResponseHeaders;
    NS_ADDREF(*aResponseHeaders);
    return NS_OK;
}

/* hyIDataChannel getRawChannel (); */
NS_IMETHODIMP hyDataChannel::GetRawChannel(hyIDataChannel * *_retval NS_OUTPARAM)
{
    if(mOpeningState) {
        return NS_ERROR_FAILURE;
    }

    // This is a wrapper so it can't return a raw channel whose output includes
    // the raw HTTP headers.
    return NS_ERROR_NOT_IMPLEMENTED;
}

