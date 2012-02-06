/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIUnicodeTable.idl
 */

#ifndef __gen_hyIUnicodeTable_h__
#define __gen_hyIUnicodeTable_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIUnicodeString_h__
#include "hyIUnicodeString.h"
#endif

#ifndef __gen_hyIUnicodeTableVisitor_h__
#include "hyIUnicodeTableVisitor.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIUnicodeTable */
#define HYIUNICODETABLE_IID_STR "5af50a3c-e502-48d4-b468-604ea893b694"

#define HYIUNICODETABLE_IID \
  {0x5af50a3c, 0xe502, 0x48d4, \
    { 0xb4, 0x68, 0x60, 0x4e, 0xa8, 0x93, 0xb6, 0x94 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIUnicodeTable : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIUNICODETABLE_IID)

  /* hyIUnicodeString getValue (in hyIUnicodeString aKey); */
  NS_SCRIPTABLE NS_IMETHOD GetValue(hyIUnicodeString *aKey, hyIUnicodeString * *_retval NS_OUTPARAM) = 0;

  /* void acceptTableVisitor (in hyIUnicodeTableVisitor aVisitor); */
  NS_SCRIPTABLE NS_IMETHOD AcceptTableVisitor(hyIUnicodeTableVisitor *aVisitor) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIUnicodeTable, HYIUNICODETABLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIUNICODETABLE \
  NS_SCRIPTABLE NS_IMETHOD GetValue(hyIUnicodeString *aKey, hyIUnicodeString * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AcceptTableVisitor(hyIUnicodeTableVisitor *aVisitor); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIUNICODETABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetValue(hyIUnicodeString *aKey, hyIUnicodeString * *_retval NS_OUTPARAM) { return _to GetValue(aKey, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AcceptTableVisitor(hyIUnicodeTableVisitor *aVisitor) { return _to AcceptTableVisitor(aVisitor); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIUNICODETABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetValue(hyIUnicodeString *aKey, hyIUnicodeString * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aKey, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AcceptTableVisitor(hyIUnicodeTableVisitor *aVisitor) { return !_to ? NS_ERROR_NULL_POINTER : _to->AcceptTableVisitor(aVisitor); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyUnicodeTable : public hyIUnicodeTable
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIUNICODETABLE

  hyUnicodeTable();

private:
  ~hyUnicodeTable();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyUnicodeTable, hyIUnicodeTable)

hyUnicodeTable::hyUnicodeTable()
{
  /* member initializers and constructor code */
}

hyUnicodeTable::~hyUnicodeTable()
{
  /* destructor code */
}

/* hyIUnicodeString getValue (in hyIUnicodeString aKey); */
NS_IMETHODIMP hyUnicodeTable::GetValue(hyIUnicodeString *aKey, hyIUnicodeString * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void acceptTableVisitor (in hyIUnicodeTableVisitor aVisitor); */
NS_IMETHODIMP hyUnicodeTable::AcceptTableVisitor(hyIUnicodeTableVisitor *aVisitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIUnicodeTable_h__ */
