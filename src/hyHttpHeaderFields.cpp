#include "hyHttpHeaderFields.h"

NS_IMPL_ISUPPORTS1(hyHttpHeaderFields, hyIHttpHeaderFields)

hyHttpHeaderFields::hyHttpHeaderFields()
{
  /* member initializers and constructor code */
}

hyHttpHeaderFields::~hyHttpHeaderFields()
{
  /* destructor code */
}

/* void setValue (in ACString aKey, in ACString aValue); */
NS_IMETHODIMP hyHttpHeaderFields::SetValue(const nsACString & aKey, const nsACString & aValue)
{
    nsCString key;
    ToUpperCase(aKey, key);
    mHeaders[key] = aValue;
    return NS_OK;
}

/* ACString getValue (in ACString aKey); */
NS_IMETHODIMP hyHttpHeaderFields::GetValue(const nsACString & aKey, nsACString & _retval NS_OUTPARAM)
{
    nsCString key;
    ToUpperCase(aKey, key);
    _retval = mHeaders[key];
    return NS_OK;
}

/* void visitHeader (in ACString aHeader, in ACString aValue); */
NS_IMETHODIMP hyHttpHeaderFields::VisitHeader(const nsACString & aHeader, const nsACString & aValue)
{
    return SetValue(aHeader, aValue);
}

/* void acceptHeaderVisitor (in nsIHttpHeaderVisitor aVisitor); */
NS_IMETHODIMP hyHttpHeaderFields::AcceptHeaderVisitor(nsIHttpHeaderVisitor *aVisitor)
{
    nsresult rv;

    for(typename std::map<nsCString, nsCString>::iterator it = mHeaders.begin();
        it != mHeaders.end();
        ++it)
    {
        rv = aVisitor->VisitHeader(it->first, it->second);
        NS_ENSURE_SUCCESS(rv, rv);
    }
    return NS_OK;
}
