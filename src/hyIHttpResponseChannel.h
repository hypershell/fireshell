/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpResponseChannel.idl
 */

#ifndef __gen_hyIHttpResponseChannel_h__
#define __gen_hyIHttpResponseChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIHttpResponseChannelListener_h__
#include "hyIHttpResponseChannelListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpResponseChannel */
#define HYIHTTPRESPONSECHANNEL_IID_STR "0036985f-3f47-495f-ab6d-facdaa12e1cb"

#define HYIHTTPRESPONSECHANNEL_IID \
  {0x0036985f, 0x3f47, 0x495f, \
    { 0xab, 0x6d, 0xfa, 0xcd, 0xaa, 0x12, 0xe1, 0xcb }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpResponseChannel {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPRESPONSECHANNEL_IID)

  /* void openHttpResponseChannel (in hyIHttpResponseChannelListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OpenHttpResponseChannel(hyIHttpResponseChannelListener *aListener, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpResponseChannel, HYIHTTPRESPONSECHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPRESPONSECHANNEL \
  NS_SCRIPTABLE NS_IMETHOD OpenHttpResponseChannel(hyIHttpResponseChannelListener *aListener, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPRESPONSECHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenHttpResponseChannel(hyIHttpResponseChannelListener *aListener, nsISupports *aContext) { return _to OpenHttpResponseChannel(aListener, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPRESPONSECHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenHttpResponseChannel(hyIHttpResponseChannelListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenHttpResponseChannel(aListener, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpResponseChannel : public hyIHttpResponseChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPRESPONSECHANNEL

  hyHttpResponseChannel();

private:
  ~hyHttpResponseChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpResponseChannel, hyIHttpResponseChannel)

hyHttpResponseChannel::hyHttpResponseChannel()
{
  /* member initializers and constructor code */
}

hyHttpResponseChannel::~hyHttpResponseChannel()
{
  /* destructor code */
}

/* void openHttpResponseChannel (in hyIHttpResponseChannelListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyHttpResponseChannel::OpenHttpResponseChannel(hyIHttpResponseChannelListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    hyIRawHttpResponseChannel */
#define HYIRAWHTTPRESPONSECHANNEL_IID_STR "3b8169ea-203f-4886-9939-6f9382ec9942"

#define HYIRAWHTTPRESPONSECHANNEL_IID \
  {0x3b8169ea, 0x203f, 0x4886, \
    { 0x99, 0x39, 0x6f, 0x93, 0x82, 0xec, 0x99, 0x42 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIRawHttpResponseChannel {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIRAWHTTPRESPONSECHANNEL_IID)

  /* void openHttpResponseChannel (in hyIHttpResponseChannelListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OpenHttpResponseChannel(hyIHttpResponseChannelListener *aListener, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIRawHttpResponseChannel, HYIRAWHTTPRESPONSECHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIRAWHTTPRESPONSECHANNEL \
  NS_SCRIPTABLE NS_IMETHOD OpenHttpResponseChannel(hyIHttpResponseChannelListener *aListener, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIRAWHTTPRESPONSECHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenHttpResponseChannel(hyIHttpResponseChannelListener *aListener, nsISupports *aContext) { return _to OpenHttpResponseChannel(aListener, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIRAWHTTPRESPONSECHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenHttpResponseChannel(hyIHttpResponseChannelListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenHttpResponseChannel(aListener, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyRawHttpResponseChannel : public hyIRawHttpResponseChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIRAWHTTPRESPONSECHANNEL

  hyRawHttpResponseChannel();

private:
  ~hyRawHttpResponseChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyRawHttpResponseChannel, hyIRawHttpResponseChannel)

hyRawHttpResponseChannel::hyRawHttpResponseChannel()
{
  /* member initializers and constructor code */
}

hyRawHttpResponseChannel::~hyRawHttpResponseChannel()
{
  /* destructor code */
}

/* void openHttpResponseChannel (in hyIHttpResponseChannelListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyRawHttpResponseChannel::OpenHttpResponseChannel(hyIHttpResponseChannelListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpResponseChannel_h__ */
