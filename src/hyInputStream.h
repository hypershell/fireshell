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
  NS_IMETHOD GetStreamSize(PRUint64 *aStreamSize);

  hyInputStream();

private:
  ~hyInputStream();

  typedef typename std::vector<nsCOMPtr<hyIDataBuffer> >::iterator _buffer_iterator_type;

  std::vector< nsCOMPtr<hyIDataBuffer> > mBufferList;
  
  /*
   * Offset of buffers that have been read
   */
  PRUint64  mReadSize;
  PRUint64  mCachedSize;
};
