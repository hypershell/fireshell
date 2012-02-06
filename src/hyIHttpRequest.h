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

#ifndef __gen_hyIUnicodeTable_h__
#include "hyIUnicodeTable.h"
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

  /* readonly attribute hyIAsciiString requestHttpVersion; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestHttpVersion(hyIAsciiString * *aRequestHttpVersion) = 0;

  /* readonly attribute hyIAsciiString requestPath; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestPath(hyIAsciiString * *aRequestPath) = 0;

  /* readonly attribute hyIAsciiString requestQueryString; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestQueryString(hyIAsciiString * *aRequestQueryString) = 0;

  /* readonly attribute hyIUnicodeTable requestQueryParams; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestQueryParams(hyIUnicodeTable * *aRequestQueryParams) = 0;

  /* readonly attribute hyIAsciiString requestMethod; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestMethod(hyIAsciiString * *aRequestMethod) = 0;

  /* readonly attribute hyIAsciiString requestHost; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestHost(hyIAsciiString * *aRequestHost) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpRequest, HYIHTTPREQUEST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPREQUEST \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHttpVersion(hyIAsciiString * *aRequestHttpVersion); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestPath(hyIAsciiString * *aRequestPath); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestQueryString(hyIAsciiString * *aRequestQueryString); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestQueryParams(hyIUnicodeTable * *aRequestQueryParams); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestMethod(hyIAsciiString * *aRequestMethod); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHost(hyIAsciiString * *aRequestHost); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHttpVersion(hyIAsciiString * *aRequestHttpVersion) { return _to GetRequestHttpVersion(aRequestHttpVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestPath(hyIAsciiString * *aRequestPath) { return _to GetRequestPath(aRequestPath); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestQueryString(hyIAsciiString * *aRequestQueryString) { return _to GetRequestQueryString(aRequestQueryString); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestQueryParams(hyIUnicodeTable * *aRequestQueryParams) { return _to GetRequestQueryParams(aRequestQueryParams); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestMethod(hyIAsciiString * *aRequestMethod) { return _to GetRequestMethod(aRequestMethod); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHost(hyIAsciiString * *aRequestHost) { return _to GetRequestHost(aRequestHost); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPREQUEST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHttpVersion(hyIAsciiString * *aRequestHttpVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestHttpVersion(aRequestHttpVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestPath(hyIAsciiString * *aRequestPath) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestPath(aRequestPath); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestQueryString(hyIAsciiString * *aRequestQueryString) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestQueryString(aRequestQueryString); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestQueryParams(hyIUnicodeTable * *aRequestQueryParams) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestQueryParams(aRequestQueryParams); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestMethod(hyIAsciiString * *aRequestMethod) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestMethod(aRequestMethod); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHost(hyIAsciiString * *aRequestHost) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestHost(aRequestHost); } 

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

/* readonly attribute hyIAsciiString requestHttpVersion; */
NS_IMETHODIMP hyHttpRequest::GetRequestHttpVersion(hyIAsciiString * *aRequestHttpVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute hyIAsciiString requestPath; */
NS_IMETHODIMP hyHttpRequest::GetRequestPath(hyIAsciiString * *aRequestPath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute hyIAsciiString requestQueryString; */
NS_IMETHODIMP hyHttpRequest::GetRequestQueryString(hyIAsciiString * *aRequestQueryString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute hyIUnicodeTable requestQueryParams; */
NS_IMETHODIMP hyHttpRequest::GetRequestQueryParams(hyIUnicodeTable * *aRequestQueryParams)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute hyIAsciiString requestMethod; */
NS_IMETHODIMP hyHttpRequest::GetRequestMethod(hyIAsciiString * *aRequestMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute hyIAsciiString requestHost; */
NS_IMETHODIMP hyHttpRequest::GetRequestHost(hyIAsciiString * *aRequestHost)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpRequest_h__ */
