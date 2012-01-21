/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyITextChannel.idl
 */

#ifndef __gen_hyITextChannel_h__
#define __gen_hyITextChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyITextChannelListener_h__
#include "hyITextChannelListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyITextChannel */
#define HYITEXTCHANNEL_IID_STR "3d1f7577-b5d5-45a9-9901-15590a8b4723"

#define HYITEXTCHANNEL_IID \
  {0x3d1f7577, 0xb5d5, 0x45a9, \
    { 0x99, 0x01, 0x15, 0x59, 0x0a, 0x8b, 0x47, 0x23 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyITextChannel : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYITEXTCHANNEL_IID)

  /* void openTextChannel (in hyITextChannelListener aListener, in nsISupports aContext); */
  NS_SCRIPTABLE NS_IMETHOD OpenTextChannel(hyITextChannelListener *aListener, nsISupports *aContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyITextChannel, HYITEXTCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYITEXTCHANNEL \
  NS_SCRIPTABLE NS_IMETHOD OpenTextChannel(hyITextChannelListener *aListener, nsISupports *aContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYITEXTCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenTextChannel(hyITextChannelListener *aListener, nsISupports *aContext) { return _to OpenTextChannel(aListener, aContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYITEXTCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenTextChannel(hyITextChannelListener *aListener, nsISupports *aContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenTextChannel(aListener, aContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyTextChannel : public hyITextChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYITEXTCHANNEL

  hyTextChannel();

private:
  ~hyTextChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyTextChannel, hyITextChannel)

hyTextChannel::hyTextChannel()
{
  /* member initializers and constructor code */
}

hyTextChannel::~hyTextChannel()
{
  /* destructor code */
}

/* void openTextChannel (in hyITextChannelListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyTextChannel::OpenTextChannel(hyITextChannelListener *aListener, nsISupports *aContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyITextChannel_h__ */
