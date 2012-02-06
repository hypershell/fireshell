/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIUnicodeTableVisitor.idl
 */

#ifndef __gen_hyIUnicodeTableVisitor_h__
#define __gen_hyIUnicodeTableVisitor_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIUnicodeString_h__
#include "hyIUnicodeString.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIUnicodeTableVisitor */
#define HYIUNICODETABLEVISITOR_IID_STR "87680a6f-85da-4ecb-bf2e-4079a62f3337"

#define HYIUNICODETABLEVISITOR_IID \
  {0x87680a6f, 0x85da, 0x4ecb, \
    { 0xbf, 0x2e, 0x40, 0x79, 0xa6, 0x2f, 0x33, 0x37 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIUnicodeTableVisitor : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIUNICODETABLEVISITOR_IID)

  /* void visitTableEntry (in hyIUnicodeString aKey, in hyIUnicodeString aValue); */
  NS_SCRIPTABLE NS_IMETHOD VisitTableEntry(hyIUnicodeString *aKey, hyIUnicodeString *aValue) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIUnicodeTableVisitor, HYIUNICODETABLEVISITOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIUNICODETABLEVISITOR \
  NS_SCRIPTABLE NS_IMETHOD VisitTableEntry(hyIUnicodeString *aKey, hyIUnicodeString *aValue); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIUNICODETABLEVISITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD VisitTableEntry(hyIUnicodeString *aKey, hyIUnicodeString *aValue) { return _to VisitTableEntry(aKey, aValue); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIUNICODETABLEVISITOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD VisitTableEntry(hyIUnicodeString *aKey, hyIUnicodeString *aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->VisitTableEntry(aKey, aValue); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyUnicodeTableVisitor : public hyIUnicodeTableVisitor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIUNICODETABLEVISITOR

  hyUnicodeTableVisitor();

private:
  ~hyUnicodeTableVisitor();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyUnicodeTableVisitor, hyIUnicodeTableVisitor)

hyUnicodeTableVisitor::hyUnicodeTableVisitor()
{
  /* member initializers and constructor code */
}

hyUnicodeTableVisitor::~hyUnicodeTableVisitor()
{
  /* destructor code */
}

/* void visitTableEntry (in hyIUnicodeString aKey, in hyIUnicodeString aValue); */
NS_IMETHODIMP hyUnicodeTableVisitor::VisitTableEntry(hyIUnicodeString *aKey, hyIUnicodeString *aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIUnicodeTableVisitor_h__ */
