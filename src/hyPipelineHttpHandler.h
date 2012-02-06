
#include "nsCOMPtr.h"
#include "hyIHttpHandler.h"
#include "hyIHttpHandlerListener.h"
#include "hyIPipelineHttpHandler.h"
#include "hyIHttpResponseChannelListener.h"

class hyPipelineHttpHandler 
  : public hyIPipelineHttpHandler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIPIPELINEHTTPHANDLER

  hyPipelineHttpHandler(
          hyIHttpHandler *aHandler,
          hyIHttpRequest *aRequest,
          hyIHttpHeaderFields *aHeaders);

  hyIHttpRequest* getRequest();
  hyIHttpHeaderFields* getRequestHeaders();
  hyIPipelineHttphandler* getNextPipeline();

private:
  ~hyPipelineHttpHandler();

  nsCOMPtr<hyIPipelineHttpHandler>  mNextPipeline;

  nsCOMPtr<hyIHttpHandler>          mHandler;
  nsCOMPtr<hyIHttpRequest>          mRequest;
  nsCOMPtr<hyIHttpHeaderFields>     mRequestHeaders;

protected:
  /* additional members */
};

class hyPipelineHttpHandlerInstance
  : public hyIHttpHandlerListener
  , public hyIHttpResponseChannelListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPHANDLERLISTENER
  NS_DECL_HYIHTTPRESPONSECHANNELLISTENER
  
  hyPipelineHttpHandlerInstance(
          hyIHttpHandlerListener *aHandlerListener,
          nsISupports *aHandlerContext,
          hyPipelineHttpHandler *aPipeline);
  
private:
  ~hyPipelineHttpHandlerInstance();

  nsCOMPtr<hyIHttpHandlerListener>  mHandlerListener;
  nsCOMPtr<nsISupports>             mHandlerContext;

  nsCOMPtr<hyIPipelineHttpHandler>  mPipeline;
}
