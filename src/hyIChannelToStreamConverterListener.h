/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIChannelToStreamConverterListener.idl
 */

#ifndef __gen_hyIChannelToStreamConverterListener_h__
#define __gen_hyIChannelToStreamConverterListener_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIInputStream_h__
#include "nsIInputStream.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIChannelToStreamConverterListener */
#define HYICHANNELTOSTREAMCONVERTERLISTENER_IID_STR "745170f0-d000-430a-a4ff-93114f8ee6da"

#define HYICHANNELTOSTREAMCONVERTERLISTENER_IID \
  {0x745170f0, 0xd000, 0x430a, \
    { 0xa4, 0xff, 0x93, 0x11, 0x4f, 0x8e, 0xe6, 0xda }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIChannelToStreamConverterListener : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYICHANNELTOSTREAMCONVERTERLISTENER_IID)

  /* void onChannelConversionComplete (in nsIInputStream aStream, in unsigned long long aSize, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OnChannelConversionComplete(nsIInputStream *aStream, PRUint64 aSize, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIChannelToStreamConverterListener, HYICHANNELTOSTREAMCONVERTERLISTENER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYICHANNELTOSTREAMCONVERTERLISTENER \
  NS_SCRIPTABLE NS_IMETHOD OnChannelConversionComplete(nsIInputStream *aStream, PRUint64 aSize, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYICHANNELTOSTREAMCONVERTERLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnChannelConversionComplete(nsIInputStream *aStream, PRUint64 aSize, nsISupports *aContext) { return _to OnChannelConversionComplete(aStream, aSize, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYICHANNELTOSTREAMCONVERTERLISTENER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnChannelConversionComplete(nsIInputStream *aStream, PRUint64 aSize, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnChannelConversionComplete(aStream, aSize, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyChannelToStreamConverterListener : public hyIChannelToStreamConverterListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYICHANNELTOSTREAMCONVERTERLISTENER

  hyChannelToStreamConverterListener();

private:
  ~hyChannelToStreamConverterListener();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyChannelToStreamConverterListener, hyIChannelToStreamConverterListener)

hyChannelToStreamConverterListener::hyChannelToStreamConverterListener()
{
  /* member initializers and constructor code */
}

hyChannelToStreamConverterListener::~hyChannelToStreamConverterListener()
{
  /* destructor code */
}

/* void onChannelConversionComplete (in nsIInputStream aStream, in unsigned long long aSize, in nsISupports aContext); */
NS_IMETHODIMP hyChannelToStreamConverterListener::OnChannelConversionComplete(nsIInputStream *aStream, PRUint64 aSize, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIChannelToStreamConverterListener_h__ */
