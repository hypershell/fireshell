/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpRequest.idl
 */

#ifndef __gen_hyIHttpRequest_h__
#define __gen_hyIHttpRequest_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIURI_h__
#include "nsIURI.h"
#endif

#ifndef __gen_hyIHttpHeaderFields_h__
#include "hyIHttpHeaderFields.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpRequest */
#define HYIHTTPREQUEST_IID_STR "fa9f2917-2256-496c-9663-8aca31ce283c"

#define HYIHTTPREQUEST_IID \
  {0xfa9f2917, 0x2256, 0x496c, \
    { 0x96, 0x63, 0x8a, 0xca, 0x31, 0xce, 0x28, 0x3c }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpRequest : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPREQUEST_IID)

  /* readonly attribute ACString requestHttpVersion; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestHttpVersion(nsACString & aRequestHttpVersion) = 0;

  /* readonly attribute nsIURI requestURI; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestURI(nsIURI * *aRequestURI) = 0;

  /* readonly attribute ACString requestMethod; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestMethod(nsACString & aRequestMethod) = 0;

  /* readonly attribute ACString requestHost; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestHost(nsACString & aRequestHost) = 0;

  /* readonly attribute ACString requestContentType; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestContentType(nsACString & aRequestContentType) = 0;

  /* readonly attribute hyIHttpHeaderFields requestHeaders; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestHeaders(hyIHttpHeaderFields * *aRequestHeaders) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpRequest, HYIHTTPREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPREQUEST \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHttpVersion(nsACString & aRequestHttpVersion); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestURI(nsIURI * *aRequestURI); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestMethod(nsACString & aRequestMethod); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHost(nsACString & aRequestHost); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestContentType(nsACString & aRequestContentType); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHeaders(hyIHttpHeaderFields * *aRequestHeaders); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHttpVersion(nsACString & aRequestHttpVersion) { return _to GetRequestHttpVersion(aRequestHttpVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestURI(nsIURI * *aRequestURI) { return _to GetRequestURI(aRequestURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestMethod(nsACString & aRequestMethod) { return _to GetRequestMethod(aRequestMethod); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHost(nsACString & aRequestHost) { return _to GetRequestHost(aRequestHost); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestContentType(nsACString & aRequestContentType) { return _to GetRequestContentType(aRequestContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHeaders(hyIHttpHeaderFields * *aRequestHeaders) { return _to GetRequestHeaders(aRequestHeaders); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHttpVersion(nsACString & aRequestHttpVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestHttpVersion(aRequestHttpVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestURI(nsIURI * *aRequestURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestURI(aRequestURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestMethod(nsACString & aRequestMethod) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestMethod(aRequestMethod); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHost(nsACString & aRequestHost) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestHost(aRequestHost); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestContentType(nsACString & aRequestContentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestContentType(aRequestContentType); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHeaders(hyIHttpHeaderFields * *aRequestHeaders) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestHeaders(aRequestHeaders); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpRequest : public hyIHttpRequest
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPREQUEST

  hyHttpRequest();

private:
  ~hyHttpRequest();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpRequest, hyIHttpRequest)

hyHttpRequest::hyHttpRequest()
{
  /* member initializers and constructor code */
}

hyHttpRequest::~hyHttpRequest()
{
  /* destructor code */
}

/* readonly attribute ACString requestHttpVersion; */
NS_IMETHODIMP hyHttpRequest::GetRequestHttpVersion(nsACString & aRequestHttpVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI requestURI; */
NS_IMETHODIMP hyHttpRequest::GetRequestURI(nsIURI * *aRequestURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString requestMethod; */
NS_IMETHODIMP hyHttpRequest::GetRequestMethod(nsACString & aRequestMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString requestHost; */
NS_IMETHODIMP hyHttpRequest::GetRequestHost(nsACString & aRequestHost)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString requestContentType; */
NS_IMETHODIMP hyHttpRequest::GetRequestContentType(nsACString & aRequestContentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute hyIHttpHeaderFields requestHeaders; */
NS_IMETHODIMP hyHttpRequest::GetRequestHeaders(hyIHttpHeaderFields * *aRequestHeaders)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpRequest_h__ */
