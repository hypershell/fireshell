/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpHandlerListener.idl
 */

#ifndef __gen_hyIHttpHandlerListener_h__
#define __gen_hyIHttpHandlerListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIHttpResponseChannel_h__
#include "hyIHttpResponseChannel.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpHandlerListener */
#define HYIHTTPHANDLERLISTENER_IID_STR "99aec805-d150-46b4-ac8a-d07435411d76"

#define HYIHTTPHANDLERLISTENER_IID \
  {0x99aec805, 0xd150, 0x46b4, \
    { 0xac, 0x8a, 0xd0, 0x74, 0x35, 0x41, 0x1d, 0x76 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpHandlerListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPHANDLERLISTENER_IID)

  /* void onHttpResponseChannelReady (in hyIHttpResponseChannel aResponseChannel, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnHttpResponseChannelReady(hyIHttpResponseChannel *aResponseChannel, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpHandlerListener, HYIHTTPHANDLERLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPHANDLERLISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnHttpResponseChannelReady(hyIHttpResponseChannel *aResponseChannel, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPHANDLERLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnHttpResponseChannelReady(hyIHttpResponseChannel *aResponseChannel, nsISupports *aContext) { return _to OnHttpResponseChannelReady(aResponseChannel, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPHANDLERLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnHttpResponseChannelReady(hyIHttpResponseChannel *aResponseChannel, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnHttpResponseChannelReady(aResponseChannel, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpHandlerListener : public hyIHttpHandlerListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPHANDLERLISTENER

  hyHttpHandlerListener();

private:
  ~hyHttpHandlerListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpHandlerListener, hyIHttpHandlerListener)

hyHttpHandlerListener::hyHttpHandlerListener()
{
  /* member initializers and constructor code */
}

hyHttpHandlerListener::~hyHttpHandlerListener()
{
  /* destructor code */
}

/* void onHttpResponseChannelReady (in hyIHttpResponseChannel aResponseChannel, in nsISupports aContext); */
NS_IMETHODIMP hyHttpHandlerListener::OnHttpResponseChannelReady(hyIHttpResponseChannel *aResponseChannel, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpHandlerListener_h__ */
