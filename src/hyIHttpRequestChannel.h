/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpRequestChannel.idl
 */

#ifndef __gen_hyIHttpRequestChannel_h__
#define __gen_hyIHttpRequestChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIHttpRequestChannelListener_h__
#include "hyIHttpRequestChannelListener.h"
#endif

#ifndef __gen_hyIDataChannel_h__
#include "hyIDataChannel.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpRequestChannel */
#define HYIHTTPREQUESTCHANNEL_IID_STR "27d16aa7-350f-45ef-a7a9-82c5c60de19f"

#define HYIHTTPREQUESTCHANNEL_IID \
  {0x27d16aa7, 0x350f, 0x45ef, \
    { 0xa7, 0xa9, 0x82, 0xc5, 0xc6, 0x0d, 0xe1, 0x9f }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpRequestChannel : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPREQUESTCHANNEL_IID)

  /* void openHttpRequestChannel (in hyIHttpRequestChannelListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OpenHttpRequestChannel(hyIHttpRequestChannelListener *aListener, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpRequestChannel, HYIHTTPREQUESTCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPREQUESTCHANNEL \
  NS_SCRIPTABLE NS_IMETHOD OpenHttpRequestChannel(hyIHttpRequestChannelListener *aListener, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPREQUESTCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenHttpRequestChannel(hyIHttpRequestChannelListener *aListener, nsISupports *aContext) { return _to OpenHttpRequestChannel(aListener, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPREQUESTCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenHttpRequestChannel(hyIHttpRequestChannelListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenHttpRequestChannel(aListener, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpRequestChannel : public hyIHttpRequestChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPREQUESTCHANNEL

  hyHttpRequestChannel();

private:
  ~hyHttpRequestChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpRequestChannel, hyIHttpRequestChannel)

hyHttpRequestChannel::hyHttpRequestChannel()
{
  /* member initializers and constructor code */
}

hyHttpRequestChannel::~hyHttpRequestChannel()
{
  /* destructor code */
}

/* void openHttpRequestChannel (in hyIHttpRequestChannelListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyHttpRequestChannel::OpenHttpRequestChannel(hyIHttpRequestChannelListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    hyIRawHttpRequestChannel */
#define HYIRAWHTTPREQUESTCHANNEL_IID_STR "6cc0ede6-6b05-46cf-b406-d5b96a9d2670"

#define HYIRAWHTTPREQUESTCHANNEL_IID \
  {0x6cc0ede6, 0x6b05, 0x46cf, \
    { 0xb4, 0x06, 0xd5, 0xb9, 0x6a, 0x9d, 0x26, 0x70 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIRawHttpRequestChannel : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIRAWHTTPREQUESTCHANNEL_IID)

  /* void openHttpRequestChannel (in hyIHttpRequestChannelListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OpenHttpRequestChannel(hyIHttpRequestChannelListener *aListener, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIRawHttpRequestChannel, HYIRAWHTTPREQUESTCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIRAWHTTPREQUESTCHANNEL \
  NS_SCRIPTABLE NS_IMETHOD OpenHttpRequestChannel(hyIHttpRequestChannelListener *aListener, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIRAWHTTPREQUESTCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenHttpRequestChannel(hyIHttpRequestChannelListener *aListener, nsISupports *aContext) { return _to OpenHttpRequestChannel(aListener, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIRAWHTTPREQUESTCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenHttpRequestChannel(hyIHttpRequestChannelListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenHttpRequestChannel(aListener, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyRawHttpRequestChannel : public hyIRawHttpRequestChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIRAWHTTPREQUESTCHANNEL

  hyRawHttpRequestChannel();

private:
  ~hyRawHttpRequestChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyRawHttpRequestChannel, hyIRawHttpRequestChannel)

hyRawHttpRequestChannel::hyRawHttpRequestChannel()
{
  /* member initializers and constructor code */
}

hyRawHttpRequestChannel::~hyRawHttpRequestChannel()
{
  /* destructor code */
}

/* void openHttpRequestChannel (in hyIHttpRequestChannelListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyRawHttpRequestChannel::OpenHttpRequestChannel(hyIHttpRequestChannelListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpRequestChannel_h__ */
