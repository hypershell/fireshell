/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpResponseChannelListener.idl
 */

#ifndef __gen_hyIHttpResponseChannelListener_h__
#define __gen_hyIHttpResponseChannelListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIDataChannel_h__
#include "hyIDataChannel.h"
#endif

#ifndef __gen_hyIHttpResponse_h__
#include "hyIHttpResponse.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpResponseChannelListener */
#define HYIHTTPRESPONSECHANNELLISTENER_IID_STR "7a269047-85ac-4e27-a7d1-5a8996d1d7d0"

#define HYIHTTPRESPONSECHANNELLISTENER_IID \
  {0x7a269047, 0x85ac, 0x4e27, \
    { 0xa7, 0xd1, 0x5a, 0x89, 0x96, 0xd1, 0xd7, 0xd0 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpResponseChannelListener {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPRESPONSECHANNELLISTENER_IID)

  /* void onHttpResponseReady (in hyIHttpResponse aResponse, in hyIHttpHeaderFields aHeaders, in hyIDataChannel aDataChannel, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnHttpResponseReady(hyIHttpResponse *aResponse, hyIHttpHeaderFields *aHeaders, hyIDataChannel *aDataChannel, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpResponseChannelListener, HYIHTTPRESPONSECHANNELLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPRESPONSECHANNELLISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnHttpResponseReady(hyIHttpResponse *aResponse, hyIHttpHeaderFields *aHeaders, hyIDataChannel *aDataChannel, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPRESPONSECHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnHttpResponseReady(hyIHttpResponse *aResponse, hyIHttpHeaderFields *aHeaders, hyIDataChannel *aDataChannel, nsISupports *aContext) { return _to OnHttpResponseReady(aResponse, aHeaders, aDataChannel, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPRESPONSECHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnHttpResponseReady(hyIHttpResponse *aResponse, hyIHttpHeaderFields *aHeaders, hyIDataChannel *aDataChannel, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnHttpResponseReady(aResponse, aHeaders, aDataChannel, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpResponseChannelListener : public hyIHttpResponseChannelListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPRESPONSECHANNELLISTENER

  hyHttpResponseChannelListener();

private:
  ~hyHttpResponseChannelListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpResponseChannelListener, hyIHttpResponseChannelListener)

hyHttpResponseChannelListener::hyHttpResponseChannelListener()
{
  /* member initializers and constructor code */
}

hyHttpResponseChannelListener::~hyHttpResponseChannelListener()
{
  /* destructor code */
}

/* void onHttpResponseReady (in hyIHttpResponse aResponse, in hyIHttpHeaderFields aHeaders, in hyIDataChannel aDataChannel, in nsISupports aContext); */
NS_IMETHODIMP hyHttpResponseChannelListener::OnHttpResponseReady(hyIHttpResponse *aResponse, hyIHttpHeaderFields *aHeaders, hyIDataChannel *aDataChannel, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpResponseChannelListener_h__ */
