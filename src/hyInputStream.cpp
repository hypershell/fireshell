#include "hyInputStream.h"

NS_IMPL_ISUPPORTS1(hyInputStream, nsIInputStream)

hyInputStream::hyInputStream()
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
    return NS_OK;
}

NS_IMETHODIMP hyInputStream::GetStreamSize(PRUint64 *streamSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}


/* void close (); */
NS_IMETHODIMP hyInputStream::Close()
{
    return NS_OK;
}

/* unsigned long available (); */
NS_IMETHODIMP hyInputStream::Available(PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] unsigned long read (in charPtr aBuf, in unsigned long aCount); */
NS_IMETHODIMP hyInputStream::Read(char *aBuf, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
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
