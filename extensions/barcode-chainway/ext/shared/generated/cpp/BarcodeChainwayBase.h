#pragma once

#include "IBarcodeChainway.h"
#include "logging/RhoLog.h"
#include "common/StringConverter.h"
#include "common/ExtManager.h"


namespace rho {

using namespace rho::apiGenerator;
using namespace rho;

// hash keys used in properties and parameters 
namespace barcodechainway {

    static const char HK_BARCODE[] = "barcode"; 

    static const char HK_DATA[] = "data"; 

    static const char HK_DIRECTION[] = "direction"; 

    static const char HK_LENGTH[] = "length"; 

    static const char HK_SOURCE[] = "source"; 

    static const char HK_STATUS[] = "status"; 

    static const char HK_TIME[] = "time"; 

    static const char HK_TYPE[] = "type"; 

    static const char PROPERTY_ADAPTIVE_SCANNING[] = "adaptiveScanning"; 

    static const char PROPERTY_AIM_MODE[] = "aimMode"; 

    static const char PROPERTY_AIM_TYPE[] = "aimType"; 

    static const char PROPERTY_ALL_DECODERS[] = "allDecoders"; 

    static const char PROPERTY_AUS_POSTAL[] = "ausPostal"; 

    static const char PROPERTY_AUTO_ENTER[] = "autoEnter"; 

    static const char PROPERTY_AUTO_TAB[] = "autoTab"; 

    static const char PROPERTY_AZTEC[] = "aztec"; 

    static const char PROPERTY_BARCODE_DATA_FORMAT[] = "barcodeDataFormat"; 

    static const char PROPERTY_BEAM_WIDTH[] = "beamWidth"; 

    static const char PROPERTY_BIDIRECTIONAL_REDUNDANCY[] = "bidirectionalRedundancy"; 

    static const char PROPERTY_CAN_POSTAL[] = "canPostal"; 

    static const char PROPERTY_CHINESE2OF5[] = "chinese2of5"; 

    static const char PROPERTY_CODABAR[] = "codabar"; 

    static const char PROPERTY_CODABAR_CLSI_EDITING[] = "codabarClsiEditing"; 

    static const char PROPERTY_CODABAR_MAX_LENGTH[] = "codabarMaxLength"; 

    static const char PROPERTY_CODABAR_MIN_LENGTH[] = "codabarMinLength"; 

    static const char PROPERTY_CODABAR_NOTIS_EDITING[] = "codabarNotisEditing"; 

    static const char PROPERTY_CODABAR_REDUNDANCY[] = "codabarRedundancy"; 

    static const char PROPERTY_CODE11[] = "code11"; 

    static const char PROPERTY_CODE11CHECK_DIGIT_COUNT[] = "code11checkDigitCount"; 

    static const char PROPERTY_CODE11MAX_LENGTH[] = "code11maxLength"; 

    static const char PROPERTY_CODE11MIN_LENGTH[] = "code11minLength"; 

    static const char PROPERTY_CODE11REDUNDANCY[] = "code11redundancy"; 

    static const char PROPERTY_CODE11REPORT_CHECK_DIGIT[] = "code11reportCheckDigit"; 

    static const char PROPERTY_CODE128[] = "code128"; 

    static const char PROPERTY_CODE128CHECK_IS_BT_TABLE[] = "code128checkIsBtTable"; 

    static const char PROPERTY_CODE128EAN128[] = "code128ean128"; 

    static const char PROPERTY_CODE128ISBT128[] = "code128isbt128"; 

    static const char PROPERTY_CODE128ISBT128_CONCAT_MODE[] = "code128isbt128ConcatMode"; 

    static const char PROPERTY_CODE128MAX_LENGTH[] = "code128maxLength"; 

    static const char PROPERTY_CODE128MIN_LENGTH[] = "code128minLength"; 

    static const char PROPERTY_CODE128OTHER128[] = "code128other128"; 

    static const char PROPERTY_CODE128REDUNDANCY[] = "code128redundancy"; 

    static const char PROPERTY_CODE128SECURITY_LEVEL[] = "code128securityLevel"; 

    static const char PROPERTY_CODE39[] = "code39"; 

    static const char PROPERTY_CODE39CODE32_PREFIX[] = "code39code32Prefix"; 

    static const char PROPERTY_CODE39CONVERT_TO_CODE32[] = "code39convertToCode32"; 

    static const char PROPERTY_CODE39FULL_ASCII[] = "code39fullAscii"; 

    static const char PROPERTY_CODE39MAX_LENGTH[] = "code39maxLength"; 

    static const char PROPERTY_CODE39MIN_LENGTH[] = "code39minLength"; 

    static const char PROPERTY_CODE39REDUNDANCY[] = "code39redundancy"; 

    static const char PROPERTY_CODE39REPORT_CHECK_DIGIT[] = "code39reportCheckDigit"; 

    static const char PROPERTY_CODE39SECURITY_LEVEL[] = "code39securityLevel"; 

    static const char PROPERTY_CODE39VERIFY_CHECK_DIGIT[] = "code39verifyCheckDigit"; 

    static const char PROPERTY_CODE93[] = "code93"; 

    static const char PROPERTY_CODE93MAX_LENGTH[] = "code93maxLength"; 

    static const char PROPERTY_CODE93MIN_LENGTH[] = "code93minLength"; 

    static const char PROPERTY_CODE93REDUNDANCY[] = "code93redundancy"; 

    static const char PROPERTY_COMPOSITE_AB[] = "compositeAb"; 

    static const char PROPERTY_COMPOSITE_AB_UCC_LINK_MODE[] = "compositeAbUccLinkMode"; 

    static const char PROPERTY_COMPOSITE_AB_USE_UPC_PREAMBLE_CHECK_DIGIT_RULES[] = "compositeAbUseUpcPreambleCheckDigitRules"; 

    static const char PROPERTY_COMPOSITE_C[] = "compositeC"; 

    static const char PROPERTY_CONNECTION_IDLE_TIMEOUT[] = "connectionIdleTimeout"; 

    static const char PROPERTY_D2OF5[] = "d2of5"; 

    static const char PROPERTY_D2OF5MAX_LENGTH[] = "d2of5maxLength"; 

    static const char PROPERTY_D2OF5MIN_LENGTH[] = "d2of5minLength"; 

    static const char PROPERTY_D2OF5REDUNDANCY[] = "d2of5redundancy"; 

    static const char PROPERTY_DATAMATRIX[] = "datamatrix"; 

    static const char PROPERTY_DATA_BUFFER_SIZE[] = "dataBufferSize"; 

    static const char PROPERTY_DBP_MODE[] = "dbpMode"; 

    static const char PROPERTY_DECODE_DURATION[] = "decodeDuration"; 

    static const char PROPERTY_DECODE_FREQUENCY[] = "decodeFrequency"; 

    static const char PROPERTY_DECODE_SOUND[] = "decodeSound"; 

    static const char PROPERTY_DECODE_VOLUME[] = "decodeVolume"; 

    static const char PROPERTY_DIFFERENT_SYMBOL_TIMEOUT[] = "differentSymbolTimeout"; 

    static const char PROPERTY_DISABLE_SCANNER_DURING_NAVIGATE[] = "disableScannerDuringNavigate"; 

    static const char PROPERTY_DISCONNECT_BT_ON_DISABLE[] = "disconnectBtOnDisable"; 

    static const char PROPERTY_DISPLAY_BT_ADDRESS_BARCODE_ON_ENABLE[] = "displayBtAddressBarcodeOnEnable"; 

    static const char PROPERTY_DPM_MODE[] = "dpmMode"; 

    static const char PROPERTY_DUTCH_POSTAL[] = "dutchPostal"; 

    static const char PROPERTY_EAN13[] = "ean13"; 

    static const char PROPERTY_EAN8[] = "ean8"; 

    static const char PROPERTY_EAN8CONVERT_TO_EAN13[] = "ean8convertToEan13"; 

    static const char PROPERTY_ENABLE_TIMEOUT[] = "enableTimeout"; 

    static const char PROPERTY_FOCUS_MODE[] = "focusMode"; 

    static const char PROPERTY_FRIENDLY_NAME[] = "friendlyName"; 

    static const char PROPERTY_GS1DATA_BAR[] = "gs1dataBar"; 

    static const char PROPERTY_GS1DATA_BAR_EXPANDED[] = "gs1dataBarExpanded"; 

    static const char PROPERTY_GS1DATA_BAR_LIMITED[] = "gs1dataBarLimited"; 

    static const char PROPERTY_HAPTIC_FEEDBACK[] = "hapticFeedback"; 

    static const char PROPERTY_I2OF5[] = "i2of5"; 

    static const char PROPERTY_I2OF5CONVERT_TO_EAN13[] = "i2of5convertToEan13"; 

    static const char PROPERTY_I2OF5MAX_LENGTH[] = "i2of5maxLength"; 

    static const char PROPERTY_I2OF5MIN_LENGTH[] = "i2of5minLength"; 

    static const char PROPERTY_I2OF5REDUNDANCY[] = "i2of5redundancy"; 

    static const char PROPERTY_I2OF5REPORT_CHECK_DIGIT[] = "i2of5reportCheckDigit"; 

    static const char PROPERTY_I2OF5VERIFY_CHECK_DIGIT[] = "i2of5verifyCheckDigit"; 

    static const char PROPERTY_ILLUMINATION_MODE[] = "illuminationMode"; 

    static const char PROPERTY_INVALID_DECODE_FREQUENCY[] = "invalidDecodeFrequency"; 

    static const char PROPERTY_INVALID_DECODE_SOUND[] = "invalidDecodeSound"; 

    static const char PROPERTY_INVERSE1D_MODE[] = "inverse1dMode"; 

    static const char PROPERTY_JAP_POSTAL[] = "japPostal"; 

    static const char PROPERTY_KLASSE_EINS[] = "klasseEins"; 

    static const char PROPERTY_KOREAN3OF5[] = "korean3of5"; 

    static const char PROPERTY_KOREAN3OF5MAX_LENGTH[] = "korean3of5maxLength"; 

    static const char PROPERTY_KOREAN3OF5MIN_LENGTH[] = "korean3of5minLength"; 

    static const char PROPERTY_KOREAN3OF5REDUNDANCY[] = "korean3of5redundancy"; 

    static const char PROPERTY_LCD_MODE[] = "lcdMode"; 

    static const char PROPERTY_LINEAR_SECURITY_LEVEL[] = "linearSecurityLevel"; 

    static const char PROPERTY_LOW_BATTERY_SCAN[] = "lowBatteryScan"; 

    static const char PROPERTY_MACRO_MICRO_PDF[] = "macroMicroPdf"; 

    static const char PROPERTY_MACRO_MICRO_PDF_BUFFER_LABELS[] = "macroMicroPdfBufferLabels"; 

    static const char PROPERTY_MACRO_MICRO_PDF_CONVERT_TO_MICRO_PDF[] = "macroMicroPdfConvertToMicroPdf"; 

    static const char PROPERTY_MACRO_MICRO_PDF_EXCLUSIVE[] = "macroMicroPdfExclusive"; 

    static const char PROPERTY_MACRO_MICRO_PDF_REPORT_APPEND_INFO[] = "macroMicroPdfReportAppendInfo"; 

    static const char PROPERTY_MACRO_PDF[] = "macroPdf"; 

    static const char PROPERTY_MACRO_PDF_BUFFER_LABELS[] = "macroPdfBufferLabels"; 

    static const char PROPERTY_MACRO_PDF_CONVERT_TO_PDF417[] = "macroPdfConvertToPdf417"; 

    static const char PROPERTY_MACRO_PDF_EXCLUSIVE[] = "macroPdfExclusive"; 

    static const char PROPERTY_MATRIX2OF5[] = "matrix2of5"; 

    static const char PROPERTY_MATRIX2OF5MAX_LENGTH[] = "matrix2of5maxLength"; 

    static const char PROPERTY_MATRIX2OF5MIN_LENGTH[] = "matrix2of5minLength"; 

    static const char PROPERTY_MATRIX2OF5REPORT_CHECK_DIGIT[] = "matrix2of5reportCheckDigit"; 

    static const char PROPERTY_MATRIX2OF5VERIFY_CHECK_DIGIT[] = "matrix2of5verifyCheckDigit"; 

    static const char PROPERTY_MAXI_CODE[] = "maxiCode"; 

    static const char PROPERTY_MICRO_PDF[] = "microPdf"; 

    static const char PROPERTY_MICRO_QR[] = "microQr"; 

    static const char PROPERTY_MSI[] = "msi"; 

    static const char PROPERTY_MSI_CHECK_DIGITS[] = "msiCheckDigits"; 

    static const char PROPERTY_MSI_CHECK_DIGIT_SCHEME[] = "msiCheckDigitScheme"; 

    static const char PROPERTY_MSI_MAX_LENGTH[] = "msiMaxLength"; 

    static const char PROPERTY_MSI_MIN_LENGTH[] = "msiMinLength"; 

    static const char PROPERTY_MSI_REDUNDANCY[] = "msiRedundancy"; 

    static const char PROPERTY_MSI_REPORT_CHECK_DIGIT[] = "msiReportCheckDigit"; 

    static const char PROPERTY_PDF417[] = "pdf417"; 

    static const char PROPERTY_PICKLIST_MODE[] = "picklistMode"; 

    static const char PROPERTY_POOR_QUALITY1D_MODE[] = "poorQuality1dMode"; 

    static const char PROPERTY_QR_CODE[] = "qrCode"; 

    static const char PROPERTY_RASTER_HEIGHT[] = "rasterHeight"; 

    static const char PROPERTY_RASTER_MODE[] = "rasterMode"; 

    static const char PROPERTY_RSM_BATTERY_CAPACITY[] = "rsmBatteryCapacity"; 

    static const char PROPERTY_RSM_BATTERY_ID[] = "rsmBatteryId"; 

    static const char PROPERTY_RSM_BATTERY_STATUS[] = "rsmBatteryStatus"; 

    static const char PROPERTY_RSM_BLUETOOTH_ADDRESS[] = "rsmBluetoothAddress"; 

    static const char PROPERTY_RSM_BLUETOOTH_AUTHENTICATION[] = "rsmBluetoothAuthentication"; 

    static const char PROPERTY_RSM_BLUETOOTH_AUTO_RECONNECT[] = "rsmBluetoothAutoReconnect"; 

    static const char PROPERTY_RSM_BLUETOOTH_BEEP_ON_RECONNECT_ATTEMPT[] = "rsmBluetoothBeepOnReconnectAttempt"; 

    static const char PROPERTY_RSM_BLUETOOTH_ENCRYPTION[] = "rsmBluetoothEncryption"; 

    static const char PROPERTY_RSM_BLUETOOTH_FRIENDLY_NAME[] = "rsmBluetoothFriendlyName"; 

    static const char PROPERTY_RSM_BLUETOOTH_HID_AUTO_RECONNECT[] = "rsmBluetoothHidAutoReconnect"; 

    static const char PROPERTY_RSM_BLUETOOTH_INQUIRY_MODE[] = "rsmBluetoothInquiryMode"; 

    static const char PROPERTY_RSM_BLUETOOTH_PIN_CODE[] = "rsmBluetoothPinCode"; 

    static const char PROPERTY_RSM_BLUETOOTH_PIN_CODE_TYPE[] = "rsmBluetoothPinCodeType"; 

    static const char PROPERTY_RSM_BLUETOOTH_RECONNECTION_ATTEMPTS[] = "rsmBluetoothReconnectionAttempts"; 

    static const char PROPERTY_RSM_DATE_OF_MANUFACTURE[] = "rsmDateOfManufacture"; 

    static const char PROPERTY_RSM_DATE_OF_SERVICE[] = "rsmDateOfService"; 

    static const char PROPERTY_RSM_DECODE_FEEDBACK[] = "rsmDecodeFeedback"; 

    static const char PROPERTY_RSM_DEVICE_CLASS[] = "rsmDeviceClass"; 

    static const char PROPERTY_RSM_FIRMWARE_VERSION[] = "rsmFirmwareVersion"; 

    static const char PROPERTY_RSM_FORCE_SAVE_PAIRING_BARCODE[] = "rsmForceSavePairingBarcode"; 

    static const char PROPERTY_RSM_GOOD_SCANS_DELAY[] = "rsmGoodScansDelay"; 

    static const char PROPERTY_RSM_IGNORE_CODE128_USPS[] = "rsmIgnoreCode128Usps"; 

    static const char PROPERTY_RSM_LOW_BATTERY_INDICATION[] = "rsmLowBatteryIndication"; 

    static const char PROPERTY_RSM_LOW_BATTERY_INDICATION_CYCLE[] = "rsmLowBatteryIndicationCycle"; 

    static const char PROPERTY_RSM_MEMS[] = "rsmMems"; 

    static const char PROPERTY_RSM_MODEL_NUMBER[] = "rsmModelNumber"; 

    static const char PROPERTY_RSM_PAGING_BEEP_SEQUENCE[] = "rsmPagingBeepSequence"; 

    static const char PROPERTY_RSM_PAGING_ENABLE[] = "rsmPagingEnable"; 

    static const char PROPERTY_RSM_PROXIMITY_CONTINUOUS[] = "rsmProximityContinuous"; 

    static const char PROPERTY_RSM_PROXIMITY_DISTANCE[] = "rsmProximityDistance"; 

    static const char PROPERTY_RSM_PROXIMITY_ENABLE[] = "rsmProximityEnable"; 

    static const char PROPERTY_RSM_SCAN_LINE_WIDTH[] = "rsmScanLineWidth"; 

    static const char PROPERTY_RSM_SCAN_TRIGGER_WAKEUP[] = "rsmScanTriggerWakeup"; 

    static const char PROPERTY_RSM_SERIAL_NUMBER[] = "rsmSerialNumber"; 

    static const char PROPERTY_SAME_SYMBOL_TIMEOUT[] = "sameSymbolTimeout"; 

    static const char PROPERTY_SCANNER_TYPE[] = "scannerType"; 

    static const char PROPERTY_SCAN_TIMEOUT[] = "scanTimeout"; 

    static const char PROPERTY_SIGNATURE[] = "signature"; 

    static const char PROPERTY_SIGNATURE_IMAGE_HEIGHT[] = "signatureImageHeight"; 

    static const char PROPERTY_SIGNATURE_IMAGE_QUALITY[] = "signatureImageQuality"; 

    static const char PROPERTY_SIGNATURE_IMAGE_WIDTH[] = "signatureImageWidth"; 

    static const char PROPERTY_TIMED_AIM_DURATION[] = "timedAimDuration"; 

    static const char PROPERTY_TLC39[] = "tlc39"; 

    static const char PROPERTY_TRIGGER_CONNECTED[] = "triggerConnected"; 

    static const char PROPERTY_TRIOPTIC39[] = "trioptic39"; 

    static const char PROPERTY_TRIOPTIC39_REDUNDANCY[] = "trioptic39Redundancy"; 

    static const char PROPERTY_UK_POSTAL[] = "ukPostal"; 

    static const char PROPERTY_UK_POSTAL_REPORT_CHECK_DIGIT[] = "ukPostalReportCheckDigit"; 

    static const char PROPERTY_UPCA[] = "upca"; 

    static const char PROPERTY_UPCA_PREAMBLE[] = "upcaPreamble"; 

    static const char PROPERTY_UPCA_REPORT_CHECK_DIGIT[] = "upcaReportCheckDigit"; 

    static const char PROPERTY_UPCE0[] = "upce0"; 

    static const char PROPERTY_UPCE0CONVERT_TO_UPCA[] = "upce0convertToUpca"; 

    static const char PROPERTY_UPCE0PREAMBLE[] = "upce0preamble"; 

    static const char PROPERTY_UPCE0REPORT_CHECK_DIGIT[] = "upce0reportCheckDigit"; 

    static const char PROPERTY_UPCE1[] = "upce1"; 

    static const char PROPERTY_UPCE1CONVERT_TO_UPCA[] = "upce1convertToUpca"; 

    static const char PROPERTY_UPCE1PREAMBLE[] = "upce1preamble"; 

    static const char PROPERTY_UPCE1REPORT_CHECK_DIGIT[] = "upce1reportCheckDigit"; 

    static const char PROPERTY_UPC_EAN_BOOKLAND[] = "upcEanBookland"; 

    static const char PROPERTY_UPC_EAN_BOOKLAND_FORMAT[] = "upcEanBooklandFormat"; 

    static const char PROPERTY_UPC_EAN_CONVERT_GS1DATA_BAR_TO_UPC_EAN[] = "upcEanConvertGs1dataBarToUpcEan"; 

    static const char PROPERTY_UPC_EAN_COUPON[] = "upcEanCoupon"; 

    static const char PROPERTY_UPC_EAN_LINEAR_DECODE[] = "upcEanLinearDecode"; 

    static const char PROPERTY_UPC_EAN_RANDOM_WEIGHT_CHECK_DIGIT[] = "upcEanRandomWeightCheckDigit"; 

    static const char PROPERTY_UPC_EAN_RETRY_COUNT[] = "upcEanRetryCount"; 

    static const char PROPERTY_UPC_EAN_SECURITY_LEVEL[] = "upcEanSecurityLevel"; 

    static const char PROPERTY_UPC_EAN_SUPPLEMENTAL2[] = "upcEanSupplemental2"; 

    static const char PROPERTY_UPC_EAN_SUPPLEMENTAL5[] = "upcEanSupplemental5"; 

    static const char PROPERTY_UPC_EAN_SUPPLEMENTAL_MODE[] = "upcEanSupplementalMode"; 

    static const char PROPERTY_US4STATE[] = "us4state"; 

    static const char PROPERTY_US4STATE_FICS[] = "us4stateFics"; 

    static const char PROPERTY_US_PLANET[] = "usPlanet"; 

    static const char PROPERTY_US_PLANET_REPORT_CHECK_DIGIT[] = "usPlanetReportCheckDigit"; 

    static const char PROPERTY_US_POST_NET[] = "usPostNet"; 

    static const char PROPERTY_US_POST_NET_REPORT_CHECK_DIGIT[] = "usPostNetReportCheckDigit"; 

    static const char PROPERTY_VIEWFINDER_FEEDBACK[] = "viewfinderFeedback"; 

    static const char PROPERTY_VIEWFINDER_FEEDBACK_TIME[] = "viewfinderFeedbackTime"; 

    static const char PROPERTY_VIEWFINDER_HEIGHT[] = "viewfinderHeight"; 

    static const char PROPERTY_VIEWFINDER_MODE[] = "viewfinderMode"; 

    static const char PROPERTY_VIEWFINDER_WIDTH[] = "viewfinderWidth"; 

    static const char PROPERTY_VIEWFINDER_X[] = "viewfinderX"; 

    static const char PROPERTY_VIEWFINDER_Y[] = "viewfinderY"; 

    static const char PROPERTY_WEBCODE[] = "webcode"; 

    static const char PROPERTY_WEBCODE_DECODE_GT_SUBTYPE[] = "webcodeDecodeGtSubtype"; 
 
} 

class CBarcodeChainwayFactoryBase : public CModuleFactoryBase<IBarcodeChainway, IBarcodeChainwaySingleton, IBarcodeChainwayFactory>
{
protected:
    static rho::common::CAutoPtr<CBarcodeChainwayFactoryBase> m_pInstance;
    HashtablePtr<rho::String,IBarcodeChainway*> m_hashModules;

public:

    static void setInstance(CBarcodeChainwayFactoryBase* pInstance){ m_pInstance = pInstance; }
    static CBarcodeChainwayFactoryBase* getInstance(){ return m_pInstance; }

    static IBarcodeChainwaySingleton* getBarcodeChainwaySingletonS(){ return getInstance()->getModuleSingleton(); }

    virtual IBarcodeChainway* getModuleByID(const rho::String& strID)
    {
        if ( !m_hashModules.containsKey(strID) )
        {
            IBarcodeChainway* pObj = createModuleByID(strID);
            m_hashModules.put(strID, pObj );

            return pObj;
        }

        return m_hashModules[strID];
    }

    virtual IBarcodeChainway* createModuleByID(const rho::String& strID){ return (IBarcodeChainway*)0; };
    virtual void deleteModuleByID(const rho::String& strID)
    {
        m_hashModules.remove(strID);
    }

};

class CBarcodeChainwaySingletonBase : public CModuleSingletonBase< IBarcodeChainwaySingleton >, public rho::common::IRhoExtension
{
protected:
    DEFINE_LOGCLASS;


    rho::String m_strDefaultID;




public:
    virtual rho::LogCategory getModuleLogCategory(){ return getLogCategory(); }

    CBarcodeChainwaySingletonBase();
    ~CBarcodeChainwaySingletonBase();




    virtual void setDefaultID(const rho::String& strDefaultID){ m_strDefaultID = strDefaultID; }
    virtual rho::String getDefaultID()
    { 
        if ( m_strDefaultID.length() == 0 )
            setDefaultID(getInitialDefaultID());
        return m_strDefaultID; 
    }

};

class CBarcodeChainwayBase: public IBarcodeChainway
{
protected:
    DEFINE_LOGCLASS;


    rho::Hashtable<rho::String, rho::String> m_hashProps;
    rho::Hashtable<rho::String, rho::apiGenerator::CMethodAccessor< IBarcodeChainway > *> m_mapPropAccessors;

public:


    CBarcodeChainwayBase();

    virtual void getProperty( const rho::String& propertyName, CMethodResult& oResult);
    virtual void getProperties( const rho::Vector<rho::String>& arrayofNames, CMethodResult& oResult);
    virtual void getAllProperties(CMethodResult& oResult);
    virtual void setProperty( const rho::String& propertyName,  const rho::String& propertyValue, CMethodResult& oResult);
    virtual void setProperties( const rho::Hashtable<rho::String, rho::String>& propertyMap, CMethodResult& oResult);
    virtual void clearAllProperties(CMethodResult& oResult);


    virtual void getAutoEnter(rho::apiGenerator::CMethodResult& oResult);

    virtual void setAutoEnter( bool autoEnter, rho::apiGenerator::CMethodResult& oResult);

    virtual void getAutoTab(rho::apiGenerator::CMethodResult& oResult);

    virtual void setAutoTab( bool autoTab, rho::apiGenerator::CMethodResult& oResult);

    virtual void getHapticFeedback(rho::apiGenerator::CMethodResult& oResult);

    virtual void setHapticFeedback( bool hapticFeedback, rho::apiGenerator::CMethodResult& oResult);

    virtual void getLinearSecurityLevel(rho::apiGenerator::CMethodResult& oResult);

    virtual void setLinearSecurityLevel( const rho::String& linearSecurityLevel, rho::apiGenerator::CMethodResult& oResult);

    virtual void getScanTimeout(rho::apiGenerator::CMethodResult& oResult);

    virtual void setScanTimeout( int scanTimeout, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRasterMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRasterMode( const rho::String& rasterMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRasterHeight(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRasterHeight( int rasterHeight, rho::apiGenerator::CMethodResult& oResult);

    virtual void getAimType(rho::apiGenerator::CMethodResult& oResult);

    virtual void setAimType( const rho::String& aimType, rho::apiGenerator::CMethodResult& oResult);

    virtual void getTimedAimDuration(rho::apiGenerator::CMethodResult& oResult);

    virtual void setTimedAimDuration( int timedAimDuration, rho::apiGenerator::CMethodResult& oResult);

    virtual void getSameSymbolTimeout(rho::apiGenerator::CMethodResult& oResult);

    virtual void setSameSymbolTimeout( int sameSymbolTimeout, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDifferentSymbolTimeout(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDifferentSymbolTimeout( int differentSymbolTimeout, rho::apiGenerator::CMethodResult& oResult);

    virtual void getAimMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setAimMode( const rho::String& aimMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getPicklistMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setPicklistMode( const rho::String& picklistMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getViewfinderMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setViewfinderMode( const rho::String& viewfinderMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getViewfinderX(rho::apiGenerator::CMethodResult& oResult);

    virtual void setViewfinderX( int viewfinderX, rho::apiGenerator::CMethodResult& oResult);

    virtual void getViewfinderY(rho::apiGenerator::CMethodResult& oResult);

    virtual void setViewfinderY( int viewfinderY, rho::apiGenerator::CMethodResult& oResult);

    virtual void getViewfinderWidth(rho::apiGenerator::CMethodResult& oResult);

    virtual void setViewfinderWidth( int viewfinderWidth, rho::apiGenerator::CMethodResult& oResult);

    virtual void getViewfinderHeight(rho::apiGenerator::CMethodResult& oResult);

    virtual void setViewfinderHeight( int viewfinderHeight, rho::apiGenerator::CMethodResult& oResult);

    virtual void getViewfinderFeedback(rho::apiGenerator::CMethodResult& oResult);

    virtual void setViewfinderFeedback( const rho::String& viewfinderFeedback, rho::apiGenerator::CMethodResult& oResult);

    virtual void getViewfinderFeedbackTime(rho::apiGenerator::CMethodResult& oResult);

    virtual void setViewfinderFeedbackTime( int viewfinderFeedbackTime, rho::apiGenerator::CMethodResult& oResult);

    virtual void getFocusMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setFocusMode( const rho::String& focusMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getIlluminationMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setIlluminationMode( const rho::String& illuminationMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDpmMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDpmMode( bool dpmMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getInverse1dMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setInverse1dMode( const rho::String& inverse1dMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getPoorQuality1dMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setPoorQuality1dMode( bool poorQuality1dMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getBeamWidth(rho::apiGenerator::CMethodResult& oResult);

    virtual void setBeamWidth( const rho::String& beamWidth, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDbpMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDbpMode( const rho::String& dbpMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getKlasseEins(rho::apiGenerator::CMethodResult& oResult);

    virtual void setKlasseEins( bool klasseEins, rho::apiGenerator::CMethodResult& oResult);

    virtual void getAdaptiveScanning(rho::apiGenerator::CMethodResult& oResult);

    virtual void setAdaptiveScanning( bool adaptiveScanning, rho::apiGenerator::CMethodResult& oResult);

    virtual void getBidirectionalRedundancy(rho::apiGenerator::CMethodResult& oResult);

    virtual void setBidirectionalRedundancy( bool bidirectionalRedundancy, rho::apiGenerator::CMethodResult& oResult);

    virtual void getBarcodeDataFormat(rho::apiGenerator::CMethodResult& oResult);

    virtual void setBarcodeDataFormat( const rho::String& barcodeDataFormat, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDataBufferSize(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDataBufferSize( int dataBufferSize, rho::apiGenerator::CMethodResult& oResult);

    virtual void getConnectionIdleTimeout(rho::apiGenerator::CMethodResult& oResult);

    virtual void setConnectionIdleTimeout( int connectionIdleTimeout, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDisconnectBtOnDisable(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDisconnectBtOnDisable( bool disconnectBtOnDisable, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDisplayBtAddressBarcodeOnEnable(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDisplayBtAddressBarcodeOnEnable( bool displayBtAddressBarcodeOnEnable, rho::apiGenerator::CMethodResult& oResult);

    virtual void getEnableTimeout(rho::apiGenerator::CMethodResult& oResult);

    virtual void setEnableTimeout( int enableTimeout, rho::apiGenerator::CMethodResult& oResult);

    virtual void getFriendlyName(rho::apiGenerator::CMethodResult& oResult);

    virtual void getLcdMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setLcdMode( bool lcdMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getLowBatteryScan(rho::apiGenerator::CMethodResult& oResult);

    virtual void setLowBatteryScan( bool lowBatteryScan, rho::apiGenerator::CMethodResult& oResult);

    virtual void getTriggerConnected(rho::apiGenerator::CMethodResult& oResult);

    virtual void setTriggerConnected( bool triggerConnected, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDisableScannerDuringNavigate(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDisableScannerDuringNavigate( bool disableScannerDuringNavigate, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDecodeVolume(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDecodeVolume( int decodeVolume, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDecodeDuration(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDecodeDuration( int decodeDuration, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDecodeFrequency(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDecodeFrequency( int decodeFrequency, rho::apiGenerator::CMethodResult& oResult);

    virtual void getInvalidDecodeFrequency(rho::apiGenerator::CMethodResult& oResult);

    virtual void setInvalidDecodeFrequency( int invalidDecodeFrequency, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDecodeSound(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDecodeSound( const rho::String& decodeSound, rho::apiGenerator::CMethodResult& oResult);

    virtual void getInvalidDecodeSound(rho::apiGenerator::CMethodResult& oResult);

    virtual void setInvalidDecodeSound( const rho::String& invalidDecodeSound, rho::apiGenerator::CMethodResult& oResult);

    virtual void getScannerType(rho::apiGenerator::CMethodResult& oResult);

    virtual void getAllDecoders(rho::apiGenerator::CMethodResult& oResult);

    virtual void setAllDecoders( bool allDecoders, rho::apiGenerator::CMethodResult& oResult);

    virtual void getAztec(rho::apiGenerator::CMethodResult& oResult);

    virtual void setAztec( bool aztec, rho::apiGenerator::CMethodResult& oResult);

    virtual void getChinese2of5(rho::apiGenerator::CMethodResult& oResult);

    virtual void setChinese2of5( bool chinese2of5, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCodabar(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCodabar( bool codabar, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCodabarClsiEditing(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCodabarClsiEditing( bool codabarClsiEditing, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCodabarMaxLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCodabarMaxLength( int codabarMaxLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCodabarMinLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCodabarMinLength( int codabarMinLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCodabarNotisEditing(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCodabarNotisEditing( bool codabarNotisEditing, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCodabarRedundancy(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCodabarRedundancy( bool codabarRedundancy, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode11(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode11( bool code11, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode11checkDigitCount(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode11checkDigitCount( const rho::String& code11checkDigitCount, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode11maxLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode11maxLength( int code11maxLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode11minLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode11minLength( int code11minLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode11redundancy(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode11redundancy( bool code11redundancy, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode11reportCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode11reportCheckDigit( bool code11reportCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode128(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode128( bool code128, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode128checkIsBtTable(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode128checkIsBtTable( bool code128checkIsBtTable, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode128ean128(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode128ean128( bool code128ean128, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode128isbt128(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode128isbt128( bool code128isbt128, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode128isbt128ConcatMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode128isbt128ConcatMode( const rho::String& code128isbt128ConcatMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode128maxLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode128maxLength( int code128maxLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode128minLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode128minLength( int code128minLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode128other128(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode128other128( bool code128other128, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode128redundancy(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode128redundancy( bool code128redundancy, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode128securityLevel(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode128securityLevel( int code128securityLevel, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCompositeAb(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCompositeAb( bool compositeAb, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCompositeAbUccLinkMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCompositeAbUccLinkMode( const rho::String& compositeAbUccLinkMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCompositeAbUseUpcPreambleCheckDigitRules(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCompositeAbUseUpcPreambleCheckDigitRules( bool compositeAbUseUpcPreambleCheckDigitRules, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCompositeC(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCompositeC( bool compositeC, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode39(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode39( bool code39, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode39code32Prefix(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode39code32Prefix( bool code39code32Prefix, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode39convertToCode32(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode39convertToCode32( bool code39convertToCode32, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode39fullAscii(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode39fullAscii( bool code39fullAscii, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode39maxLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode39maxLength( int code39maxLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode39minLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode39minLength( int code39minLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode39redundancy(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode39redundancy( bool code39redundancy, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode39reportCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode39reportCheckDigit( bool code39reportCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode39securityLevel(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode39securityLevel( int code39securityLevel, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode39verifyCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode39verifyCheckDigit( bool code39verifyCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode93(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode93( bool code93, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode93maxLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode93maxLength( int code93maxLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode93minLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode93minLength( int code93minLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCode93redundancy(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCode93redundancy( bool code93redundancy, rho::apiGenerator::CMethodResult& oResult);

    virtual void getD2of5(rho::apiGenerator::CMethodResult& oResult);

    virtual void setD2of5( bool d2of5, rho::apiGenerator::CMethodResult& oResult);

    virtual void getD2of5maxLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setD2of5maxLength( int d2of5maxLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getD2of5minLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setD2of5minLength( int d2of5minLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getD2of5redundancy(rho::apiGenerator::CMethodResult& oResult);

    virtual void setD2of5redundancy( bool d2of5redundancy, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDatamatrix(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDatamatrix( bool datamatrix, rho::apiGenerator::CMethodResult& oResult);

    virtual void getEan13(rho::apiGenerator::CMethodResult& oResult);

    virtual void setEan13( bool ean13, rho::apiGenerator::CMethodResult& oResult);

    virtual void getEan8(rho::apiGenerator::CMethodResult& oResult);

    virtual void setEan8( bool ean8, rho::apiGenerator::CMethodResult& oResult);

    virtual void getEan8convertToEan13(rho::apiGenerator::CMethodResult& oResult);

    virtual void setEan8convertToEan13( bool ean8convertToEan13, rho::apiGenerator::CMethodResult& oResult);

    virtual void getI2of5(rho::apiGenerator::CMethodResult& oResult);

    virtual void setI2of5( bool i2of5, rho::apiGenerator::CMethodResult& oResult);

    virtual void getI2of5convertToEan13(rho::apiGenerator::CMethodResult& oResult);

    virtual void setI2of5convertToEan13( bool i2of5convertToEan13, rho::apiGenerator::CMethodResult& oResult);

    virtual void getI2of5maxLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setI2of5maxLength( int i2of5maxLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getI2of5minLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setI2of5minLength( int i2of5minLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getI2of5redundancy(rho::apiGenerator::CMethodResult& oResult);

    virtual void setI2of5redundancy( bool i2of5redundancy, rho::apiGenerator::CMethodResult& oResult);

    virtual void getI2of5reportCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setI2of5reportCheckDigit( bool i2of5reportCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getI2of5verifyCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setI2of5verifyCheckDigit( const rho::String& i2of5verifyCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getKorean3of5(rho::apiGenerator::CMethodResult& oResult);

    virtual void setKorean3of5( bool korean3of5, rho::apiGenerator::CMethodResult& oResult);

    virtual void getKorean3of5redundancy(rho::apiGenerator::CMethodResult& oResult);

    virtual void setKorean3of5redundancy( bool korean3of5redundancy, rho::apiGenerator::CMethodResult& oResult);

    virtual void getKorean3of5maxLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setKorean3of5maxLength( int korean3of5maxLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getKorean3of5minLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setKorean3of5minLength( int korean3of5minLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMacroPdf(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMacroPdf( bool macroPdf, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMacroPdfBufferLabels(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMacroPdfBufferLabels( bool macroPdfBufferLabels, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMacroPdfConvertToPdf417(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMacroPdfConvertToPdf417( bool macroPdfConvertToPdf417, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMacroPdfExclusive(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMacroPdfExclusive( bool macroPdfExclusive, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMacroMicroPdf(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMacroMicroPdf( bool macroMicroPdf, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMacroMicroPdfBufferLabels(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMacroMicroPdfBufferLabels( bool macroMicroPdfBufferLabels, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMacroMicroPdfConvertToMicroPdf(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMacroMicroPdfConvertToMicroPdf( bool macroMicroPdfConvertToMicroPdf, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMacroMicroPdfExclusive(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMacroMicroPdfExclusive( bool macroMicroPdfExclusive, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMacroMicroPdfReportAppendInfo(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMacroMicroPdfReportAppendInfo( bool macroMicroPdfReportAppendInfo, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMatrix2of5(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMatrix2of5( bool matrix2of5, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMatrix2of5maxLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMatrix2of5maxLength( int matrix2of5maxLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMatrix2of5minLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMatrix2of5minLength( int matrix2of5minLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMatrix2of5reportCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMatrix2of5reportCheckDigit( bool matrix2of5reportCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMatrix2of5verifyCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMatrix2of5verifyCheckDigit( bool matrix2of5verifyCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMaxiCode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMaxiCode( bool maxiCode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMicroPdf(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMicroPdf( bool microPdf, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMicroQr(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMicroQr( bool microQr, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMsi(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMsi( bool msi, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMsiCheckDigits(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMsiCheckDigits( const rho::String& msiCheckDigits, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMsiCheckDigitScheme(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMsiCheckDigitScheme( const rho::String& msiCheckDigitScheme, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMsiMaxLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMsiMaxLength( int msiMaxLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMsiMinLength(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMsiMinLength( int msiMinLength, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMsiRedundancy(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMsiRedundancy( bool msiRedundancy, rho::apiGenerator::CMethodResult& oResult);

    virtual void getMsiReportCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setMsiReportCheckDigit( bool msiReportCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getPdf417(rho::apiGenerator::CMethodResult& oResult);

    virtual void setPdf417( bool pdf417, rho::apiGenerator::CMethodResult& oResult);

    virtual void getSignature(rho::apiGenerator::CMethodResult& oResult);

    virtual void setSignature( bool signature, rho::apiGenerator::CMethodResult& oResult);

    virtual void getSignatureImageHeight(rho::apiGenerator::CMethodResult& oResult);

    virtual void setSignatureImageHeight( int signatureImageHeight, rho::apiGenerator::CMethodResult& oResult);

    virtual void getSignatureImageWidth(rho::apiGenerator::CMethodResult& oResult);

    virtual void setSignatureImageWidth( int signatureImageWidth, rho::apiGenerator::CMethodResult& oResult);

    virtual void getSignatureImageQuality(rho::apiGenerator::CMethodResult& oResult);

    virtual void setSignatureImageQuality( int signatureImageQuality, rho::apiGenerator::CMethodResult& oResult);

    virtual void getAusPostal(rho::apiGenerator::CMethodResult& oResult);

    virtual void setAusPostal( bool ausPostal, rho::apiGenerator::CMethodResult& oResult);

    virtual void getCanPostal(rho::apiGenerator::CMethodResult& oResult);

    virtual void setCanPostal( bool canPostal, rho::apiGenerator::CMethodResult& oResult);

    virtual void getDutchPostal(rho::apiGenerator::CMethodResult& oResult);

    virtual void setDutchPostal( bool dutchPostal, rho::apiGenerator::CMethodResult& oResult);

    virtual void getJapPostal(rho::apiGenerator::CMethodResult& oResult);

    virtual void setJapPostal( bool japPostal, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUkPostal(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUkPostal( bool ukPostal, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUkPostalReportCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUkPostalReportCheckDigit( bool ukPostalReportCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUs4state(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUs4state( bool us4state, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUs4stateFics(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUs4stateFics( bool us4stateFics, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUsPlanet(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUsPlanet( bool usPlanet, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUsPlanetReportCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUsPlanetReportCheckDigit( bool usPlanetReportCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUsPostNet(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUsPostNet( bool usPostNet, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUsPostNetReportCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUsPostNetReportCheckDigit( bool usPostNetReportCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getQrCode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setQrCode( bool qrCode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getGs1dataBar(rho::apiGenerator::CMethodResult& oResult);

    virtual void setGs1dataBar( bool gs1dataBar, rho::apiGenerator::CMethodResult& oResult);

    virtual void getGs1dataBarExpanded(rho::apiGenerator::CMethodResult& oResult);

    virtual void setGs1dataBarExpanded( bool gs1dataBarExpanded, rho::apiGenerator::CMethodResult& oResult);

    virtual void getGs1dataBarLimited(rho::apiGenerator::CMethodResult& oResult);

    virtual void setGs1dataBarLimited( bool gs1dataBarLimited, rho::apiGenerator::CMethodResult& oResult);

    virtual void getTlc39(rho::apiGenerator::CMethodResult& oResult);

    virtual void setTlc39( bool tlc39, rho::apiGenerator::CMethodResult& oResult);

    virtual void getTrioptic39(rho::apiGenerator::CMethodResult& oResult);

    virtual void setTrioptic39( bool trioptic39, rho::apiGenerator::CMethodResult& oResult);

    virtual void getTrioptic39Redundancy(rho::apiGenerator::CMethodResult& oResult);

    virtual void setTrioptic39Redundancy( bool trioptic39Redundancy, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcEanBookland(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcEanBookland( bool upcEanBookland, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcEanBooklandFormat(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcEanBooklandFormat( const rho::String& upcEanBooklandFormat, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcEanConvertGs1dataBarToUpcEan(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcEanConvertGs1dataBarToUpcEan( bool upcEanConvertGs1dataBarToUpcEan, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcEanCoupon(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcEanCoupon( bool upcEanCoupon, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcEanLinearDecode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcEanLinearDecode( bool upcEanLinearDecode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcEanRandomWeightCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcEanRandomWeightCheckDigit( bool upcEanRandomWeightCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcEanRetryCount(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcEanRetryCount( int upcEanRetryCount, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcEanSecurityLevel(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcEanSecurityLevel( int upcEanSecurityLevel, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcEanSupplemental2(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcEanSupplemental2( bool upcEanSupplemental2, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcEanSupplemental5(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcEanSupplemental5( bool upcEanSupplemental5, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcEanSupplementalMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcEanSupplementalMode( const rho::String& upcEanSupplementalMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpca(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpca( bool upca, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcaPreamble(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcaPreamble( const rho::String& upcaPreamble, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpcaReportCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpcaReportCheckDigit( bool upcaReportCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpce0(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpce0( bool upce0, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpce0convertToUpca(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpce0convertToUpca( bool upce0convertToUpca, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpce0preamble(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpce0preamble( const rho::String& upce0preamble, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpce0reportCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpce0reportCheckDigit( bool upce0reportCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpce1(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpce1( bool upce1, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpce1convertToUpca(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpce1convertToUpca( bool upce1convertToUpca, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpce1preamble(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpce1preamble( const rho::String& upce1preamble, rho::apiGenerator::CMethodResult& oResult);

    virtual void getUpce1reportCheckDigit(rho::apiGenerator::CMethodResult& oResult);

    virtual void setUpce1reportCheckDigit( bool upce1reportCheckDigit, rho::apiGenerator::CMethodResult& oResult);

    virtual void getWebcode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setWebcode( bool webcode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getWebcodeDecodeGtSubtype(rho::apiGenerator::CMethodResult& oResult);

    virtual void setWebcodeDecodeGtSubtype( bool webcodeDecodeGtSubtype, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmModelNumber(rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmSerialNumber(rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmDateOfManufacture(rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmDateOfService(rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBluetoothAddress(rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmFirmwareVersion(rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmDeviceClass(rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBatteryStatus(rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBatteryCapacity(rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBatteryId(rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBluetoothAuthentication(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmBluetoothAuthentication( bool rsmBluetoothAuthentication, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBluetoothEncryption(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmBluetoothEncryption( bool rsmBluetoothEncryption, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBluetoothPinCode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmBluetoothPinCode( const rho::String& rsmBluetoothPinCode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBluetoothPinCodeType(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmBluetoothPinCodeType( const rho::String& rsmBluetoothPinCodeType, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBluetoothReconnectionAttempts(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmBluetoothReconnectionAttempts( int rsmBluetoothReconnectionAttempts, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBluetoothBeepOnReconnectAttempt(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmBluetoothBeepOnReconnectAttempt( bool rsmBluetoothBeepOnReconnectAttempt, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBluetoothHidAutoReconnect(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmBluetoothHidAutoReconnect( const rho::String& rsmBluetoothHidAutoReconnect, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBluetoothFriendlyName(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmBluetoothFriendlyName( const rho::String& rsmBluetoothFriendlyName, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBluetoothInquiryMode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmBluetoothInquiryMode( const rho::String& rsmBluetoothInquiryMode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmBluetoothAutoReconnect(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmBluetoothAutoReconnect( const rho::String& rsmBluetoothAutoReconnect, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmForceSavePairingBarcode(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmForceSavePairingBarcode( bool rsmForceSavePairingBarcode, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmLowBatteryIndication(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmLowBatteryIndication( bool rsmLowBatteryIndication, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmLowBatteryIndicationCycle(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmLowBatteryIndicationCycle( int rsmLowBatteryIndicationCycle, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmScanLineWidth(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmScanLineWidth( const rho::String& rsmScanLineWidth, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmGoodScansDelay(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmGoodScansDelay( int rsmGoodScansDelay, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmDecodeFeedback(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmDecodeFeedback( bool rsmDecodeFeedback, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmIgnoreCode128Usps(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmIgnoreCode128Usps( bool rsmIgnoreCode128Usps, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmScanTriggerWakeup(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmScanTriggerWakeup( bool rsmScanTriggerWakeup, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmMems(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmMems( bool rsmMems, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmProximityEnable(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmProximityEnable( bool rsmProximityEnable, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmProximityContinuous(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmProximityContinuous( bool rsmProximityContinuous, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmProximityDistance(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmProximityDistance( const rho::String& rsmProximityDistance, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmPagingEnable(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmPagingEnable( bool rsmPagingEnable, rho::apiGenerator::CMethodResult& oResult);

    virtual void getRsmPagingBeepSequence(rho::apiGenerator::CMethodResult& oResult);

    virtual void setRsmPagingBeepSequence( int rsmPagingBeepSequence, rho::apiGenerator::CMethodResult& oResult);


    static CBarcodeChainwayBase* getInstance(){ return static_cast< CBarcodeChainwayBase* >(CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID())); }
 

};

extern "C" void Init_BarcodeChainway_API();


}
