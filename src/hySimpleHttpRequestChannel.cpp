
#include "nsCOMPtr.h"
#include "hyIHttpRequestChannel.h"

class hySimpleHttpRequestChannel : public hyIHttpRequestChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPREQUESTCHANNEL

  hySimpleHttpRequestChannel(hyIHttpRequest *aRequest, hyIDataChannel *aDataChannel);

private:
  ~hySimpleHttpRequestChannel();

  nsCOMPtr<hyIHttpRequest>  mRequest;
  nsCOMPtr<hyIDataChannel>  mDataChannel;

protected:
  /* additional members */
};
