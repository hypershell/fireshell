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
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getValue (in ACString aKey); */
NS_IMETHODIMP hyHttpHeaderFields::GetValue(const nsACString & aKey, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long count; */
NS_IMETHODIMP hyHttpHeaderFields::GetCount(PRInt32 *aCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getKeyAt (in long aPos); */
NS_IMETHODIMP hyHttpHeaderFields::GetKeyAt(PRInt32 aPos, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getValueAt (in long aPost); */
NS_IMETHODIMP hyHttpHeaderFields::GetValueAt(PRInt32 aPos, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void visitHeader (in ACString aHeader, in ACString aValue); */
NS_IMETHODIMP hyHttpHeaderFields::VisitHeader(const nsACString & aHeader, const nsACString & aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void acceptHeaderVisitor (in nsIHttpHeaderVisitor aVisitor); */
NS_IMETHODIMP hyHttpHeaderFields::AcceptHeaderVisitor(nsIHttpHeaderVisitor *aVisitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
