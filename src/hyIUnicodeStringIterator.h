/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIUnicodeStringIterator.idl
 */

#ifndef __gen_hyIUnicodeStringIterator_h__
#define __gen_hyIUnicodeStringIterator_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIUnicodeStringIterator */
#define HYIUNICODESTRINGITERATOR_IID_STR "dd9298be-54d6-4f05-addb-76c68d3b4255"

#define HYIUNICODESTRINGITERATOR_IID \
  {0xdd9298be, 0x54d6, 0x4f05, \
    { 0xad, 0xdb, 0x76, 0xc6, 0x8d, 0x3b, 0x42, 0x55 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIUnicodeStringIterator : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIUNICODESTRINGITERATOR_IID)

  /* readonly attribute unsigned long long codepoint; */
  NS_SCRIPTABLE NS_IMETHOD GetCodepoint(PRUint64 *aCodepoint) = 0;

  /* void next (); */
  NS_SCRIPTABLE NS_IMETHOD Next(void) = 0;

  /* boolean hasNext (); */
  NS_SCRIPTABLE NS_IMETHOD HasNext(bool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIUnicodeStringIterator, HYIUNICODESTRINGITERATOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIUNICODESTRINGITERATOR \
  NS_SCRIPTABLE NS_IMETHOD GetCodepoint(PRUint64 *aCodepoint); \
  NS_SCRIPTABLE NS_IMETHOD Next(void); \
  NS_SCRIPTABLE NS_IMETHOD HasNext(bool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIUNICODESTRINGITERATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCodepoint(PRUint64 *aCodepoint) { return _to GetCodepoint(aCodepoint); } \
  NS_SCRIPTABLE NS_IMETHOD Next(void) { return _to Next(); } \
  NS_SCRIPTABLE NS_IMETHOD HasNext(bool *_retval NS_OUTPARAM) { return _to HasNext(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIUNICODESTRINGITERATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCodepoint(PRUint64 *aCodepoint) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCodepoint(aCodepoint); } \
  NS_SCRIPTABLE NS_IMETHOD Next(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Next(); } \
  NS_SCRIPTABLE NS_IMETHOD HasNext(bool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasNext(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyUnicodeStringIterator : public hyIUnicodeStringIterator
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIUNICODESTRINGITERATOR

  hyUnicodeStringIterator();

private:
  ~hyUnicodeStringIterator();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyUnicodeStringIterator, hyIUnicodeStringIterator)

hyUnicodeStringIterator::hyUnicodeStringIterator()
{
  /* member initializers and constructor code */
}

hyUnicodeStringIterator::~hyUnicodeStringIterator()
{
  /* destructor code */
}

/* readonly attribute unsigned long long codepoint; */
NS_IMETHODIMP hyUnicodeStringIterator::GetCodepoint(PRUint64 *aCodepoint)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void next (); */
NS_IMETHODIMP hyUnicodeStringIterator::Next()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasNext (); */
NS_IMETHODIMP hyUnicodeStringIterator::HasNext(bool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIUnicodeStringIterator_h__ */
