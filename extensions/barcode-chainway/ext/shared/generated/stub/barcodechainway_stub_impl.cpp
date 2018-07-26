//
//  BarcodeChainwayImpl.cpp
#include "common/RhoStd.h"
#include "common/AutoPointer.h"
#include "common/RhodesApp.h"
#include "common/RhoConf.h"
#include "generated/cpp/BarcodeChainwayBase.h"
#include "logging/RhoLog.h"

namespace rho {
    
    using namespace apiGenerator;
    using namespace common;
    
    class CBarcodeChainwaySingletonImpl: public CBarcodeChainwaySingletonBase
    {
    public:
        
        CBarcodeChainwaySingletonImpl(): CBarcodeChainwaySingletonBase(){}
        
        //methods
        // enumerate Used to gain access to all scanner objects present on the device. For consumer devices you will most likely only have a single scanner, your device's camera but Enterprise grade hardware may have two or more scanners attached. 
        virtual void enumerate(rho::apiGenerator::CMethodResult& oResult) {
            // RAWLOGC_INFO("enumerate","BarcodeChainway");
            
        } 

    };
    
    class CBarcodeChainwayImpl : public CBarcodeChainwayBase
    {
    public:
        virtual ~CBarcodeChainwayImpl() {}

        //methods

        virtual void getAutoEnter(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setAutoEnter( bool autoEnter, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getAutoTab(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setAutoTab( bool autoTab, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getHapticFeedback(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setHapticFeedback( bool hapticFeedback, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getLinearSecurityLevel(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setLinearSecurityLevel( const rho::String& linearSecurityLevel, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getScanTimeout(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setScanTimeout( int scanTimeout, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRasterMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRasterMode( const rho::String& rasterMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRasterHeight(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRasterHeight( int rasterHeight, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getAimType(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setAimType( const rho::String& aimType, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getTimedAimDuration(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setTimedAimDuration( int timedAimDuration, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getSameSymbolTimeout(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setSameSymbolTimeout( int sameSymbolTimeout, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDifferentSymbolTimeout(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDifferentSymbolTimeout( int differentSymbolTimeout, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getAimMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setAimMode( const rho::String& aimMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getPicklistMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setPicklistMode( const rho::String& picklistMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getViewfinderMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setViewfinderMode( const rho::String& viewfinderMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getViewfinderX(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setViewfinderX( int viewfinderX, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getViewfinderY(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setViewfinderY( int viewfinderY, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getViewfinderWidth(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setViewfinderWidth( int viewfinderWidth, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getViewfinderHeight(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setViewfinderHeight( int viewfinderHeight, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getViewfinderFeedback(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setViewfinderFeedback( const rho::String& viewfinderFeedback, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getViewfinderFeedbackTime(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setViewfinderFeedbackTime( int viewfinderFeedbackTime, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getFocusMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setFocusMode( const rho::String& focusMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getIlluminationMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setIlluminationMode( const rho::String& illuminationMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDpmMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDpmMode( bool dpmMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getInverse1dMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setInverse1dMode( const rho::String& inverse1dMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getPoorQuality1dMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setPoorQuality1dMode( bool poorQuality1dMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getBeamWidth(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setBeamWidth( const rho::String& beamWidth, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDbpMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDbpMode( const rho::String& dbpMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getKlasseEins(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setKlasseEins( bool klasseEins, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getAdaptiveScanning(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setAdaptiveScanning( bool adaptiveScanning, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getBidirectionalRedundancy(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setBidirectionalRedundancy( bool bidirectionalRedundancy, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getBarcodeDataFormat(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setBarcodeDataFormat( const rho::String& barcodeDataFormat, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDataBufferSize(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDataBufferSize( int dataBufferSize, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getConnectionIdleTimeout(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setConnectionIdleTimeout( int connectionIdleTimeout, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDisconnectBtOnDisable(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDisconnectBtOnDisable( bool disconnectBtOnDisable, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDisplayBtAddressBarcodeOnEnable(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDisplayBtAddressBarcodeOnEnable( bool displayBtAddressBarcodeOnEnable, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getEnableTimeout(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setEnableTimeout( int enableTimeout, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getFriendlyName(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getLcdMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setLcdMode( bool lcdMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getLowBatteryScan(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setLowBatteryScan( bool lowBatteryScan, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getTriggerConnected(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setTriggerConnected( bool triggerConnected, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDisableScannerDuringNavigate(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDisableScannerDuringNavigate( bool disableScannerDuringNavigate, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDecodeVolume(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDecodeVolume( int decodeVolume, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDecodeDuration(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDecodeDuration( int decodeDuration, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDecodeFrequency(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDecodeFrequency( int decodeFrequency, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getInvalidDecodeFrequency(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setInvalidDecodeFrequency( int invalidDecodeFrequency, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDecodeSound(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDecodeSound( const rho::String& decodeSound, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getInvalidDecodeSound(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setInvalidDecodeSound( const rho::String& invalidDecodeSound, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getScannerType(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getAllDecoders(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setAllDecoders( bool allDecoders, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getAztec(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setAztec( bool aztec, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getChinese2of5(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setChinese2of5( bool chinese2of5, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCodabar(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCodabar( bool codabar, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCodabarClsiEditing(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCodabarClsiEditing( bool codabarClsiEditing, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCodabarMaxLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCodabarMaxLength( int codabarMaxLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCodabarMinLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCodabarMinLength( int codabarMinLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCodabarNotisEditing(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCodabarNotisEditing( bool codabarNotisEditing, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCodabarRedundancy(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCodabarRedundancy( bool codabarRedundancy, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode11(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode11( bool code11, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode11checkDigitCount(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode11checkDigitCount( const rho::String& code11checkDigitCount, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode11maxLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode11maxLength( int code11maxLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode11minLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode11minLength( int code11minLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode11redundancy(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode11redundancy( bool code11redundancy, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode11reportCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode11reportCheckDigit( bool code11reportCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode128(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode128( bool code128, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode128checkIsBtTable(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode128checkIsBtTable( bool code128checkIsBtTable, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode128ean128(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode128ean128( bool code128ean128, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode128isbt128(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode128isbt128( bool code128isbt128, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode128isbt128ConcatMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode128isbt128ConcatMode( const rho::String& code128isbt128ConcatMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode128maxLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode128maxLength( int code128maxLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode128minLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode128minLength( int code128minLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode128other128(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode128other128( bool code128other128, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode128redundancy(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode128redundancy( bool code128redundancy, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode128securityLevel(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode128securityLevel( int code128securityLevel, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCompositeAb(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCompositeAb( bool compositeAb, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCompositeAbUccLinkMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCompositeAbUccLinkMode( const rho::String& compositeAbUccLinkMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCompositeAbUseUpcPreambleCheckDigitRules(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCompositeAbUseUpcPreambleCheckDigitRules( bool compositeAbUseUpcPreambleCheckDigitRules, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCompositeC(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCompositeC( bool compositeC, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode39(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode39( bool code39, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode39code32Prefix(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode39code32Prefix( bool code39code32Prefix, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode39convertToCode32(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode39convertToCode32( bool code39convertToCode32, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode39fullAscii(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode39fullAscii( bool code39fullAscii, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode39maxLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode39maxLength( int code39maxLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode39minLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode39minLength( int code39minLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode39redundancy(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode39redundancy( bool code39redundancy, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode39reportCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode39reportCheckDigit( bool code39reportCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode39securityLevel(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode39securityLevel( int code39securityLevel, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode39verifyCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode39verifyCheckDigit( bool code39verifyCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode93(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode93( bool code93, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode93maxLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode93maxLength( int code93maxLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode93minLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode93minLength( int code93minLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCode93redundancy(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCode93redundancy( bool code93redundancy, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getD2of5(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setD2of5( bool d2of5, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getD2of5maxLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setD2of5maxLength( int d2of5maxLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getD2of5minLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setD2of5minLength( int d2of5minLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getD2of5redundancy(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setD2of5redundancy( bool d2of5redundancy, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDatamatrix(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDatamatrix( bool datamatrix, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getEan13(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setEan13( bool ean13, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getEan8(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setEan8( bool ean8, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getEan8convertToEan13(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setEan8convertToEan13( bool ean8convertToEan13, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getI2of5(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setI2of5( bool i2of5, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getI2of5convertToEan13(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setI2of5convertToEan13( bool i2of5convertToEan13, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getI2of5maxLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setI2of5maxLength( int i2of5maxLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getI2of5minLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setI2of5minLength( int i2of5minLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getI2of5redundancy(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setI2of5redundancy( bool i2of5redundancy, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getI2of5reportCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setI2of5reportCheckDigit( bool i2of5reportCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getI2of5verifyCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setI2of5verifyCheckDigit( const rho::String& i2of5verifyCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getKorean3of5(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setKorean3of5( bool korean3of5, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getKorean3of5redundancy(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setKorean3of5redundancy( bool korean3of5redundancy, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getKorean3of5maxLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setKorean3of5maxLength( int korean3of5maxLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getKorean3of5minLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setKorean3of5minLength( int korean3of5minLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMacroPdf(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMacroPdf( bool macroPdf, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMacroPdfBufferLabels(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMacroPdfBufferLabels( bool macroPdfBufferLabels, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMacroPdfConvertToPdf417(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMacroPdfConvertToPdf417( bool macroPdfConvertToPdf417, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMacroPdfExclusive(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMacroPdfExclusive( bool macroPdfExclusive, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMacroMicroPdf(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMacroMicroPdf( bool macroMicroPdf, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMacroMicroPdfBufferLabels(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMacroMicroPdfBufferLabels( bool macroMicroPdfBufferLabels, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMacroMicroPdfConvertToMicroPdf(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMacroMicroPdfConvertToMicroPdf( bool macroMicroPdfConvertToMicroPdf, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMacroMicroPdfExclusive(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMacroMicroPdfExclusive( bool macroMicroPdfExclusive, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMacroMicroPdfReportAppendInfo(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMacroMicroPdfReportAppendInfo( bool macroMicroPdfReportAppendInfo, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMatrix2of5(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMatrix2of5( bool matrix2of5, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMatrix2of5maxLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMatrix2of5maxLength( int matrix2of5maxLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMatrix2of5minLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMatrix2of5minLength( int matrix2of5minLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMatrix2of5reportCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMatrix2of5reportCheckDigit( bool matrix2of5reportCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMatrix2of5verifyCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMatrix2of5verifyCheckDigit( bool matrix2of5verifyCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMaxiCode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMaxiCode( bool maxiCode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMicroPdf(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMicroPdf( bool microPdf, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMicroQr(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMicroQr( bool microQr, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMsi(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMsi( bool msi, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMsiCheckDigits(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMsiCheckDigits( const rho::String& msiCheckDigits, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMsiCheckDigitScheme(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMsiCheckDigitScheme( const rho::String& msiCheckDigitScheme, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMsiMaxLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMsiMaxLength( int msiMaxLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMsiMinLength(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMsiMinLength( int msiMinLength, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMsiRedundancy(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMsiRedundancy( bool msiRedundancy, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getMsiReportCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setMsiReportCheckDigit( bool msiReportCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getPdf417(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setPdf417( bool pdf417, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getSignature(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setSignature( bool signature, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getSignatureImageHeight(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setSignatureImageHeight( int signatureImageHeight, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getSignatureImageWidth(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setSignatureImageWidth( int signatureImageWidth, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getSignatureImageQuality(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setSignatureImageQuality( int signatureImageQuality, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getAusPostal(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setAusPostal( bool ausPostal, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getCanPostal(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setCanPostal( bool canPostal, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getDutchPostal(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setDutchPostal( bool dutchPostal, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getJapPostal(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setJapPostal( bool japPostal, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUkPostal(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUkPostal( bool ukPostal, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUkPostalReportCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUkPostalReportCheckDigit( bool ukPostalReportCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUs4state(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUs4state( bool us4state, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUs4stateFics(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUs4stateFics( bool us4stateFics, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUsPlanet(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUsPlanet( bool usPlanet, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUsPlanetReportCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUsPlanetReportCheckDigit( bool usPlanetReportCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUsPostNet(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUsPostNet( bool usPostNet, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUsPostNetReportCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUsPostNetReportCheckDigit( bool usPostNetReportCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getQrCode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setQrCode( bool qrCode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getGs1dataBar(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setGs1dataBar( bool gs1dataBar, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getGs1dataBarExpanded(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setGs1dataBarExpanded( bool gs1dataBarExpanded, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getGs1dataBarLimited(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setGs1dataBarLimited( bool gs1dataBarLimited, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getTlc39(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setTlc39( bool tlc39, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getTrioptic39(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setTrioptic39( bool trioptic39, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getTrioptic39Redundancy(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setTrioptic39Redundancy( bool trioptic39Redundancy, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcEanBookland(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcEanBookland( bool upcEanBookland, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcEanBooklandFormat(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcEanBooklandFormat( const rho::String& upcEanBooklandFormat, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcEanConvertGs1dataBarToUpcEan(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcEanConvertGs1dataBarToUpcEan( bool upcEanConvertGs1dataBarToUpcEan, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcEanCoupon(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcEanCoupon( bool upcEanCoupon, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcEanLinearDecode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcEanLinearDecode( bool upcEanLinearDecode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcEanRandomWeightCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcEanRandomWeightCheckDigit( bool upcEanRandomWeightCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcEanRetryCount(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcEanRetryCount( int upcEanRetryCount, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcEanSecurityLevel(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcEanSecurityLevel( int upcEanSecurityLevel, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcEanSupplemental2(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcEanSupplemental2( bool upcEanSupplemental2, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcEanSupplemental5(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcEanSupplemental5( bool upcEanSupplemental5, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcEanSupplementalMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcEanSupplementalMode( const rho::String& upcEanSupplementalMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpca(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpca( bool upca, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcaPreamble(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcaPreamble( const rho::String& upcaPreamble, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpcaReportCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpcaReportCheckDigit( bool upcaReportCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpce0(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpce0( bool upce0, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpce0convertToUpca(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpce0convertToUpca( bool upce0convertToUpca, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpce0preamble(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpce0preamble( const rho::String& upce0preamble, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpce0reportCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpce0reportCheckDigit( bool upce0reportCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpce1(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpce1( bool upce1, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpce1convertToUpca(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpce1convertToUpca( bool upce1convertToUpca, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpce1preamble(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpce1preamble( const rho::String& upce1preamble, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getUpce1reportCheckDigit(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setUpce1reportCheckDigit( bool upce1reportCheckDigit, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getWebcode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setWebcode( bool webcode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getWebcodeDecodeGtSubtype(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setWebcodeDecodeGtSubtype( bool webcodeDecodeGtSubtype, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmModelNumber(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmSerialNumber(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmDateOfManufacture(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmDateOfService(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBluetoothAddress(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmFirmwareVersion(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmDeviceClass(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBatteryStatus(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBatteryCapacity(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBatteryId(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBluetoothAuthentication(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmBluetoothAuthentication( bool rsmBluetoothAuthentication, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBluetoothEncryption(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmBluetoothEncryption( bool rsmBluetoothEncryption, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBluetoothPinCode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmBluetoothPinCode( const rho::String& rsmBluetoothPinCode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBluetoothPinCodeType(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmBluetoothPinCodeType( const rho::String& rsmBluetoothPinCodeType, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBluetoothReconnectionAttempts(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmBluetoothReconnectionAttempts( int rsmBluetoothReconnectionAttempts, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBluetoothBeepOnReconnectAttempt(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmBluetoothBeepOnReconnectAttempt( bool rsmBluetoothBeepOnReconnectAttempt, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBluetoothHidAutoReconnect(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmBluetoothHidAutoReconnect( const rho::String& rsmBluetoothHidAutoReconnect, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBluetoothFriendlyName(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmBluetoothFriendlyName( const rho::String& rsmBluetoothFriendlyName, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBluetoothInquiryMode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmBluetoothInquiryMode( const rho::String& rsmBluetoothInquiryMode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmBluetoothAutoReconnect(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmBluetoothAutoReconnect( const rho::String& rsmBluetoothAutoReconnect, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmForceSavePairingBarcode(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmForceSavePairingBarcode( bool rsmForceSavePairingBarcode, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmLowBatteryIndication(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmLowBatteryIndication( bool rsmLowBatteryIndication, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmLowBatteryIndicationCycle(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmLowBatteryIndicationCycle( int rsmLowBatteryIndicationCycle, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmScanLineWidth(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmScanLineWidth( const rho::String& rsmScanLineWidth, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmGoodScansDelay(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmGoodScansDelay( int rsmGoodScansDelay, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmDecodeFeedback(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmDecodeFeedback( bool rsmDecodeFeedback, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmIgnoreCode128Usps(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmIgnoreCode128Usps( bool rsmIgnoreCode128Usps, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmScanTriggerWakeup(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmScanTriggerWakeup( bool rsmScanTriggerWakeup, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmMems(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmMems( bool rsmMems, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmProximityEnable(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmProximityEnable( bool rsmProximityEnable, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmProximityContinuous(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmProximityContinuous( bool rsmProximityContinuous, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmProximityDistance(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmProximityDistance( const rho::String& rsmProximityDistance, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmPagingEnable(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmPagingEnable( bool rsmPagingEnable, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getRsmPagingBeepSequence(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setRsmPagingBeepSequence( int rsmPagingBeepSequence, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void enable( const rho::Hashtable<rho::String, rho::String>& propertyMap, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void registerBluetoothStatus(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void start(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void stop(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void disable(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void barcode_recognize( const rho::String& imageFilePath, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getSupportedProperties(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void take( const rho::Hashtable<rho::String, rho::String>& propertyMap, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void take_barcode( const rho::String& rubyCallbackURL,  const rho::Hashtable<rho::String, rho::String>& propertyMap, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void commandRemoteScanner( const rho::String& command, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getProperty( const rho::String& propertyName, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getProperties( const rho::Vector<rho::String>& arrayofNames, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getAllProperties(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setProperty( const rho::String& propertyName,  const rho::String& propertyValue, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setProperties( const rho::Hashtable<rho::String, rho::String>& propertyMap, rho::apiGenerator::CMethodResult& oResult) {

        } 

    };
    
    ////////////////////////////////////////////////////////////////////////
    
    class CBarcodeChainwayFactory: public CBarcodeChainwayFactoryBase    {
    public:
        CBarcodeChainwayFactory(){}
        
        IBarcodeChainwaySingleton* createModuleSingleton()
        { 
            return new CBarcodeChainwaySingletonImpl();
        }
        
        virtual IBarcodeChainway* createModuleByID(const rho::String& strID){ return new CBarcodeChainwayImpl(); };
        
    };
    
}

extern "C" void Init_BarcodeChainway_extension()
{
    rho::CBarcodeChainwayFactory::setInstance( new rho::CBarcodeChainwayFactory() );
    rho::Init_BarcodeChainway_API();
    
}