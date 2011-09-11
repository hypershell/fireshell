/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIChannelToStreamConverter.idl
 */

#ifndef __gen_hyIChannelToStreamConverter_h__
#define __gen_hyIChannelToStreamConverter_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIDataChannel_h__
#include "hyIDataChannel.h"
#endif

#ifndef __gen_hyIChannelToStreamConverterListener_h__
#include "hyIChannelToStreamConverterListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIChannelToStreamConverter */
#define HYICHANNELTOSTREAMCONVERTER_IID_STR "49f93688-d321-4825-ba94-f94c3739d2c4"

#define HYICHANNELTOSTREAMCONVERTER_IID \
  {0x49f93688, 0xd321, 0x4825, \
    { 0xba, 0x94, 0xf9, 0x4c, 0x37, 0x39, 0xd2, 0xc4 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIChannelToStreamConverter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYICHANNELTOSTREAMCONVERTER_IID)

  /* void convertChannel (in hyIDataChannel aChannel, in hyIChannelToStreamConverterListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD ConvertChannel(hyIDataChannel *aChannel, hyIChannelToStreamConverterListener *aListener, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIChannelToStreamConverter, HYICHANNELTOSTREAMCONVERTER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYICHANNELTOSTREAMCONVERTER \
  NS_SCRIPTABLE NS_IMETHOD ConvertChannel(hyIDataChannel *aChannel, hyIChannelToStreamConverterListener *aListener, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYICHANNELTOSTREAMCONVERTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD ConvertChannel(hyIDataChannel *aChannel, hyIChannelToStreamConverterListener *aListener, nsISupports *aContext) { return _to ConvertChannel(aChannel, aListener, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYICHANNELTOSTREAMCONVERTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD ConvertChannel(hyIDataChannel *aChannel, hyIChannelToStreamConverterListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConvertChannel(aChannel, aListener, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyChannelToStreamConverter : public hyIChannelToStreamConverter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYICHANNELTOSTREAMCONVERTER

  hyChannelToStreamConverter();

private:
  ~hyChannelToStreamConverter();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyChannelToStreamConverter, hyIChannelToStreamConverter)

hyChannelToStreamConverter::hyChannelToStreamConverter()
{
  /* member initializers and constructor code */
}

hyChannelToStreamConverter::~hyChannelToStreamConverter()
{
  /* destructor code */
}

/* void convertChannel (in hyIDataChannel aChannel, in hyIChannelToStreamConverterListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyChannelToStreamConverter::ConvertChannel(hyIDataChannel *aChannel, hyIChannelToStreamConverterListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIChannelToStreamConverter_h__ */
