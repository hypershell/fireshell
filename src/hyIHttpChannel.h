/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpChannel.idl
 */

#ifndef __gen_hyIHttpChannel_h__
#define __gen_hyIHttpChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIURI_h__
#include "nsIURI.h"
#endif

#ifndef __gen_hyIDataChannel_h__
#include "hyIDataChannel.h"
#endif

#ifndef __gen_hyIHttpHeaderFields_h__
#include "hyIHttpHeaderFields.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpChannel */
#define HYIHTTPCHANNEL_IID_STR "54d9f290-535e-423a-bfe0-8f040faae054"

#define HYIHTTPCHANNEL_IID \
  {0x54d9f290, 0x535e, 0x423a, \
    { 0xbf, 0xe0, 0x8f, 0x04, 0x0f, 0xaa, 0xe0, 0x54 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpChannel : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPCHANNEL_IID)

  /* attribute ACString method; */
  NS_SCRIPTABLE NS_IMETHOD GetMethod(nsACString & aMethod) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMethod(const nsACString & aMethod) = 0;

  /* attribute ACString requestContentType; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestContentType(nsACString & aRequestContentType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRequestContentType(const nsACString & aRequestContentType) = 0;

  /* attribute hyIHttpHeaderFields requestHeaders; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestHeaders(hyIHttpHeaderFields * *aRequestHeaders) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRequestHeaders(hyIHttpHeaderFields *aRequestHeaders) = 0;

  /* readonly attribute long responseStatusCode; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusCode(PRInt32 *aResponseStatusCode) = 0;

  /* readonly attribute ACString responseStatusText; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusText(nsACString & aResponseStatusText) = 0;

  /* readonly attribute ACString responseContentType; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseContentType(nsACString & aResponseContentType) = 0;

  /* readonly attribute hyIHttpHeaderFields responseHeaders; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeaders(hyIHttpHeaderFields * *aResponseHeaders) = 0;

  /* hyIDataChannel getRawChannel (); */
  NS_SCRIPTABLE NS_IMETHOD GetRawChannel(hyIDataChannel * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpChannel, HYIHTTPCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPCHANNEL \
  NS_SCRIPTABLE NS_IMETHOD GetMethod(nsACString & aMethod); \
  NS_SCRIPTABLE NS_IMETHOD SetMethod(const nsACString & aMethod); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestContentType(nsACString & aRequestContentType); \
  NS_SCRIPTABLE NS_IMETHOD SetRequestContentType(const nsACString & aRequestContentType); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHeaders(hyIHttpHeaderFields * *aRequestHeaders); \
  NS_SCRIPTABLE NS_IMETHOD SetRequestHeaders(hyIHttpHeaderFields *aRequestHeaders); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusCode(PRInt32 *aResponseStatusCode); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusText(nsACString & aResponseStatusText); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseContentType(nsACString & aResponseContentType); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeaders(hyIHttpHeaderFields * *aResponseHeaders); \
  NS_SCRIPTABLE NS_IMETHOD GetRawChannel(hyIDataChannel * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMethod(nsACString & aMethod) { return _to GetMethod(aMethod); } \
  NS_SCRIPTABLE NS_IMETHOD SetMethod(const nsACString & aMethod) { return _to SetMethod(aMethod); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestContentType(nsACString & aRequestContentType) { return _to GetRequestContentType(aRequestContentType); } \
  NS_SCRIPTABLE NS_IMETHOD SetRequestContentType(const nsACString & aRequestContentType) { return _to SetRequestContentType(aRequestContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHeaders(hyIHttpHeaderFields * *aRequestHeaders) { return _to GetRequestHeaders(aRequestHeaders); } \
  NS_SCRIPTABLE NS_IMETHOD SetRequestHeaders(hyIHttpHeaderFields *aRequestHeaders) { return _to SetRequestHeaders(aRequestHeaders); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusCode(PRInt32 *aResponseStatusCode) { return _to GetResponseStatusCode(aResponseStatusCode); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusText(nsACString & aResponseStatusText) { return _to GetResponseStatusText(aResponseStatusText); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseContentType(nsACString & aResponseContentType) { return _to GetResponseContentType(aResponseContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeaders(hyIHttpHeaderFields * *aResponseHeaders) { return _to GetResponseHeaders(aResponseHeaders); } \
  NS_SCRIPTABLE NS_IMETHOD GetRawChannel(hyIDataChannel * *_retval NS_OUTPARAM) { return _to GetRawChannel(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetMethod(nsACString & aMethod) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMethod(aMethod); } \
  NS_SCRIPTABLE NS_IMETHOD SetMethod(const nsACString & aMethod) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMethod(aMethod); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestContentType(nsACString & aRequestContentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestContentType(aRequestContentType); } \
  NS_SCRIPTABLE NS_IMETHOD SetRequestContentType(const nsACString & aRequestContentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRequestContentType(aRequestContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHeaders(hyIHttpHeaderFields * *aRequestHeaders) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestHeaders(aRequestHeaders); } \
  NS_SCRIPTABLE NS_IMETHOD SetRequestHeaders(hyIHttpHeaderFields *aRequestHeaders) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRequestHeaders(aRequestHeaders); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusCode(PRInt32 *aResponseStatusCode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseStatusCode(aResponseStatusCode); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusText(nsACString & aResponseStatusText) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseStatusText(aResponseStatusText); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseContentType(nsACString & aResponseContentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseContentType(aResponseContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeaders(hyIHttpHeaderFields * *aResponseHeaders) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseHeaders(aResponseHeaders); } \
  NS_SCRIPTABLE NS_IMETHOD GetRawChannel(hyIDataChannel * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRawChannel(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpChannel : public hyIHttpChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPCHANNEL

  hyHttpChannel();

private:
  ~hyHttpChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpChannel, hyIHttpChannel)

hyHttpChannel::hyHttpChannel()
{
  /* member initializers and constructor code */
}

hyHttpChannel::~hyHttpChannel()
{
  /* destructor code */
}

/* attribute ACString method; */
NS_IMETHODIMP hyHttpChannel::GetMethod(nsACString & aMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP hyHttpChannel::SetMethod(const nsACString & aMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString requestContentType; */
NS_IMETHODIMP hyHttpChannel::GetRequestContentType(nsACString & aRequestContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP hyHttpChannel::SetRequestContentType(const nsACString & aRequestContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute hyIHttpHeaderFields requestHeaders; */
NS_IMETHODIMP hyHttpChannel::GetRequestHeaders(hyIHttpHeaderFields * *aRequestHeaders)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP hyHttpChannel::SetRequestHeaders(hyIHttpHeaderFields *aRequestHeaders)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long responseStatusCode; */
NS_IMETHODIMP hyHttpChannel::GetResponseStatusCode(PRInt32 *aResponseStatusCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString responseStatusText; */
NS_IMETHODIMP hyHttpChannel::GetResponseStatusText(nsACString & aResponseStatusText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString responseContentType; */
NS_IMETHODIMP hyHttpChannel::GetResponseContentType(nsACString & aResponseContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute hyIHttpHeaderFields responseHeaders; */
NS_IMETHODIMP hyHttpChannel::GetResponseHeaders(hyIHttpHeaderFields * *aResponseHeaders)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* hyIDataChannel getRawChannel (); */
NS_IMETHODIMP hyHttpChannel::GetRawChannel(hyIDataChannel * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpChannel_h__ */
