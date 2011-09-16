#include "hyIDataChannel.h"
#include "nsIURI.h"
#include "nsCOMPtr.h"
#include <list>

class hyPipelineDataChannel : public hyIDataChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIDATACHANNEL

  hyPipelineDataChannel();

  NS_IMETHOD AddChannel(hyIDataChannel *aChannel);
  NS_IMETHOD SetURI(nsIURI *aURI);

private:
  ~hyPipelineDataChannel();

  nsCOMPtr<hyIDataChannel>  mFirstChannel;
  nsCOMPtr<hyIDataChannel>  mLastChannel;
  nsCOMPtr<nsIURI>      mURI;

  bool mOpenedState;
};


