#pragma once

#include "nsIInputStream.h"
#include "hyIDataBuffer.h"
#include "nsCOMPtr.h"
#include <vector>

class hyInputStream : public nsIInputStream
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIINPUTSTREAM

  NS_IMETHOD AddBuffer(hyIDataBuffer *buffer);
  NS_IMETHOD GetStreamSize(PRUint64 *streamSize);

  hyInputStream();

private:
  ~hyInputStream();

  std::vector< nsCOMPtr<hyIDataBuffer> > mBufferList;
  PRInt64 mPos;

protected:
  /* additional members */
};
