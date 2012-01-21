/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyITextChannelListener.idl
 */

#ifndef __gen_hyITextChannelListener_h__
#define __gen_hyITextChannelListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIUnicodeString_h__
#include "hyIUnicodeString.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyITextChannelListener */
#define HYITEXTCHANNELLISTENER_IID_STR "785a0097-00f1-4090-8e63-19f66e7cdbe2"

#define HYITEXTCHANNELLISTENER_IID \
  {0x785a0097, 0x00f1, 0x4090, \
    { 0x8e, 0x63, 0x19, 0xf6, 0x6e, 0x7c, 0xdb, 0xe2 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyITextChannelListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYITEXTCHANNELLISTENER_IID)

  /* void onTextDataReceive (in hyIUnicodeString aText, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnTextDataReceive(hyIUnicodeString *aText, nsISupports *aContext) = 0;

  /* void onMalformedText (in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnMalformedText(nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyITextChannelListener, HYITEXTCHANNELLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYITEXTCHANNELLISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnTextDataReceive(hyIUnicodeString *aText, nsISupports *aContext); \
  NS_SCRIPTABLE NS_IMETHOD OnMalformedText(nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYITEXTCHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnTextDataReceive(hyIUnicodeString *aText, nsISupports *aContext) { return _to OnTextDataReceive(aText, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD OnMalformedText(nsISupports *aContext) { return _to OnMalformedText(aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYITEXTCHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnTextDataReceive(hyIUnicodeString *aText, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnTextDataReceive(aText, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD OnMalformedText(nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnMalformedText(aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyTextChannelListener : public hyITextChannelListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYITEXTCHANNELLISTENER

  hyTextChannelListener();

private:
  ~hyTextChannelListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyTextChannelListener, hyITextChannelListener)

hyTextChannelListener::hyTextChannelListener()
{
  /* member initializers and constructor code */
}

hyTextChannelListener::~hyTextChannelListener()
{
  /* destructor code */
}

/* void onTextDataReceive (in hyIUnicodeString aText, in nsISupports aContext); */
NS_IMETHODIMP hyTextChannelListener::OnTextDataReceive(hyIUnicodeString *aText, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onMalformedText (in nsISupports aContext); */
NS_IMETHODIMP hyTextChannelListener::OnMalformedText(nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyITextChannelListener_h__ */
