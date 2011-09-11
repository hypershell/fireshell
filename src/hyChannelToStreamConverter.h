#pragma once

#include "hyIChannelToStreamConverter.h"
#include "hyInputStream.h"
#include "hyIDataChannelListener.h"
#include "nsCOMPtr.h"
#include <list>

#define HY_CHANNELTOSTREAMCONVERTER_CID \
{ 0x144e4329, 0x2403, 0x4ec7, { 0x8d, 0x68, 0x10, 0x35, 0x84, 0xc5, 0x9f, 0x52 } }

#define HY_CHANNELTOSTREAMCONVERTER_CONTRACTID "@hypershell.org/hysh-channel-to-stream-converter;1"

class hyChannelToStreamConverter 
    : public hyIChannelToStreamConverter
    , public hyIDataChannelListener
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYICHANNELTOSTREAMCONVERTER
  NS_DECL_HYIDATACHANNELLISTENER

  hyChannelToStreamConverter();

private:
  ~hyChannelToStreamConverter();

  nsCOMPtr<hyIChannelToStreamConverterListener> mListener;
  nsCOMPtr<nsISupports> mContext;
  nsCOMPtr<hyInputStream> mStreamSimulator;

  bool mOpenedState;
  bool mClosedState;
};
