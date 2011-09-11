#include "hyNsChannelWrapper.h"
#include "hyInputStream.h"

NS_IMPL_ISUPPORTS2(hyNsChannelWrapper, nsIChannel, hyIDataChannelListener)

hyNsChannelWrapper::hyNsChannelWrapper()
    : mPos(0)
    , mOpeningState(false)
    , mOpenedState(false)
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
    return mChannel->GetURI(aOriginalURI);
}
NS_IMETHODIMP hyNsChannelWrapper::SetOriginalURI(nsIURI *aOriginalURI)
{
    // ignore
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
    *aOwner = NULL;
    return NS_OK;
}
NS_IMETHODIMP hyNsChannelWrapper::SetOwner(nsISupports *aOwner)
{
    // ignore
    return NS_OK;
}

/* attribute nsIInterfaceRequestor notificationCallbacks; */
NS_IMETHODIMP hyNsChannelWrapper::GetNotificationCallbacks(nsIInterfaceRequestor * *aNotificationCallbacks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP hyNsChannelWrapper::SetNotificationCallbacks(nsIInterfaceRequestor *aNotificationCallbacks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports securityInfo; */
NS_IMETHODIMP hyNsChannelWrapper::GetSecurityInfo(nsISupports * *aSecurityInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
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
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP hyNsChannelWrapper::SetContentCharset(const nsACString & aContentCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
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
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isPending (); */
NS_IMETHODIMP hyNsChannelWrapper::IsPending(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsresult status; */
NS_IMETHODIMP hyNsChannelWrapper::GetStatus(nsresult *aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancel (in nsresult aStatus); */
NS_IMETHODIMP hyNsChannelWrapper::Cancel(nsresult aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void suspend (); */
NS_IMETHODIMP hyNsChannelWrapper::Suspend()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resume (); */
NS_IMETHODIMP hyNsChannelWrapper::Resume()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsILoadGroup loadGroup; */
NS_IMETHODIMP hyNsChannelWrapper::GetLoadGroup(nsILoadGroup * *aLoadGroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP hyNsChannelWrapper::SetLoadGroup(nsILoadGroup *aLoadGroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsLoadFlags loadFlags; */
NS_IMETHODIMP hyNsChannelWrapper::GetLoadFlags(nsLoadFlags *aLoadFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP hyNsChannelWrapper::SetLoadFlags(nsLoadFlags aLoadFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onDataReceive (in hyIDataBuffer aBuffer, in nsISupports aContext); */
NS_IMETHODIMP hyNsChannelWrapper::OnDataReceive(hyIDataBuffer *aBuffer, nsISupports *aContext)
{
    if(!mOpeningState) {
        return NS_ERROR_FAILURE;
    }

    nsresult rv;

    if(!mOpenedState) {
        mOpenedState = true;
        mListener->OnStartRequest(this, mContext);
    }

    hyInputStream *stream = new hyInputStream();

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
    return NS_ERROR_NOT_IMPLEMENTED;
}
