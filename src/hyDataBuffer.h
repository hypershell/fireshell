
#pragma once

#include "hyIDataBuffer.h"

#define HY_DATABUFFER_CID \
{ 0xfe92ccf0, 0x5f6d, 0x45ba, { 0xb3, 0x96, 0xfa, 0x31, 0xd7, 0xdc, 0x0e, 0x90 } }

#define HY_DATABUFFER_CONTRACTID "@hypershell.org/hysh-databuffer;1"

class hyDataBuffer 
    : public hyIDataBuffer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIDATABUFFER

  hyDataBuffer();

  NS_IMETHODIMP Init(PRUint64 aSize);
  NS_IMETHODIMP SetEffectiveSize(PRUint64 aSize);

private:
  ~hyDataBuffer();

  char*     mBuffer;
  PRUint64  mBufferSize;
  PRUint64  mEffectiveSize;
  bool      mInitialized;
};
