
#pragma once

#include "hyIDataChannel.h"
#include "hyIHttpChannel.h"
#include "hyIDataChannelListener.h"
#include "hyIHttpHeaderFields.h"
#include "hyIChannelToStreamConverter.h"
#include "hyIChannelToStreamConverterListener.h"
#include "nsCOMPtr.h"
#include "nsStringAPI.h"
#include "nsIChannel.h"
#include "nsIHttpChannel.h"
#include "nsIStreamListener.h"

#define HY_DATACHANNEL_CID \
{ 0x47a17490, 0x5c85, 0x4d9c, { 0x91, 0x46, 0x08, 0x72, 0x64, 0xd8, 0x9b, 0x03 } }

#define HY_DATACHANNEL_CONTRACTID "@hypershell.org/hysh-datachannel;1"

class hyDataChannel : public hyIDataChannel 
                    , public hyIHttpChannel
                    , public nsIStreamListener
                    , public hyIChannelToStreamConverterListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIDATACHANNEL
  NS_DECL_HYIHTTPCHANNEL
  NS_DECL_HYICHANNELTOSTREAMCONVERTERLISTENER
  NS_DECL_NSISTREAMLISTENER
  NS_DECL_NSIREQUESTOBSERVER

  NS_IMETHOD Init(nsIURI *aURI);

  NS_IMETHOD ConvertResponseToRequest(hyIHttpHeaderFields *response, hyIHttpHeaderFields **request);


  hyDataChannel();

protected:
  NS_IMETHOD OpenActualChannel();

private:
  ~hyDataChannel();

  nsCOMPtr<nsIURI>                  mURI;
  nsCString                         mMethod;
  nsCString                         mRequestContentType;
  nsCOMPtr<hyIHttpHeaderFields>     mRequestHeaders;
  
  PRInt32                           mResponseStatusCode;
  nsCString                         mResponseStatusText;
  nsCString                         mResponseContentType;
  nsCOMPtr<hyIHttpHeaderFields>     mResponseHeaders;
  
  nsCOMPtr<hyIDataChannel>          mIncomingChannel;
  
  nsCOMPtr<hyIDataChannelListener>  mListener;
  nsCOMPtr<nsISupports>             mContext;
  
  nsCOMPtr<hyIChannelToStreamConverter> mChannelConverter;
  nsCOMPtr<nsIChannel>              mActualChannel;
  nsCOMPtr<nsIHttpChannel>          mActualHttpChannel;

  bool mOpeningState;
  bool mOpenedState;
  bool mClosedState;
  bool mHasUpload;
};
