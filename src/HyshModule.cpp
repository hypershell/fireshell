

#include "hyDataChannel.h"
#include "hyDataBuffer.h"
#include "hyHttpHeaderFields.h"
#include "hyChannelToStreamConverter.h"
#include "hyHyshProtocolHandler.h"
#include "mozilla/ModuleUtils.h"
#include "nsIClassInfoImpl.h"

NS_GENERIC_FACTORY_CONSTRUCTOR(hyDataChannel)
NS_GENERIC_FACTORY_CONSTRUCTOR(hyDataBuffer)
NS_GENERIC_FACTORY_CONSTRUCTOR(hyHttpHeaderFields)
NS_GENERIC_FACTORY_CONSTRUCTOR(hyChannelToStreamConverter)
NS_GENERIC_FACTORY_CONSTRUCTOR(hyHyshProtocolHandler)

NS_DEFINE_NAMED_CID(HY_DATACHANNEL_CID);
NS_DEFINE_NAMED_CID(HY_DATABUFFER_CID);
NS_DEFINE_NAMED_CID(HY_HTTPHEADERS_CID);
NS_DEFINE_NAMED_CID(HY_CHANNELTOSTREAMCONVERTER_CID);
NS_DEFINE_NAMED_CID(HY_HYSHPROTOCOLHANDLER_CID);

static const mozilla::Module::CIDEntry kHyshCIDs[] = {
    { &kHY_DATACHANNEL_CID, false, NULL, hyDataChannelConstructor },
    { &kHY_DATABUFFER_CID, false, NULL, hyDataBufferConstructor },
    { &kHY_HTTPHEADERS_CID, false, NULL, hyHttpHeaderFieldsConstructor },
    { &kHY_CHANNELTOSTREAMCONVERTER_CID, false, NULL, hyChannelToStreamConverterConstructor },
    { &kHY_HYSHPROTOCOLHANDLER_CID, false, NULL, hyHyshProtocolHandlerConstructor},
    { NULL }
};

static const mozilla::Module::ContractIDEntry kHyshContracts[] = {
    { HY_DATACHANNEL_CONTRACTID, &kHY_DATACHANNEL_CID },
    { HY_DATABUFFER_CONTRACTID, &kHY_DATABUFFER_CID },
    { HY_HTTPHEADERS_CONTRACTID, &kHY_HTTPHEADERS_CID },
    { HY_CHANNELTOSTREAMCONVERTER_CONTRACTID, &kHY_CHANNELTOSTREAMCONVERTER_CID },
    { HY_HYSHPROTOCOLHANDLER_CONTRACTID, &kHY_HYSHPROTOCOLHANDLER_CID},
    { NULL }
};

static const mozilla::Module::CategoryEntry kHyshCategories[] = {
    { "fireshell", "fireshell", HY_DATACHANNEL_CONTRACTID },
    { "fireshell", "fireshell", HY_DATABUFFER_CONTRACTID },
    { "fireshell", "fireshell", HY_HTTPHEADERS_CONTRACTID },
    { "fireshell", "fireshell", HY_CHANNELTOSTREAMCONVERTER_CONTRACTID },
    { "fireshell", "fireshell", HY_HYSHPROTOCOLHANDLER_CONTRACTID },
    { NULL }
};

static const mozilla::Module kHyshModule = {
    mozilla::Module::kVersion,
    kHyshCIDs,
    kHyshContracts,
    kHyshCategories
};

NSMODULE_DEFN(HyshModule) = &kHyshModule;
