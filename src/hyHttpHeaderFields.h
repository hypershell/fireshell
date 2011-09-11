
#pragma once

#include "hyIHttpHeaderFields.h"
#include "nsIHttpHeaderVisitor.h"

#define HY_HTTPHEADERS_CID \
{ 0x14ad1cb8, 0xfa7a, 0x4887, { 0xb7, 0x92, 0x3c, 0x28, 0x50, 0x15, 0xfa, 0x1e } }

#define HY_HTTPHEADERS_CONTRACTID "@hypershell.org/hysh-http-headers;1"

class hyHttpHeaderFields 
    : public hyIHttpHeaderFields
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_HYIHTTPHEADERFIELDS
  NS_DECL_NSIHTTPHEADERVISITOR

  NS_IMETHOD SetValue(const nsACString & aKey, const nsACString & aValue);

  hyHttpHeaderFields();

private:
  ~hyHttpHeaderFields();

protected:
  /* additional members */
};
