#include "hyPipelineDataChannel.h"

NS_IMPL_ISUPPORTS1(hyPipelineDataChannel, hyIDataChannel)

hyPipelineDataChannel::hyPipelineDataChannel()
    : mOpenedState(false)
{
  /* member initializers and constructor code */
}

hyPipelineDataChannel::~hyPipelineDataChannel()
{
  /* destructor code */
}

NS_IMETHODIMP hyPipelineDataChannel::AddChannel(hyIDataChannel *aChannel) {
    if(!aChannel || mOpenedState) {
        return NS_ERROR_FAILURE;
    }

    if(!mLastChannel) {
        mFirstChannel = aChannel;
        mLastChannel = aChannel;
        return NS_OK;
    }

    aChannel->SetIncomingChannel(mLastChannel);
    mLastChannel = aChannel;
    return NS_OK;
}

NS_IMETHODIMP hyPipelineDataChannel::SetURI(nsIURI *aURI) {
    mURI = aURI;
    return NS_OK;
}

/* void setIncomingChannel (in hyIDataChannel aChannel); */
NS_IMETHODIMP hyPipelineDataChannel::SetIncomingChannel(hyIDataChannel *aChannel)
{
    if(!mFirstChannel || mOpenedState) {
        return NS_ERROR_FAILURE;
    } 

    return mFirstChannel->SetIncomingChannel(aChannel);
}

/* void openChannel (in hyIDataChannelListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyPipelineDataChannel::OpenChannel(hyIDataChannelListener *aListener, nsISupports *aContext)
{
    if(mOpenedState) {
        return NS_ERROR_FAILURE;
    }
    mOpenedState = true;
    mFirstChannel.forget();

    return mLastChannel->OpenChannel(aListener, aContext);
}

/* readonly attribute ACString ContentType; */
NS_IMETHODIMP hyPipelineDataChannel::GetContentType(nsACString & aContentType)
{
    return mLastChannel->GetContentType(aContentType);
}

/* readonly attribute nsIURI URI; */
NS_IMETHODIMP hyPipelineDataChannel::GetURI(nsIURI * *aURI)
{
    *aURI = mURI;
    NS_IF_ADDREF(*aURI);
    return NS_OK;
}

