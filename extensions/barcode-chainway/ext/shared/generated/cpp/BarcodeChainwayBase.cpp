#include "BarcodeChainwayBase.h"
#include "common/RhodesApp.h"


namespace rho {

IMPLEMENT_LOGCLASS(CBarcodeChainwaySingletonBase, "BarcodeChainway");
IMPLEMENT_LOGCLASS(CBarcodeChainwayBase, "BarcodeChainway");

rho::common::CAutoPtr< CBarcodeChainwayFactoryBase> CBarcodeChainwayFactoryBase::m_pInstance;



///////////////////////////////////////
//string constants definiton 
const char IBarcodeChainway::AIMMODE_DOT[] = "dot"; 
const char IBarcodeChainway::AIMMODE_NONE[] = "none"; 
const char IBarcodeChainway::AIMMODE_RETICLE[] = "reticle"; 
const char IBarcodeChainway::AIMMODE_SLAB[] = "slab"; 
const char IBarcodeChainway::AIMTYPE_CONTINUOUS_READ[] = "continuousRead"; 
const char IBarcodeChainway::AIMTYPE_PRESENTATION[] = "presentation"; 
const char IBarcodeChainway::AIMTYPE_PRESS_AND_RELEASE[] = "pressAndRelease"; 
const char IBarcodeChainway::AIMTYPE_TIMED_HOLD[] = "timedHold"; 
const char IBarcodeChainway::AIMTYPE_TIMED_RELEASE[] = "timedRelease"; 
const char IBarcodeChainway::AIMTYPE_TRIGGER[] = "trigger"; 
const char IBarcodeChainway::ALL_THRICE[] = "allThrice"; 
const char IBarcodeChainway::ALL_TWICE[] = "allTwice"; 
const char IBarcodeChainway::BEAM_NARROW[] = "narrow"; 
const char IBarcodeChainway::BEAM_NORMAL[] = "normal"; 
const char IBarcodeChainway::BEAM_WIDE[] = "wide"; 
const char IBarcodeChainway::BOOKLAND_ISBN10[] = "isbn10"; 
const char IBarcodeChainway::BOOKLAND_ISBN13[] = "isbn13"; 
const char IBarcodeChainway::CODE11_CHECKDIGIT_NONE[] = "none"; 
const char IBarcodeChainway::CODE11_CHECKDIGIT_ONE[] = "one"; 
const char IBarcodeChainway::CODE11_CHECKDIGIT_TWO[] = "two"; 
const char IBarcodeChainway::CODE128ISBT_ALWAYS[] = "always"; 
const char IBarcodeChainway::CODE128ISBT_AUTO[] = "auto"; 
const char IBarcodeChainway::CODE128ISBT_NEVER[] = "never"; 
const char IBarcodeChainway::DBP_COMPOSITE[] = "composite"; 
const char IBarcodeChainway::DBP_NORMAL[] = "normal"; 
const char IBarcodeChainway::FOCUS_AUTO[] = "auto"; 
const char IBarcodeChainway::FOCUS_FIXED[] = "fixed"; 
const char IBarcodeChainway::FORMAT_BINARY[] = "binary"; 
const char IBarcodeChainway::FORMAT_TEXT[] = "text"; 
const char IBarcodeChainway::I2OF5_VERIFY_NONE[] = "none"; 
const char IBarcodeChainway::I2OF5_VERIFY_OPCC[] = "opcc"; 
const char IBarcodeChainway::I2OF5_VERIFY_USS[] = "uss"; 
const char IBarcodeChainway::ILLUMINATION_ALWAYS_OFF[] = "alwaysOff"; 
const char IBarcodeChainway::ILLUMINATION_ALWAYS_ON[] = "alwaysOn"; 
const char IBarcodeChainway::ILLUMINATION_AUTO[] = "auto"; 
const char IBarcodeChainway::INVERSE_AUTO[] = "auto"; 
const char IBarcodeChainway::INVERSE_DISABLED[] = "disabled"; 
const char IBarcodeChainway::INVERSE_ENABLED[] = "enabled"; 
const char IBarcodeChainway::LONG_AND_SHORT[] = "longAndShort"; 
const char IBarcodeChainway::MSI_CHECKDIGITS_MOD10[] = "mod10"; 
const char IBarcodeChainway::MSI_CHECKDIGITS_MOD11[] = "mod11"; 
const char IBarcodeChainway::MSI_CHECKDIGITS_ONE[] = "one"; 
const char IBarcodeChainway::MSI_CHECKDIGITS_TWO[] = "two"; 
const char IBarcodeChainway::PICKLIST_DISABLED[] = "disabled"; 
const char IBarcodeChainway::PICKLIST_HARDWARE_RETICLE[] = "hardwareReticle"; 
const char IBarcodeChainway::PICKLIST_SOFTWARE_RETICLE[] = "softwareReticle"; 
const char IBarcodeChainway::RASTER_CYCLONE[] = "cyclone"; 
const char IBarcodeChainway::RASTER_NONE[] = "none"; 
const char IBarcodeChainway::RASTER_OPEN_ALWAYS[] = "openAlways"; 
const char IBarcodeChainway::RASTER_SMART[] = "smart"; 
const char IBarcodeChainway::REDUNDANCY_AND_LENGTH[] = "redundancyAndLength"; 
const char IBarcodeChainway::RSM_AUTORECONNECT_NONE[] = "none"; 
const char IBarcodeChainway::RSM_AUTORECONNECT_ON_OUT_OF_RANGE[] = "onOutOfRange"; 
const char IBarcodeChainway::RSM_AUTORECONNECT_ON_POWER[] = "onPower"; 
const char IBarcodeChainway::RSM_AUTORECONNECT_ON_POWER_OUT_OF_RANGE[] = "onPowerOutOfRange"; 
const char IBarcodeChainway::SHORT_OR_CODABAR[] = "shortOrCodabar"; 
const char IBarcodeChainway::UCC_ALWAYS[] = "always"; 
const char IBarcodeChainway::UCC_AUTO[] = "auto"; 
const char IBarcodeChainway::UCC_NEVER[] = "never"; 
const char IBarcodeChainway::UPCA_PREAMBLE_COUNTRY[] = "countryAndSystemChars"; 
const char IBarcodeChainway::UPCA_PREAMBLE_NONE[] = "none"; 
const char IBarcodeChainway::UPCA_PREAMBLE_SYSTEMCHAR[] = "systemChar"; 
const char IBarcodeChainway::UPCE0_PREAMBLE_COUNTRY[] = "countryAndSystemChars"; 
const char IBarcodeChainway::UPCE0_PREAMBLE_NONE[] = "none"; 
const char IBarcodeChainway::UPCE0_PREAMBLE_SYSTEMCHAR[] = "systemChar"; 
const char IBarcodeChainway::UPCE1_PREAMBLE_COUNTRY[] = "countryAndSystemChars"; 
const char IBarcodeChainway::UPCE1_PREAMBLE_NONE[] = "none"; 
const char IBarcodeChainway::UPCE1_PREAMBLE_SYSTEMCHAR[] = "systemChar"; 
const char IBarcodeChainway::UPCEAN_379[] = "378or379"; 
const char IBarcodeChainway::UPCEAN_439[] = "414or419or434or439"; 
const char IBarcodeChainway::UPCEAN_979[] = "978or979"; 
const char IBarcodeChainway::UPCEAN_ALWAYS[] = "always"; 
const char IBarcodeChainway::UPCEAN_AUTO[] = "auto"; 
const char IBarcodeChainway::UPCEAN_NONE[] = "none"; 
const char IBarcodeChainway::UPCEAN_SMART[] = "smart"; 
const char IBarcodeChainway::VF_FEEDBACK_DISABLED[] = "disabled"; 
const char IBarcodeChainway::VF_FEEDBACK_ENABLED[] = "enabled"; 
const char IBarcodeChainway::VF_FEEDBACK_RETICLE[] = "reticle"; 
const char IBarcodeChainway::VIEWFINDER_DISABLED[] = "disabled"; 
const char IBarcodeChainway::VIEWFINDER_DYNAMIC_RETICLE[] = "dynamicReticle"; 
const char IBarcodeChainway::VIEWFINDER_ENABLED[] = "enabled"; 
const char IBarcodeChainway::VIEWFINDER_STATIC_RETICLE[] = "staticReticle"; 

////////////////////////////////////////////////

CBarcodeChainwayBase::CBarcodeChainwayBase()
{

    m_mapPropAccessors["autoEnter"] = 0;
    m_mapPropAccessors["autoTab"] = 0;
    m_mapPropAccessors["hapticFeedback"] = 0;
    m_mapPropAccessors["linearSecurityLevel"] = 0;
    m_mapPropAccessors["scanTimeout"] = 0;
    m_mapPropAccessors["rasterMode"] = 0;
    m_mapPropAccessors["rasterHeight"] = 0;
    m_mapPropAccessors["aimType"] = 0;
    m_mapPropAccessors["timedAimDuration"] = 0;
    m_mapPropAccessors["sameSymbolTimeout"] = 0;
    m_mapPropAccessors["differentSymbolTimeout"] = 0;
    m_mapPropAccessors["aimMode"] = 0;
    m_mapPropAccessors["picklistMode"] = 0;
    m_mapPropAccessors["viewfinderMode"] = 0;
    m_mapPropAccessors["viewfinderX"] = 0;
    m_mapPropAccessors["viewfinderY"] = 0;
    m_mapPropAccessors["viewfinderWidth"] = 0;
    m_mapPropAccessors["viewfinderHeight"] = 0;
    m_mapPropAccessors["viewfinderFeedback"] = 0;
    m_mapPropAccessors["viewfinderFeedbackTime"] = 0;
    m_mapPropAccessors["focusMode"] = 0;
    m_mapPropAccessors["illuminationMode"] = 0;
    m_mapPropAccessors["dpmMode"] = 0;
    m_mapPropAccessors["inverse1dMode"] = 0;
    m_mapPropAccessors["poorQuality1dMode"] = 0;
    m_mapPropAccessors["beamWidth"] = 0;
    m_mapPropAccessors["dbpMode"] = 0;
    m_mapPropAccessors["klasseEins"] = 0;
    m_mapPropAccessors["adaptiveScanning"] = 0;
    m_mapPropAccessors["bidirectionalRedundancy"] = 0;
    m_mapPropAccessors["barcodeDataFormat"] = 0;
    m_mapPropAccessors["dataBufferSize"] = 0;
    m_mapPropAccessors["connectionIdleTimeout"] = 0;
    m_mapPropAccessors["disconnectBtOnDisable"] = 0;
    m_mapPropAccessors["displayBtAddressBarcodeOnEnable"] = 0;
    m_mapPropAccessors["enableTimeout"] = 0;
    m_mapPropAccessors["friendlyName"] = 0;
    m_mapPropAccessors["lcdMode"] = 0;
    m_mapPropAccessors["lowBatteryScan"] = 0;
    m_mapPropAccessors["triggerConnected"] = 0;
    m_mapPropAccessors["disableScannerDuringNavigate"] = 0;
    m_mapPropAccessors["decodeVolume"] = 0;
    m_mapPropAccessors["decodeDuration"] = 0;
    m_mapPropAccessors["decodeFrequency"] = 0;
    m_mapPropAccessors["invalidDecodeFrequency"] = 0;
    m_mapPropAccessors["decodeSound"] = 0;
    m_mapPropAccessors["invalidDecodeSound"] = 0;
    m_mapPropAccessors["scannerType"] = 0;
    m_mapPropAccessors["allDecoders"] = 0;
    m_mapPropAccessors["aztec"] = 0;
    m_mapPropAccessors["chinese2of5"] = 0;
    m_mapPropAccessors["codabar"] = 0;
    m_mapPropAccessors["codabarClsiEditing"] = 0;
    m_mapPropAccessors["codabarMaxLength"] = 0;
    m_mapPropAccessors["codabarMinLength"] = 0;
    m_mapPropAccessors["codabarNotisEditing"] = 0;
    m_mapPropAccessors["codabarRedundancy"] = 0;
    m_mapPropAccessors["code11"] = 0;
    m_mapPropAccessors["code11checkDigitCount"] = 0;
    m_mapPropAccessors["code11maxLength"] = 0;
    m_mapPropAccessors["code11minLength"] = 0;
    m_mapPropAccessors["code11redundancy"] = 0;
    m_mapPropAccessors["code11reportCheckDigit"] = 0;
    m_mapPropAccessors["code128"] = 0;
    m_mapPropAccessors["code128checkIsBtTable"] = 0;
    m_mapPropAccessors["code128ean128"] = 0;
    m_mapPropAccessors["code128isbt128"] = 0;
    m_mapPropAccessors["code128isbt128ConcatMode"] = 0;
    m_mapPropAccessors["code128maxLength"] = 0;
    m_mapPropAccessors["code128minLength"] = 0;
    m_mapPropAccessors["code128other128"] = 0;
    m_mapPropAccessors["code128redundancy"] = 0;
    m_mapPropAccessors["code128securityLevel"] = 0;
    m_mapPropAccessors["compositeAb"] = 0;
    m_mapPropAccessors["compositeAbUccLinkMode"] = 0;
    m_mapPropAccessors["compositeAbUseUpcPreambleCheckDigitRules"] = 0;
    m_mapPropAccessors["compositeC"] = 0;
    m_mapPropAccessors["code39"] = 0;
    m_mapPropAccessors["code39code32Prefix"] = 0;
    m_mapPropAccessors["code39convertToCode32"] = 0;
    m_mapPropAccessors["code39fullAscii"] = 0;
    m_mapPropAccessors["code39maxLength"] = 0;
    m_mapPropAccessors["code39minLength"] = 0;
    m_mapPropAccessors["code39redundancy"] = 0;
    m_mapPropAccessors["code39reportCheckDigit"] = 0;
    m_mapPropAccessors["code39securityLevel"] = 0;
    m_mapPropAccessors["code39verifyCheckDigit"] = 0;
    m_mapPropAccessors["code93"] = 0;
    m_mapPropAccessors["code93maxLength"] = 0;
    m_mapPropAccessors["code93minLength"] = 0;
    m_mapPropAccessors["code93redundancy"] = 0;
    m_mapPropAccessors["d2of5"] = 0;
    m_mapPropAccessors["d2of5maxLength"] = 0;
    m_mapPropAccessors["d2of5minLength"] = 0;
    m_mapPropAccessors["d2of5redundancy"] = 0;
    m_mapPropAccessors["datamatrix"] = 0;
    m_mapPropAccessors["ean13"] = 0;
    m_mapPropAccessors["ean8"] = 0;
    m_mapPropAccessors["ean8convertToEan13"] = 0;
    m_mapPropAccessors["i2of5"] = 0;
    m_mapPropAccessors["i2of5convertToEan13"] = 0;
    m_mapPropAccessors["i2of5maxLength"] = 0;
    m_mapPropAccessors["i2of5minLength"] = 0;
    m_mapPropAccessors["i2of5redundancy"] = 0;
    m_mapPropAccessors["i2of5reportCheckDigit"] = 0;
    m_mapPropAccessors["i2of5verifyCheckDigit"] = 0;
    m_mapPropAccessors["korean3of5"] = 0;
    m_mapPropAccessors["korean3of5redundancy"] = 0;
    m_mapPropAccessors["korean3of5maxLength"] = 0;
    m_mapPropAccessors["korean3of5minLength"] = 0;
    m_mapPropAccessors["macroPdf"] = 0;
    m_mapPropAccessors["macroPdfBufferLabels"] = 0;
    m_mapPropAccessors["macroPdfConvertToPdf417"] = 0;
    m_mapPropAccessors["macroPdfExclusive"] = 0;
    m_mapPropAccessors["macroMicroPdf"] = 0;
    m_mapPropAccessors["macroMicroPdfBufferLabels"] = 0;
    m_mapPropAccessors["macroMicroPdfConvertToMicroPdf"] = 0;
    m_mapPropAccessors["macroMicroPdfExclusive"] = 0;
    m_mapPropAccessors["macroMicroPdfReportAppendInfo"] = 0;
    m_mapPropAccessors["matrix2of5"] = 0;
    m_mapPropAccessors["matrix2of5maxLength"] = 0;
    m_mapPropAccessors["matrix2of5minLength"] = 0;
    m_mapPropAccessors["matrix2of5reportCheckDigit"] = 0;
    m_mapPropAccessors["matrix2of5verifyCheckDigit"] = 0;
    m_mapPropAccessors["maxiCode"] = 0;
    m_mapPropAccessors["microPdf"] = 0;
    m_mapPropAccessors["microQr"] = 0;
    m_mapPropAccessors["msi"] = 0;
    m_mapPropAccessors["msiCheckDigits"] = 0;
    m_mapPropAccessors["msiCheckDigitScheme"] = 0;
    m_mapPropAccessors["msiMaxLength"] = 0;
    m_mapPropAccessors["msiMinLength"] = 0;
    m_mapPropAccessors["msiRedundancy"] = 0;
    m_mapPropAccessors["msiReportCheckDigit"] = 0;
    m_mapPropAccessors["pdf417"] = 0;
    m_mapPropAccessors["signature"] = 0;
    m_mapPropAccessors["signatureImageHeight"] = 0;
    m_mapPropAccessors["signatureImageWidth"] = 0;
    m_mapPropAccessors["signatureImageQuality"] = 0;
    m_mapPropAccessors["ausPostal"] = 0;
    m_mapPropAccessors["canPostal"] = 0;
    m_mapPropAccessors["dutchPostal"] = 0;
    m_mapPropAccessors["japPostal"] = 0;
    m_mapPropAccessors["ukPostal"] = 0;
    m_mapPropAccessors["ukPostalReportCheckDigit"] = 0;
    m_mapPropAccessors["us4state"] = 0;
    m_mapPropAccessors["us4stateFics"] = 0;
    m_mapPropAccessors["usPlanet"] = 0;
    m_mapPropAccessors["usPlanetReportCheckDigit"] = 0;
    m_mapPropAccessors["usPostNet"] = 0;
    m_mapPropAccessors["usPostNetReportCheckDigit"] = 0;
    m_mapPropAccessors["qrCode"] = 0;
    m_mapPropAccessors["gs1dataBar"] = 0;
    m_mapPropAccessors["gs1dataBarExpanded"] = 0;
    m_mapPropAccessors["gs1dataBarLimited"] = 0;
    m_mapPropAccessors["tlc39"] = 0;
    m_mapPropAccessors["trioptic39"] = 0;
    m_mapPropAccessors["trioptic39Redundancy"] = 0;
    m_mapPropAccessors["upcEanBookland"] = 0;
    m_mapPropAccessors["upcEanBooklandFormat"] = 0;
    m_mapPropAccessors["upcEanConvertGs1dataBarToUpcEan"] = 0;
    m_mapPropAccessors["upcEanCoupon"] = 0;
    m_mapPropAccessors["upcEanLinearDecode"] = 0;
    m_mapPropAccessors["upcEanRandomWeightCheckDigit"] = 0;
    m_mapPropAccessors["upcEanRetryCount"] = 0;
    m_mapPropAccessors["upcEanSecurityLevel"] = 0;
    m_mapPropAccessors["upcEanSupplemental2"] = 0;
    m_mapPropAccessors["upcEanSupplemental5"] = 0;
    m_mapPropAccessors["upcEanSupplementalMode"] = 0;
    m_mapPropAccessors["upca"] = 0;
    m_mapPropAccessors["upcaPreamble"] = 0;
    m_mapPropAccessors["upcaReportCheckDigit"] = 0;
    m_mapPropAccessors["upce0"] = 0;
    m_mapPropAccessors["upce0convertToUpca"] = 0;
    m_mapPropAccessors["upce0preamble"] = 0;
    m_mapPropAccessors["upce0reportCheckDigit"] = 0;
    m_mapPropAccessors["upce1"] = 0;
    m_mapPropAccessors["upce1convertToUpca"] = 0;
    m_mapPropAccessors["upce1preamble"] = 0;
    m_mapPropAccessors["upce1reportCheckDigit"] = 0;
    m_mapPropAccessors["webcode"] = 0;
    m_mapPropAccessors["webcodeDecodeGtSubtype"] = 0;
    m_mapPropAccessors["rsmModelNumber"] = 0;
    m_mapPropAccessors["rsmSerialNumber"] = 0;
    m_mapPropAccessors["rsmDateOfManufacture"] = 0;
    m_mapPropAccessors["rsmDateOfService"] = 0;
    m_mapPropAccessors["rsmBluetoothAddress"] = 0;
    m_mapPropAccessors["rsmFirmwareVersion"] = 0;
    m_mapPropAccessors["rsmDeviceClass"] = 0;
    m_mapPropAccessors["rsmBatteryStatus"] = 0;
    m_mapPropAccessors["rsmBatteryCapacity"] = 0;
    m_mapPropAccessors["rsmBatteryId"] = 0;
    m_mapPropAccessors["rsmBluetoothAuthentication"] = 0;
    m_mapPropAccessors["rsmBluetoothEncryption"] = 0;
    m_mapPropAccessors["rsmBluetoothPinCode"] = 0;
    m_mapPropAccessors["rsmBluetoothPinCodeType"] = 0;
    m_mapPropAccessors["rsmBluetoothReconnectionAttempts"] = 0;
    m_mapPropAccessors["rsmBluetoothBeepOnReconnectAttempt"] = 0;
    m_mapPropAccessors["rsmBluetoothHidAutoReconnect"] = 0;
    m_mapPropAccessors["rsmBluetoothFriendlyName"] = 0;
    m_mapPropAccessors["rsmBluetoothInquiryMode"] = 0;
    m_mapPropAccessors["rsmBluetoothAutoReconnect"] = 0;
    m_mapPropAccessors["rsmForceSavePairingBarcode"] = 0;
    m_mapPropAccessors["rsmLowBatteryIndication"] = 0;
    m_mapPropAccessors["rsmLowBatteryIndicationCycle"] = 0;
    m_mapPropAccessors["rsmScanLineWidth"] = 0;
    m_mapPropAccessors["rsmGoodScansDelay"] = 0;
    m_mapPropAccessors["rsmDecodeFeedback"] = 0;
    m_mapPropAccessors["rsmIgnoreCode128Usps"] = 0;
    m_mapPropAccessors["rsmScanTriggerWakeup"] = 0;
    m_mapPropAccessors["rsmMems"] = 0;
    m_mapPropAccessors["rsmProximityEnable"] = 0;
    m_mapPropAccessors["rsmProximityContinuous"] = 0;
    m_mapPropAccessors["rsmProximityDistance"] = 0;
    m_mapPropAccessors["rsmPagingEnable"] = 0;
    m_mapPropAccessors["rsmPagingBeepSequence"] = 0;


}

void CBarcodeChainwayBase::getProperty( const rho::String& propertyName, CMethodResult& oResult)
{

    oResult.resetToEmptyString();
    CMethodAccessor< IBarcodeChainway >* pAccessor = m_mapPropAccessors[propertyName];
    if ( pAccessor )
        pAccessor->callGetter(this, oResult);
    else
    {

        oResult.set(m_hashProps[propertyName]);

    }
}

void CBarcodeChainwayBase::getProperties( const rho::Vector<rho::String>& arrayofNames, CMethodResult& oResult)
{
    rho::Hashtable<rho::String, rho::String> res;
    oResult.setCollectionMode(true);
    for ( int i = 0; i < (int)arrayofNames.size(); i++ )
    {
        getProperty(arrayofNames[i], oResult);

        if ( !oResult.isError() )
        {
            res[arrayofNames[i]] = oResult.toString();
        }
    }
    oResult.setCollectionMode(false);

    oResult.set(res);
}

void CBarcodeChainwayBase::getAllProperties(CMethodResult& oResult)
{
    rho::Hashtable<rho::String, rho::String> res;
    oResult.setCollectionMode(true);

    
    // user defined properties
    for ( rho::Hashtable<rho::String, rho::String>::const_iterator it = m_hashProps.begin();  it != m_hashProps.end(); ++it )
    {
        res[it->first] = it->second;
    }
    

    // existing properties
    for ( rho::Hashtable<rho::String, rho::apiGenerator::CMethodAccessor< IBarcodeChainway > *>::const_iterator it = m_mapPropAccessors.begin();  it != m_mapPropAccessors.end(); ++it )
    {
        getProperty(it->first, oResult);
        
        if ( oResult.isError() )
            break;
        
        res[it->first] = oResult.toString();
    }
    
    oResult.setCollectionMode(false);
    if ( oResult.isError() )
        oResult.callCallback();
    else
        oResult.set(res);
}

void CBarcodeChainwayBase::setProperty( const rho::String& propertyName,  const rho::String& propertyValue, CMethodResult& oResult)
{
    CMethodAccessor< IBarcodeChainway >* pAccessor = m_mapPropAccessors[propertyName];
    if (pAccessor && pAccessor->hasSetter())
        m_mapPropAccessors[propertyName]->callSetter(this, propertyValue, oResult);
    else
    {
        

        m_hashProps.put(propertyName, propertyValue);
    }
}

void CBarcodeChainwayBase::setProperties( const rho::Hashtable<rho::String, rho::String>& propertyMap, CMethodResult& oResult)
{
    for ( rho::Hashtable<rho::String, rho::String>::const_iterator it = propertyMap.begin();  it != propertyMap.end(); ++it )
    {
        setProperty( it->first, it->second, oResult );
        if ( oResult.isError() )
            break;
    }
}

void CBarcodeChainwayBase::clearAllProperties(CMethodResult& oResult)
{
    m_hashProps.clear();
    // ToDo: set default values to existing properties 
}



void CBarcodeChainwayBase::getAutoEnter(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "autoEnter", oResult); 
}

void CBarcodeChainwayBase::setAutoEnter( bool autoEnter, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "autoEnter", rho::common::convertToStringA(autoEnter), oResult );
}

void CBarcodeChainwayBase::getAutoTab(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "autoTab", oResult); 
}

void CBarcodeChainwayBase::setAutoTab( bool autoTab, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "autoTab", rho::common::convertToStringA(autoTab), oResult );
}

void CBarcodeChainwayBase::getHapticFeedback(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "hapticFeedback", oResult); 
}

void CBarcodeChainwayBase::setHapticFeedback( bool hapticFeedback, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "hapticFeedback", rho::common::convertToStringA(hapticFeedback), oResult );
}

void CBarcodeChainwayBase::getLinearSecurityLevel(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "linearSecurityLevel", oResult); 
}

void CBarcodeChainwayBase::setLinearSecurityLevel( const rho::String& linearSecurityLevel, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "linearSecurityLevel", rho::common::convertToStringA(linearSecurityLevel), oResult );
}

void CBarcodeChainwayBase::getScanTimeout(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "scanTimeout", oResult); 
}

void CBarcodeChainwayBase::setScanTimeout( int scanTimeout, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "scanTimeout", rho::common::convertToStringA(scanTimeout), oResult );
}

void CBarcodeChainwayBase::getRasterMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rasterMode", oResult); 
}

void CBarcodeChainwayBase::setRasterMode( const rho::String& rasterMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rasterMode", rho::common::convertToStringA(rasterMode), oResult );
}

void CBarcodeChainwayBase::getRasterHeight(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rasterHeight", oResult); 
}

void CBarcodeChainwayBase::setRasterHeight( int rasterHeight, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rasterHeight", rho::common::convertToStringA(rasterHeight), oResult );
}

void CBarcodeChainwayBase::getAimType(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "aimType", oResult); 
}

void CBarcodeChainwayBase::setAimType( const rho::String& aimType, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "aimType", rho::common::convertToStringA(aimType), oResult );
}

void CBarcodeChainwayBase::getTimedAimDuration(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "timedAimDuration", oResult); 
}

void CBarcodeChainwayBase::setTimedAimDuration( int timedAimDuration, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "timedAimDuration", rho::common::convertToStringA(timedAimDuration), oResult );
}

void CBarcodeChainwayBase::getSameSymbolTimeout(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "sameSymbolTimeout", oResult); 
}

void CBarcodeChainwayBase::setSameSymbolTimeout( int sameSymbolTimeout, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "sameSymbolTimeout", rho::common::convertToStringA(sameSymbolTimeout), oResult );
}

void CBarcodeChainwayBase::getDifferentSymbolTimeout(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "differentSymbolTimeout", oResult); 
}

void CBarcodeChainwayBase::setDifferentSymbolTimeout( int differentSymbolTimeout, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "differentSymbolTimeout", rho::common::convertToStringA(differentSymbolTimeout), oResult );
}

void CBarcodeChainwayBase::getAimMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "aimMode", oResult); 
}

void CBarcodeChainwayBase::setAimMode( const rho::String& aimMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "aimMode", rho::common::convertToStringA(aimMode), oResult );
}

void CBarcodeChainwayBase::getPicklistMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "picklistMode", oResult); 
}

void CBarcodeChainwayBase::setPicklistMode( const rho::String& picklistMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "picklistMode", rho::common::convertToStringA(picklistMode), oResult );
}

void CBarcodeChainwayBase::getViewfinderMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "viewfinderMode", oResult); 
}

void CBarcodeChainwayBase::setViewfinderMode( const rho::String& viewfinderMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "viewfinderMode", rho::common::convertToStringA(viewfinderMode), oResult );
}

void CBarcodeChainwayBase::getViewfinderX(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "viewfinderX", oResult); 
}

void CBarcodeChainwayBase::setViewfinderX( int viewfinderX, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "viewfinderX", rho::common::convertToStringA(viewfinderX), oResult );
}

void CBarcodeChainwayBase::getViewfinderY(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "viewfinderY", oResult); 
}

void CBarcodeChainwayBase::setViewfinderY( int viewfinderY, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "viewfinderY", rho::common::convertToStringA(viewfinderY), oResult );
}

void CBarcodeChainwayBase::getViewfinderWidth(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "viewfinderWidth", oResult); 
}

void CBarcodeChainwayBase::setViewfinderWidth( int viewfinderWidth, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "viewfinderWidth", rho::common::convertToStringA(viewfinderWidth), oResult );
}

void CBarcodeChainwayBase::getViewfinderHeight(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "viewfinderHeight", oResult); 
}

void CBarcodeChainwayBase::setViewfinderHeight( int viewfinderHeight, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "viewfinderHeight", rho::common::convertToStringA(viewfinderHeight), oResult );
}

void CBarcodeChainwayBase::getViewfinderFeedback(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "viewfinderFeedback", oResult); 
}

void CBarcodeChainwayBase::setViewfinderFeedback( const rho::String& viewfinderFeedback, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "viewfinderFeedback", rho::common::convertToStringA(viewfinderFeedback), oResult );
}

void CBarcodeChainwayBase::getViewfinderFeedbackTime(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "viewfinderFeedbackTime", oResult); 
}

void CBarcodeChainwayBase::setViewfinderFeedbackTime( int viewfinderFeedbackTime, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "viewfinderFeedbackTime", rho::common::convertToStringA(viewfinderFeedbackTime), oResult );
}

void CBarcodeChainwayBase::getFocusMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "focusMode", oResult); 
}

void CBarcodeChainwayBase::setFocusMode( const rho::String& focusMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "focusMode", rho::common::convertToStringA(focusMode), oResult );
}

void CBarcodeChainwayBase::getIlluminationMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "illuminationMode", oResult); 
}

void CBarcodeChainwayBase::setIlluminationMode( const rho::String& illuminationMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "illuminationMode", rho::common::convertToStringA(illuminationMode), oResult );
}

void CBarcodeChainwayBase::getDpmMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "dpmMode", oResult); 
}

void CBarcodeChainwayBase::setDpmMode( bool dpmMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "dpmMode", rho::common::convertToStringA(dpmMode), oResult );
}

void CBarcodeChainwayBase::getInverse1dMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "inverse1dMode", oResult); 
}

void CBarcodeChainwayBase::setInverse1dMode( const rho::String& inverse1dMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "inverse1dMode", rho::common::convertToStringA(inverse1dMode), oResult );
}

void CBarcodeChainwayBase::getPoorQuality1dMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "poorQuality1dMode", oResult); 
}

void CBarcodeChainwayBase::setPoorQuality1dMode( bool poorQuality1dMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "poorQuality1dMode", rho::common::convertToStringA(poorQuality1dMode), oResult );
}

void CBarcodeChainwayBase::getBeamWidth(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "beamWidth", oResult); 
}

void CBarcodeChainwayBase::setBeamWidth( const rho::String& beamWidth, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "beamWidth", rho::common::convertToStringA(beamWidth), oResult );
}

void CBarcodeChainwayBase::getDbpMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "dbpMode", oResult); 
}

void CBarcodeChainwayBase::setDbpMode( const rho::String& dbpMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "dbpMode", rho::common::convertToStringA(dbpMode), oResult );
}

void CBarcodeChainwayBase::getKlasseEins(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "klasseEins", oResult); 
}

void CBarcodeChainwayBase::setKlasseEins( bool klasseEins, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "klasseEins", rho::common::convertToStringA(klasseEins), oResult );
}

void CBarcodeChainwayBase::getAdaptiveScanning(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "adaptiveScanning", oResult); 
}

void CBarcodeChainwayBase::setAdaptiveScanning( bool adaptiveScanning, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "adaptiveScanning", rho::common::convertToStringA(adaptiveScanning), oResult );
}

void CBarcodeChainwayBase::getBidirectionalRedundancy(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "bidirectionalRedundancy", oResult); 
}

void CBarcodeChainwayBase::setBidirectionalRedundancy( bool bidirectionalRedundancy, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "bidirectionalRedundancy", rho::common::convertToStringA(bidirectionalRedundancy), oResult );
}

void CBarcodeChainwayBase::getBarcodeDataFormat(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "barcodeDataFormat", oResult); 
}

void CBarcodeChainwayBase::setBarcodeDataFormat( const rho::String& barcodeDataFormat, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "barcodeDataFormat", rho::common::convertToStringA(barcodeDataFormat), oResult );
}

void CBarcodeChainwayBase::getDataBufferSize(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "dataBufferSize", oResult); 
}

void CBarcodeChainwayBase::setDataBufferSize( int dataBufferSize, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "dataBufferSize", rho::common::convertToStringA(dataBufferSize), oResult );
}

void CBarcodeChainwayBase::getConnectionIdleTimeout(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "connectionIdleTimeout", oResult); 
}

void CBarcodeChainwayBase::setConnectionIdleTimeout( int connectionIdleTimeout, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "connectionIdleTimeout", rho::common::convertToStringA(connectionIdleTimeout), oResult );
}

void CBarcodeChainwayBase::getDisconnectBtOnDisable(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "disconnectBtOnDisable", oResult); 
}

void CBarcodeChainwayBase::setDisconnectBtOnDisable( bool disconnectBtOnDisable, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "disconnectBtOnDisable", rho::common::convertToStringA(disconnectBtOnDisable), oResult );
}

void CBarcodeChainwayBase::getDisplayBtAddressBarcodeOnEnable(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "displayBtAddressBarcodeOnEnable", oResult); 
}

void CBarcodeChainwayBase::setDisplayBtAddressBarcodeOnEnable( bool displayBtAddressBarcodeOnEnable, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "displayBtAddressBarcodeOnEnable", rho::common::convertToStringA(displayBtAddressBarcodeOnEnable), oResult );
}

void CBarcodeChainwayBase::getEnableTimeout(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "enableTimeout", oResult); 
}

void CBarcodeChainwayBase::setEnableTimeout( int enableTimeout, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "enableTimeout", rho::common::convertToStringA(enableTimeout), oResult );
}

void CBarcodeChainwayBase::getFriendlyName(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "friendlyName", oResult); 
}

void CBarcodeChainwayBase::getLcdMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "lcdMode", oResult); 
}

void CBarcodeChainwayBase::setLcdMode( bool lcdMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "lcdMode", rho::common::convertToStringA(lcdMode), oResult );
}

void CBarcodeChainwayBase::getLowBatteryScan(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "lowBatteryScan", oResult); 
}

void CBarcodeChainwayBase::setLowBatteryScan( bool lowBatteryScan, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "lowBatteryScan", rho::common::convertToStringA(lowBatteryScan), oResult );
}

void CBarcodeChainwayBase::getTriggerConnected(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "triggerConnected", oResult); 
}

void CBarcodeChainwayBase::setTriggerConnected( bool triggerConnected, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "triggerConnected", rho::common::convertToStringA(triggerConnected), oResult );
}

void CBarcodeChainwayBase::getDisableScannerDuringNavigate(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "disableScannerDuringNavigate", oResult); 
}

void CBarcodeChainwayBase::setDisableScannerDuringNavigate( bool disableScannerDuringNavigate, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "disableScannerDuringNavigate", rho::common::convertToStringA(disableScannerDuringNavigate), oResult );
}

void CBarcodeChainwayBase::getDecodeVolume(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "decodeVolume", oResult); 
}

void CBarcodeChainwayBase::setDecodeVolume( int decodeVolume, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "decodeVolume", rho::common::convertToStringA(decodeVolume), oResult );
}

void CBarcodeChainwayBase::getDecodeDuration(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "decodeDuration", oResult); 
}

void CBarcodeChainwayBase::setDecodeDuration( int decodeDuration, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "decodeDuration", rho::common::convertToStringA(decodeDuration), oResult );
}

void CBarcodeChainwayBase::getDecodeFrequency(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "decodeFrequency", oResult); 
}

void CBarcodeChainwayBase::setDecodeFrequency( int decodeFrequency, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "decodeFrequency", rho::common::convertToStringA(decodeFrequency), oResult );
}

void CBarcodeChainwayBase::getInvalidDecodeFrequency(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "invalidDecodeFrequency", oResult); 
}

void CBarcodeChainwayBase::setInvalidDecodeFrequency( int invalidDecodeFrequency, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "invalidDecodeFrequency", rho::common::convertToStringA(invalidDecodeFrequency), oResult );
}

void CBarcodeChainwayBase::getDecodeSound(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "decodeSound", oResult); 
}

void CBarcodeChainwayBase::setDecodeSound( const rho::String& decodeSound, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "decodeSound", rho::common::convertToStringA(decodeSound), oResult );
}

void CBarcodeChainwayBase::getInvalidDecodeSound(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "invalidDecodeSound", oResult); 
}

void CBarcodeChainwayBase::setInvalidDecodeSound( const rho::String& invalidDecodeSound, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "invalidDecodeSound", rho::common::convertToStringA(invalidDecodeSound), oResult );
}

void CBarcodeChainwayBase::getScannerType(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "scannerType", oResult); 
}

void CBarcodeChainwayBase::getAllDecoders(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "allDecoders", oResult); 
}

void CBarcodeChainwayBase::setAllDecoders( bool allDecoders, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "allDecoders", rho::common::convertToStringA(allDecoders), oResult );
}

void CBarcodeChainwayBase::getAztec(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "aztec", oResult); 
}

void CBarcodeChainwayBase::setAztec( bool aztec, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "aztec", rho::common::convertToStringA(aztec), oResult );
}

void CBarcodeChainwayBase::getChinese2of5(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "chinese2of5", oResult); 
}

void CBarcodeChainwayBase::setChinese2of5( bool chinese2of5, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "chinese2of5", rho::common::convertToStringA(chinese2of5), oResult );
}

void CBarcodeChainwayBase::getCodabar(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "codabar", oResult); 
}

void CBarcodeChainwayBase::setCodabar( bool codabar, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "codabar", rho::common::convertToStringA(codabar), oResult );
}

void CBarcodeChainwayBase::getCodabarClsiEditing(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "codabarClsiEditing", oResult); 
}

void CBarcodeChainwayBase::setCodabarClsiEditing( bool codabarClsiEditing, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "codabarClsiEditing", rho::common::convertToStringA(codabarClsiEditing), oResult );
}

void CBarcodeChainwayBase::getCodabarMaxLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "codabarMaxLength", oResult); 
}

void CBarcodeChainwayBase::setCodabarMaxLength( int codabarMaxLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "codabarMaxLength", rho::common::convertToStringA(codabarMaxLength), oResult );
}

void CBarcodeChainwayBase::getCodabarMinLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "codabarMinLength", oResult); 
}

void CBarcodeChainwayBase::setCodabarMinLength( int codabarMinLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "codabarMinLength", rho::common::convertToStringA(codabarMinLength), oResult );
}

void CBarcodeChainwayBase::getCodabarNotisEditing(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "codabarNotisEditing", oResult); 
}

void CBarcodeChainwayBase::setCodabarNotisEditing( bool codabarNotisEditing, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "codabarNotisEditing", rho::common::convertToStringA(codabarNotisEditing), oResult );
}

void CBarcodeChainwayBase::getCodabarRedundancy(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "codabarRedundancy", oResult); 
}

void CBarcodeChainwayBase::setCodabarRedundancy( bool codabarRedundancy, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "codabarRedundancy", rho::common::convertToStringA(codabarRedundancy), oResult );
}

void CBarcodeChainwayBase::getCode11(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code11", oResult); 
}

void CBarcodeChainwayBase::setCode11( bool code11, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code11", rho::common::convertToStringA(code11), oResult );
}

void CBarcodeChainwayBase::getCode11checkDigitCount(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code11checkDigitCount", oResult); 
}

void CBarcodeChainwayBase::setCode11checkDigitCount( const rho::String& code11checkDigitCount, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code11checkDigitCount", rho::common::convertToStringA(code11checkDigitCount), oResult );
}

void CBarcodeChainwayBase::getCode11maxLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code11maxLength", oResult); 
}

void CBarcodeChainwayBase::setCode11maxLength( int code11maxLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code11maxLength", rho::common::convertToStringA(code11maxLength), oResult );
}

void CBarcodeChainwayBase::getCode11minLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code11minLength", oResult); 
}

void CBarcodeChainwayBase::setCode11minLength( int code11minLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code11minLength", rho::common::convertToStringA(code11minLength), oResult );
}

void CBarcodeChainwayBase::getCode11redundancy(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code11redundancy", oResult); 
}

void CBarcodeChainwayBase::setCode11redundancy( bool code11redundancy, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code11redundancy", rho::common::convertToStringA(code11redundancy), oResult );
}

void CBarcodeChainwayBase::getCode11reportCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code11reportCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setCode11reportCheckDigit( bool code11reportCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code11reportCheckDigit", rho::common::convertToStringA(code11reportCheckDigit), oResult );
}

void CBarcodeChainwayBase::getCode128(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code128", oResult); 
}

void CBarcodeChainwayBase::setCode128( bool code128, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code128", rho::common::convertToStringA(code128), oResult );
}

void CBarcodeChainwayBase::getCode128checkIsBtTable(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code128checkIsBtTable", oResult); 
}

void CBarcodeChainwayBase::setCode128checkIsBtTable( bool code128checkIsBtTable, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code128checkIsBtTable", rho::common::convertToStringA(code128checkIsBtTable), oResult );
}

void CBarcodeChainwayBase::getCode128ean128(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code128ean128", oResult); 
}

void CBarcodeChainwayBase::setCode128ean128( bool code128ean128, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code128ean128", rho::common::convertToStringA(code128ean128), oResult );
}

void CBarcodeChainwayBase::getCode128isbt128(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code128isbt128", oResult); 
}

void CBarcodeChainwayBase::setCode128isbt128( bool code128isbt128, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code128isbt128", rho::common::convertToStringA(code128isbt128), oResult );
}

void CBarcodeChainwayBase::getCode128isbt128ConcatMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code128isbt128ConcatMode", oResult); 
}

void CBarcodeChainwayBase::setCode128isbt128ConcatMode( const rho::String& code128isbt128ConcatMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code128isbt128ConcatMode", rho::common::convertToStringA(code128isbt128ConcatMode), oResult );
}

void CBarcodeChainwayBase::getCode128maxLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code128maxLength", oResult); 
}

void CBarcodeChainwayBase::setCode128maxLength( int code128maxLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code128maxLength", rho::common::convertToStringA(code128maxLength), oResult );
}

void CBarcodeChainwayBase::getCode128minLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code128minLength", oResult); 
}

void CBarcodeChainwayBase::setCode128minLength( int code128minLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code128minLength", rho::common::convertToStringA(code128minLength), oResult );
}

void CBarcodeChainwayBase::getCode128other128(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code128other128", oResult); 
}

void CBarcodeChainwayBase::setCode128other128( bool code128other128, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code128other128", rho::common::convertToStringA(code128other128), oResult );
}

void CBarcodeChainwayBase::getCode128redundancy(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code128redundancy", oResult); 
}

void CBarcodeChainwayBase::setCode128redundancy( bool code128redundancy, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code128redundancy", rho::common::convertToStringA(code128redundancy), oResult );
}

void CBarcodeChainwayBase::getCode128securityLevel(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code128securityLevel", oResult); 
}

void CBarcodeChainwayBase::setCode128securityLevel( int code128securityLevel, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code128securityLevel", rho::common::convertToStringA(code128securityLevel), oResult );
}

void CBarcodeChainwayBase::getCompositeAb(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "compositeAb", oResult); 
}

void CBarcodeChainwayBase::setCompositeAb( bool compositeAb, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "compositeAb", rho::common::convertToStringA(compositeAb), oResult );
}

void CBarcodeChainwayBase::getCompositeAbUccLinkMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "compositeAbUccLinkMode", oResult); 
}

void CBarcodeChainwayBase::setCompositeAbUccLinkMode( const rho::String& compositeAbUccLinkMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "compositeAbUccLinkMode", rho::common::convertToStringA(compositeAbUccLinkMode), oResult );
}

void CBarcodeChainwayBase::getCompositeAbUseUpcPreambleCheckDigitRules(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "compositeAbUseUpcPreambleCheckDigitRules", oResult); 
}

void CBarcodeChainwayBase::setCompositeAbUseUpcPreambleCheckDigitRules( bool compositeAbUseUpcPreambleCheckDigitRules, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "compositeAbUseUpcPreambleCheckDigitRules", rho::common::convertToStringA(compositeAbUseUpcPreambleCheckDigitRules), oResult );
}

void CBarcodeChainwayBase::getCompositeC(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "compositeC", oResult); 
}

void CBarcodeChainwayBase::setCompositeC( bool compositeC, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "compositeC", rho::common::convertToStringA(compositeC), oResult );
}

void CBarcodeChainwayBase::getCode39(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code39", oResult); 
}

void CBarcodeChainwayBase::setCode39( bool code39, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code39", rho::common::convertToStringA(code39), oResult );
}

void CBarcodeChainwayBase::getCode39code32Prefix(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code39code32Prefix", oResult); 
}

void CBarcodeChainwayBase::setCode39code32Prefix( bool code39code32Prefix, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code39code32Prefix", rho::common::convertToStringA(code39code32Prefix), oResult );
}

void CBarcodeChainwayBase::getCode39convertToCode32(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code39convertToCode32", oResult); 
}

void CBarcodeChainwayBase::setCode39convertToCode32( bool code39convertToCode32, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code39convertToCode32", rho::common::convertToStringA(code39convertToCode32), oResult );
}

void CBarcodeChainwayBase::getCode39fullAscii(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code39fullAscii", oResult); 
}

void CBarcodeChainwayBase::setCode39fullAscii( bool code39fullAscii, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code39fullAscii", rho::common::convertToStringA(code39fullAscii), oResult );
}

void CBarcodeChainwayBase::getCode39maxLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code39maxLength", oResult); 
}

void CBarcodeChainwayBase::setCode39maxLength( int code39maxLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code39maxLength", rho::common::convertToStringA(code39maxLength), oResult );
}

void CBarcodeChainwayBase::getCode39minLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code39minLength", oResult); 
}

void CBarcodeChainwayBase::setCode39minLength( int code39minLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code39minLength", rho::common::convertToStringA(code39minLength), oResult );
}

void CBarcodeChainwayBase::getCode39redundancy(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code39redundancy", oResult); 
}

void CBarcodeChainwayBase::setCode39redundancy( bool code39redundancy, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code39redundancy", rho::common::convertToStringA(code39redundancy), oResult );
}

void CBarcodeChainwayBase::getCode39reportCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code39reportCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setCode39reportCheckDigit( bool code39reportCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code39reportCheckDigit", rho::common::convertToStringA(code39reportCheckDigit), oResult );
}

void CBarcodeChainwayBase::getCode39securityLevel(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code39securityLevel", oResult); 
}

void CBarcodeChainwayBase::setCode39securityLevel( int code39securityLevel, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code39securityLevel", rho::common::convertToStringA(code39securityLevel), oResult );
}

void CBarcodeChainwayBase::getCode39verifyCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code39verifyCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setCode39verifyCheckDigit( bool code39verifyCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code39verifyCheckDigit", rho::common::convertToStringA(code39verifyCheckDigit), oResult );
}

void CBarcodeChainwayBase::getCode93(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code93", oResult); 
}

void CBarcodeChainwayBase::setCode93( bool code93, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code93", rho::common::convertToStringA(code93), oResult );
}

void CBarcodeChainwayBase::getCode93maxLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code93maxLength", oResult); 
}

void CBarcodeChainwayBase::setCode93maxLength( int code93maxLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code93maxLength", rho::common::convertToStringA(code93maxLength), oResult );
}

void CBarcodeChainwayBase::getCode93minLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code93minLength", oResult); 
}

void CBarcodeChainwayBase::setCode93minLength( int code93minLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code93minLength", rho::common::convertToStringA(code93minLength), oResult );
}

void CBarcodeChainwayBase::getCode93redundancy(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "code93redundancy", oResult); 
}

void CBarcodeChainwayBase::setCode93redundancy( bool code93redundancy, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "code93redundancy", rho::common::convertToStringA(code93redundancy), oResult );
}

void CBarcodeChainwayBase::getD2of5(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "d2of5", oResult); 
}

void CBarcodeChainwayBase::setD2of5( bool d2of5, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "d2of5", rho::common::convertToStringA(d2of5), oResult );
}

void CBarcodeChainwayBase::getD2of5maxLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "d2of5maxLength", oResult); 
}

void CBarcodeChainwayBase::setD2of5maxLength( int d2of5maxLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "d2of5maxLength", rho::common::convertToStringA(d2of5maxLength), oResult );
}

void CBarcodeChainwayBase::getD2of5minLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "d2of5minLength", oResult); 
}

void CBarcodeChainwayBase::setD2of5minLength( int d2of5minLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "d2of5minLength", rho::common::convertToStringA(d2of5minLength), oResult );
}

void CBarcodeChainwayBase::getD2of5redundancy(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "d2of5redundancy", oResult); 
}

void CBarcodeChainwayBase::setD2of5redundancy( bool d2of5redundancy, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "d2of5redundancy", rho::common::convertToStringA(d2of5redundancy), oResult );
}

void CBarcodeChainwayBase::getDatamatrix(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "datamatrix", oResult); 
}

void CBarcodeChainwayBase::setDatamatrix( bool datamatrix, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "datamatrix", rho::common::convertToStringA(datamatrix), oResult );
}

void CBarcodeChainwayBase::getEan13(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "ean13", oResult); 
}

void CBarcodeChainwayBase::setEan13( bool ean13, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "ean13", rho::common::convertToStringA(ean13), oResult );
}

void CBarcodeChainwayBase::getEan8(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "ean8", oResult); 
}

void CBarcodeChainwayBase::setEan8( bool ean8, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "ean8", rho::common::convertToStringA(ean8), oResult );
}

void CBarcodeChainwayBase::getEan8convertToEan13(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "ean8convertToEan13", oResult); 
}

void CBarcodeChainwayBase::setEan8convertToEan13( bool ean8convertToEan13, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "ean8convertToEan13", rho::common::convertToStringA(ean8convertToEan13), oResult );
}

void CBarcodeChainwayBase::getI2of5(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "i2of5", oResult); 
}

void CBarcodeChainwayBase::setI2of5( bool i2of5, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "i2of5", rho::common::convertToStringA(i2of5), oResult );
}

void CBarcodeChainwayBase::getI2of5convertToEan13(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "i2of5convertToEan13", oResult); 
}

void CBarcodeChainwayBase::setI2of5convertToEan13( bool i2of5convertToEan13, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "i2of5convertToEan13", rho::common::convertToStringA(i2of5convertToEan13), oResult );
}

void CBarcodeChainwayBase::getI2of5maxLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "i2of5maxLength", oResult); 
}

void CBarcodeChainwayBase::setI2of5maxLength( int i2of5maxLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "i2of5maxLength", rho::common::convertToStringA(i2of5maxLength), oResult );
}

void CBarcodeChainwayBase::getI2of5minLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "i2of5minLength", oResult); 
}

void CBarcodeChainwayBase::setI2of5minLength( int i2of5minLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "i2of5minLength", rho::common::convertToStringA(i2of5minLength), oResult );
}

void CBarcodeChainwayBase::getI2of5redundancy(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "i2of5redundancy", oResult); 
}

void CBarcodeChainwayBase::setI2of5redundancy( bool i2of5redundancy, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "i2of5redundancy", rho::common::convertToStringA(i2of5redundancy), oResult );
}

void CBarcodeChainwayBase::getI2of5reportCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "i2of5reportCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setI2of5reportCheckDigit( bool i2of5reportCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "i2of5reportCheckDigit", rho::common::convertToStringA(i2of5reportCheckDigit), oResult );
}

void CBarcodeChainwayBase::getI2of5verifyCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "i2of5verifyCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setI2of5verifyCheckDigit( const rho::String& i2of5verifyCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "i2of5verifyCheckDigit", rho::common::convertToStringA(i2of5verifyCheckDigit), oResult );
}

void CBarcodeChainwayBase::getKorean3of5(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "korean3of5", oResult); 
}

void CBarcodeChainwayBase::setKorean3of5( bool korean3of5, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "korean3of5", rho::common::convertToStringA(korean3of5), oResult );
}

void CBarcodeChainwayBase::getKorean3of5redundancy(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "korean3of5redundancy", oResult); 
}

void CBarcodeChainwayBase::setKorean3of5redundancy( bool korean3of5redundancy, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "korean3of5redundancy", rho::common::convertToStringA(korean3of5redundancy), oResult );
}

void CBarcodeChainwayBase::getKorean3of5maxLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "korean3of5maxLength", oResult); 
}

void CBarcodeChainwayBase::setKorean3of5maxLength( int korean3of5maxLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "korean3of5maxLength", rho::common::convertToStringA(korean3of5maxLength), oResult );
}

void CBarcodeChainwayBase::getKorean3of5minLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "korean3of5minLength", oResult); 
}

void CBarcodeChainwayBase::setKorean3of5minLength( int korean3of5minLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "korean3of5minLength", rho::common::convertToStringA(korean3of5minLength), oResult );
}

void CBarcodeChainwayBase::getMacroPdf(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "macroPdf", oResult); 
}

void CBarcodeChainwayBase::setMacroPdf( bool macroPdf, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "macroPdf", rho::common::convertToStringA(macroPdf), oResult );
}

void CBarcodeChainwayBase::getMacroPdfBufferLabels(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "macroPdfBufferLabels", oResult); 
}

void CBarcodeChainwayBase::setMacroPdfBufferLabels( bool macroPdfBufferLabels, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "macroPdfBufferLabels", rho::common::convertToStringA(macroPdfBufferLabels), oResult );
}

void CBarcodeChainwayBase::getMacroPdfConvertToPdf417(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "macroPdfConvertToPdf417", oResult); 
}

void CBarcodeChainwayBase::setMacroPdfConvertToPdf417( bool macroPdfConvertToPdf417, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "macroPdfConvertToPdf417", rho::common::convertToStringA(macroPdfConvertToPdf417), oResult );
}

void CBarcodeChainwayBase::getMacroPdfExclusive(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "macroPdfExclusive", oResult); 
}

void CBarcodeChainwayBase::setMacroPdfExclusive( bool macroPdfExclusive, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "macroPdfExclusive", rho::common::convertToStringA(macroPdfExclusive), oResult );
}

void CBarcodeChainwayBase::getMacroMicroPdf(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "macroMicroPdf", oResult); 
}

void CBarcodeChainwayBase::setMacroMicroPdf( bool macroMicroPdf, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "macroMicroPdf", rho::common::convertToStringA(macroMicroPdf), oResult );
}

void CBarcodeChainwayBase::getMacroMicroPdfBufferLabels(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "macroMicroPdfBufferLabels", oResult); 
}

void CBarcodeChainwayBase::setMacroMicroPdfBufferLabels( bool macroMicroPdfBufferLabels, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "macroMicroPdfBufferLabels", rho::common::convertToStringA(macroMicroPdfBufferLabels), oResult );
}

void CBarcodeChainwayBase::getMacroMicroPdfConvertToMicroPdf(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "macroMicroPdfConvertToMicroPdf", oResult); 
}

void CBarcodeChainwayBase::setMacroMicroPdfConvertToMicroPdf( bool macroMicroPdfConvertToMicroPdf, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "macroMicroPdfConvertToMicroPdf", rho::common::convertToStringA(macroMicroPdfConvertToMicroPdf), oResult );
}

void CBarcodeChainwayBase::getMacroMicroPdfExclusive(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "macroMicroPdfExclusive", oResult); 
}

void CBarcodeChainwayBase::setMacroMicroPdfExclusive( bool macroMicroPdfExclusive, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "macroMicroPdfExclusive", rho::common::convertToStringA(macroMicroPdfExclusive), oResult );
}

void CBarcodeChainwayBase::getMacroMicroPdfReportAppendInfo(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "macroMicroPdfReportAppendInfo", oResult); 
}

void CBarcodeChainwayBase::setMacroMicroPdfReportAppendInfo( bool macroMicroPdfReportAppendInfo, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "macroMicroPdfReportAppendInfo", rho::common::convertToStringA(macroMicroPdfReportAppendInfo), oResult );
}

void CBarcodeChainwayBase::getMatrix2of5(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "matrix2of5", oResult); 
}

void CBarcodeChainwayBase::setMatrix2of5( bool matrix2of5, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "matrix2of5", rho::common::convertToStringA(matrix2of5), oResult );
}

void CBarcodeChainwayBase::getMatrix2of5maxLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "matrix2of5maxLength", oResult); 
}

void CBarcodeChainwayBase::setMatrix2of5maxLength( int matrix2of5maxLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "matrix2of5maxLength", rho::common::convertToStringA(matrix2of5maxLength), oResult );
}

void CBarcodeChainwayBase::getMatrix2of5minLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "matrix2of5minLength", oResult); 
}

void CBarcodeChainwayBase::setMatrix2of5minLength( int matrix2of5minLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "matrix2of5minLength", rho::common::convertToStringA(matrix2of5minLength), oResult );
}

void CBarcodeChainwayBase::getMatrix2of5reportCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "matrix2of5reportCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setMatrix2of5reportCheckDigit( bool matrix2of5reportCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "matrix2of5reportCheckDigit", rho::common::convertToStringA(matrix2of5reportCheckDigit), oResult );
}

void CBarcodeChainwayBase::getMatrix2of5verifyCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "matrix2of5verifyCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setMatrix2of5verifyCheckDigit( bool matrix2of5verifyCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "matrix2of5verifyCheckDigit", rho::common::convertToStringA(matrix2of5verifyCheckDigit), oResult );
}

void CBarcodeChainwayBase::getMaxiCode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "maxiCode", oResult); 
}

void CBarcodeChainwayBase::setMaxiCode( bool maxiCode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "maxiCode", rho::common::convertToStringA(maxiCode), oResult );
}

void CBarcodeChainwayBase::getMicroPdf(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "microPdf", oResult); 
}

void CBarcodeChainwayBase::setMicroPdf( bool microPdf, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "microPdf", rho::common::convertToStringA(microPdf), oResult );
}

void CBarcodeChainwayBase::getMicroQr(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "microQr", oResult); 
}

void CBarcodeChainwayBase::setMicroQr( bool microQr, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "microQr", rho::common::convertToStringA(microQr), oResult );
}

void CBarcodeChainwayBase::getMsi(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "msi", oResult); 
}

void CBarcodeChainwayBase::setMsi( bool msi, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "msi", rho::common::convertToStringA(msi), oResult );
}

void CBarcodeChainwayBase::getMsiCheckDigits(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "msiCheckDigits", oResult); 
}

void CBarcodeChainwayBase::setMsiCheckDigits( const rho::String& msiCheckDigits, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "msiCheckDigits", rho::common::convertToStringA(msiCheckDigits), oResult );
}

void CBarcodeChainwayBase::getMsiCheckDigitScheme(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "msiCheckDigitScheme", oResult); 
}

void CBarcodeChainwayBase::setMsiCheckDigitScheme( const rho::String& msiCheckDigitScheme, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "msiCheckDigitScheme", rho::common::convertToStringA(msiCheckDigitScheme), oResult );
}

void CBarcodeChainwayBase::getMsiMaxLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "msiMaxLength", oResult); 
}

void CBarcodeChainwayBase::setMsiMaxLength( int msiMaxLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "msiMaxLength", rho::common::convertToStringA(msiMaxLength), oResult );
}

void CBarcodeChainwayBase::getMsiMinLength(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "msiMinLength", oResult); 
}

void CBarcodeChainwayBase::setMsiMinLength( int msiMinLength, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "msiMinLength", rho::common::convertToStringA(msiMinLength), oResult );
}

void CBarcodeChainwayBase::getMsiRedundancy(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "msiRedundancy", oResult); 
}

void CBarcodeChainwayBase::setMsiRedundancy( bool msiRedundancy, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "msiRedundancy", rho::common::convertToStringA(msiRedundancy), oResult );
}

void CBarcodeChainwayBase::getMsiReportCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "msiReportCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setMsiReportCheckDigit( bool msiReportCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "msiReportCheckDigit", rho::common::convertToStringA(msiReportCheckDigit), oResult );
}

void CBarcodeChainwayBase::getPdf417(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "pdf417", oResult); 
}

void CBarcodeChainwayBase::setPdf417( bool pdf417, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "pdf417", rho::common::convertToStringA(pdf417), oResult );
}

void CBarcodeChainwayBase::getSignature(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "signature", oResult); 
}

void CBarcodeChainwayBase::setSignature( bool signature, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "signature", rho::common::convertToStringA(signature), oResult );
}

void CBarcodeChainwayBase::getSignatureImageHeight(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "signatureImageHeight", oResult); 
}

void CBarcodeChainwayBase::setSignatureImageHeight( int signatureImageHeight, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "signatureImageHeight", rho::common::convertToStringA(signatureImageHeight), oResult );
}

void CBarcodeChainwayBase::getSignatureImageWidth(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "signatureImageWidth", oResult); 
}

void CBarcodeChainwayBase::setSignatureImageWidth( int signatureImageWidth, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "signatureImageWidth", rho::common::convertToStringA(signatureImageWidth), oResult );
}

void CBarcodeChainwayBase::getSignatureImageQuality(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "signatureImageQuality", oResult); 
}

void CBarcodeChainwayBase::setSignatureImageQuality( int signatureImageQuality, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "signatureImageQuality", rho::common::convertToStringA(signatureImageQuality), oResult );
}

void CBarcodeChainwayBase::getAusPostal(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "ausPostal", oResult); 
}

void CBarcodeChainwayBase::setAusPostal( bool ausPostal, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "ausPostal", rho::common::convertToStringA(ausPostal), oResult );
}

void CBarcodeChainwayBase::getCanPostal(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "canPostal", oResult); 
}

void CBarcodeChainwayBase::setCanPostal( bool canPostal, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "canPostal", rho::common::convertToStringA(canPostal), oResult );
}

void CBarcodeChainwayBase::getDutchPostal(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "dutchPostal", oResult); 
}

void CBarcodeChainwayBase::setDutchPostal( bool dutchPostal, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "dutchPostal", rho::common::convertToStringA(dutchPostal), oResult );
}

void CBarcodeChainwayBase::getJapPostal(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "japPostal", oResult); 
}

void CBarcodeChainwayBase::setJapPostal( bool japPostal, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "japPostal", rho::common::convertToStringA(japPostal), oResult );
}

void CBarcodeChainwayBase::getUkPostal(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "ukPostal", oResult); 
}

void CBarcodeChainwayBase::setUkPostal( bool ukPostal, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "ukPostal", rho::common::convertToStringA(ukPostal), oResult );
}

void CBarcodeChainwayBase::getUkPostalReportCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "ukPostalReportCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setUkPostalReportCheckDigit( bool ukPostalReportCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "ukPostalReportCheckDigit", rho::common::convertToStringA(ukPostalReportCheckDigit), oResult );
}

void CBarcodeChainwayBase::getUs4state(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "us4state", oResult); 
}

void CBarcodeChainwayBase::setUs4state( bool us4state, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "us4state", rho::common::convertToStringA(us4state), oResult );
}

void CBarcodeChainwayBase::getUs4stateFics(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "us4stateFics", oResult); 
}

void CBarcodeChainwayBase::setUs4stateFics( bool us4stateFics, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "us4stateFics", rho::common::convertToStringA(us4stateFics), oResult );
}

void CBarcodeChainwayBase::getUsPlanet(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "usPlanet", oResult); 
}

void CBarcodeChainwayBase::setUsPlanet( bool usPlanet, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "usPlanet", rho::common::convertToStringA(usPlanet), oResult );
}

void CBarcodeChainwayBase::getUsPlanetReportCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "usPlanetReportCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setUsPlanetReportCheckDigit( bool usPlanetReportCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "usPlanetReportCheckDigit", rho::common::convertToStringA(usPlanetReportCheckDigit), oResult );
}

void CBarcodeChainwayBase::getUsPostNet(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "usPostNet", oResult); 
}

void CBarcodeChainwayBase::setUsPostNet( bool usPostNet, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "usPostNet", rho::common::convertToStringA(usPostNet), oResult );
}

void CBarcodeChainwayBase::getUsPostNetReportCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "usPostNetReportCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setUsPostNetReportCheckDigit( bool usPostNetReportCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "usPostNetReportCheckDigit", rho::common::convertToStringA(usPostNetReportCheckDigit), oResult );
}

void CBarcodeChainwayBase::getQrCode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "qrCode", oResult); 
}

void CBarcodeChainwayBase::setQrCode( bool qrCode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "qrCode", rho::common::convertToStringA(qrCode), oResult );
}

void CBarcodeChainwayBase::getGs1dataBar(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "gs1dataBar", oResult); 
}

void CBarcodeChainwayBase::setGs1dataBar( bool gs1dataBar, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "gs1dataBar", rho::common::convertToStringA(gs1dataBar), oResult );
}

void CBarcodeChainwayBase::getGs1dataBarExpanded(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "gs1dataBarExpanded", oResult); 
}

void CBarcodeChainwayBase::setGs1dataBarExpanded( bool gs1dataBarExpanded, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "gs1dataBarExpanded", rho::common::convertToStringA(gs1dataBarExpanded), oResult );
}

void CBarcodeChainwayBase::getGs1dataBarLimited(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "gs1dataBarLimited", oResult); 
}

void CBarcodeChainwayBase::setGs1dataBarLimited( bool gs1dataBarLimited, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "gs1dataBarLimited", rho::common::convertToStringA(gs1dataBarLimited), oResult );
}

void CBarcodeChainwayBase::getTlc39(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "tlc39", oResult); 
}

void CBarcodeChainwayBase::setTlc39( bool tlc39, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "tlc39", rho::common::convertToStringA(tlc39), oResult );
}

void CBarcodeChainwayBase::getTrioptic39(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "trioptic39", oResult); 
}

void CBarcodeChainwayBase::setTrioptic39( bool trioptic39, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "trioptic39", rho::common::convertToStringA(trioptic39), oResult );
}

void CBarcodeChainwayBase::getTrioptic39Redundancy(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "trioptic39Redundancy", oResult); 
}

void CBarcodeChainwayBase::setTrioptic39Redundancy( bool trioptic39Redundancy, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "trioptic39Redundancy", rho::common::convertToStringA(trioptic39Redundancy), oResult );
}

void CBarcodeChainwayBase::getUpcEanBookland(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcEanBookland", oResult); 
}

void CBarcodeChainwayBase::setUpcEanBookland( bool upcEanBookland, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcEanBookland", rho::common::convertToStringA(upcEanBookland), oResult );
}

void CBarcodeChainwayBase::getUpcEanBooklandFormat(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcEanBooklandFormat", oResult); 
}

void CBarcodeChainwayBase::setUpcEanBooklandFormat( const rho::String& upcEanBooklandFormat, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcEanBooklandFormat", rho::common::convertToStringA(upcEanBooklandFormat), oResult );
}

void CBarcodeChainwayBase::getUpcEanConvertGs1dataBarToUpcEan(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcEanConvertGs1dataBarToUpcEan", oResult); 
}

void CBarcodeChainwayBase::setUpcEanConvertGs1dataBarToUpcEan( bool upcEanConvertGs1dataBarToUpcEan, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcEanConvertGs1dataBarToUpcEan", rho::common::convertToStringA(upcEanConvertGs1dataBarToUpcEan), oResult );
}

void CBarcodeChainwayBase::getUpcEanCoupon(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcEanCoupon", oResult); 
}

void CBarcodeChainwayBase::setUpcEanCoupon( bool upcEanCoupon, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcEanCoupon", rho::common::convertToStringA(upcEanCoupon), oResult );
}

void CBarcodeChainwayBase::getUpcEanLinearDecode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcEanLinearDecode", oResult); 
}

void CBarcodeChainwayBase::setUpcEanLinearDecode( bool upcEanLinearDecode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcEanLinearDecode", rho::common::convertToStringA(upcEanLinearDecode), oResult );
}

void CBarcodeChainwayBase::getUpcEanRandomWeightCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcEanRandomWeightCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setUpcEanRandomWeightCheckDigit( bool upcEanRandomWeightCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcEanRandomWeightCheckDigit", rho::common::convertToStringA(upcEanRandomWeightCheckDigit), oResult );
}

void CBarcodeChainwayBase::getUpcEanRetryCount(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcEanRetryCount", oResult); 
}

void CBarcodeChainwayBase::setUpcEanRetryCount( int upcEanRetryCount, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcEanRetryCount", rho::common::convertToStringA(upcEanRetryCount), oResult );
}

void CBarcodeChainwayBase::getUpcEanSecurityLevel(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcEanSecurityLevel", oResult); 
}

void CBarcodeChainwayBase::setUpcEanSecurityLevel( int upcEanSecurityLevel, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcEanSecurityLevel", rho::common::convertToStringA(upcEanSecurityLevel), oResult );
}

void CBarcodeChainwayBase::getUpcEanSupplemental2(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcEanSupplemental2", oResult); 
}

void CBarcodeChainwayBase::setUpcEanSupplemental2( bool upcEanSupplemental2, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcEanSupplemental2", rho::common::convertToStringA(upcEanSupplemental2), oResult );
}

void CBarcodeChainwayBase::getUpcEanSupplemental5(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcEanSupplemental5", oResult); 
}

void CBarcodeChainwayBase::setUpcEanSupplemental5( bool upcEanSupplemental5, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcEanSupplemental5", rho::common::convertToStringA(upcEanSupplemental5), oResult );
}

void CBarcodeChainwayBase::getUpcEanSupplementalMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcEanSupplementalMode", oResult); 
}

void CBarcodeChainwayBase::setUpcEanSupplementalMode( const rho::String& upcEanSupplementalMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcEanSupplementalMode", rho::common::convertToStringA(upcEanSupplementalMode), oResult );
}

void CBarcodeChainwayBase::getUpca(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upca", oResult); 
}

void CBarcodeChainwayBase::setUpca( bool upca, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upca", rho::common::convertToStringA(upca), oResult );
}

void CBarcodeChainwayBase::getUpcaPreamble(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcaPreamble", oResult); 
}

void CBarcodeChainwayBase::setUpcaPreamble( const rho::String& upcaPreamble, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcaPreamble", rho::common::convertToStringA(upcaPreamble), oResult );
}

void CBarcodeChainwayBase::getUpcaReportCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upcaReportCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setUpcaReportCheckDigit( bool upcaReportCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upcaReportCheckDigit", rho::common::convertToStringA(upcaReportCheckDigit), oResult );
}

void CBarcodeChainwayBase::getUpce0(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upce0", oResult); 
}

void CBarcodeChainwayBase::setUpce0( bool upce0, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upce0", rho::common::convertToStringA(upce0), oResult );
}

void CBarcodeChainwayBase::getUpce0convertToUpca(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upce0convertToUpca", oResult); 
}

void CBarcodeChainwayBase::setUpce0convertToUpca( bool upce0convertToUpca, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upce0convertToUpca", rho::common::convertToStringA(upce0convertToUpca), oResult );
}

void CBarcodeChainwayBase::getUpce0preamble(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upce0preamble", oResult); 
}

void CBarcodeChainwayBase::setUpce0preamble( const rho::String& upce0preamble, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upce0preamble", rho::common::convertToStringA(upce0preamble), oResult );
}

void CBarcodeChainwayBase::getUpce0reportCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upce0reportCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setUpce0reportCheckDigit( bool upce0reportCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upce0reportCheckDigit", rho::common::convertToStringA(upce0reportCheckDigit), oResult );
}

void CBarcodeChainwayBase::getUpce1(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upce1", oResult); 
}

void CBarcodeChainwayBase::setUpce1( bool upce1, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upce1", rho::common::convertToStringA(upce1), oResult );
}

void CBarcodeChainwayBase::getUpce1convertToUpca(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upce1convertToUpca", oResult); 
}

void CBarcodeChainwayBase::setUpce1convertToUpca( bool upce1convertToUpca, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upce1convertToUpca", rho::common::convertToStringA(upce1convertToUpca), oResult );
}

void CBarcodeChainwayBase::getUpce1preamble(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upce1preamble", oResult); 
}

void CBarcodeChainwayBase::setUpce1preamble( const rho::String& upce1preamble, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upce1preamble", rho::common::convertToStringA(upce1preamble), oResult );
}

void CBarcodeChainwayBase::getUpce1reportCheckDigit(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "upce1reportCheckDigit", oResult); 
}

void CBarcodeChainwayBase::setUpce1reportCheckDigit( bool upce1reportCheckDigit, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "upce1reportCheckDigit", rho::common::convertToStringA(upce1reportCheckDigit), oResult );
}

void CBarcodeChainwayBase::getWebcode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "webcode", oResult); 
}

void CBarcodeChainwayBase::setWebcode( bool webcode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "webcode", rho::common::convertToStringA(webcode), oResult );
}

void CBarcodeChainwayBase::getWebcodeDecodeGtSubtype(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "webcodeDecodeGtSubtype", oResult); 
}

void CBarcodeChainwayBase::setWebcodeDecodeGtSubtype( bool webcodeDecodeGtSubtype, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "webcodeDecodeGtSubtype", rho::common::convertToStringA(webcodeDecodeGtSubtype), oResult );
}

void CBarcodeChainwayBase::getRsmModelNumber(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmModelNumber", oResult); 
}

void CBarcodeChainwayBase::getRsmSerialNumber(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmSerialNumber", oResult); 
}

void CBarcodeChainwayBase::getRsmDateOfManufacture(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmDateOfManufacture", oResult); 
}

void CBarcodeChainwayBase::getRsmDateOfService(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmDateOfService", oResult); 
}

void CBarcodeChainwayBase::getRsmBluetoothAddress(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBluetoothAddress", oResult); 
}

void CBarcodeChainwayBase::getRsmFirmwareVersion(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmFirmwareVersion", oResult); 
}

void CBarcodeChainwayBase::getRsmDeviceClass(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmDeviceClass", oResult); 
}

void CBarcodeChainwayBase::getRsmBatteryStatus(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBatteryStatus", oResult); 
}

void CBarcodeChainwayBase::getRsmBatteryCapacity(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBatteryCapacity", oResult); 
}

void CBarcodeChainwayBase::getRsmBatteryId(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBatteryId", oResult); 
}

void CBarcodeChainwayBase::getRsmBluetoothAuthentication(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBluetoothAuthentication", oResult); 
}

void CBarcodeChainwayBase::setRsmBluetoothAuthentication( bool rsmBluetoothAuthentication, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmBluetoothAuthentication", rho::common::convertToStringA(rsmBluetoothAuthentication), oResult );
}

void CBarcodeChainwayBase::getRsmBluetoothEncryption(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBluetoothEncryption", oResult); 
}

void CBarcodeChainwayBase::setRsmBluetoothEncryption( bool rsmBluetoothEncryption, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmBluetoothEncryption", rho::common::convertToStringA(rsmBluetoothEncryption), oResult );
}

void CBarcodeChainwayBase::getRsmBluetoothPinCode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBluetoothPinCode", oResult); 
}

void CBarcodeChainwayBase::setRsmBluetoothPinCode( const rho::String& rsmBluetoothPinCode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmBluetoothPinCode", rho::common::convertToStringA(rsmBluetoothPinCode), oResult );
}

void CBarcodeChainwayBase::getRsmBluetoothPinCodeType(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBluetoothPinCodeType", oResult); 
}

void CBarcodeChainwayBase::setRsmBluetoothPinCodeType( const rho::String& rsmBluetoothPinCodeType, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmBluetoothPinCodeType", rho::common::convertToStringA(rsmBluetoothPinCodeType), oResult );
}

void CBarcodeChainwayBase::getRsmBluetoothReconnectionAttempts(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBluetoothReconnectionAttempts", oResult); 
}

void CBarcodeChainwayBase::setRsmBluetoothReconnectionAttempts( int rsmBluetoothReconnectionAttempts, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmBluetoothReconnectionAttempts", rho::common::convertToStringA(rsmBluetoothReconnectionAttempts), oResult );
}

void CBarcodeChainwayBase::getRsmBluetoothBeepOnReconnectAttempt(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBluetoothBeepOnReconnectAttempt", oResult); 
}

void CBarcodeChainwayBase::setRsmBluetoothBeepOnReconnectAttempt( bool rsmBluetoothBeepOnReconnectAttempt, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmBluetoothBeepOnReconnectAttempt", rho::common::convertToStringA(rsmBluetoothBeepOnReconnectAttempt), oResult );
}

void CBarcodeChainwayBase::getRsmBluetoothHidAutoReconnect(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBluetoothHidAutoReconnect", oResult); 
}

void CBarcodeChainwayBase::setRsmBluetoothHidAutoReconnect( const rho::String& rsmBluetoothHidAutoReconnect, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmBluetoothHidAutoReconnect", rho::common::convertToStringA(rsmBluetoothHidAutoReconnect), oResult );
}

void CBarcodeChainwayBase::getRsmBluetoothFriendlyName(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBluetoothFriendlyName", oResult); 
}

void CBarcodeChainwayBase::setRsmBluetoothFriendlyName( const rho::String& rsmBluetoothFriendlyName, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmBluetoothFriendlyName", rho::common::convertToStringA(rsmBluetoothFriendlyName), oResult );
}

void CBarcodeChainwayBase::getRsmBluetoothInquiryMode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBluetoothInquiryMode", oResult); 
}

void CBarcodeChainwayBase::setRsmBluetoothInquiryMode( const rho::String& rsmBluetoothInquiryMode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmBluetoothInquiryMode", rho::common::convertToStringA(rsmBluetoothInquiryMode), oResult );
}

void CBarcodeChainwayBase::getRsmBluetoothAutoReconnect(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmBluetoothAutoReconnect", oResult); 
}

void CBarcodeChainwayBase::setRsmBluetoothAutoReconnect( const rho::String& rsmBluetoothAutoReconnect, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmBluetoothAutoReconnect", rho::common::convertToStringA(rsmBluetoothAutoReconnect), oResult );
}

void CBarcodeChainwayBase::getRsmForceSavePairingBarcode(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmForceSavePairingBarcode", oResult); 
}

void CBarcodeChainwayBase::setRsmForceSavePairingBarcode( bool rsmForceSavePairingBarcode, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmForceSavePairingBarcode", rho::common::convertToStringA(rsmForceSavePairingBarcode), oResult );
}

void CBarcodeChainwayBase::getRsmLowBatteryIndication(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmLowBatteryIndication", oResult); 
}

void CBarcodeChainwayBase::setRsmLowBatteryIndication( bool rsmLowBatteryIndication, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmLowBatteryIndication", rho::common::convertToStringA(rsmLowBatteryIndication), oResult );
}

void CBarcodeChainwayBase::getRsmLowBatteryIndicationCycle(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmLowBatteryIndicationCycle", oResult); 
}

void CBarcodeChainwayBase::setRsmLowBatteryIndicationCycle( int rsmLowBatteryIndicationCycle, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmLowBatteryIndicationCycle", rho::common::convertToStringA(rsmLowBatteryIndicationCycle), oResult );
}

void CBarcodeChainwayBase::getRsmScanLineWidth(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmScanLineWidth", oResult); 
}

void CBarcodeChainwayBase::setRsmScanLineWidth( const rho::String& rsmScanLineWidth, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmScanLineWidth", rho::common::convertToStringA(rsmScanLineWidth), oResult );
}

void CBarcodeChainwayBase::getRsmGoodScansDelay(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmGoodScansDelay", oResult); 
}

void CBarcodeChainwayBase::setRsmGoodScansDelay( int rsmGoodScansDelay, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmGoodScansDelay", rho::common::convertToStringA(rsmGoodScansDelay), oResult );
}

void CBarcodeChainwayBase::getRsmDecodeFeedback(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmDecodeFeedback", oResult); 
}

void CBarcodeChainwayBase::setRsmDecodeFeedback( bool rsmDecodeFeedback, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmDecodeFeedback", rho::common::convertToStringA(rsmDecodeFeedback), oResult );
}

void CBarcodeChainwayBase::getRsmIgnoreCode128Usps(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmIgnoreCode128Usps", oResult); 
}

void CBarcodeChainwayBase::setRsmIgnoreCode128Usps( bool rsmIgnoreCode128Usps, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmIgnoreCode128Usps", rho::common::convertToStringA(rsmIgnoreCode128Usps), oResult );
}

void CBarcodeChainwayBase::getRsmScanTriggerWakeup(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmScanTriggerWakeup", oResult); 
}

void CBarcodeChainwayBase::setRsmScanTriggerWakeup( bool rsmScanTriggerWakeup, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmScanTriggerWakeup", rho::common::convertToStringA(rsmScanTriggerWakeup), oResult );
}

void CBarcodeChainwayBase::getRsmMems(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmMems", oResult); 
}

void CBarcodeChainwayBase::setRsmMems( bool rsmMems, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmMems", rho::common::convertToStringA(rsmMems), oResult );
}

void CBarcodeChainwayBase::getRsmProximityEnable(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmProximityEnable", oResult); 
}

void CBarcodeChainwayBase::setRsmProximityEnable( bool rsmProximityEnable, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmProximityEnable", rho::common::convertToStringA(rsmProximityEnable), oResult );
}

void CBarcodeChainwayBase::getRsmProximityContinuous(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmProximityContinuous", oResult); 
}

void CBarcodeChainwayBase::setRsmProximityContinuous( bool rsmProximityContinuous, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmProximityContinuous", rho::common::convertToStringA(rsmProximityContinuous), oResult );
}

void CBarcodeChainwayBase::getRsmProximityDistance(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmProximityDistance", oResult); 
}

void CBarcodeChainwayBase::setRsmProximityDistance( const rho::String& rsmProximityDistance, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmProximityDistance", rho::common::convertToStringA(rsmProximityDistance), oResult );
}

void CBarcodeChainwayBase::getRsmPagingEnable(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmPagingEnable", oResult); 
}

void CBarcodeChainwayBase::setRsmPagingEnable( bool rsmPagingEnable, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmPagingEnable", rho::common::convertToStringA(rsmPagingEnable), oResult );
}

void CBarcodeChainwayBase::getRsmPagingBeepSequence(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "rsmPagingBeepSequence", oResult); 
}

void CBarcodeChainwayBase::setRsmPagingBeepSequence( int rsmPagingBeepSequence, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "rsmPagingBeepSequence", rho::common::convertToStringA(rsmPagingBeepSequence), oResult );
}
CBarcodeChainwaySingletonBase::CBarcodeChainwaySingletonBase()
{
    RHODESAPP().getExtManager().registerExtension( "BarcodeChainway", this );
}

CBarcodeChainwaySingletonBase::~CBarcodeChainwaySingletonBase()
{
    CBarcodeChainwayFactoryBase::setInstance(0);
}


}
