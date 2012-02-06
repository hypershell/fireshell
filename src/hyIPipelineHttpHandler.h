/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/crf/dev/mozilla-central/extensions/fireshell/public/hyIPipelineHttpHandler.idl
 */

#ifndef __gen_hyIPipelineHttpHandler_h__
#define __gen_hyIPipelineHttpHandler_h__


#ifndef __gen_hyIHttpHandler_h__
#include "hyIHttpHandler.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    hyIPipelineHttpHandler */
#define HYIPIPELINEHTTPHANDLER_IID_STR "8a762cae-6771-4078-882d-6e0813629b47"

#define HYIPIPELINEHTTPHANDLER_IID \
  {0x8a762cae, 0x6771, 0x4078, \
    { 0x88, 0x2d, 0x6e, 0x08, 0x13, 0x62, 0x9b, 0x47 }}

class NS_NO_VTABLE NS_SCRIPTABLE hyIPipelineHttpHandler : public hyIHttpHandler {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(HYIPIPELINEHTTPHANDLER_IID)

  /* void appendHttpHandler (in hyIHttpHandler aHandler, in hyIHttpRequest aRequest, in hyIHttpHeaderFields aHeaders); */
  NS_SCRIPTABLE NS_IMETHOD AppendHttpHandler(hyIHttpHandler *aHandler, hyIHttpRequest *aRequest, hyIHttpHeaderFields *aHeaders) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(hyIPipelineHttpHandler, HYIPIPELINEHTTPHANDLER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_HYIPIPELINEHTTPHANDLER \
  NS_SCRIPTABLE NS_IMETHOD AppendHttpHandler(hyIHttpHandler *aHandler, hyIHttpRequest *aRequest, hyIHttpHeaderFields *aHeaders); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_HYIPIPELINEHTTPHANDLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AppendHttpHandler(hyIHttpHandler *aHandler, hyIHttpRequest *aRequest, hyIHttpHeaderFields *aHeaders) { return _to AppendHttpHandler(aHandler, aRequest, aHeaders); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_HYIPIPELINEHTTPHANDLER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AppendHttpHandler(hyIHttpHandler *aHandler, hyIHttpRequest *aRequest, hyIHttpHeaderFields *aHeaders) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendHttpHandler(aHandler, aRequest, aHeaders); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class hyPipelineHttpHandler : public hyIPipelineHttpHandler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIPIPELINEHTTPHANDLER

  hyPipelineHttpHandler();

private:
  ~hyPipelineHttpHandler();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(hyPipelineHttpHandler, hyIPipelineHttpHandler)

hyPipelineHttpHandler::hyPipelineHttpHandler()
{
  /* member initializers and constructor code */
}

hyPipelineHttpHandler::~hyPipelineHttpHandler()
{
  /* destructor code */
}

/* void appendHttpHandler (in hyIHttpHandler aHandler, in hyIHttpRequest aRequest, in hyIHttpHeaderFields aHeaders); */
NS_IMETHODIMP hyPipelineHttpHandler::AppendHttpHandler(hyIHttpHandler *aHandler, hyIHttpRequest *aRequest, hyIHttpHeaderFields *aHeaders)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_hyIPipelineHttpHandler_h__ */
