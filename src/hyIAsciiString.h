/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIAsciiString.idl
 */

#ifndef __gen_hyIAsciiString_h__
#define __gen_hyIAsciiString_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIAsciiString */
#define HYIASCIISTRING_IID_STR "c0ba3a69-2a5c-4d59-acb4-406b4ad80e3d"

#define HYIASCIISTRING_IID \
  {0xc0ba3a69, 0x2a5c, 0x4d59, \
    { 0xac, 0xb4, 0x40, 0x6b, 0x4a, 0xd8, 0x0e, 0x3d }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIAsciiString : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIASCIISTRING_IID)

  /* readonly attribute unsigned long long length; */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint64 *aLength) = 0;

  /* readonly attribute string data; */
  NS_SCRIPTABLE NS_IMETHOD GetData(char * *aData) = 0;

  /* bool equalString (in hyIAsciiString aOther); */
  NS_SCRIPTABLE NS_IMETHOD EqualString(hyIAsciiString *aOther, bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIAsciiString, HYIASCIISTRING_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIASCIISTRING \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint64 *aLength); \
  NS_SCRIPTABLE NS_IMETHOD GetData(char * *aData); \
  NS_SCRIPTABLE NS_IMETHOD EqualString(hyIAsciiString *aOther, bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIASCIISTRING(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint64 *aLength) { return _to GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(char * *aData) { return _to GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD EqualString(hyIAsciiString *aOther, bool *_retval NS_OUTPARAM) { return _to EqualString(aOther, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIASCIISTRING(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint64 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetData(char * *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_SCRIPTABLE NS_IMETHOD EqualString(hyIAsciiString *aOther, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EqualString(aOther, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyAsciiString : public hyIAsciiString
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIASCIISTRING

  hyAsciiString();

private:
  ~hyAsciiString();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyAsciiString, hyIAsciiString)

hyAsciiString::hyAsciiString()
{
  /* member initializers and constructor code */
}

hyAsciiString::~hyAsciiString()
{
  /* destructor code */
}

/* readonly attribute unsigned long long length; */
NS_IMETHODIMP hyAsciiString::GetLength(PRUint64 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute string data; */
NS_IMETHODIMP hyAsciiString::GetData(char * *aData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool equalString (in hyIAsciiString aOther); */
NS_IMETHODIMP hyAsciiString::EqualString(hyIAsciiString *aOther, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIAsciiString_h__ */
