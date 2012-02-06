/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpHandlerTable.idl
 */

#ifndef __gen_hyIHttpHandlerTable_h__
#define __gen_hyIHttpHandlerTable_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIHttpHandlerFactory_h__
#include "hyIHttpHandlerFactory.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpHandlerTable */
#define HYIHTTPHANDLERTABLE_IID_STR "a35db779-bcce-4682-8b5a-5b24584b50cf"

#define HYIHTTPHANDLERTABLE_IID \
  {0xa35db779, 0xbcce, 0x4682, \
    { 0x8b, 0x5a, 0x5b, 0x24, 0x58, 0x4b, 0x50, 0xcf }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpHandlerTable : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPHANDLERTABLE_IID)

  /* hyIHttpHandlerFactory getHttpHandlerFactory (in ACString aPath); */
  NS_SCRIPTABLE NS_IMETHOD GetHttpHandlerFactory(const nsACString & aPath, hyIHttpHandlerFactory * *_retval NS_OUTPARAM) = 0;

  /* void registerHttpHandlerFactory (in string aPath, in hyIHttpHandlerFactory aFactory); */
  NS_SCRIPTABLE NS_IMETHOD RegisterHttpHandlerFactory(const char * aPath, hyIHttpHandlerFactory *aFactory) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpHandlerTable, HYIHTTPHANDLERTABLE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPHANDLERTABLE \
  NS_SCRIPTABLE NS_IMETHOD GetHttpHandlerFactory(const nsACString & aPath, hyIHttpHandlerFactory * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RegisterHttpHandlerFactory(const char * aPath, hyIHttpHandlerFactory *aFactory); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPHANDLERTABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetHttpHandlerFactory(const nsACString & aPath, hyIHttpHandlerFactory * *_retval NS_OUTPARAM) { return _to GetHttpHandlerFactory(aPath, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterHttpHandlerFactory(const char * aPath, hyIHttpHandlerFactory *aFactory) { return _to RegisterHttpHandlerFactory(aPath, aFactory); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPHANDLERTABLE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetHttpHandlerFactory(const nsACString & aPath, hyIHttpHandlerFactory * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHttpHandlerFactory(aPath, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterHttpHandlerFactory(const char * aPath, hyIHttpHandlerFactory *aFactory) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterHttpHandlerFactory(aPath, aFactory); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpHandlerTable : public hyIHttpHandlerTable
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPHANDLERTABLE

  hyHttpHandlerTable();

private:
  ~hyHttpHandlerTable();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpHandlerTable, hyIHttpHandlerTable)

hyHttpHandlerTable::hyHttpHandlerTable()
{
  /* member initializers and constructor code */
}

hyHttpHandlerTable::~hyHttpHandlerTable()
{
  /* destructor code */
}

/* hyIHttpHandlerFactory getHttpHandlerFactory (in ACString aPath); */
NS_IMETHODIMP hyHttpHandlerTable::GetHttpHandlerFactory(const nsACString & aPath, hyIHttpHandlerFactory * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerHttpHandlerFactory (in string aPath, in hyIHttpHandlerFactory aFactory); */
NS_IMETHODIMP hyHttpHandlerTable::RegisterHttpHandlerFactory(const char * aPath, hyIHttpHandlerFactory *aFactory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpHandlerTable_h__ */
