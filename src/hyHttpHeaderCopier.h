#include "nsIHttpHeaderVisitor.h"
#include "hyIHttpHeaderFields.h"
#include "nsIHttpChannel.h"
#include "nsCOMPtr.h"

class hyHttpHeaderCopier : public nsIHttpHeaderVisitor
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHTTPHEADERVISITOR

  hyHttpHeaderCopier();

  NS_IMETHOD Init(hyIHttpHeaderFields *aSource, nsIHttpChannel *aDestination);

  NS_IMETHOD DoCopy();
private:
  ~hyHttpHeaderCopier();

  nsCOMPtr<hyIHttpHeaderFields>     mSource;
  nsCOMPtr<nsIHttpChannel>          mDestination;
};
