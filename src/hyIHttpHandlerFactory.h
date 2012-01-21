/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIHttpHandlerFactory.idl
 */

#ifndef __gen_hyIHttpHandlerFactory_h__
#define __gen_hyIHttpHandlerFactory_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_hyIHttpHandler_h__
#include "hyIHttpHandler.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIHttpHandlerFactory */
#define HYIHTTPHANDLERFACTORY_IID_STR "cd2530da-d5f0-4fcf-af31-812d17a4d631"

#define HYIHTTPHANDLERFACTORY_IID \
  {0xcd2530da, 0xd5f0, 0x4fcf, \
    { 0xaf, 0x31, 0x81, 0x2d, 0x17, 0xa4, 0xd6, 0x31 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIHttpHandlerFactory : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIHTTPHANDLERFACTORY_IID)

  /* hyIHttpHandler createHttpHandler (); */
  NS_SCRIPTABLE NS_IMETHOD CreateHttpHandler(hyIHttpHandler * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIHttpHandlerFactory, HYIHTTPHANDLERFACTORY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIHTTPHANDLERFACTORY \
  NS_SCRIPTABLE NS_IMETHOD CreateHttpHandler(hyIHttpHandler * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIHTTPHANDLERFACTORY(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateHttpHandler(hyIHttpHandler * *_retval NS_OUTPARAM) { return _to CreateHttpHandler(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIHTTPHANDLERFACTORY(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateHttpHandler(hyIHttpHandler * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateHttpHandler(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyHttpHandlerFactory : public hyIHttpHandlerFactory
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPHANDLERFACTORY

  hyHttpHandlerFactory();

private:
  ~hyHttpHandlerFactory();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyHttpHandlerFactory, hyIHttpHandlerFactory)

hyHttpHandlerFactory::hyHttpHandlerFactory()
{
  /* member initializers and constructor code */
}

hyHttpHandlerFactory::~hyHttpHandlerFactory()
{
  /* destructor code */
}

/* hyIHttpHandler createHttpHandler (); */
NS_IMETHODIMP hyHttpHandlerFactory::CreateHttpHandler(hyIHttpHandler * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIHttpHandlerFactory_h__ */
