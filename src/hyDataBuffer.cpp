#include "hyDataBuffer.h"
#include "nsIClassInfoImpl.h"

NS_IMPL_ISUPPORTS2(hyDataBuffer, hyIDataBuffer, nsIInputStream)
NS_IMPL_CLASSINFO(hyDataBuffer, NULL, 0, HY_DATABUFFER_CID)

hyDataBuffer::hyDataBuffer()
{
  /* member initializers and constructor code */
}

hyDataBuffer::~hyDataBuffer()
{
  /* destructor code */
}

NS_IMETHODIMP hyDataBuffer::Init(PRUint64 aSize) {
    return NS_ERROR_NOT_IMPLEMENTED;
}

NS_IMETHODIMP hyDataBuffer::SetActualSize(PRUint64 aSize) {
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long long getLength (); */
NS_IMETHODIMP hyDataBuffer::GetLength(PRUint64 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* voidPtr getBuffer (); */
NS_IMETHODIMP hyDataBuffer::GetBuffer(void **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (); */
NS_IMETHODIMP hyDataBuffer::Close()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long available (); */
NS_IMETHODIMP hyDataBuffer::Available(PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] unsigned long read (in charPtr aBuf, in unsigned long aCount); */
NS_IMETHODIMP hyDataBuffer::Read(char *aBuf, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] unsigned long readSegments (in nsWriteSegmentFun aWriter, in voidPtr aClosure, in unsigned long aCount); */
NS_IMETHODIMP hyDataBuffer::ReadSegments(nsWriteSegmentFun aWriter, void *aClosure, PRUint32 aCount, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isNonBlocking (); */
NS_IMETHODIMP hyDataBuffer::IsNonBlocking(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
