/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIUploadDataChannel.idl
 */

#ifndef __gen_hyIUploadDataChannel_h__
#define __gen_hyIUploadDataChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIDataBuffer_h__
#include "hyIDataBuffer.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIUploadDataChannel */
#define HYIUPLOADDATACHANNEL_IID_STR "806cd87f-80b5-453c-b1c8-739341c8555a"

#define HYIUPLOADDATACHANNEL_IID \
  {0x806cd87f, 0x80b5, 0x453c, \
    { 0xb1, 0xc8, 0x73, 0x93, 0x41, 0xc8, 0x55, 0x5a }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIUploadDataChannel : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIUPLOADDATACHANNEL_IID)

  /* void send (in hyIDataBuffer aBuffer); */
  NS_SCRIPTABLE NS_IMETHOD Send(hyIDataBuffer *aBuffer) = 0;

  /* void close (); */
  NS_SCRIPTABLE NS_IMETHOD Close(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIUploadDataChannel, HYIUPLOADDATACHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIUPLOADDATACHANNEL \
  NS_SCRIPTABLE NS_IMETHOD Send(hyIDataBuffer *aBuffer); \
  NS_SCRIPTABLE NS_IMETHOD Close(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIUPLOADDATACHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD Send(hyIDataBuffer *aBuffer) { return _to Send(aBuffer); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return _to Close(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIUPLOADDATACHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD Send(hyIDataBuffer *aBuffer) { return !_to ? NS_ERROR_NULL_POINTER : _to->Send(aBuffer); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyUploadDataChannel : public hyIUploadDataChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIUPLOADDATACHANNEL

  hyUploadDataChannel();

private:
  ~hyUploadDataChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyUploadDataChannel, hyIUploadDataChannel)

hyUploadDataChannel::hyUploadDataChannel()
{
  /* member initializers and constructor code */
}

hyUploadDataChannel::~hyUploadDataChannel()
{
  /* destructor code */
}

/* void send (in hyIDataBuffer aBuffer); */
NS_IMETHODIMP hyUploadDataChannel::Send(hyIDataBuffer *aBuffer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (); */
NS_IMETHODIMP hyUploadDataChannel::Close()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIUploadDataChannel_h__ */
