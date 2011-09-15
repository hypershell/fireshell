#include "hyHttpHeaderCopier.h"

NS_IMPL_ISUPPORTS1(hyHttpHeaderCopier, nsIHttpHeaderVisitor)

hyHttpHeaderCopier::hyHttpHeaderCopier()
{
  /* member initializers and constructor code */
}

hyHttpHeaderCopier::~hyHttpHeaderCopier()
{
  /* destructor code */
}

NS_IMETHODIMP hyHttpHeaderCopier::Init(hyIHttpHeaderFields *aSource, nsIHttpChannel *aDestination) {
    mSource = aSource;
    mDestination = aDestination;

    return NS_OK;
}

NS_IMETHODIMP hyHttpHeaderCopier::DoCopy() {
    return mSource->AcceptHeaderVisitor(this);
}

/* void visitHeader (in ACString aHeader, in ACString aValue); */
NS_IMETHODIMP hyHttpHeaderCopier::VisitHeader(const nsACString & aHeader, const nsACString & aValue)
{
    return mDestination->SetRequestHeader(aHeader, aValue, false);
}
