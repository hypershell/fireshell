#include "hyInputStream.h"

NS_IMPL_ISUPPORTS1(hyInputStream, nsIInputStream)

hyInputStream::hyInputStream()
    : mReadSize(0)
    , mCachedSize(0)
{
  /* member initializers and constructor code */
}

hyInputStream::~hyInputStream()
{
  /* destructor code */
}

NS_IMETHODIMP hyInputStream::AddBuffer(hyIDataBuffer *buffer)
{
    mBufferList.push_back(buffer);
    mCachedSize = 0;
    return NS_OK;
}

NS_IMETHODIMP hyInputStream::GetStreamSize(PRUint64 *aStreamSize)
{
    PRUint64 streamSize = 0;

    if(mCachedSize) {
        streamSize = mCachedSize;
    } else if(mBufferList.size() == 0) {
        streamSize = 0;
    } else {
        nsresult rv;
        PRUint64 bufferSize = 0;

        for(_buffer_iterator_type it = mBufferList.begin();
                it != mBufferList.end();
                ++it)
        {
            hyIDataBuffer *buffer = *it;
            
            rv = buffer->GetSize(&bufferSize);
            NS_ENSURE_SUCCESS(rv, rv);

            streamSize += bufferSize;
        }
    }

    *aStreamSize = streamSize;
    
    return NS_OK;
}


/* void close (); */
NS_IMETHODIMP hyInputStream::Close()
{
    mReadSize = 0;
    return NS_OK;
}

/* unsigned long available (); */
NS_IMETHODIMP hyInputStream::Available(PRUint32 *_retval NS_OUTPARAM)
{
    nsresult rv;
    PRUint64 streamSize = 0;

    rv = GetStreamSize(&streamSize);
    NS_ENSURE_SUCCESS(rv, rv);

    *_retval = streamSize - mReadSize;
    return NS_OK;
}

/* [noscript] unsigned long read (in charPtr aBuf, in unsigned long aCount); */
NS_IMETHODIMP hyInputStream::Read(char *aBuf, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM)
{
    nsresult rv;
    PRUint64 bufferSize;
    hyIDataBuffer *buffer;
    char *rawBuffer;

    PRUint64 totalSize = 0;
    PRUint64 totalReadSize = 0;
    PRUint64 max = aCount;
    
    for(_buffer_iterator_type it = mBufferList.begin();
        it != mBufferList.end();
        ++it)
    {
        buffer = *it;
        rv = buffer->GetSize(&bufferSize);
        NS_ENSURE_SUCCESS(rv, rv);

        rv = buffer->GetBuffer(&rawBuffer);
        NS_ENSURE_SUCCESS(rv, rv);
        
        if(totalSize + bufferSize > mReadSize) {
            if(totalSize < mReadSize) {
                PRUint64 difference = mReadSize - totalSize;
                *rawBuffer += difference;
                bufferSize -= difference;
            }

            if(totalReadSize + bufferSize > max) {
                bufferSize = max - totalReadSize;
            }

            memcpy(aBuf, rawBuffer, (size_t)bufferSize);
            aBuf += bufferSize;
            totalReadSize += bufferSize;
        }
        totalSize += bufferSize;
    }

    mReadSize += totalSize;
    *_retval = mReadSize;
    return NS_OK;
}

/* [noscript] unsigned long readSegments (in nsWriteSegmentFun aWriter, in voidPtr aClosure, in unsigned long aCount); */
NS_IMETHODIMP hyInputStream::ReadSegments(nsWriteSegmentFun aWriter, void *aClosure, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isNonBlocking (); */
NS_IMETHODIMP hyInputStream::IsNonBlocking(PRBool *_retval NS_OUTPARAM)
{
    *_retval = true;
    return NS_OK;
}
