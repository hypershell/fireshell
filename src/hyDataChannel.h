
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
{ 0x6b3cadbe, 0x686b, 0x4a16, { 0x99, 0xe6, 0x03, 0xab, 0x39, 0xc6, 0x77, 0x42 } }

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

  NS_IMETHOD OpenActualChannel();

  hyDataChannel();

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
  nsCOMPtr<nsIHttpChannel>          mActualChannel;

  bool mOpeningState;
  bool mOpenedState;
  bool mClosedState;
  bool mHasUpload;
};
