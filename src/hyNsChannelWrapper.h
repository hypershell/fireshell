
#include "nsIChannel.h"
#include "nsIStreamListener.h"
#include "hyIDataChannel.h"
#include "hyIDataChannelListener.h"
#include "hyIDataBuffer.h"
#include "nsCOMPtr.h"

class hyNsChannelWrapper 
    : public nsIChannel
    , public hyIDataChannelListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICHANNEL
  NS_DECL_NSIREQUEST
  NS_DECL_HYIDATACHANNELLISTENER

  hyNsChannelWrapper();

  NS_IMETHOD Init(hyIDataChannel *channel);

private:
  ~hyNsChannelWrapper();

  nsCOMPtr<hyIDataChannel>      mChannel;
  nsCOMPtr<nsIStreamListener>   mListener;
  nsCOMPtr<nsISupports>         mContext;
  
  PRUint64      mPos;
  bool          mOpeningState;
  bool          mOpenedState;
};
