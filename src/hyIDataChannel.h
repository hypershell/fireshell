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

  /* void openDataChannel (in hyIDataChannelListener aListener, in nsISupports aContext, in unsigned long aOffset); */
  NS_SCRIPTABLE NS_IMETHOD OpenDataChannel(hyIDataChannelListener *aListener, nsISupports *aContext, PRUint32 aOffset) = 0;

  /* void peek (in hyIDataChannelListener aListener, in nsISupports aContext, in unsigned long aOffset); */
  NS_SCRIPTABLE NS_IMETHOD Peek(hyIDataChannelListener *aListener, nsISupports *aContext, PRUint32 aOffset) = 0;

  /* void stopPeek (); */
  NS_SCRIPTABLE NS_IMETHOD StopPeek(void) = 0;

  /* void closeDataChannel (); */
  NS_SCRIPTABLE NS_IMETHOD CloseDataChannel(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIDataChannel, HYIDATACHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIDATACHANNEL \
  NS_SCRIPTABLE NS_IMETHOD OpenDataChannel(hyIDataChannelListener *aListener, nsISupports *aContext, PRUint32 aOffset); \
  NS_SCRIPTABLE NS_IMETHOD Peek(hyIDataChannelListener *aListener, nsISupports *aContext, PRUint32 aOffset); \
  NS_SCRIPTABLE NS_IMETHOD StopPeek(void); \
  NS_SCRIPTABLE NS_IMETHOD CloseDataChannel(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIDATACHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenDataChannel(hyIDataChannelListener *aListener, nsISupports *aContext, PRUint32 aOffset) { return _to OpenDataChannel(aListener, aContext, aOffset); } \
  NS_SCRIPTABLE NS_IMETHOD Peek(hyIDataChannelListener *aListener, nsISupports *aContext, PRUint32 aOffset) { return _to Peek(aListener, aContext, aOffset); } \
  NS_SCRIPTABLE NS_IMETHOD StopPeek(void) { return _to StopPeek(); } \
  NS_SCRIPTABLE NS_IMETHOD CloseDataChannel(void) { return _to CloseDataChannel(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIDATACHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenDataChannel(hyIDataChannelListener *aListener, nsISupports *aContext, PRUint32 aOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenDataChannel(aListener, aContext, aOffset); } \
  NS_SCRIPTABLE NS_IMETHOD Peek(hyIDataChannelListener *aListener, nsISupports *aContext, PRUint32 aOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->Peek(aListener, aContext, aOffset); } \
  NS_SCRIPTABLE NS_IMETHOD StopPeek(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StopPeek(); } \
  NS_SCRIPTABLE NS_IMETHOD CloseDataChannel(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CloseDataChannel(); } 

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

/* void openDataChannel (in hyIDataChannelListener aListener, in nsISupports aContext, in unsigned long aOffset); */
NS_IMETHODIMP hyDataChannel::OpenDataChannel(hyIDataChannelListener *aListener, nsISupports *aContext, PRUint32 aOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void peek (in hyIDataChannelListener aListener, in nsISupports aContext, in unsigned long aOffset); */
NS_IMETHODIMP hyDataChannel::Peek(hyIDataChannelListener *aListener, nsISupports *aContext, PRUint32 aOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopPeek (); */
NS_IMETHODIMP hyDataChannel::StopPeek()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void closeDataChannel (); */
NS_IMETHODIMP hyDataChannel::CloseDataChannel()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIDataChannel_h__ */
