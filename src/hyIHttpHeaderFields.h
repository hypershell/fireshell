/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpHeaderFields.idl
 */

#ifndef __gen_hyIHttpHeaderFields_h__
#define __gen_hyIHttpHeaderFields_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIHttpHeaderVisitor_h__
#include "nsIHttpHeaderVisitor.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpHeaderFields */
#define HYIHTTPHEADERFIELDS_IID_STR "58baf11d-f41f-41ed-9c1c-8150962a1da4"

#define HYIHTTPHEADERFIELDS_IID \
  {0x58baf11d, 0xf41f, 0x41ed, \
    { 0x9c, 0x1c, 0x81, 0x50, 0x96, 0x2a, 0x1d, 0xa4 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpHeaderFields : public nsIHttpHeaderVisitor {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPHEADERFIELDS_IID)

  /* ACString getValue (in ACString aKey); */
  NS_SCRIPTABLE NS_IMETHOD GetValue(const nsACString & aKey, nsACString & _retval NS_OUTPARAM) = 0;

  /* void acceptHeaderVisitor (in nsIHttpHeaderVisitor aVisitor); */
  NS_SCRIPTABLE NS_IMETHOD AcceptHeaderVisitor(nsIHttpHeaderVisitor *aVisitor) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpHeaderFields, HYIHTTPHEADERFIELDS_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPHEADERFIELDS \
  NS_SCRIPTABLE NS_IMETHOD GetValue(const nsACString & aKey, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AcceptHeaderVisitor(nsIHttpHeaderVisitor *aVisitor); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPHEADERFIELDS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetValue(const nsACString & aKey, nsACString & _retval NS_OUTPARAM) { return _to GetValue(aKey, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AcceptHeaderVisitor(nsIHttpHeaderVisitor *aVisitor) { return _to AcceptHeaderVisitor(aVisitor); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPHEADERFIELDS(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetValue(const nsACString & aKey, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aKey, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AcceptHeaderVisitor(nsIHttpHeaderVisitor *aVisitor) { return !_to ? NS_ERROR_NULL_POINTER : _to->AcceptHeaderVisitor(aVisitor); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpHeaderFields : public hyIHttpHeaderFields
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPHEADERFIELDS

  hyHttpHeaderFields();

private:
  ~hyHttpHeaderFields();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpHeaderFields, hyIHttpHeaderFields)

hyHttpHeaderFields::hyHttpHeaderFields()
{
  /* member initializers and constructor code */
}

hyHttpHeaderFields::~hyHttpHeaderFields()
{
  /* destructor code */
}

/* ACString getValue (in ACString aKey); */
NS_IMETHODIMP hyHttpHeaderFields::GetValue(const nsACString & aKey, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void acceptHeaderVisitor (in nsIHttpHeaderVisitor aVisitor); */
NS_IMETHODIMP hyHttpHeaderFields::AcceptHeaderVisitor(nsIHttpHeaderVisitor *aVisitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpHeaderFields_h__ */
