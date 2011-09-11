/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyITextHttpChannelListener.idl
 */

#ifndef __gen_hyITextHttpChannelListener_h__
#define __gen_hyITextHttpChannelListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIDOMDocument_h__
#include "nsIDOMDocument.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyITextHttpChannelListener */
#define HYITEXTHTTPCHANNELLISTENER_IID_STR "785a0097-00f1-4090-8e63-19f66e7cdbe2"

#define HYITEXTHTTPCHANNELLISTENER_IID \
  {0x785a0097, 0x00f1, 0x4090, \
    { 0x8e, 0x63, 0x19, 0xf6, 0x6e, 0x7c, 0xdb, 0xe2 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyITextHttpChannelListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYITEXTHTTPCHANNELLISTENER_IID)

  /* void onTextDataReceive (in ACString aText, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnTextDataReceive(const nsACString & aText, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyITextHttpChannelListener, HYITEXTHTTPCHANNELLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYITEXTHTTPCHANNELLISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnTextDataReceive(const nsACString & aText, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYITEXTHTTPCHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnTextDataReceive(const nsACString & aText, nsISupports *aContext) { return _to OnTextDataReceive(aText, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYITEXTHTTPCHANNELLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnTextDataReceive(const nsACString & aText, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnTextDataReceive(aText, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyTextHttpChannelListener : public hyITextHttpChannelListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYITEXTHTTPCHANNELLISTENER

  hyTextHttpChannelListener();

private:
  ~hyTextHttpChannelListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyTextHttpChannelListener, hyITextHttpChannelListener)

hyTextHttpChannelListener::hyTextHttpChannelListener()
{
  /* member initializers and constructor code */
}

hyTextHttpChannelListener::~hyTextHttpChannelListener()
{
  /* destructor code */
}

/* void onTextDataReceive (in ACString aText, in nsISupports aContext); */
NS_IMETHODIMP hyTextHttpChannelListener::OnTextDataReceive(const nsACString & aText, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyITextHttpChannelListener_h__ */
