
#include "nsIProtocolHandler.h"
#include "nsIURI.h"

#define HY_HYSHPROTOCOLHANDLER_CID \
{ 0xa42e7172, 0x1eb7, 0x4aae, { 0xb7, 0x60, 0x94, 0x1e, 0x5d, 0x43, 0x8c, 0x82 } }

#define HY_HYSHPROTOCOLHANDLER_CONTRACTID "@mozilla.org/network/protocol;1?name=hysh"

class hyHyshProtocolHandler : public nsIProtocolHandler
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPROTOCOLHANDLER
  
  hyHyshProtocolHandler(); 

private:
  ~hyHyshProtocolHandler(); 
}; 
