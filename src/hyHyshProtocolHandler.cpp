
#include "hyHyshProtocolHandler.h"
#include "nsStringAPI.h"
#include "nsIClassInfoImpl.h"
#include "hyDataChannel.h"
#include "hyPipelineDataChannel.h"
#include "hyNsChannelWrapper.h"
#include "nsNetUtil.h"
#include "nsIConsoleService.h"
#include "nsIComponentManager.h"
#include <string>

NS_IMPL_ISUPPORTS1(hyHyshProtocolHandler, nsIProtocolHandler)
NS_IMPL_CLASSINFO(hyHyshProtocolHandler, NULL, 0, HY_HYSHPROTOCOLHANDLER_CID)
NS_IMPL_CI_INTERFACE_GETTER1(hyHyshProtocolHandler, nsIProtocolHandler)

hyHyshProtocolHandler::hyHyshProtocolHandler()
{
  /* member initializers and constructor code */
}

hyHyshProtocolHandler::~hyHyshProtocolHandler()
{
  /* destructor code */
}

/* readonly attribute ACString scheme; */
NS_IMETHODIMP hyHyshProtocolHandler::GetScheme(nsACString & aScheme)
{
    aScheme = NS_LITERAL_CSTRING("hysh");
    return NS_OK;
}

/* readonly attribute long defaultPort; */
NS_IMETHODIMP hyHyshProtocolHandler::GetDefaultPort(PRInt32 *aDefaultPort)
{
    *aDefaultPort = -1;
    return NS_OK;
}

/* readonly attribute unsigned long protocolFlags; */
NS_IMETHODIMP hyHyshProtocolHandler::GetProtocolFlags(PRUint32 *aProtocolFlags)
{
    *aProtocolFlags = URI_STD;
    return NS_OK;
}

/* nsIURI newURI (in AUTF8String aSpec, in string aOriginCharset, in nsIURI aBaseURI); */
NS_IMETHODIMP hyHyshProtocolHandler::NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval NS_OUTPARAM)
{
    nsresult rv;
    nsCOMPtr<nsIURI> uri;

    uri = do_CreateInstance("@mozilla.org/network/simple-uri;1", &rv);
    NS_ENSURE_SUCCESS(rv, rv);
    
    rv = uri->SetSpec(aSpec);
    NS_ENSURE_SUCCESS(rv, rv);

    uri.forget(_retval);
    return NS_OK;

}

/* nsIChannel newChannel (in nsIURI aURI); */
NS_IMETHODIMP hyHyshProtocolHandler::NewChannel(nsIURI *aURI, nsIChannel * *_retval NS_OUTPARAM)
{
    nsCString rawURI;
    nsresult rv;

    rv = aURI->GetSpec(rawURI);
    NS_ENSURE_SUCCESS(rv, rv);

    const nsACString& rawURIList = Substring(rawURI, 7, rawURI.Length());

    std::string uriStr(PromiseFlatString(rawURIList));

    nsCOMPtr<nsIIOService> ioServ(do_GetIOService(&rv));
    NS_ENSURE_SUCCESS(rv, rv);
    //return ioServ->NewChannel(rawURIList, NULL, NULL, _retval);

    nsCOMPtr<nsIURI> uri;
    rv = ioServ->NewURI(rawURIList, NULL, NULL, getter_AddRefs(uri));
    NS_ENSURE_SUCCESS(rv, rv);

    hyDataChannel *dataChannel = new hyDataChannel();
    rv = dataChannel->Init(uri);
    NS_ENSURE_SUCCESS(rv, rv);

    hyPipelineDataChannel *pipelineChannel = new hyPipelineDataChannel();
    rv = pipelineChannel->AddChannel(dataChannel);
    NS_ENSURE_SUCCESS(rv, rv);

    rv = pipelineChannel->SetURI(aURI);
    NS_ENSURE_SUCCESS(rv, rv);


    nsCOMPtr<nsIURI> uri2;
    rv = ioServ->NewURI(
            NS_LITERAL_CSTRING("http://hypershell-demo.appspot.com/echo")
            , NULL, NULL, getter_AddRefs(uri2));
    NS_ENSURE_SUCCESS(rv, rv);

    hyDataChannel *dataChannel2 = new hyDataChannel();
    rv = dataChannel2->Init(uri2);
    NS_ENSURE_SUCCESS(rv, rv);

    rv = pipelineChannel->AddChannel(dataChannel2);
    NS_ENSURE_SUCCESS(rv, rv);


    hyNsChannelWrapper *wrapper = new hyNsChannelWrapper();
    rv = wrapper->Init(pipelineChannel);
    NS_ENSURE_SUCCESS(rv, rv);

    wrapper->AddRef();
    *_retval = wrapper;

    return NS_OK;
    
}

/* boolean allowPort (in long port, in string scheme); */
NS_IMETHODIMP hyHyshProtocolHandler::AllowPort(PRInt32 port, const char * scheme, PRBool *_retval NS_OUTPARAM)
{
    *_retval = false;
    return NS_OK;
}
