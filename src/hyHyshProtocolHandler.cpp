

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
#include <list>

NS_IMPL_ISUPPORTS1(hyHyshProtocolHandler, nsIProtocolHandler)
NS_IMPL_CLASSINFO(hyHyshProtocolHandler, NULL, 0, HY_HYSHPROTOCOLHANDLER_CID)
NS_IMPL_CI_INTERFACE_GETTER1(hyHyshProtocolHandler, nsIProtocolHandler)

nsCString do_Substring(const nsACString& str, PRUint32 begin, PRUint32 end) {
    const nsACString& temp = Substring(str, begin, end);
    nsCString result(temp);

    return result;
}

nsCString do_ParseString(nsCString str) {
    //nsCString newStr;
    //NS_UnescapeURL(str, esc_OnlyNonASCII, newStr);
    str.Trim("%20");
    return str;
}

std::list<nsCString> do_SplitString(const nsACString& str, char separator) {
    std::list<nsCString> result;

    const char* current = str.BeginReading();
    const char* end = str.EndReading();
    int startPos = 0;
    int endPos = 0;

    while(current != end) {
        if(*current == separator) {
            int length = endPos - startPos;
            result.push_back(do_ParseString(do_Substring(str, startPos, length)));
           
            startPos = endPos + 1;
        }

        ++current;
        ++endPos;
    }

    if(startPos != endPos) {
        result.push_back(do_ParseString(do_Substring(str, startPos, endPos)));
    }

    return result;
}

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
    *aProtocolFlags = URI_STD & URI_LOADABLE_BY_ANYONE & URI_INHERITS_SECURITY_CONTEXT;
    return NS_OK;
}

/* nsIURI newURI (in AUTF8String aSpec, in string aOriginCharset, in nsIURI aBaseURI); */
NS_IMETHODIMP hyHyshProtocolHandler::NewURI(const nsACString & aSpec, const char * aOriginCharset, nsIURI *aBaseURI, nsIURI * *_retval NS_OUTPARAM)
{
    if(aBaseURI) {
        *_retval = aBaseURI;
        NS_ADDREF(*_retval);
        return NS_OK;
    }

    nsresult rv;
    nsCOMPtr<nsIURI> uri;

    nsCString spec(aSpec);
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

    std::string rawURIStr(PromiseFlatCString(rawURI).get());
    rawURIStr.substr(7, rawURIStr.length());
    
    nsCString rawURIList = do_Substring(rawURI, 7, rawURI.Length());

    rawURIList.Trim("%20");

    std::list<nsCString> URIList = do_SplitString(rawURIList, '|');
    
    nsCOMPtr<nsIIOService> ioServ(do_GetIOService(&rv));
    NS_ENSURE_SUCCESS(rv, rv);

    hyPipelineDataChannel *pipelineChannel = new hyPipelineDataChannel();

    rv = pipelineChannel->SetURI(aURI);
    NS_ENSURE_SUCCESS(rv, rv);

    for(auto it = URIList.begin(); it != URIList.end(); ++it) {
        nsCOMPtr<nsIURI> uri;
        rv = ioServ->NewURI(*it, NULL, NULL, getter_AddRefs(uri));
        NS_ENSURE_SUCCESS(rv, rv);
        

        hyDataChannel *dataChannel = new hyDataChannel();
        rv = dataChannel->Init(uri);
        NS_ENSURE_SUCCESS(rv, rv);

        rv = pipelineChannel->AddChannel(dataChannel);
        NS_ENSURE_SUCCESS(rv, rv);
    }

    hyNsChannelWrapper *wrapper = new hyNsChannelWrapper();
    rv = wrapper->Init(pipelineChannel);
    NS_ENSURE_SUCCESS(rv, rv);

    wrapper->AddRef();
    *_retval = wrapper;

    return NS_OK;
    
}

/* boolean allowPort (in long port, in string scheme); */
NS_IMETHODIMP hyHyshProtocolHandler::AllowPort(PRInt32 port, const char * scheme, bool *_retval NS_OUTPARAM)
{
    *_retval = false;
    return NS_OK;
}

