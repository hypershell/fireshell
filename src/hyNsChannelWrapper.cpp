#include "hyNsChannelWrapper.h"
#include "hyInputStream.h"

NS_IMPL_ISUPPORTS2(hyNsChannelWrapper, nsIChannel, hyIDataChannelListener)

hyNsChannelWrapper::hyNsChannelWrapper()
    : mPos(0)
    , mOpeningState(false)
    , mOpenedState(false)
    , mClosedState(false)
    , mLoadFlags(nsIRequest::LOAD_NORMAL)
{
  /* member initializers and constructor code */
}

hyNsChannelWrapper::~hyNsChannelWrapper()
{
  /* destructor code */
}

NS_IMETHODIMP hyNsChannelWrapper::Init(hyIDataChannel *channel) 
{
    mChannel = channel;
    return NS_OK;
}

/* attribute nsIURI originalURI; */
NS_IMETHODIMP hyNsChannelWrapper::GetOriginalURI(nsIURI * *aOriginalURI)
{
    *aOriginalURI = mOriginalURI;
    NS_IF_ADDREF(*aOriginalURI);
    return NS_OK;
}
NS_IMETHODIMP hyNsChannelWrapper::SetOriginalURI(nsIURI *aOriginalURI)
{
    mOriginalURI = aOriginalURI;
    return NS_OK;
}

/* readonly attribute nsIURI URI; */
NS_IMETHODIMP hyNsChannelWrapper::GetURI(nsIURI * *aURI)
{
    return mChannel->GetURI(aURI);
}

/* attribute nsISupports owner; */
NS_IMETHODIMP hyNsChannelWrapper::GetOwner(nsISupports * *aOwner)
{
    *aOwner = mOwner;
    NS_IF_ADDREF(*aOwner);
    return NS_OK;
}
NS_IMETHODIMP hyNsChannelWrapper::SetOwner(nsISupports *aOwner)
{
    mOwner = aOwner;
    return NS_OK;
}

/* attribute nsIInterfaceRequestor notificationCallbacks; */
NS_IMETHODIMP hyNsChannelWrapper::GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks)
{
    *aNotificationCallbacks = mNotificationCallbacks;
    NS_IF_ADDREF(*aNotificationCallbacks);
    return NS_OK;
}
NS_IMETHODIMP hyNsChannelWrapper::SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks)
{
    mNotificationCallbacks = aNotificationCallbacks;
    return NS_OK;
}

/* readonly attribute nsISupports securityInfo; */
NS_IMETHODIMP hyNsChannelWrapper::GetSecurityInfo(nsISupports * *aSecurityInfo)
{
    *aSecurityInfo = nsnull;
    return NS_OK;
}

/* attribute ACString contentType; */
NS_IMETHODIMP hyNsChannelWrapper::GetContentType(nsACString & aContentType)
{
    return mChannel->GetContentType(aContentType);
}
NS_IMETHODIMP hyNsChannelWrapper::SetContentType(const nsACString & aContentType)
{
    // ignore
    return NS_OK;
}

/* attribute ACString contentCharset; */
NS_IMETHODIMP hyNsChannelWrapper::GetContentCharset(nsACString & aContentCharset)
{
    aContentCharset = mCharset;
    return NS_OK;
}
NS_IMETHODIMP hyNsChannelWrapper::SetContentCharset(const nsACString & aContentCharset)
{
    mCharset = aContentCharset;
    return NS_OK;
}

/* attribute long contentLength; */
NS_IMETHODIMP hyNsChannelWrapper::GetContentLength(PRInt32 *aContentLength)
{
    *aContentLength = -1;
    return NS_OK;
}
NS_IMETHODIMP hyNsChannelWrapper::SetContentLength(PRInt32 aContentLength)
{
    // ignore
    return NS_OK;
}

/* nsIInputStream open (); */
NS_IMETHODIMP hyNsChannelWrapper::Open(nsIInputStream * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void asyncOpen (in nsIStreamListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyNsChannelWrapper::AsyncOpen(nsIStreamListener *aListener, nsISupports *aContext)
{
    if(mOpeningState || !aListener) {
        return NS_ERROR_FAILURE;
    }
    mOpeningState = true;

    mListener = aListener;
    mContext = aContext;

    return mChannel->OpenChannel(this, NULL);
}


/* readonly attribute AUTF8String name; */
NS_IMETHODIMP hyNsChannelWrapper::GetName(nsACString & aName)
{
    nsresult rv;
    nsCOMPtr<nsIURI> uri;
    
    rv = mChannel->GetURI(getter_AddRefs(uri));
    NS_ENSURE_SUCCESS(rv, rv);

    return uri->GetSpec(aName);
}

/* boolean isPending (); */
NS_IMETHODIMP hyNsChannelWrapper::IsPending(PRBool *_retval NS_OUTPARAM)
{
    *_retval = mOpenedState && !mClosedState;
    return NS_OK;
}

/* readonly attribute nsresult status; */
NS_IMETHODIMP hyNsChannelWrapper::GetStatus(nsresult *aStatus)
{
    *aStatus = NS_OK;
    return NS_OK;
}

/* void cancel (in nsresult aStatus); */
NS_IMETHODIMP hyNsChannelWrapper::Cancel(nsresult aStatus)
{
    // ignore
    return NS_OK;
}

/* void suspend (); */
NS_IMETHODIMP hyNsChannelWrapper::Suspend()
{
    // ignore
    return NS_OK;
}

/* void resume (); */
NS_IMETHODIMP hyNsChannelWrapper::Resume()
{
    // ignore
    return NS_OK;
}

/* attribute nsILoadGroup loadGroup; */
NS_IMETHODIMP hyNsChannelWrapper::GetLoadGroup(nsILoadGroup * *aLoadGroup)
{
    *aLoadGroup = mLoadGroup;
    NS_IF_ADDREF(*aLoadGroup);
    return NS_OK;
}
NS_IMETHODIMP hyNsChannelWrapper::SetLoadGroup(nsILoadGroup *aLoadGroup)
{
    mLoadGroup = aLoadGroup;
    return NS_OK;
}

/* attribute nsLoadFlags loadFlags; */
NS_IMETHODIMP hyNsChannelWrapper::GetLoadFlags(nsLoadFlags *aLoadFlags)
{
    *aLoadFlags = mLoadFlags;
    return NS_OK;
}
NS_IMETHODIMP hyNsChannelWrapper::SetLoadFlags(nsLoadFlags aLoadFlags)
{
    mLoadFlags = aLoadFlags;
    return NS_OK;
}

/* void onDataOpen (in nsISupports aContext); */
NS_IMETHODIMP hyNsChannelWrapper::OnDataOpen(nsISupports *aContext)
{
    if(!mOpeningState || mOpenedState) {
        return NS_ERROR_FAILURE;
    }

    mOpenedState = true;
    return mListener->OnStartRequest(this, mContext);
    return NS_OK;
}

/* void onDataReceive (in hyIDataBuffer aBuffer, in nsISupports aContext); */
NS_IMETHODIMP hyNsChannelWrapper::OnDataReceive(hyIDataBuffer *aBuffer, nsISupports *aContext)
{
    if(!mOpenedState || mClosedState) {
        return NS_ERROR_FAILURE;
    }

    nsresult rv;

    nsCOMPtr<hyInputStream> stream = new hyInputStream();

    rv = stream->AddBuffer(aBuffer);
    NS_ENSURE_SUCCESS(rv, rv);

    PRUint64 streamSize;
    rv = stream->GetStreamSize(&streamSize);
    NS_ENSURE_SUCCESS(rv, rv);

    mPos += streamSize;

    return mListener->OnDataAvailable(this, mContext, stream, mPos, streamSize);
}

/* void onDataClose (in nsISupports aContext); */
NS_IMETHODIMP hyNsChannelWrapper::OnDataClose(nsISupports *aContext)
{
    mClosedState = true;
    return mListener->OnStopRequest(this, mContext, NS_OK);
}


/* readonly attribute unsigned long contentDisposition; */
NS_IMETHODIMP hyNsChannelWrapper::GetContentDisposition(PRUint32 *aContentDisposition)
{
    return NS_ERROR_NOT_AVAILABLE;
}

/* readonly attribute AString contentDispositionFilename; */
NS_IMETHODIMP hyNsChannelWrapper::GetContentDispositionFilename(nsAString & aContentDispositionFilename)
{
    return NS_ERROR_NOT_AVAILABLE;
}

/* readonly attribute ACString contentDispositionHeader; */
NS_IMETHODIMP hyNsChannelWrapper::GetContentDispositionHeader(nsACString & aContentDispositionHeader)
{
    return NS_ERROR_NOT_AVAILABLE;
}
