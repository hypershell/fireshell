
#include "hySimpleHttpRequestChannel.h"

NS_IMPL_ISUPPORTS1(hyHttpRequestChannel, hyIHttpRequestChannel)

hySimpleHttpRequestChannel::hySimpleHttpRequestChannel(
        hyIHttpRequest *aRequest, hyIDataChannel *aDataChannel)
  : mRequest(aRequest)
  , mDataChannel(aDataChannel)
{
  /* member initializers and constructor code */
}

hySimpleHttpRequestChannel::~hyHttpRequestChannel()
{
  /* destructor code */
}

/* void openHttpRequestChannel (in hyIHttpRequestChannelListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hySimpleHttpRequestChannel::OpenHttpRequestChannel(
        hyIHttpRequestChannelListener *aListener, 
        nsISupports *aContext)
{
    /*
     * Hold a reference to the listener. It is possible that the caller
     * of this method passes a newly created listener object, expecting
     * the channel to be the sole owner of the listener and delete it
     * later. This will make sure that the listener would be deleted in
     * such cases.
     */
    nsCOMPtr<hyIhttpRequestChannelListener> listener = aListener;
    nsCOMPtr<nsISupports> context = aContext;

    /*
     * Hold a reference to self to prevent the listener to
     * delete this channel, as it is usual for the listener
     * being the sole owner of this channel.
     */
    nsCOMPtr<hyIHttpRequestChannel> retain = this;

    nsresult rv = aListener->OnHttpRequestReady(
            mRequest, mDataChannel, aContext);

    mRequest.forget();
    mDataChannel.forget();

    return rv;
}


