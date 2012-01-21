/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIChannelHandlerListener.idl
 */

#ifndef __gen_hyIChannelHandlerListener_h__
#define __gen_hyIChannelHandlerListener_h__


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

/* starting interface:    hyIChannelHandlerListener */
#define HYICHANNELHANDLERLISTENER_IID_STR "c14a3c5a-7036-4298-8000-191e0cdf750e"

#define HYICHANNELHANDLERLISTENER_IID \
  {0xc14a3c5a, 0x7036, 0x4298, \
    { 0x80, 0x00, 0x19, 0x1e, 0x0c, 0xdf, 0x75, 0x0e }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIChannelHandlerListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYICHANNELHANDLERLISTENER_IID)

  /* void onOutputDataChannelReady (in hyIDataChannel aOutputChannel, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnOutputDataChannelReady(hyIDataChannel *aOutputChannel, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIChannelHandlerListener, HYICHANNELHANDLERLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYICHANNELHANDLERLISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnOutputDataChannelReady(hyIDataChannel *aOutputChannel, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYICHANNELHANDLERLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnOutputDataChannelReady(hyIDataChannel *aOutputChannel, nsISupports *aContext) { return _to OnOutputDataChannelReady(aOutputChannel, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYICHANNELHANDLERLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnOutputDataChannelReady(hyIDataChannel *aOutputChannel, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnOutputDataChannelReady(aOutputChannel, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyChannelHandlerListener : public hyIChannelHandlerListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYICHANNELHANDLERLISTENER

  hyChannelHandlerListener();

private:
  ~hyChannelHandlerListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyChannelHandlerListener, hyIChannelHandlerListener)

hyChannelHandlerListener::hyChannelHandlerListener()
{
  /* member initializers and constructor code */
}

hyChannelHandlerListener::~hyChannelHandlerListener()
{
  /* destructor code */
}

/* void onOutputDataChannelReady (in hyIDataChannel aOutputChannel, in nsISupports aContext); */
NS_IMETHODIMP hyChannelHandlerListener::OnOutputDataChannelReady(hyIDataChannel *aOutputChannel, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIChannelHandlerListener_h__ */
