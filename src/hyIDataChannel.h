/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIDataChannel.idl
 */

#ifndef __gen_hyIDataChannel_h__
#define __gen_hyIDataChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIDataChannelListener_h__
#include "hyIDataChannelListener.h"
#endif

#ifndef __gen_nsIURI_h__
#include "nsIURI.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIDataChannel */
#define HYIDATACHANNEL_IID_STR "daf65c28-7bcf-44e4-898c-3b5e64fc02a9"

#define HYIDATACHANNEL_IID \
  {0xdaf65c28, 0x7bcf, 0x44e4, \
    { 0x89, 0x8c, 0x3b, 0x5e, 0x64, 0xfc, 0x02, 0xa9 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIDataChannel : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIDATACHANNEL_IID)

  /* void setIncomingChannel (in hyIDataChannel aChannel); */
  NS_SCRIPTABLE NS_IMETHOD SetIncomingChannel(hyIDataChannel *aChannel) = 0;

  /* void openChannel (in hyIDataChannelListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OpenChannel(hyIDataChannelListener *aListener, nsISupports *aContext) = 0;

  /* readonly attribute ACString ContentType; */
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsACString & aContentType) = 0;

  /* readonly attribute nsIURI URI; */
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIDataChannel, HYIDATACHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIDATACHANNEL \
  NS_SCRIPTABLE NS_IMETHOD SetIncomingChannel(hyIDataChannel *aChannel); \
  NS_SCRIPTABLE NS_IMETHOD OpenChannel(hyIDataChannelListener *aListener, nsISupports *aContext); \
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsACString & aContentType); \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIDATACHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetIncomingChannel(hyIDataChannel *aChannel) { return _to SetIncomingChannel(aChannel); } \
  NS_SCRIPTABLE NS_IMETHOD OpenChannel(hyIDataChannelListener *aListener, nsISupports *aContext) { return _to OpenChannel(aListener, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsACString & aContentType) { return _to GetContentType(aContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) { return _to GetURI(aURI); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIDATACHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetIncomingChannel(hyIDataChannel *aChannel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIncomingChannel(aChannel); } \
  NS_SCRIPTABLE NS_IMETHOD OpenChannel(hyIDataChannelListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenChannel(aListener, aContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentType(nsACString & aContentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentType(aContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetURI(nsIURI * *aURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetURI(aURI); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyDataChannel : public hyIDataChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIDATACHANNEL

  hyDataChannel();

private:
  ~hyDataChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyDataChannel, hyIDataChannel)

hyDataChannel::hyDataChannel()
{
  /* member initializers and constructor code */
}

hyDataChannel::~hyDataChannel()
{
  /* destructor code */
}

/* void setIncomingChannel (in hyIDataChannel aChannel); */
NS_IMETHODIMP hyDataChannel::SetIncomingChannel(hyIDataChannel *aChannel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void openChannel (in hyIDataChannelListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyDataChannel::OpenChannel(hyIDataChannelListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString ContentType; */
NS_IMETHODIMP hyDataChannel::GetContentType(nsACString & aContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI URI; */
NS_IMETHODIMP hyDataChannel::GetURI(nsIURI * *aURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIDataChannel_h__ */
