/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpResponse.idl
 */

#ifndef __gen_hyIHttpResponse_h__
#define __gen_hyIHttpResponse_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIHttpHeaderFields_h__
#include "hyIHttpHeaderFields.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpResponse */
#define HYIHTTPRESPONSE_IID_STR "7f5612e4-1358-4f8c-a0e6-b4ddc5942b97"

#define HYIHTTPRESPONSE_IID \
  {0x7f5612e4, 0x1358, 0x4f8c, \
    { 0xa0, 0xe6, 0xb4, 0xdd, 0xc5, 0x94, 0x2b, 0x97 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpResponse {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPRESPONSE_IID)

  /* readonly attribute ACString responseHttpVersion; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseHttpVersion(nsACString & aResponseHttpVersion) = 0;

  /* readonly attribute unsigned long responseStatusCode; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusCode(PRUint32 *aResponseStatusCode) = 0;

  /* readonly attribute ACString responseStatusMessage; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusMessage(nsACString & aResponseStatusMessage) = 0;

  /* readonly attribute ACString responseContentType; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseContentType(nsACString & aResponseContentType) = 0;

  /* readonly attribute hyIHttpHeaderFields responseHeaders; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeaders(hyIHttpHeaderFields * *aResponseHeaders) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpResponse, HYIHTTPRESPONSE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPRESPONSE \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHttpVersion(nsACString & aResponseHttpVersion); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusCode(PRUint32 *aResponseStatusCode); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusMessage(nsACString & aResponseStatusMessage); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseContentType(nsACString & aResponseContentType); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeaders(hyIHttpHeaderFields * *aResponseHeaders); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPRESPONSE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHttpVersion(nsACString & aResponseHttpVersion) { return _to GetResponseHttpVersion(aResponseHttpVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusCode(PRUint32 *aResponseStatusCode) { return _to GetResponseStatusCode(aResponseStatusCode); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusMessage(nsACString & aResponseStatusMessage) { return _to GetResponseStatusMessage(aResponseStatusMessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseContentType(nsACString & aResponseContentType) { return _to GetResponseContentType(aResponseContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeaders(hyIHttpHeaderFields * *aResponseHeaders) { return _to GetResponseHeaders(aResponseHeaders); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPRESPONSE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHttpVersion(nsACString & aResponseHttpVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseHttpVersion(aResponseHttpVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusCode(PRUint32 *aResponseStatusCode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseStatusCode(aResponseStatusCode); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusMessage(nsACString & aResponseStatusMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseStatusMessage(aResponseStatusMessage); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseContentType(nsACString & aResponseContentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseContentType(aResponseContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeaders(hyIHttpHeaderFields * *aResponseHeaders) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseHeaders(aResponseHeaders); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpResponse : public hyIHttpResponse
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPRESPONSE

  hyHttpResponse();

private:
  ~hyHttpResponse();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpResponse, hyIHttpResponse)

hyHttpResponse::hyHttpResponse()
{
  /* member initializers and constructor code */
}

hyHttpResponse::~hyHttpResponse()
{
  /* destructor code */
}

/* readonly attribute ACString responseHttpVersion; */
NS_IMETHODIMP hyHttpResponse::GetResponseHttpVersion(nsACString & aResponseHttpVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long responseStatusCode; */
NS_IMETHODIMP hyHttpResponse::GetResponseStatusCode(PRUint32 *aResponseStatusCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString responseStatusMessage; */
NS_IMETHODIMP hyHttpResponse::GetResponseStatusMessage(nsACString & aResponseStatusMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString responseContentType; */
NS_IMETHODIMP hyHttpResponse::GetResponseContentType(nsACString & aResponseContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute hyIHttpHeaderFields responseHeaders; */
NS_IMETHODIMP hyHttpResponse::GetResponseHeaders(hyIHttpHeaderFields * *aResponseHeaders)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpResponse_h__ */
