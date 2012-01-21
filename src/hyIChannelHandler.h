/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIChannelHandler.idl
 */

#ifndef __gen_hyIChannelHandler_h__
#define __gen_hyIChannelHandler_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIChannelHandlerListener_h__
#include "hyIChannelHandlerListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIChannelHandler */
#define HYICHANNELHANDLER_IID_STR "c3b98313-f223-4f71-a864-543c3ddc2889"

#define HYICHANNELHANDLER_IID \
  {0xc3b98313, 0xf223, 0x4f71, \
    { 0xa8, 0x64, 0x54, 0x3c, 0x3d, 0xdc, 0x28, 0x89 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIChannelHandler : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYICHANNELHANDLER_IID)

  /* void acceptInputChannel (in hyIDataChannel aInputChannel, in hyIChannelHandlerListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD AcceptInputChannel(hyIDataChannel *aInputChannel, hyIChannelHandlerListener *aListener, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIChannelHandler, HYICHANNELHANDLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYICHANNELHANDLER \
  NS_SCRIPTABLE NS_IMETHOD AcceptInputChannel(hyIDataChannel *aInputChannel, hyIChannelHandlerListener *aListener, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYICHANNELHANDLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AcceptInputChannel(hyIDataChannel *aInputChannel, hyIChannelHandlerListener *aListener, nsISupports *aContext) { return _to AcceptInputChannel(aInputChannel, aListener, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYICHANNELHANDLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AcceptInputChannel(hyIDataChannel *aInputChannel, hyIChannelHandlerListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->AcceptInputChannel(aInputChannel, aListener, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyChannelHandler : public hyIChannelHandler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYICHANNELHANDLER

  hyChannelHandler();

private:
  ~hyChannelHandler();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyChannelHandler, hyIChannelHandler)

hyChannelHandler::hyChannelHandler()
{
  /* member initializers and constructor code */
}

hyChannelHandler::~hyChannelHandler()
{
  /* destructor code */
}

/* void acceptInputChannel (in hyIDataChannel aInputChannel, in hyIChannelHandlerListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyChannelHandler::AcceptInputChannel(hyIDataChannel *aInputChannel, hyIChannelHandlerListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIChannelHandler_h__ */
