
#include "hyChannelToStreamConverter.h"
#include "hyDataBuffer.h"

NS_IMPL_ISUPPORTS1(hyChannelToStreamConverter, hyIChannelToStreamConverter)

hyChannelToStreamConverter::hyChannelToStreamConverter()
    : mStreamSimulator(new hyInputStream())
    , mOpenedState(false)
    , mClosedState(false)
{
  /* member initializers and constructor code */
}

hyChannelToStreamConverter::~hyChannelToStreamConverter()
{
  /* destructor code */
}

/* void convertChannel (in hyIDataChannel aChannel, in hyIChannelToStreamConverterListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyChannelToStreamConverter::ConvertChannel(hyIDataChannel *aChannel, hyIChannelToStreamConverterListener *aListener, nsISupports *aContext)
{
    if(!aListener || !aChannel) {
        return NS_ERROR_FAILURE;
    }

    mListener = aListener;
    mContext = aContext;

    mOpenedState = true;
    return aChannel->OpenChannel(this, NULL);
}

/* void onDataReceive (in hyIDataBuffer aBuffer, in nsISupports aContext); */
NS_IMETHODIMP hyChannelToStreamConverter::OnDataReceive(hyIDataBuffer *aBuffer, nsISupports *aContext)
{
    return mStreamSimulator->AddBuffer(aBuffer);
}

/* void onDataClose (in nsISupports aContext); */
NS_IMETHODIMP hyChannelToStreamConverter::OnDataClose(nsISupports *aContext)
{
    if(mClosedState || !mOpenedState) {
        return NS_ERROR_FAILURE;
    }

    mClosedState = true;

    nsresult rv;
    PRUint64 streamSize;
    rv = mStreamSimulator->GetStreamSize(&streamSize);
    NS_ENSURE_SUCCESS(rv, rv);

    return mListener->OnChannelConversionComplete(mStreamSimulator, streamSize, mContext);
}

