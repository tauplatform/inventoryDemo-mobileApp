#pragma once

#include "common/RhoStd.h"
#include "api_generator/MethodResult.h"
#include "api_generator/BaseClasses.h"


namespace rho {
///////////////////////////////////////////////////////////



struct IBarcodeChainway
{
//constants

    static const char AIMMODE_DOT[];// "dot" 
    static const char AIMMODE_NONE[];// "none" 
    static const char AIMMODE_RETICLE[];// "reticle" 
    static const char AIMMODE_SLAB[];// "slab" 
    static const char AIMTYPE_CONTINUOUS_READ[];// "continuousRead" 
    static const char AIMTYPE_PRESENTATION[];// "presentation" 
    static const char AIMTYPE_PRESS_AND_RELEASE[];// "pressAndRelease" 
    static const char AIMTYPE_TIMED_HOLD[];// "timedHold" 
    static const char AIMTYPE_TIMED_RELEASE[];// "timedRelease" 
    static const char AIMTYPE_TRIGGER[];// "trigger" 
    static const char ALL_THRICE[];// "allThrice" 
    static const char ALL_TWICE[];// "allTwice" 
    static const char BEAM_NARROW[];// "narrow" 
    static const char BEAM_NORMAL[];// "normal" 
    static const char BEAM_WIDE[];// "wide" 
    static const char BOOKLAND_ISBN10[];// "isbn10" 
    static const char BOOKLAND_ISBN13[];// "isbn13" 
    static const char CODE11_CHECKDIGIT_NONE[];// "none" 
    static const char CODE11_CHECKDIGIT_ONE[];// "one" 
    static const char CODE11_CHECKDIGIT_TWO[];// "two" 
    static const char CODE128ISBT_ALWAYS[];// "always" 
    static const char CODE128ISBT_AUTO[];// "auto" 
    static const char CODE128ISBT_NEVER[];// "never" 
    static const char DBP_COMPOSITE[];// "composite" 
    static const char DBP_NORMAL[];// "normal" 
    static const char FOCUS_AUTO[];// "auto" 
    static const char FOCUS_FIXED[];// "fixed" 
    static const char FORMAT_BINARY[];// "binary" 
    static const char FORMAT_TEXT[];// "text" 
    static const char I2OF5_VERIFY_NONE[];// "none" 
    static const char I2OF5_VERIFY_OPCC[];// "opcc" 
    static const char I2OF5_VERIFY_USS[];// "uss" 
    static const char ILLUMINATION_ALWAYS_OFF[];// "alwaysOff" 
    static const char ILLUMINATION_ALWAYS_ON[];// "alwaysOn" 
    static const char ILLUMINATION_AUTO[];// "auto" 
    static const char INVERSE_AUTO[];// "auto" 
    static const char INVERSE_DISABLED[];// "disabled" 
    static const char INVERSE_ENABLED[];// "enabled" 
    static const char LONG_AND_SHORT[];// "longAndShort" 
    static const char MSI_CHECKDIGITS_MOD10[];// "mod10" 
    static const char MSI_CHECKDIGITS_MOD11[];// "mod11" 
    static const char MSI_CHECKDIGITS_ONE[];// "one" 
    static const char MSI_CHECKDIGITS_TWO[];// "two" 
    static const char PICKLIST_DISABLED[];// "disabled" 
    static const char PICKLIST_HARDWARE_RETICLE[];// "hardwareReticle" 
    static const char PICKLIST_SOFTWARE_RETICLE[];// "softwareReticle" 
    static const char RASTER_CYCLONE[];// "cyclone" 
    static const char RASTER_NONE[];// "none" 
    static const char RASTER_OPEN_ALWAYS[];// "openAlways" 
    static const char RASTER_SMART[];// "smart" 
    static const char REDUNDANCY_AND_LENGTH[];// "redundancyAndLength" 
    static const char RSM_AUTORECONNECT_NONE[];// "none" 
    static const char RSM_AUTORECONNECT_ON_OUT_OF_RANGE[];// "onOutOfRange" 
    static const char RSM_AUTORECONNECT_ON_POWER[];// "onPower" 
    static const char RSM_AUTORECONNECT_ON_POWER_OUT_OF_RANGE[];// "onPowerOutOfRange" 
    static const char SHORT_OR_CODABAR[];// "shortOrCodabar" 
    static const char UCC_ALWAYS[];// "always" 
    static const char UCC_AUTO[];// "auto" 
    static const char UCC_NEVER[];// "never" 
    static const char UPCA_PREAMBLE_COUNTRY[];// "countryAndSystemChars" 
    static const char UPCA_PREAMBLE_NONE[];// "none" 
    static const char UPCA_PREAMBLE_SYSTEMCHAR[];// "systemChar" 
    static const char UPCE0_PREAMBLE_COUNTRY[];// "countryAndSystemChars" 
    static const char UPCE0_PREAMBLE_NONE[];// "none" 
    static const char UPCE0_PREAMBLE_SYSTEMCHAR[];// "systemChar" 
    static const char UPCE1_PREAMBLE_COUNTRY[];// "countryAndSystemChars" 
    static const char UPCE1_PREAMBLE_NONE[];// "none" 
    static const char UPCE1_PREAMBLE_SYSTEMCHAR[];// "systemChar" 
    static const char UPCEAN_379[];// "378or379" 
    static const char UPCEAN_439[];// "414or419or434or439" 
    static const char UPCEAN_979[];// "978or979" 
    static const char UPCEAN_ALWAYS[];// "always" 
    static const char UPCEAN_AUTO[];// "auto" 
    static const char UPCEAN_NONE[];// "none" 
    static const char UPCEAN_SMART[];// "smart" 
    static const char VF_FEEDBACK_DISABLED[];// "disabled" 
    static const char VF_FEEDBACK_ENABLED[];// "enabled" 
    static const char VF_FEEDBACK_RETICLE[];// "reticle" 
    static const char VIEWFINDER_DISABLED[];// "disabled" 
    static const char VIEWFINDER_DYNAMIC_RETICLE[];// "dynamicReticle" 
    static const char VIEWFINDER_ENABLED[];// "enabled" 
    static const char VIEWFINDER_STATIC_RETICLE[];// "staticReticle" 

//methods
    virtual ~IBarcodeChainway(){}

    virtual void getAutoEnter(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setAutoEnter( bool autoEnter, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getAutoTab(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setAutoTab( bool autoTab, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getHapticFeedback(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setHapticFeedback( bool hapticFeedback, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getLinearSecurityLevel(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setLinearSecurityLevel( const rho::String& linearSecurityLevel, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getScanTimeout(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setScanTimeout( int scanTimeout, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRasterMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRasterMode( const rho::String& rasterMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRasterHeight(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRasterHeight( int rasterHeight, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getAimType(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setAimType( const rho::String& aimType, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getTimedAimDuration(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setTimedAimDuration( int timedAimDuration, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getSameSymbolTimeout(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setSameSymbolTimeout( int sameSymbolTimeout, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDifferentSymbolTimeout(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDifferentSymbolTimeout( int differentSymbolTimeout, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getAimMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setAimMode( const rho::String& aimMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getPicklistMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setPicklistMode( const rho::String& picklistMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getViewfinderMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setViewfinderMode( const rho::String& viewfinderMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getViewfinderX(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setViewfinderX( int viewfinderX, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getViewfinderY(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setViewfinderY( int viewfinderY, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getViewfinderWidth(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setViewfinderWidth( int viewfinderWidth, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getViewfinderHeight(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setViewfinderHeight( int viewfinderHeight, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getViewfinderFeedback(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setViewfinderFeedback( const rho::String& viewfinderFeedback, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getViewfinderFeedbackTime(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setViewfinderFeedbackTime( int viewfinderFeedbackTime, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getFocusMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setFocusMode( const rho::String& focusMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getIlluminationMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setIlluminationMode( const rho::String& illuminationMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDpmMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDpmMode( bool dpmMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getInverse1dMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setInverse1dMode( const rho::String& inverse1dMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getPoorQuality1dMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setPoorQuality1dMode( bool poorQuality1dMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getBeamWidth(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setBeamWidth( const rho::String& beamWidth, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDbpMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDbpMode( const rho::String& dbpMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getKlasseEins(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setKlasseEins( bool klasseEins, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getAdaptiveScanning(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setAdaptiveScanning( bool adaptiveScanning, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getBidirectionalRedundancy(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setBidirectionalRedundancy( bool bidirectionalRedundancy, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getBarcodeDataFormat(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setBarcodeDataFormat( const rho::String& barcodeDataFormat, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDataBufferSize(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDataBufferSize( int dataBufferSize, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getConnectionIdleTimeout(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setConnectionIdleTimeout( int connectionIdleTimeout, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDisconnectBtOnDisable(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDisconnectBtOnDisable( bool disconnectBtOnDisable, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDisplayBtAddressBarcodeOnEnable(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDisplayBtAddressBarcodeOnEnable( bool displayBtAddressBarcodeOnEnable, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getEnableTimeout(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setEnableTimeout( int enableTimeout, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getFriendlyName(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getLcdMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setLcdMode( bool lcdMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getLowBatteryScan(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setLowBatteryScan( bool lowBatteryScan, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getTriggerConnected(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setTriggerConnected( bool triggerConnected, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDisableScannerDuringNavigate(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDisableScannerDuringNavigate( bool disableScannerDuringNavigate, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDecodeVolume(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDecodeVolume( int decodeVolume, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDecodeDuration(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDecodeDuration( int decodeDuration, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDecodeFrequency(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDecodeFrequency( int decodeFrequency, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getInvalidDecodeFrequency(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setInvalidDecodeFrequency( int invalidDecodeFrequency, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDecodeSound(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDecodeSound( const rho::String& decodeSound, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getInvalidDecodeSound(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setInvalidDecodeSound( const rho::String& invalidDecodeSound, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getScannerType(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getAllDecoders(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setAllDecoders( bool allDecoders, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getAztec(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setAztec( bool aztec, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getChinese2of5(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setChinese2of5( bool chinese2of5, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCodabar(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCodabar( bool codabar, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCodabarClsiEditing(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCodabarClsiEditing( bool codabarClsiEditing, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCodabarMaxLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCodabarMaxLength( int codabarMaxLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCodabarMinLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCodabarMinLength( int codabarMinLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCodabarNotisEditing(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCodabarNotisEditing( bool codabarNotisEditing, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCodabarRedundancy(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCodabarRedundancy( bool codabarRedundancy, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode11(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode11( bool code11, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode11checkDigitCount(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode11checkDigitCount( const rho::String& code11checkDigitCount, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode11maxLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode11maxLength( int code11maxLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode11minLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode11minLength( int code11minLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode11redundancy(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode11redundancy( bool code11redundancy, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode11reportCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode11reportCheckDigit( bool code11reportCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode128(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode128( bool code128, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode128checkIsBtTable(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode128checkIsBtTable( bool code128checkIsBtTable, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode128ean128(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode128ean128( bool code128ean128, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode128isbt128(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode128isbt128( bool code128isbt128, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode128isbt128ConcatMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode128isbt128ConcatMode( const rho::String& code128isbt128ConcatMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode128maxLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode128maxLength( int code128maxLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode128minLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode128minLength( int code128minLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode128other128(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode128other128( bool code128other128, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode128redundancy(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode128redundancy( bool code128redundancy, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode128securityLevel(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode128securityLevel( int code128securityLevel, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCompositeAb(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCompositeAb( bool compositeAb, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCompositeAbUccLinkMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCompositeAbUccLinkMode( const rho::String& compositeAbUccLinkMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCompositeAbUseUpcPreambleCheckDigitRules(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCompositeAbUseUpcPreambleCheckDigitRules( bool compositeAbUseUpcPreambleCheckDigitRules, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCompositeC(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCompositeC( bool compositeC, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode39(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode39( bool code39, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode39code32Prefix(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode39code32Prefix( bool code39code32Prefix, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode39convertToCode32(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode39convertToCode32( bool code39convertToCode32, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode39fullAscii(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode39fullAscii( bool code39fullAscii, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode39maxLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode39maxLength( int code39maxLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode39minLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode39minLength( int code39minLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode39redundancy(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode39redundancy( bool code39redundancy, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode39reportCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode39reportCheckDigit( bool code39reportCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode39securityLevel(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode39securityLevel( int code39securityLevel, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode39verifyCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode39verifyCheckDigit( bool code39verifyCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode93(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode93( bool code93, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode93maxLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode93maxLength( int code93maxLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode93minLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode93minLength( int code93minLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCode93redundancy(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCode93redundancy( bool code93redundancy, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getD2of5(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setD2of5( bool d2of5, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getD2of5maxLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setD2of5maxLength( int d2of5maxLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getD2of5minLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setD2of5minLength( int d2of5minLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getD2of5redundancy(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setD2of5redundancy( bool d2of5redundancy, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDatamatrix(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDatamatrix( bool datamatrix, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getEan13(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setEan13( bool ean13, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getEan8(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setEan8( bool ean8, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getEan8convertToEan13(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setEan8convertToEan13( bool ean8convertToEan13, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getI2of5(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setI2of5( bool i2of5, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getI2of5convertToEan13(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setI2of5convertToEan13( bool i2of5convertToEan13, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getI2of5maxLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setI2of5maxLength( int i2of5maxLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getI2of5minLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setI2of5minLength( int i2of5minLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getI2of5redundancy(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setI2of5redundancy( bool i2of5redundancy, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getI2of5reportCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setI2of5reportCheckDigit( bool i2of5reportCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getI2of5verifyCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setI2of5verifyCheckDigit( const rho::String& i2of5verifyCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getKorean3of5(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setKorean3of5( bool korean3of5, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getKorean3of5redundancy(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setKorean3of5redundancy( bool korean3of5redundancy, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getKorean3of5maxLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setKorean3of5maxLength( int korean3of5maxLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getKorean3of5minLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setKorean3of5minLength( int korean3of5minLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMacroPdf(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMacroPdf( bool macroPdf, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMacroPdfBufferLabels(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMacroPdfBufferLabels( bool macroPdfBufferLabels, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMacroPdfConvertToPdf417(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMacroPdfConvertToPdf417( bool macroPdfConvertToPdf417, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMacroPdfExclusive(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMacroPdfExclusive( bool macroPdfExclusive, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMacroMicroPdf(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMacroMicroPdf( bool macroMicroPdf, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMacroMicroPdfBufferLabels(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMacroMicroPdfBufferLabels( bool macroMicroPdfBufferLabels, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMacroMicroPdfConvertToMicroPdf(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMacroMicroPdfConvertToMicroPdf( bool macroMicroPdfConvertToMicroPdf, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMacroMicroPdfExclusive(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMacroMicroPdfExclusive( bool macroMicroPdfExclusive, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMacroMicroPdfReportAppendInfo(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMacroMicroPdfReportAppendInfo( bool macroMicroPdfReportAppendInfo, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMatrix2of5(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMatrix2of5( bool matrix2of5, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMatrix2of5maxLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMatrix2of5maxLength( int matrix2of5maxLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMatrix2of5minLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMatrix2of5minLength( int matrix2of5minLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMatrix2of5reportCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMatrix2of5reportCheckDigit( bool matrix2of5reportCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMatrix2of5verifyCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMatrix2of5verifyCheckDigit( bool matrix2of5verifyCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMaxiCode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMaxiCode( bool maxiCode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMicroPdf(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMicroPdf( bool microPdf, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMicroQr(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMicroQr( bool microQr, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMsi(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMsi( bool msi, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMsiCheckDigits(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMsiCheckDigits( const rho::String& msiCheckDigits, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMsiCheckDigitScheme(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMsiCheckDigitScheme( const rho::String& msiCheckDigitScheme, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMsiMaxLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMsiMaxLength( int msiMaxLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMsiMinLength(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMsiMinLength( int msiMinLength, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMsiRedundancy(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMsiRedundancy( bool msiRedundancy, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getMsiReportCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setMsiReportCheckDigit( bool msiReportCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getPdf417(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setPdf417( bool pdf417, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getSignature(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setSignature( bool signature, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getSignatureImageHeight(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setSignatureImageHeight( int signatureImageHeight, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getSignatureImageWidth(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setSignatureImageWidth( int signatureImageWidth, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getSignatureImageQuality(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setSignatureImageQuality( int signatureImageQuality, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getAusPostal(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setAusPostal( bool ausPostal, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getCanPostal(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setCanPostal( bool canPostal, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getDutchPostal(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setDutchPostal( bool dutchPostal, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getJapPostal(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setJapPostal( bool japPostal, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUkPostal(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUkPostal( bool ukPostal, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUkPostalReportCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUkPostalReportCheckDigit( bool ukPostalReportCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUs4state(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUs4state( bool us4state, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUs4stateFics(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUs4stateFics( bool us4stateFics, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUsPlanet(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUsPlanet( bool usPlanet, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUsPlanetReportCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUsPlanetReportCheckDigit( bool usPlanetReportCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUsPostNet(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUsPostNet( bool usPostNet, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUsPostNetReportCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUsPostNetReportCheckDigit( bool usPostNetReportCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getQrCode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setQrCode( bool qrCode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getGs1dataBar(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setGs1dataBar( bool gs1dataBar, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getGs1dataBarExpanded(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setGs1dataBarExpanded( bool gs1dataBarExpanded, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getGs1dataBarLimited(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setGs1dataBarLimited( bool gs1dataBarLimited, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getTlc39(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setTlc39( bool tlc39, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getTrioptic39(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setTrioptic39( bool trioptic39, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getTrioptic39Redundancy(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setTrioptic39Redundancy( bool trioptic39Redundancy, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcEanBookland(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcEanBookland( bool upcEanBookland, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcEanBooklandFormat(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcEanBooklandFormat( const rho::String& upcEanBooklandFormat, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcEanConvertGs1dataBarToUpcEan(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcEanConvertGs1dataBarToUpcEan( bool upcEanConvertGs1dataBarToUpcEan, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcEanCoupon(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcEanCoupon( bool upcEanCoupon, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcEanLinearDecode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcEanLinearDecode( bool upcEanLinearDecode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcEanRandomWeightCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcEanRandomWeightCheckDigit( bool upcEanRandomWeightCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcEanRetryCount(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcEanRetryCount( int upcEanRetryCount, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcEanSecurityLevel(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcEanSecurityLevel( int upcEanSecurityLevel, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcEanSupplemental2(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcEanSupplemental2( bool upcEanSupplemental2, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcEanSupplemental5(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcEanSupplemental5( bool upcEanSupplemental5, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcEanSupplementalMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcEanSupplementalMode( const rho::String& upcEanSupplementalMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpca(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpca( bool upca, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcaPreamble(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcaPreamble( const rho::String& upcaPreamble, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpcaReportCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpcaReportCheckDigit( bool upcaReportCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpce0(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpce0( bool upce0, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpce0convertToUpca(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpce0convertToUpca( bool upce0convertToUpca, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpce0preamble(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpce0preamble( const rho::String& upce0preamble, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpce0reportCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpce0reportCheckDigit( bool upce0reportCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpce1(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpce1( bool upce1, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpce1convertToUpca(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpce1convertToUpca( bool upce1convertToUpca, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpce1preamble(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpce1preamble( const rho::String& upce1preamble, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getUpce1reportCheckDigit(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setUpce1reportCheckDigit( bool upce1reportCheckDigit, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getWebcode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setWebcode( bool webcode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getWebcodeDecodeGtSubtype(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setWebcodeDecodeGtSubtype( bool webcodeDecodeGtSubtype, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmModelNumber(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmSerialNumber(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmDateOfManufacture(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmDateOfService(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBluetoothAddress(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmFirmwareVersion(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmDeviceClass(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBatteryStatus(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBatteryCapacity(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBatteryId(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBluetoothAuthentication(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmBluetoothAuthentication( bool rsmBluetoothAuthentication, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBluetoothEncryption(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmBluetoothEncryption( bool rsmBluetoothEncryption, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBluetoothPinCode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmBluetoothPinCode( const rho::String& rsmBluetoothPinCode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBluetoothPinCodeType(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmBluetoothPinCodeType( const rho::String& rsmBluetoothPinCodeType, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBluetoothReconnectionAttempts(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmBluetoothReconnectionAttempts( int rsmBluetoothReconnectionAttempts, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBluetoothBeepOnReconnectAttempt(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmBluetoothBeepOnReconnectAttempt( bool rsmBluetoothBeepOnReconnectAttempt, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBluetoothHidAutoReconnect(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmBluetoothHidAutoReconnect( const rho::String& rsmBluetoothHidAutoReconnect, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBluetoothFriendlyName(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmBluetoothFriendlyName( const rho::String& rsmBluetoothFriendlyName, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBluetoothInquiryMode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmBluetoothInquiryMode( const rho::String& rsmBluetoothInquiryMode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmBluetoothAutoReconnect(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmBluetoothAutoReconnect( const rho::String& rsmBluetoothAutoReconnect, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmForceSavePairingBarcode(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmForceSavePairingBarcode( bool rsmForceSavePairingBarcode, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmLowBatteryIndication(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmLowBatteryIndication( bool rsmLowBatteryIndication, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmLowBatteryIndicationCycle(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmLowBatteryIndicationCycle( int rsmLowBatteryIndicationCycle, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmScanLineWidth(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmScanLineWidth( const rho::String& rsmScanLineWidth, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmGoodScansDelay(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmGoodScansDelay( int rsmGoodScansDelay, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmDecodeFeedback(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmDecodeFeedback( bool rsmDecodeFeedback, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmIgnoreCode128Usps(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmIgnoreCode128Usps( bool rsmIgnoreCode128Usps, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmScanTriggerWakeup(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmScanTriggerWakeup( bool rsmScanTriggerWakeup, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmMems(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmMems( bool rsmMems, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmProximityEnable(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmProximityEnable( bool rsmProximityEnable, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmProximityContinuous(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmProximityContinuous( bool rsmProximityContinuous, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmProximityDistance(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmProximityDistance( const rho::String& rsmProximityDistance, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmPagingEnable(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmPagingEnable( bool rsmPagingEnable, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getRsmPagingBeepSequence(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setRsmPagingBeepSequence( int rsmPagingBeepSequence, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void enable( const rho::Hashtable<rho::String, rho::String>& propertyMap, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void registerBluetoothStatus(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void start(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void stop(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void disable(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void barcode_recognize( const rho::String& imageFilePath, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getSupportedProperties(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void take( const rho::Hashtable<rho::String, rho::String>& propertyMap, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void take_barcode( const rho::String& rubyCallbackURL,  const rho::Hashtable<rho::String, rho::String>& propertyMap, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void commandRemoteScanner( const rho::String& command, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getProperty( const rho::String& propertyName, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getProperties( const rho::Vector<rho::String>& arrayofNames, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getAllProperties(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setProperty( const rho::String& propertyName,  const rho::String& propertyValue, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setProperties( const rho::Hashtable<rho::String, rho::String>& propertyMap, rho::apiGenerator::CMethodResult& oResult) = 0;

};

struct IBarcodeChainwaySingleton
{
//constants


    virtual ~IBarcodeChainwaySingleton(){}

//methods
    virtual void enumerate(rho::apiGenerator::CMethodResult& oResult) = 0;


    virtual rho::String getDefaultID() = 0;
    virtual rho::String getInitialDefaultID() = 0;
    virtual void setDefaultID(const rho::String& strID) = 0;

    virtual void addCommandToQueue(rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor) = 0;
    virtual void callCommandInThread(rho::common::IRhoRunnable* pFunctor) = 0;
};

struct IBarcodeChainwayFactory
{
    virtual ~IBarcodeChainwayFactory(){}

    virtual IBarcodeChainwaySingleton* getModuleSingleton() = 0;


    virtual IBarcodeChainway* getModuleByID(const rho::String& strID) = 0;

};


}
