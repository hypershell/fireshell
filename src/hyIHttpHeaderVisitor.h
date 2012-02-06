/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpHeaderVisitor.idl
 */

#ifndef __gen_hyIHttpHeaderVisitor_h__
#define __gen_hyIHttpHeaderVisitor_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIAsciiString_h__
#include "hyIAsciiString.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpHeaderVisitor */
#define HYIHTTPHEADERVISITOR_IID_STR "3f929378-67c1-4cea-bd87-3e193d0ee086"

#define HYIHTTPHEADERVISITOR_IID \
  {0x3f929378, 0x67c1, 0x4cea, \
    { 0xbd, 0x87, 0x3e, 0x19, 0x3d, 0x0e, 0xe0, 0x86 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpHeaderVisitor : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPHEADERVISITOR_IID)

  /* void visitHeader (in hyIAsciiString aHeader, in hyIAsciiString aValue); */
  NS_SCRIPTABLE NS_IMETHOD VisitHeader(hyIAsciiString *aHeader, hyIAsciiString *aValue) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpHeaderVisitor, HYIHTTPHEADERVISITOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPHEADERVISITOR \
  NS_SCRIPTABLE NS_IMETHOD VisitHeader(hyIAsciiString *aHeader, hyIAsciiString *aValue); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPHEADERVISITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD VisitHeader(hyIAsciiString *aHeader, hyIAsciiString *aValue) { return _to VisitHeader(aHeader, aValue); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPHEADERVISITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD VisitHeader(hyIAsciiString *aHeader, hyIAsciiString *aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->VisitHeader(aHeader, aValue); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpHeaderVisitor : public hyIHttpHeaderVisitor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPHEADERVISITOR

  hyHttpHeaderVisitor();

private:
  ~hyHttpHeaderVisitor();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpHeaderVisitor, hyIHttpHeaderVisitor)

hyHttpHeaderVisitor::hyHttpHeaderVisitor()
{
  /* member initializers and constructor code */
}

hyHttpHeaderVisitor::~hyHttpHeaderVisitor()
{
  /* destructor code */
}

/* void visitHeader (in hyIAsciiString aHeader, in hyIAsciiString aValue); */
NS_IMETHODIMP hyHttpHeaderVisitor::VisitHeader(hyIAsciiString *aHeader, hyIAsciiString *aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpHeaderVisitor_h__ */
