/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIXmlChannelListener.idl
 */

#ifndef __gen_hyIXmlChannelListener_h__
#define __gen_hyIXmlChannelListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIDOMDocument_h__
#include "nsIDOMDocument.h"
#endif

#ifndef __gen_hyIDataChannelListener_h__
#include "hyIDataChannelListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIXmlChannelListener */
#define HYIXMLCHANNELLISTENER_IID_STR "7229aaa0-9777-4b86-bcd9-bcf6a0b5e6e2"

#define HYIXMLCHANNELLISTENER_IID \
  {0x7229aaa0, 0x9777, 0x4b86, \
    { 0xbc, 0xd9, 0xbc, 0xf6, 0xa0, 0xb5, 0xe6, 0xe2 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIXmlChannelListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIXMLCHANNELLISTENER_IID)

  /* void onXmlDataReceive (in nsIDOMDocument aDocument, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnXmlDataReceive(nsIDOMDocument *aDocument, nsISupports *aContext) = 0;

  /* hyIDataChannelListener onMalformedXML (in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnMalformedXML(nsISupports *aContext, hyIDataChannelListener * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIXmlChannelListener, HYIXMLCHANNELLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIXMLCHANNELLISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnXmlDataReceive(nsIDOMDocument *aDocument, nsISupports *aContext); \
  NS_SCRIPTABLE NS_IMETHOD OnMalformedXML(nsISupports *aContext, hyIDataChannelListener * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIXMLCHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnXmlDataReceive(nsIDOMDocument *aDocument, nsISupports *aContext) { return _to OnXmlDataReceive(aDocument, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD OnMalformedXML(nsISupports *aContext, hyIDataChannelListener * *_retval NS_OUTPARAM) { return _to OnMalformedXML(aContext, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIXMLCHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnXmlDataReceive(nsIDOMDocument *aDocument, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnXmlDataReceive(aDocument, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD OnMalformedXML(nsISupports *aContext, hyIDataChannelListener * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnMalformedXML(aContext, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyXmlChannelListener : public hyIXmlChannelListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIXMLCHANNELLISTENER

  hyXmlChannelListener();

private:
  ~hyXmlChannelListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyXmlChannelListener, hyIXmlChannelListener)

hyXmlChannelListener::hyXmlChannelListener()
{
  /* member initializers and constructor code */
}

hyXmlChannelListener::~hyXmlChannelListener()
{
  /* destructor code */
}

/* void onXmlDataReceive (in nsIDOMDocument aDocument, in nsISupports aContext); */
NS_IMETHODIMP hyXmlChannelListener::OnXmlDataReceive(nsIDOMDocument *aDocument, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* hyIDataChannelListener onMalformedXML (in nsISupports aContext); */
NS_IMETHODIMP hyXmlChannelListener::OnMalformedXML(nsISupports *aContext, hyIDataChannelListener * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIXmlChannelListener_h__ */
