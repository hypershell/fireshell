/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIXmlHttpChannel.idl
 */

#ifndef __gen_hyIXmlHttpChannel_h__
#define __gen_hyIXmlHttpChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIXmlHttpChannelListener_h__
#include "hyIXmlHttpChannelListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIXmlHttpChannel */
#define HYIXMLHTTPCHANNEL_IID_STR "c1678170-7139-4695-b742-75bf4965f19e"

#define HYIXMLHTTPCHANNEL_IID \
  {0xc1678170, 0x7139, 0x4695, \
    { 0xb7, 0x42, 0x75, 0xbf, 0x49, 0x65, 0xf1, 0x9e }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIXmlHttpChannel : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIXMLHTTPCHANNEL_IID)

  /* void openXmlHttpChannel (in hyIXmlHttpChannelListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OpenXmlHttpChannel(hyIXmlHttpChannelListener *aListener, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIXmlHttpChannel, HYIXMLHTTPCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIXMLHTTPCHANNEL \
  NS_SCRIPTABLE NS_IMETHOD OpenXmlHttpChannel(hyIXmlHttpChannelListener *aListener, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIXMLHTTPCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenXmlHttpChannel(hyIXmlHttpChannelListener *aListener, nsISupports *aContext) { return _to OpenXmlHttpChannel(aListener, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIXMLHTTPCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenXmlHttpChannel(hyIXmlHttpChannelListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenXmlHttpChannel(aListener, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyXmlHttpChannel : public hyIXmlHttpChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIXMLHTTPCHANNEL

  hyXmlHttpChannel();

private:
  ~hyXmlHttpChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyXmlHttpChannel, hyIXmlHttpChannel)

hyXmlHttpChannel::hyXmlHttpChannel()
{
  /* member initializers and constructor code */
}

hyXmlHttpChannel::~hyXmlHttpChannel()
{
  /* destructor code */
}

/* void openXmlHttpChannel (in hyIXmlHttpChannelListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyXmlHttpChannel::OpenXmlHttpChannel(hyIXmlHttpChannelListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIXmlHttpChannel_h__ */
