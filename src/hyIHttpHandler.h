/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpHandler.idl
 */

#ifndef __gen_hyIHttpHandler_h__
#define __gen_hyIHttpHandler_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIHttpRequestChannel_h__
#include "hyIHttpRequestChannel.h"
#endif

#ifndef __gen_hyIHttpHandlerListener_h__
#include "hyIHttpHandlerListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpHandler */
#define HYIHTTPHANDLER_IID_STR "09f57586-308b-4dbd-ae82-5dcf7ba5e3fa"

#define HYIHTTPHANDLER_IID \
  {0x09f57586, 0x308b, 0x4dbd, \
    { 0xae, 0x82, 0x5d, 0xcf, 0x7b, 0xa5, 0xe3, 0xfa }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpHandler : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPHANDLER_IID)

  /* void acceptHttpRequestChannel (in hyIHttpRequestChannel aRequestChannel, in hyIHttpHandlerListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD AcceptHttpRequestChannel(hyIHttpRequestChannel *aRequestChannel, hyIHttpHandlerListener *aListener, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpHandler, HYIHTTPHANDLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPHANDLER \
  NS_SCRIPTABLE NS_IMETHOD AcceptHttpRequestChannel(hyIHttpRequestChannel *aRequestChannel, hyIHttpHandlerListener *aListener, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPHANDLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AcceptHttpRequestChannel(hyIHttpRequestChannel *aRequestChannel, hyIHttpHandlerListener *aListener, nsISupports *aContext) { return _to AcceptHttpRequestChannel(aRequestChannel, aListener, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPHANDLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AcceptHttpRequestChannel(hyIHttpRequestChannel *aRequestChannel, hyIHttpHandlerListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->AcceptHttpRequestChannel(aRequestChannel, aListener, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpHandler : public hyIHttpHandler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPHANDLER

  hyHttpHandler();

private:
  ~hyHttpHandler();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpHandler, hyIHttpHandler)

hyHttpHandler::hyHttpHandler()
{
  /* member initializers and constructor code */
}

hyHttpHandler::~hyHttpHandler()
{
  /* destructor code */
}

/* void acceptHttpRequestChannel (in hyIHttpRequestChannel aRequestChannel, in hyIHttpHandlerListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyHttpHandler::AcceptHttpRequestChannel(hyIHttpRequestChannel *aRequestChannel, hyIHttpHandlerListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpHandler_h__ */
