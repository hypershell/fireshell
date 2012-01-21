/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIUnicodeString.idl
 */

#ifndef __gen_hyIUnicodeString_h__
#define __gen_hyIUnicodeString_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIUnicodeStringIterator_h__
#include "hyIUnicodeStringIterator.h"
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

  /* readonly attribute unsigned long long size; */
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint64 *aSize) = 0;

  /* hyIUnicodeStringIterator iter (); */
  NS_SCRIPTABLE NS_IMETHOD Iter(hyIUnicodeStringIterator * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute string encoding; */
  NS_SCRIPTABLE NS_IMETHOD GetEncoding(char * *aEncoding) = 0;

  /* readonly attribute unsigned long long byteSize; */
  NS_SCRIPTABLE NS_IMETHOD GetByteSize(PRUint64 *aByteSize) = 0;

  /* readonly attribute string bytes; */
  NS_SCRIPTABLE NS_IMETHOD GetBytes(char * *aBytes) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIUnicodeString, HYIUNICODESTRING_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIUNICODESTRING \
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint64 *aSize); \
  NS_SCRIPTABLE NS_IMETHOD Iter(hyIUnicodeStringIterator * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEncoding(char * *aEncoding); \
  NS_SCRIPTABLE NS_IMETHOD GetByteSize(PRUint64 *aByteSize); \
  NS_SCRIPTABLE NS_IMETHOD GetBytes(char * *aBytes); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIUNICODESTRING(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint64 *aSize) { return _to GetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD Iter(hyIUnicodeStringIterator * *_retval NS_OUTPARAM) { return _to Iter(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEncoding(char * *aEncoding) { return _to GetEncoding(aEncoding); } \
  NS_SCRIPTABLE NS_IMETHOD GetByteSize(PRUint64 *aByteSize) { return _to GetByteSize(aByteSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetBytes(char * *aBytes) { return _to GetBytes(aBytes); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIUNICODESTRING(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint64 *aSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD Iter(hyIUnicodeStringIterator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Iter(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEncoding(char * *aEncoding) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEncoding(aEncoding); } \
  NS_SCRIPTABLE NS_IMETHOD GetByteSize(PRUint64 *aByteSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetByteSize(aByteSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetBytes(char * *aBytes) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBytes(aBytes); } 

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

/* readonly attribute unsigned long long size; */
NS_IMETHODIMP hyUnicodeString::GetSize(PRUint64 *aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* hyIUnicodeStringIterator iter (); */
NS_IMETHODIMP hyUnicodeString::Iter(hyIUnicodeStringIterator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute string encoding; */
NS_IMETHODIMP hyUnicodeString::GetEncoding(char * *aEncoding)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long long byteSize; */
NS_IMETHODIMP hyUnicodeString::GetByteSize(PRUint64 *aByteSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute string bytes; */
NS_IMETHODIMP hyUnicodeString::GetBytes(char * *aBytes)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIUnicodeString_h__ */
