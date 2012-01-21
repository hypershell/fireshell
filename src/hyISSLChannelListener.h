/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyISSLChannelListener.idl
 */

#ifndef __gen_hyISSLChannelListener_h__
#define __gen_hyISSLChannelListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIDataChannel_h__
#include "hyIDataChannel.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyISSLChannelListener */
#define HYISSLCHANNELLISTENER_IID_STR "68c805ae-188f-4e2d-aaae-08381248cada"

#define HYISSLCHANNELLISTENER_IID \
  {0x68c805ae, 0x188f, 0x4e2d, \
    { 0xaa, 0xae, 0x08, 0x38, 0x12, 0x48, 0xca, 0xda }}

class NS_NO_VTABLE NS_SCRIPTABLE hyISSLChannelListener {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYISSLCHANNELLISTENER_IID)

  /* void onSSLDataReady (in hyIDataChannel aDecryptedChannel, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnSSLDataReady(hyIDataChannel *aDecryptedChannel, nsISupports *aContext) = 0;

  /* void onSSLError (in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnSSLError(nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyISSLChannelListener, HYISSLCHANNELLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYISSLCHANNELLISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnSSLDataReady(hyIDataChannel *aDecryptedChannel, nsISupports *aContext); \
  NS_SCRIPTABLE NS_IMETHOD OnSSLError(nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYISSLCHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnSSLDataReady(hyIDataChannel *aDecryptedChannel, nsISupports *aContext) { return _to OnSSLDataReady(aDecryptedChannel, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD OnSSLError(nsISupports *aContext) { return _to OnSSLError(aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYISSLCHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnSSLDataReady(hyIDataChannel *aDecryptedChannel, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnSSLDataReady(aDecryptedChannel, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD OnSSLError(nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnSSLError(aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hySSLChannelListener : public hyISSLChannelListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYISSLCHANNELLISTENER

  hySSLChannelListener();

private:
  ~hySSLChannelListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hySSLChannelListener, hyISSLChannelListener)

hySSLChannelListener::hySSLChannelListener()
{
  /* member initializers and constructor code */
}

hySSLChannelListener::~hySSLChannelListener()
{
  /* destructor code */
}

/* void onSSLDataReady (in hyIDataChannel aDecryptedChannel, in nsISupports aContext); */
NS_IMETHODIMP hySSLChannelListener::OnSSLDataReady(hyIDataChannel *aDecryptedChannel, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onSSLError (in nsISupports aContext); */
NS_IMETHODIMP hySSLChannelListener::OnSSLError(nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyISSLChannelListener_h__ */
