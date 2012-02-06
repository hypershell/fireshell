/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyICppStdString.idl
 */

#ifndef __gen_hyICppStdString_h__
#define __gen_hyICppStdString_h__


#ifndef __gen_hyIAsciiString_h__
#include "hyIAsciiString.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyICppStdString */
#define HYICPPSTDSTRING_IID_STR "d8ec8a2c-479a-49d4-8a65-c30848963c1e"

#define HYICPPSTDSTRING_IID \
  {0xd8ec8a2c, 0x479a, 0x49d4, \
    { 0x8a, 0x65, 0xc3, 0x08, 0x48, 0x96, 0x3c, 0x1e }}

class NS_NO_VTABLE hyICppStdString : public hyIAsciiString {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYICPPSTDSTRING_IID)

  /* voidPtr toCppStringPtr (); */
  NS_IMETHOD ToCppStringPtr(void **_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyICppStdString, HYICPPSTDSTRING_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYICPPSTDSTRING \
  NS_IMETHOD ToCppStringPtr(void **_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYICPPSTDSTRING(_to) \
  NS_IMETHOD ToCppStringPtr(void **_retval NS_OUTPARAM) { return _to ToCppStringPtr(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYICPPSTDSTRING(_to) \
  NS_IMETHOD ToCppStringPtr(void **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToCppStringPtr(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyCppStdString : public hyICppStdString
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYICPPSTDSTRING

  hyCppStdString();

private:
  ~hyCppStdString();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyCppStdString, hyICppStdString)

hyCppStdString::hyCppStdString()
{
  /* member initializers and constructor code */
}

hyCppStdString::~hyCppStdString()
{
  /* destructor code */
}

/* voidPtr toCppStringPtr (); */
NS_IMETHODIMP hyCppStdString::ToCppStringPtr(void **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyICppStdString_h__ */
