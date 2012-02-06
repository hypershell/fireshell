/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIUnicodeString.idl
 */

#ifndef __gen_hyIUnicodeString_h__
#define __gen_hyIUnicodeString_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIAsciiString_h__
#include "hyIAsciiString.h"
#endif

#ifndef __gen_hyIUnicodeStringIterator_h__
#include "hyIUnicodeStringIterator.h"
#endif

#ifndef __gen_hyIDataBuffer_h__
#include "hyIDataBuffer.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIUnicodeString */
#define HYIUNICODESTRING_IID_STR "926822ca-d6c5-41cf-ab27-e369d2cda450"

#define HYIUNICODESTRING_IID \
  {0x926822ca, 0xd6c5, 0x41cf, \
    { 0xab, 0x27, 0xe3, 0x69, 0xd2, 0xcd, 0xa4, 0x50 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIUnicodeString : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIUNICODESTRING_IID)

  /* readonly attribute unsigned long long length; */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint64 *aLength) = 0;

  /* hyIUnicodeStringIterator iter (); */
  NS_SCRIPTABLE NS_IMETHOD Iter(hyIUnicodeStringIterator * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute hyIAsciiString encoding; */
  NS_SCRIPTABLE NS_IMETHOD GetEncoding(hyIAsciiString * *aEncoding) = 0;

  /* readonly attribute hyIDataBuffer buffer; */
  NS_SCRIPTABLE NS_IMETHOD GetBuffer(hyIDataBuffer * *aBuffer) = 0;

  /* bool equalCodepoint (in hyIUnicodeString aOther); */
  NS_SCRIPTABLE NS_IMETHOD EqualCodepoint(hyIUnicodeString *aOther, bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIUnicodeString, HYIUNICODESTRING_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIUNICODESTRING \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint64 *aLength); \
  NS_SCRIPTABLE NS_IMETHOD Iter(hyIUnicodeStringIterator * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEncoding(hyIAsciiString * *aEncoding); \
  NS_SCRIPTABLE NS_IMETHOD GetBuffer(hyIDataBuffer * *aBuffer); \
  NS_SCRIPTABLE NS_IMETHOD EqualCodepoint(hyIUnicodeString *aOther, bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIUNICODESTRING(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint64 *aLength) { return _to GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD Iter(hyIUnicodeStringIterator * *_retval NS_OUTPARAM) { return _to Iter(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEncoding(hyIAsciiString * *aEncoding) { return _to GetEncoding(aEncoding); } \
  NS_SCRIPTABLE NS_IMETHOD GetBuffer(hyIDataBuffer * *aBuffer) { return _to GetBuffer(aBuffer); } \
  NS_SCRIPTABLE NS_IMETHOD EqualCodepoint(hyIUnicodeString *aOther, bool *_retval NS_OUTPARAM) { return _to EqualCodepoint(aOther, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIUNICODESTRING(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint64 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD Iter(hyIUnicodeStringIterator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Iter(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEncoding(hyIAsciiString * *aEncoding) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEncoding(aEncoding); } \
  NS_SCRIPTABLE NS_IMETHOD GetBuffer(hyIDataBuffer * *aBuffer) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBuffer(aBuffer); } \
  NS_SCRIPTABLE NS_IMETHOD EqualCodepoint(hyIUnicodeString *aOther, bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EqualCodepoint(aOther, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyUnicodeString : public hyIUnicodeString
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIUNICODESTRING

  hyUnicodeString();

private:
  ~hyUnicodeString();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyUnicodeString, hyIUnicodeString)

hyUnicodeString::hyUnicodeString()
{
  /* member initializers and constructor code */
}

hyUnicodeString::~hyUnicodeString()
{
  /* destructor code */
}

/* readonly attribute unsigned long long length; */
NS_IMETHODIMP hyUnicodeString::GetLength(PRUint64 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* hyIUnicodeStringIterator iter (); */
NS_IMETHODIMP hyUnicodeString::Iter(hyIUnicodeStringIterator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute hyIAsciiString encoding; */
NS_IMETHODIMP hyUnicodeString::GetEncoding(hyIAsciiString * *aEncoding)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute hyIDataBuffer buffer; */
NS_IMETHODIMP hyUnicodeString::GetBuffer(hyIDataBuffer * *aBuffer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* bool equalCodepoint (in hyIUnicodeString aOther); */
NS_IMETHODIMP hyUnicodeString::EqualCodepoint(hyIUnicodeString *aOther, bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIUnicodeString_h__ */
