/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyISSLChannel.idl
 */

#ifndef __gen_hyISSLChannel_h__
#define __gen_hyISSLChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIDataChannel_h__
#include "hyIDataChannel.h"
#endif

#ifndef __gen_hyISSLChannelListener_h__
#include "hyISSLChannelListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyISSLChannel */
#define HYISSLCHANNEL_IID_STR "a5a205eb-98ad-48f5-bc48-58afb0f11f50"

#define HYISSLCHANNEL_IID \
  {0xa5a205eb, 0x98ad, 0x48f5, \
    { 0xbc, 0x48, 0x58, 0xaf, 0xb0, 0xf1, 0x1f, 0x50 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyISSLChannel {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYISSLCHANNEL_IID)

  /* void openSSLChannel (in hyISSLChannelListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OpenSSLChannel(hyISSLChannelListener *aListener, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyISSLChannel, HYISSLCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYISSLCHANNEL \
  NS_SCRIPTABLE NS_IMETHOD OpenSSLChannel(hyISSLChannelListener *aListener, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYISSLCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenSSLChannel(hyISSLChannelListener *aListener, nsISupports *aContext) { return _to OpenSSLChannel(aListener, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYISSLCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenSSLChannel(hyISSLChannelListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenSSLChannel(aListener, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hySSLChannel : public hyISSLChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYISSLCHANNEL

  hySSLChannel();

private:
  ~hySSLChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hySSLChannel, hyISSLChannel)

hySSLChannel::hySSLChannel()
{
  /* member initializers and constructor code */
}

hySSLChannel::~hySSLChannel()
{
  /* destructor code */
}

/* void openSSLChannel (in hyISSLChannelListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hySSLChannel::OpenSSLChannel(hyISSLChannelListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyISSLChannel_h__ */
