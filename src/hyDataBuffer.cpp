#include "hyDataBuffer.h"
#include "nsIClassInfoImpl.h"
#include "nsISupportsImpl.h"
#include "nsMemory.h"

NS_IMPL_ISUPPORTS1(hyDataBuffer, hyIDataBuffer)
NS_IMPL_CI_INTERFACE_GETTER1(hyDataBuffer, hyIDataBuffer)
NS_IMPL_CLASSINFO(hyDataBuffer, NULL, 0, HY_DATABUFFER_CID)

hyDataBuffer::hyDataBuffer()
    : mBuffer(0)
    , mBufferSize(0)
    , mEffectiveSize(0)
    , mInitialized(false)
{
  /* member initializers and constructor code */
}

hyDataBuffer::~hyDataBuffer()
{
    /* destructor code */
    if(mBuffer) {
        NS_Free(mBuffer);
    }
}

NS_IMETHODIMP hyDataBuffer::Init(PRUint64 aSize) {
    if(mInitialized) {
        return NS_ERROR_NOT_INITIALIZED;
    }
    
    mInitialized = true;
    mBufferSize = aSize;

    mBuffer = (char*)NS_Alloc(aSize);
    return NS_OK;
}

NS_IMETHODIMP hyDataBuffer::SetEffectiveSize(PRUint64 aSize) {
    if(!mInitialized) {
        return NS_ERROR_NOT_INITIALIZED;
    }

    if(aSize > mBufferSize) {
        return NS_ERROR_FAILURE;
    }

    mEffectiveSize = aSize;
    return NS_OK;
}

/* readonly attribute unsigned long long size; */
NS_IMETHODIMP hyDataBuffer::GetSize(PRUint64 *aSize)
{
    *aSize = mEffectiveSize;
    return NS_OK;
}

/* string getBuffer (); */
NS_IMETHODIMP hyDataBuffer::GetBuffer(char * *_retval NS_OUTPARAM)
{
    *_retval = mBuffer;
    return NS_OK;
}

