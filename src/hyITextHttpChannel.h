/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyITextHttpChannel.idl
 */

#ifndef __gen_hyITextHttpChannel_h__
#define __gen_hyITextHttpChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyITextHttpChannelListener_h__
#include "hyITextHttpChannelListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyITextHttpChannel */
#define HYITEXTHTTPCHANNEL_IID_STR "3d1f7577-b5d5-45a9-9901-15590a8b4723"

#define HYITEXTHTTPCHANNEL_IID \
  {0x3d1f7577, 0xb5d5, 0x45a9, \
    { 0x99, 0x01, 0x15, 0x59, 0x0a, 0x8b, 0x47, 0x23 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyITextHttpChannel : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYITEXTHTTPCHANNEL_IID)

  /* void openTextHttpChannel (in hyITextHttpChannelListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OpenTextHttpChannel(hyITextHttpChannelListener *aListener, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyITextHttpChannel, HYITEXTHTTPCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYITEXTHTTPCHANNEL \
  NS_SCRIPTABLE NS_IMETHOD OpenTextHttpChannel(hyITextHttpChannelListener *aListener, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYITEXTHTTPCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenTextHttpChannel(hyITextHttpChannelListener *aListener, nsISupports *aContext) { return _to OpenTextHttpChannel(aListener, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYITEXTHTTPCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenTextHttpChannel(hyITextHttpChannelListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenTextHttpChannel(aListener, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyTextHttpChannel : public hyITextHttpChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYITEXTHTTPCHANNEL

  hyTextHttpChannel();

private:
  ~hyTextHttpChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyTextHttpChannel, hyITextHttpChannel)

hyTextHttpChannel::hyTextHttpChannel()
{
  /* member initializers and constructor code */
}

hyTextHttpChannel::~hyTextHttpChannel()
{
  /* destructor code */
}

/* void openTextHttpChannel (in hyITextHttpChannelListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyTextHttpChannel::OpenTextHttpChannel(hyITextHttpChannelListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyITextHttpChannel_h__ */
