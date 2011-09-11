/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIDataChannelListener.idl
 */

#ifndef __gen_hyIDataChannelListener_h__
#define __gen_hyIDataChannelListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIDataBuffer_h__
#include "hyIDataBuffer.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIDataChannelListener */
#define HYIDATACHANNELLISTENER_IID_STR "dc397423-3a44-4be3-97f0-e744e18dbc0e"

#define HYIDATACHANNELLISTENER_IID \
  {0xdc397423, 0x3a44, 0x4be3, \
    { 0x97, 0xf0, 0xe7, 0x44, 0xe1, 0x8d, 0xbc, 0x0e }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIDataChannelListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIDATACHANNELLISTENER_IID)

  /* void onDataReceive (in hyIDataBuffer aBuffer, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnDataReceive(hyIDataBuffer *aBuffer, nsISupports *aContext) = 0;

  /* void onDataClose (in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnDataClose(nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIDataChannelListener, HYIDATACHANNELLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIDATACHANNELLISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnDataReceive(hyIDataBuffer *aBuffer, nsISupports *aContext); \
  NS_SCRIPTABLE NS_IMETHOD OnDataClose(nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIDATACHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnDataReceive(hyIDataBuffer *aBuffer, nsISupports *aContext) { return _to OnDataReceive(aBuffer, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD OnDataClose(nsISupports *aContext) { return _to OnDataClose(aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIDATACHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnDataReceive(hyIDataBuffer *aBuffer, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnDataReceive(aBuffer, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD OnDataClose(nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnDataClose(aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyDataChannelListener : public hyIDataChannelListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIDATACHANNELLISTENER

  hyDataChannelListener();

private:
  ~hyDataChannelListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyDataChannelListener, hyIDataChannelListener)

hyDataChannelListener::hyDataChannelListener()
{
  /* member initializers and constructor code */
}

hyDataChannelListener::~hyDataChannelListener()
{
  /* destructor code */
}

/* void onDataReceive (in hyIDataBuffer aBuffer, in nsISupports aContext); */
NS_IMETHODIMP hyDataChannelListener::OnDataReceive(hyIDataBuffer *aBuffer, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onDataClose (in nsISupports aContext); */
NS_IMETHODIMP hyDataChannelListener::OnDataClose(nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIDataChannelListener_h__ */
