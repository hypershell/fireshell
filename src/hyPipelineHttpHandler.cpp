
#include "hyPipelineHttpHandler.h"

NS_IMPL_ISUPPORTS1(hyPipelineHttpHandler, hyIHttpHandler)

hyPipelineHttpHandler::hyPipelineHttpHandler(
          hyIHttpHandler *aHandler,
          hyIHttpRequest *aRequest,
          hyIHttpHeaderFields *aHeaders)
  : mHandler(aHandler)
  , mRequest(aRequest)
  , mHeaders(aHeaders)
{

}

hyPipelineHttpHandler::~hyHttpHandler()
{
  /* destructor code */
}

/* void acceptHttpRequestChannel (in hyIHttpRequestChannel aRequestChannel, in hyIHttpHandlerListener aListener, in nsISupports aContext); */
NS_IMETHODIMP hyPipelineHttpHandler::AcceptHttpRequestChannel(
        hyIHttpRequestChannel *aRequestChannel, 
        hyIHttpHandlerListener *aListener, 
        nsISupports *aContext)
{
    if(!mHandler) {
        return NS_ERROR_FAILURE;
    }

    nsCOMPtr<hyPipelineHttpHandlerInstance> instance = 
        new hyPipelineHttpHandlerInstance(aListener, aContext, mNextPipeline);

    return mHandler->AcceptHttpRequestChannel(aRequestChannel, instance, NULL);
}

/* void appendHttpChannel (in hyIHttpHandler aHandler); */
NS_IMETHODIMP hyPipelineHttpHandler::AppendHttpHandler(hyIHttpHandler *aHandler)
{
    if(!mHandler) {
        mHandler = aHandler;
    } else if(!mNextPipeline) {
        mNextPipeline = new hyPipelineHttpPipeline(aHandler);
    } else {
        return mNextPipeline->AppendHttpHandler(aHandler);
    }

    return NS_OK;
}

hyIHttpRequest* hyPipelineHttpHandler::getRequest() {
    return mRequest;
}

hyIHttpHeaderFields* hyPipelineHttpHandler::getRequestHeaders() {
    return mRequestHeaders;
}

hyIPipelineHttphandler* hyPipelineHttpHandler::getNextPipeline() {
    return mNextPipeline;
}

hyPipelineHttpHandlerInstance::hyPipelineHttpHandlerInstance(
          hyIHttpHandlerListener *aHandlerListener,
          nsISupports *aHandlerContext,
          hyPipelineHttpHandler *aPipeline)
  : mHandlerListener(aHandlerListener)
  , mHandlerContext(aHandlerContext)
  , mPipeline(aPipeline)
{

}

hyPipelineHttpHandlerInstance::~hyPipelineHttpHandlerInstance()
{

}

/* void onOutputHttpChannelReady (in hyIHttpResponseChannel aResponseChannel, in nsISupports aContext); */
NS_IMETHODIMP hyPipelineHttphandlerInstance:OnHttpResponseChannelReady(
        hyIHttpResponseChannel *aResponseChannel, 
        nsISupports *aContext)
{
    return aResponseChannel->OpenHttpResponseChannel(this, NULL);
}

/* void onHttpResponseReady (in hyIHttpResponse aResponse, in hyIDataChannel aDataChannel, in nsISupports aContext); */
NS_IMETHODIMP hyPipelineHttpHandlerInstance::OnHttpResponseReady(
        hyIHttpResponse     *aResponse, 
        hyIHttpHeaderFields *aHeaders,
        hyIDataChannel      *aDataChannel, 
        nsISupports         *aContext)
{
    nsresult rv;

    if(mPipeline->getNextPipeline() && !isErrorResponse(aResponse)) {
        nsCOMPtr<hyIHttpHeaderFields> newRequestHeaders;
        rv = ConvertResponseToRequestHeaders(
                aResponse, getter_AddRefs(requestHeaders));
        NS_ENSURE_SUCCESS(rv, rv);

        nsCOMPtr<hyIHttpRequestChannel> requestChannel
            = new hySimpleHttpRequestChannel(
                    mRequest, newRequestHeaders, 
                    aDataChannel, aContext);

        rv = mNextPipeline->AcceptHttpRequestChannel(
                requestChannel, mHandlerListener, mHandlerContext);
    } else {
        rv = mHandlerListener->OnHttpResponseReady(
                aResponse, aDataChannel, mHandlerContext);
    }

    mHandlerListener.forget();
    mHandlerContext.forget();

    return rv;
}
