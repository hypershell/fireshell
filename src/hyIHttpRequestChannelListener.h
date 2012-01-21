/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpRequestChannelListener.idl
 */

#ifndef __gen_hyIHttpRequestChannelListener_h__
#define __gen_hyIHttpRequestChannelListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIHttpRequest_h__
#include "hyIHttpRequest.h"
#endif

#ifndef __gen_hyIDataChannel_h__
#include "hyIDataChannel.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpRequestChannelListener */
#define HYIHTTPREQUESTCHANNELLISTENER_IID_STR "161613ed-7750-4fe5-8e22-39c33e07ba13"

#define HYIHTTPREQUESTCHANNELLISTENER_IID \
  {0x161613ed, 0x7750, 0x4fe5, \
    { 0x8e, 0x22, 0x39, 0xc3, 0x3e, 0x07, 0xba, 0x13 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpRequestChannelListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPREQUESTCHANNELLISTENER_IID)

  /* void onHttpRequestReady (in hyIHttpRequest aRequest, in hyIDataChannel aDataChannel, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnHttpRequestReady(hyIHttpRequest *aRequest, hyIDataChannel *aDataChannel, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpRequestChannelListener, HYIHTTPREQUESTCHANNELLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPREQUESTCHANNELLISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnHttpRequestReady(hyIHttpRequest *aRequest, hyIDataChannel *aDataChannel, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPREQUESTCHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnHttpRequestReady(hyIHttpRequest *aRequest, hyIDataChannel *aDataChannel, nsISupports *aContext) { return _to OnHttpRequestReady(aRequest, aDataChannel, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPREQUESTCHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnHttpRequestReady(hyIHttpRequest *aRequest, hyIDataChannel *aDataChannel, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnHttpRequestReady(aRequest, aDataChannel, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpRequestChannelListener : public hyIHttpRequestChannelListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPREQUESTCHANNELLISTENER

  hyHttpRequestChannelListener();

private:
  ~hyHttpRequestChannelListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpRequestChannelListener, hyIHttpRequestChannelListener)

hyHttpRequestChannelListener::hyHttpRequestChannelListener()
{
  /* member initializers and constructor code */
}

hyHttpRequestChannelListener::~hyHttpRequestChannelListener()
{
  /* destructor code */
}

/* void onHttpRequestReady (in hyIHttpRequest aRequest, in hyIDataChannel aDataChannel, in nsISupports aContext); */
NS_IMETHODIMP hyHttpRequestChannelListener::OnHttpRequestReady(hyIHttpRequest *aRequest, hyIDataChannel *aDataChannel, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpRequestChannelListener_h__ */
