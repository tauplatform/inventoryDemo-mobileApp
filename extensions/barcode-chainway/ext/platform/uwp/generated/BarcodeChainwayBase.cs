using System;
using System.Collections.Generic;
using System.Net;
using Windows.UI.Core;
using System.Threading.Tasks;
using rhoruntime;
using rhodes;

namespace rho {

namespace BarcodeChainwayImpl
{
    abstract public class BarcodeChainwayBase : IBarcodeChainwayImpl
    {
        protected string _strID = "1";
        protected long _nativeImpl = 0;
        protected CoreDispatcher dispatcher = null;
        protected BarcodeChainwayRuntimeComponent _runtime;

        public const string AIMMODE_DOT = "dot";
        public const string AIMMODE_NONE = "none";
        public const string AIMMODE_RETICLE = "reticle";
        public const string AIMMODE_SLAB = "slab";
        public const string AIMTYPE_CONTINUOUS_READ = "continuousRead";
        public const string AIMTYPE_PRESENTATION = "presentation";
        public const string AIMTYPE_PRESS_AND_RELEASE = "pressAndRelease";
        public const string AIMTYPE_TIMED_HOLD = "timedHold";
        public const string AIMTYPE_TIMED_RELEASE = "timedRelease";
        public const string AIMTYPE_TRIGGER = "trigger";
        public const string ALL_THRICE = "allThrice";
        public const string ALL_TWICE = "allTwice";
        public const string BEAM_NARROW = "narrow";
        public const string BEAM_NORMAL = "normal";
        public const string BEAM_WIDE = "wide";
        public const string BOOKLAND_ISBN10 = "isbn10";
        public const string BOOKLAND_ISBN13 = "isbn13";
        public const string CODE11_CHECKDIGIT_NONE = "none";
        public const string CODE11_CHECKDIGIT_ONE = "one";
        public const string CODE11_CHECKDIGIT_TWO = "two";
        public const string CODE128ISBT_ALWAYS = "always";
        public const string CODE128ISBT_AUTO = "auto";
        public const string CODE128ISBT_NEVER = "never";
        public const string DBP_COMPOSITE = "composite";
        public const string DBP_NORMAL = "normal";
        public const string FOCUS_AUTO = "auto";
        public const string FOCUS_FIXED = "fixed";
        public const string FORMAT_BINARY = "binary";
        public const string FORMAT_TEXT = "text";
        public const string I2OF5_VERIFY_NONE = "none";
        public const string I2OF5_VERIFY_OPCC = "opcc";
        public const string I2OF5_VERIFY_USS = "uss";
        public const string ILLUMINATION_ALWAYS_OFF = "alwaysOff";
        public const string ILLUMINATION_ALWAYS_ON = "alwaysOn";
        public const string ILLUMINATION_AUTO = "auto";
        public const string INVERSE_AUTO = "auto";
        public const string INVERSE_DISABLED = "disabled";
        public const string INVERSE_ENABLED = "enabled";
        public const string LONG_AND_SHORT = "longAndShort";
        public const string MSI_CHECKDIGITS_MOD10 = "mod10";
        public const string MSI_CHECKDIGITS_MOD11 = "mod11";
        public const string MSI_CHECKDIGITS_ONE = "one";
        public const string MSI_CHECKDIGITS_TWO = "two";
        public const string PICKLIST_DISABLED = "disabled";
        public const string PICKLIST_HARDWARE_RETICLE = "hardwareReticle";
        public const string PICKLIST_SOFTWARE_RETICLE = "softwareReticle";
        public const string RASTER_CYCLONE = "cyclone";
        public const string RASTER_NONE = "none";
        public const string RASTER_OPEN_ALWAYS = "openAlways";
        public const string RASTER_SMART = "smart";
        public const string REDUNDANCY_AND_LENGTH = "redundancyAndLength";
        public const string RSM_AUTORECONNECT_NONE = "none";
        public const string RSM_AUTORECONNECT_ON_OUT_OF_RANGE = "onOutOfRange";
        public const string RSM_AUTORECONNECT_ON_POWER = "onPower";
        public const string RSM_AUTORECONNECT_ON_POWER_OUT_OF_RANGE = "onPowerOutOfRange";
        public const string SHORT_OR_CODABAR = "shortOrCodabar";
        public const string UCC_ALWAYS = "always";
        public const string UCC_AUTO = "auto";
        public const string UCC_NEVER = "never";
        public const string UPCA_PREAMBLE_COUNTRY = "countryAndSystemChars";
        public const string UPCA_PREAMBLE_NONE = "none";
        public const string UPCA_PREAMBLE_SYSTEMCHAR = "systemChar";
        public const string UPCE0_PREAMBLE_COUNTRY = "countryAndSystemChars";
        public const string UPCE0_PREAMBLE_NONE = "none";
        public const string UPCE0_PREAMBLE_SYSTEMCHAR = "systemChar";
        public const string UPCE1_PREAMBLE_COUNTRY = "countryAndSystemChars";
        public const string UPCE1_PREAMBLE_NONE = "none";
        public const string UPCE1_PREAMBLE_SYSTEMCHAR = "systemChar";
        public const string UPCEAN_379 = "378or379";
        public const string UPCEAN_439 = "414or419or434or439";
        public const string UPCEAN_979 = "978or979";
        public const string UPCEAN_ALWAYS = "always";
        public const string UPCEAN_AUTO = "auto";
        public const string UPCEAN_NONE = "none";
        public const string UPCEAN_SMART = "smart";
        public const string VF_FEEDBACK_DISABLED = "disabled";
        public const string VF_FEEDBACK_ENABLED = "enabled";
        public const string VF_FEEDBACK_RETICLE = "reticle";
        public const string VIEWFINDER_DISABLED = "disabled";
        public const string VIEWFINDER_DYNAMIC_RETICLE = "dynamicReticle";
        public const string VIEWFINDER_ENABLED = "enabled";
        public const string VIEWFINDER_STATIC_RETICLE = "staticReticle";

        public BarcodeChainwayBase(string id)
        {
            _strID = id;
            _runtime = new BarcodeChainwayRuntimeComponent(this);
            try{dispatcher = MainPage.getDispatcher();
            }catch(Exception e){deb("Can't get access to dispatcher");}
        }

        public static void deb(String s, [System.Runtime.CompilerServices.CallerMemberName] string memberName = "")
        {
            if (memberName.Length != 0) {memberName = memberName + " : ";}
            System.Diagnostics.Debug.WriteLine(memberName + s);
        }

        public long getNativeImpl()
        {
            return _nativeImpl;
        }

        public virtual void setNativeImpl(string strID, long native)
        {
            _strID = strID;
            _nativeImpl = native;
        }

        public void dispatchInvoke(Action a)
        {
            if (dispatcher != null) {
              var ignore = dispatcher.RunAsync(CoreDispatcherPriority.Normal, () =>
              {try{a();} catch (Exception ex) {System.Diagnostics.Debug.WriteLine("Invoke in UI Thread exception");} });
            }else{a();}
        }

        public void getProperty(string propertyName, IMethodResult oResult)
        {
            _runtime.getProperty(propertyName, oResult);
        }

        public void getProperties(IReadOnlyList<string> arrayofNames, IMethodResult oResult)
        {
            _runtime.getProperties(arrayofNames, oResult);
        }

        public void getAllProperties(IMethodResult oResult)
        {
            _runtime.getAllProperties(oResult);
        }

        public void setProperty(string propertyName, string propertyValue, IMethodResult oResult)
        {
            _runtime.setProperty(propertyName, propertyValue, oResult);
        }

        public void setProperties(IReadOnlyDictionary<string, string> propertyMap, IMethodResult oResult)
        {
            _runtime.setProperties(propertyMap, oResult);
        }

        abstract public void getAutoEnter(IMethodResult oResult);
        abstract public void setAutoEnter(bool autoEnter, IMethodResult oResult);
        abstract public void getAutoTab(IMethodResult oResult);
        abstract public void setAutoTab(bool autoTab, IMethodResult oResult);
        abstract public void getHapticFeedback(IMethodResult oResult);
        abstract public void setHapticFeedback(bool hapticFeedback, IMethodResult oResult);
        abstract public void getLinearSecurityLevel(IMethodResult oResult);
        abstract public void setLinearSecurityLevel(string linearSecurityLevel, IMethodResult oResult);
        abstract public void getScanTimeout(IMethodResult oResult);
        abstract public void setScanTimeout(int scanTimeout, IMethodResult oResult);
        abstract public void getRasterMode(IMethodResult oResult);
        abstract public void setRasterMode(string rasterMode, IMethodResult oResult);
        abstract public void getRasterHeight(IMethodResult oResult);
        abstract public void setRasterHeight(int rasterHeight, IMethodResult oResult);
        abstract public void getAimType(IMethodResult oResult);
        abstract public void setAimType(string aimType, IMethodResult oResult);
        abstract public void getTimedAimDuration(IMethodResult oResult);
        abstract public void setTimedAimDuration(int timedAimDuration, IMethodResult oResult);
        abstract public void getSameSymbolTimeout(IMethodResult oResult);
        abstract public void setSameSymbolTimeout(int sameSymbolTimeout, IMethodResult oResult);
        abstract public void getDifferentSymbolTimeout(IMethodResult oResult);
        abstract public void setDifferentSymbolTimeout(int differentSymbolTimeout, IMethodResult oResult);
        abstract public void getAimMode(IMethodResult oResult);
        abstract public void setAimMode(string aimMode, IMethodResult oResult);
        abstract public void getPicklistMode(IMethodResult oResult);
        abstract public void setPicklistMode(string picklistMode, IMethodResult oResult);
        abstract public void getViewfinderMode(IMethodResult oResult);
        abstract public void setViewfinderMode(string viewfinderMode, IMethodResult oResult);
        abstract public void getViewfinderX(IMethodResult oResult);
        abstract public void setViewfinderX(int viewfinderX, IMethodResult oResult);
        abstract public void getViewfinderY(IMethodResult oResult);
        abstract public void setViewfinderY(int viewfinderY, IMethodResult oResult);
        abstract public void getViewfinderWidth(IMethodResult oResult);
        abstract public void setViewfinderWidth(int viewfinderWidth, IMethodResult oResult);
        abstract public void getViewfinderHeight(IMethodResult oResult);
        abstract public void setViewfinderHeight(int viewfinderHeight, IMethodResult oResult);
        abstract public void getViewfinderFeedback(IMethodResult oResult);
        abstract public void setViewfinderFeedback(string viewfinderFeedback, IMethodResult oResult);
        abstract public void getViewfinderFeedbackTime(IMethodResult oResult);
        abstract public void setViewfinderFeedbackTime(int viewfinderFeedbackTime, IMethodResult oResult);
        abstract public void getFocusMode(IMethodResult oResult);
        abstract public void setFocusMode(string focusMode, IMethodResult oResult);
        abstract public void getIlluminationMode(IMethodResult oResult);
        abstract public void setIlluminationMode(string illuminationMode, IMethodResult oResult);
        abstract public void getDpmMode(IMethodResult oResult);
        abstract public void setDpmMode(bool dpmMode, IMethodResult oResult);
        abstract public void getInverse1dMode(IMethodResult oResult);
        abstract public void setInverse1dMode(string inverse1dMode, IMethodResult oResult);
        abstract public void getPoorQuality1dMode(IMethodResult oResult);
        abstract public void setPoorQuality1dMode(bool poorQuality1dMode, IMethodResult oResult);
        abstract public void getBeamWidth(IMethodResult oResult);
        abstract public void setBeamWidth(string beamWidth, IMethodResult oResult);
        abstract public void getDbpMode(IMethodResult oResult);
        abstract public void setDbpMode(string dbpMode, IMethodResult oResult);
        abstract public void getKlasseEins(IMethodResult oResult);
        abstract public void setKlasseEins(bool klasseEins, IMethodResult oResult);
        abstract public void getAdaptiveScanning(IMethodResult oResult);
        abstract public void setAdaptiveScanning(bool adaptiveScanning, IMethodResult oResult);
        abstract public void getBidirectionalRedundancy(IMethodResult oResult);
        abstract public void setBidirectionalRedundancy(bool bidirectionalRedundancy, IMethodResult oResult);
        abstract public void getBarcodeDataFormat(IMethodResult oResult);
        abstract public void setBarcodeDataFormat(string barcodeDataFormat, IMethodResult oResult);
        abstract public void getDataBufferSize(IMethodResult oResult);
        abstract public void setDataBufferSize(int dataBufferSize, IMethodResult oResult);
        abstract public void getConnectionIdleTimeout(IMethodResult oResult);
        abstract public void setConnectionIdleTimeout(int connectionIdleTimeout, IMethodResult oResult);
        abstract public void getDisconnectBtOnDisable(IMethodResult oResult);
        abstract public void setDisconnectBtOnDisable(bool disconnectBtOnDisable, IMethodResult oResult);
        abstract public void getDisplayBtAddressBarcodeOnEnable(IMethodResult oResult);
        abstract public void setDisplayBtAddressBarcodeOnEnable(bool displayBtAddressBarcodeOnEnable, IMethodResult oResult);
        abstract public void getEnableTimeout(IMethodResult oResult);
        abstract public void setEnableTimeout(int enableTimeout, IMethodResult oResult);
        abstract public void getFriendlyName(IMethodResult oResult);
        abstract public void getLcdMode(IMethodResult oResult);
        abstract public void setLcdMode(bool lcdMode, IMethodResult oResult);
        abstract public void getLowBatteryScan(IMethodResult oResult);
        abstract public void setLowBatteryScan(bool lowBatteryScan, IMethodResult oResult);
        abstract public void getTriggerConnected(IMethodResult oResult);
        abstract public void setTriggerConnected(bool triggerConnected, IMethodResult oResult);
        abstract public void getDisableScannerDuringNavigate(IMethodResult oResult);
        abstract public void setDisableScannerDuringNavigate(bool disableScannerDuringNavigate, IMethodResult oResult);
        abstract public void getDecodeVolume(IMethodResult oResult);
        abstract public void setDecodeVolume(int decodeVolume, IMethodResult oResult);
        abstract public void getDecodeDuration(IMethodResult oResult);
        abstract public void setDecodeDuration(int decodeDuration, IMethodResult oResult);
        abstract public void getDecodeFrequency(IMethodResult oResult);
        abstract public void setDecodeFrequency(int decodeFrequency, IMethodResult oResult);
        abstract public void getInvalidDecodeFrequency(IMethodResult oResult);
        abstract public void setInvalidDecodeFrequency(int invalidDecodeFrequency, IMethodResult oResult);
        abstract public void getDecodeSound(IMethodResult oResult);
        abstract public void setDecodeSound(string decodeSound, IMethodResult oResult);
        abstract public void getInvalidDecodeSound(IMethodResult oResult);
        abstract public void setInvalidDecodeSound(string invalidDecodeSound, IMethodResult oResult);
        abstract public void getScannerType(IMethodResult oResult);
        abstract public void getAllDecoders(IMethodResult oResult);
        abstract public void setAllDecoders(bool allDecoders, IMethodResult oResult);
        abstract public void getAztec(IMethodResult oResult);
        abstract public void setAztec(bool aztec, IMethodResult oResult);
        abstract public void getChinese2of5(IMethodResult oResult);
        abstract public void setChinese2of5(bool chinese2of5, IMethodResult oResult);
        abstract public void getCodabar(IMethodResult oResult);
        abstract public void setCodabar(bool codabar, IMethodResult oResult);
        abstract public void getCodabarClsiEditing(IMethodResult oResult);
        abstract public void setCodabarClsiEditing(bool codabarClsiEditing, IMethodResult oResult);
        abstract public void getCodabarMaxLength(IMethodResult oResult);
        abstract public void setCodabarMaxLength(int codabarMaxLength, IMethodResult oResult);
        abstract public void getCodabarMinLength(IMethodResult oResult);
        abstract public void setCodabarMinLength(int codabarMinLength, IMethodResult oResult);
        abstract public void getCodabarNotisEditing(IMethodResult oResult);
        abstract public void setCodabarNotisEditing(bool codabarNotisEditing, IMethodResult oResult);
        abstract public void getCodabarRedundancy(IMethodResult oResult);
        abstract public void setCodabarRedundancy(bool codabarRedundancy, IMethodResult oResult);
        abstract public void getCode11(IMethodResult oResult);
        abstract public void setCode11(bool code11, IMethodResult oResult);
        abstract public void getCode11checkDigitCount(IMethodResult oResult);
        abstract public void setCode11checkDigitCount(string code11checkDigitCount, IMethodResult oResult);
        abstract public void getCode11maxLength(IMethodResult oResult);
        abstract public void setCode11maxLength(int code11maxLength, IMethodResult oResult);
        abstract public void getCode11minLength(IMethodResult oResult);
        abstract public void setCode11minLength(int code11minLength, IMethodResult oResult);
        abstract public void getCode11redundancy(IMethodResult oResult);
        abstract public void setCode11redundancy(bool code11redundancy, IMethodResult oResult);
        abstract public void getCode11reportCheckDigit(IMethodResult oResult);
        abstract public void setCode11reportCheckDigit(bool code11reportCheckDigit, IMethodResult oResult);
        abstract public void getCode128(IMethodResult oResult);
        abstract public void setCode128(bool code128, IMethodResult oResult);
        abstract public void getCode128checkIsBtTable(IMethodResult oResult);
        abstract public void setCode128checkIsBtTable(bool code128checkIsBtTable, IMethodResult oResult);
        abstract public void getCode128ean128(IMethodResult oResult);
        abstract public void setCode128ean128(bool code128ean128, IMethodResult oResult);
        abstract public void getCode128isbt128(IMethodResult oResult);
        abstract public void setCode128isbt128(bool code128isbt128, IMethodResult oResult);
        abstract public void getCode128isbt128ConcatMode(IMethodResult oResult);
        abstract public void setCode128isbt128ConcatMode(string code128isbt128ConcatMode, IMethodResult oResult);
        abstract public void getCode128maxLength(IMethodResult oResult);
        abstract public void setCode128maxLength(int code128maxLength, IMethodResult oResult);
        abstract public void getCode128minLength(IMethodResult oResult);
        abstract public void setCode128minLength(int code128minLength, IMethodResult oResult);
        abstract public void getCode128other128(IMethodResult oResult);
        abstract public void setCode128other128(bool code128other128, IMethodResult oResult);
        abstract public void getCode128redundancy(IMethodResult oResult);
        abstract public void setCode128redundancy(bool code128redundancy, IMethodResult oResult);
        abstract public void getCode128securityLevel(IMethodResult oResult);
        abstract public void setCode128securityLevel(int code128securityLevel, IMethodResult oResult);
        abstract public void getCompositeAb(IMethodResult oResult);
        abstract public void setCompositeAb(bool compositeAb, IMethodResult oResult);
        abstract public void getCompositeAbUccLinkMode(IMethodResult oResult);
        abstract public void setCompositeAbUccLinkMode(string compositeAbUccLinkMode, IMethodResult oResult);
        abstract public void getCompositeAbUseUpcPreambleCheckDigitRules(IMethodResult oResult);
        abstract public void setCompositeAbUseUpcPreambleCheckDigitRules(bool compositeAbUseUpcPreambleCheckDigitRules, IMethodResult oResult);
        abstract public void getCompositeC(IMethodResult oResult);
        abstract public void setCompositeC(bool compositeC, IMethodResult oResult);
        abstract public void getCode39(IMethodResult oResult);
        abstract public void setCode39(bool code39, IMethodResult oResult);
        abstract public void getCode39code32Prefix(IMethodResult oResult);
        abstract public void setCode39code32Prefix(bool code39code32Prefix, IMethodResult oResult);
        abstract public void getCode39convertToCode32(IMethodResult oResult);
        abstract public void setCode39convertToCode32(bool code39convertToCode32, IMethodResult oResult);
        abstract public void getCode39fullAscii(IMethodResult oResult);
        abstract public void setCode39fullAscii(bool code39fullAscii, IMethodResult oResult);
        abstract public void getCode39maxLength(IMethodResult oResult);
        abstract public void setCode39maxLength(int code39maxLength, IMethodResult oResult);
        abstract public void getCode39minLength(IMethodResult oResult);
        abstract public void setCode39minLength(int code39minLength, IMethodResult oResult);
        abstract public void getCode39redundancy(IMethodResult oResult);
        abstract public void setCode39redundancy(bool code39redundancy, IMethodResult oResult);
        abstract public void getCode39reportCheckDigit(IMethodResult oResult);
        abstract public void setCode39reportCheckDigit(bool code39reportCheckDigit, IMethodResult oResult);
        abstract public void getCode39securityLevel(IMethodResult oResult);
        abstract public void setCode39securityLevel(int code39securityLevel, IMethodResult oResult);
        abstract public void getCode39verifyCheckDigit(IMethodResult oResult);
        abstract public void setCode39verifyCheckDigit(bool code39verifyCheckDigit, IMethodResult oResult);
        abstract public void getCode93(IMethodResult oResult);
        abstract public void setCode93(bool code93, IMethodResult oResult);
        abstract public void getCode93maxLength(IMethodResult oResult);
        abstract public void setCode93maxLength(int code93maxLength, IMethodResult oResult);
        abstract public void getCode93minLength(IMethodResult oResult);
        abstract public void setCode93minLength(int code93minLength, IMethodResult oResult);
        abstract public void getCode93redundancy(IMethodResult oResult);
        abstract public void setCode93redundancy(bool code93redundancy, IMethodResult oResult);
        abstract public void getD2of5(IMethodResult oResult);
        abstract public void setD2of5(bool d2of5, IMethodResult oResult);
        abstract public void getD2of5maxLength(IMethodResult oResult);
        abstract public void setD2of5maxLength(int d2of5maxLength, IMethodResult oResult);
        abstract public void getD2of5minLength(IMethodResult oResult);
        abstract public void setD2of5minLength(int d2of5minLength, IMethodResult oResult);
        abstract public void getD2of5redundancy(IMethodResult oResult);
        abstract public void setD2of5redundancy(bool d2of5redundancy, IMethodResult oResult);
        abstract public void getDatamatrix(IMethodResult oResult);
        abstract public void setDatamatrix(bool datamatrix, IMethodResult oResult);
        abstract public void getEan13(IMethodResult oResult);
        abstract public void setEan13(bool ean13, IMethodResult oResult);
        abstract public void getEan8(IMethodResult oResult);
        abstract public void setEan8(bool ean8, IMethodResult oResult);
        abstract public void getEan8convertToEan13(IMethodResult oResult);
        abstract public void setEan8convertToEan13(bool ean8convertToEan13, IMethodResult oResult);
        abstract public void getI2of5(IMethodResult oResult);
        abstract public void setI2of5(bool i2of5, IMethodResult oResult);
        abstract public void getI2of5convertToEan13(IMethodResult oResult);
        abstract public void setI2of5convertToEan13(bool i2of5convertToEan13, IMethodResult oResult);
        abstract public void getI2of5maxLength(IMethodResult oResult);
        abstract public void setI2of5maxLength(int i2of5maxLength, IMethodResult oResult);
        abstract public void getI2of5minLength(IMethodResult oResult);
        abstract public void setI2of5minLength(int i2of5minLength, IMethodResult oResult);
        abstract public void getI2of5redundancy(IMethodResult oResult);
        abstract public void setI2of5redundancy(bool i2of5redundancy, IMethodResult oResult);
        abstract public void getI2of5reportCheckDigit(IMethodResult oResult);
        abstract public void setI2of5reportCheckDigit(bool i2of5reportCheckDigit, IMethodResult oResult);
        abstract public void getI2of5verifyCheckDigit(IMethodResult oResult);
        abstract public void setI2of5verifyCheckDigit(string i2of5verifyCheckDigit, IMethodResult oResult);
        abstract public void getKorean3of5(IMethodResult oResult);
        abstract public void setKorean3of5(bool korean3of5, IMethodResult oResult);
        abstract public void getKorean3of5redundancy(IMethodResult oResult);
        abstract public void setKorean3of5redundancy(bool korean3of5redundancy, IMethodResult oResult);
        abstract public void getKorean3of5maxLength(IMethodResult oResult);
        abstract public void setKorean3of5maxLength(int korean3of5maxLength, IMethodResult oResult);
        abstract public void getKorean3of5minLength(IMethodResult oResult);
        abstract public void setKorean3of5minLength(int korean3of5minLength, IMethodResult oResult);
        abstract public void getMacroPdf(IMethodResult oResult);
        abstract public void setMacroPdf(bool macroPdf, IMethodResult oResult);
        abstract public void getMacroPdfBufferLabels(IMethodResult oResult);
        abstract public void setMacroPdfBufferLabels(bool macroPdfBufferLabels, IMethodResult oResult);
        abstract public void getMacroPdfConvertToPdf417(IMethodResult oResult);
        abstract public void setMacroPdfConvertToPdf417(bool macroPdfConvertToPdf417, IMethodResult oResult);
        abstract public void getMacroPdfExclusive(IMethodResult oResult);
        abstract public void setMacroPdfExclusive(bool macroPdfExclusive, IMethodResult oResult);
        abstract public void getMacroMicroPdf(IMethodResult oResult);
        abstract public void setMacroMicroPdf(bool macroMicroPdf, IMethodResult oResult);
        abstract public void getMacroMicroPdfBufferLabels(IMethodResult oResult);
        abstract public void setMacroMicroPdfBufferLabels(bool macroMicroPdfBufferLabels, IMethodResult oResult);
        abstract public void getMacroMicroPdfConvertToMicroPdf(IMethodResult oResult);
        abstract public void setMacroMicroPdfConvertToMicroPdf(bool macroMicroPdfConvertToMicroPdf, IMethodResult oResult);
        abstract public void getMacroMicroPdfExclusive(IMethodResult oResult);
        abstract public void setMacroMicroPdfExclusive(bool macroMicroPdfExclusive, IMethodResult oResult);
        abstract public void getMacroMicroPdfReportAppendInfo(IMethodResult oResult);
        abstract public void setMacroMicroPdfReportAppendInfo(bool macroMicroPdfReportAppendInfo, IMethodResult oResult);
        abstract public void getMatrix2of5(IMethodResult oResult);
        abstract public void setMatrix2of5(bool matrix2of5, IMethodResult oResult);
        abstract public void getMatrix2of5maxLength(IMethodResult oResult);
        abstract public void setMatrix2of5maxLength(int matrix2of5maxLength, IMethodResult oResult);
        abstract public void getMatrix2of5minLength(IMethodResult oResult);
        abstract public void setMatrix2of5minLength(int matrix2of5minLength, IMethodResult oResult);
        abstract public void getMatrix2of5reportCheckDigit(IMethodResult oResult);
        abstract public void setMatrix2of5reportCheckDigit(bool matrix2of5reportCheckDigit, IMethodResult oResult);
        abstract public void getMatrix2of5verifyCheckDigit(IMethodResult oResult);
        abstract public void setMatrix2of5verifyCheckDigit(bool matrix2of5verifyCheckDigit, IMethodResult oResult);
        abstract public void getMaxiCode(IMethodResult oResult);
        abstract public void setMaxiCode(bool maxiCode, IMethodResult oResult);
        abstract public void getMicroPdf(IMethodResult oResult);
        abstract public void setMicroPdf(bool microPdf, IMethodResult oResult);
        abstract public void getMicroQr(IMethodResult oResult);
        abstract public void setMicroQr(bool microQr, IMethodResult oResult);
        abstract public void getMsi(IMethodResult oResult);
        abstract public void setMsi(bool msi, IMethodResult oResult);
        abstract public void getMsiCheckDigits(IMethodResult oResult);
        abstract public void setMsiCheckDigits(string msiCheckDigits, IMethodResult oResult);
        abstract public void getMsiCheckDigitScheme(IMethodResult oResult);
        abstract public void setMsiCheckDigitScheme(string msiCheckDigitScheme, IMethodResult oResult);
        abstract public void getMsiMaxLength(IMethodResult oResult);
        abstract public void setMsiMaxLength(int msiMaxLength, IMethodResult oResult);
        abstract public void getMsiMinLength(IMethodResult oResult);
        abstract public void setMsiMinLength(int msiMinLength, IMethodResult oResult);
        abstract public void getMsiRedundancy(IMethodResult oResult);
        abstract public void setMsiRedundancy(bool msiRedundancy, IMethodResult oResult);
        abstract public void getMsiReportCheckDigit(IMethodResult oResult);
        abstract public void setMsiReportCheckDigit(bool msiReportCheckDigit, IMethodResult oResult);
        abstract public void getPdf417(IMethodResult oResult);
        abstract public void setPdf417(bool pdf417, IMethodResult oResult);
        abstract public void getSignature(IMethodResult oResult);
        abstract public void setSignature(bool signature, IMethodResult oResult);
        abstract public void getSignatureImageHeight(IMethodResult oResult);
        abstract public void setSignatureImageHeight(int signatureImageHeight, IMethodResult oResult);
        abstract public void getSignatureImageWidth(IMethodResult oResult);
        abstract public void setSignatureImageWidth(int signatureImageWidth, IMethodResult oResult);
        abstract public void getSignatureImageQuality(IMethodResult oResult);
        abstract public void setSignatureImageQuality(int signatureImageQuality, IMethodResult oResult);
        abstract public void getAusPostal(IMethodResult oResult);
        abstract public void setAusPostal(bool ausPostal, IMethodResult oResult);
        abstract public void getCanPostal(IMethodResult oResult);
        abstract public void setCanPostal(bool canPostal, IMethodResult oResult);
        abstract public void getDutchPostal(IMethodResult oResult);
        abstract public void setDutchPostal(bool dutchPostal, IMethodResult oResult);
        abstract public void getJapPostal(IMethodResult oResult);
        abstract public void setJapPostal(bool japPostal, IMethodResult oResult);
        abstract public void getUkPostal(IMethodResult oResult);
        abstract public void setUkPostal(bool ukPostal, IMethodResult oResult);
        abstract public void getUkPostalReportCheckDigit(IMethodResult oResult);
        abstract public void setUkPostalReportCheckDigit(bool ukPostalReportCheckDigit, IMethodResult oResult);
        abstract public void getUs4state(IMethodResult oResult);
        abstract public void setUs4state(bool us4state, IMethodResult oResult);
        abstract public void getUs4stateFics(IMethodResult oResult);
        abstract public void setUs4stateFics(bool us4stateFics, IMethodResult oResult);
        abstract public void getUsPlanet(IMethodResult oResult);
        abstract public void setUsPlanet(bool usPlanet, IMethodResult oResult);
        abstract public void getUsPlanetReportCheckDigit(IMethodResult oResult);
        abstract public void setUsPlanetReportCheckDigit(bool usPlanetReportCheckDigit, IMethodResult oResult);
        abstract public void getUsPostNet(IMethodResult oResult);
        abstract public void setUsPostNet(bool usPostNet, IMethodResult oResult);
        abstract public void getUsPostNetReportCheckDigit(IMethodResult oResult);
        abstract public void setUsPostNetReportCheckDigit(bool usPostNetReportCheckDigit, IMethodResult oResult);
        abstract public void getQrCode(IMethodResult oResult);
        abstract public void setQrCode(bool qrCode, IMethodResult oResult);
        abstract public void getGs1dataBar(IMethodResult oResult);
        abstract public void setGs1dataBar(bool gs1dataBar, IMethodResult oResult);
        abstract public void getGs1dataBarExpanded(IMethodResult oResult);
        abstract public void setGs1dataBarExpanded(bool gs1dataBarExpanded, IMethodResult oResult);
        abstract public void getGs1dataBarLimited(IMethodResult oResult);
        abstract public void setGs1dataBarLimited(bool gs1dataBarLimited, IMethodResult oResult);
        abstract public void getTlc39(IMethodResult oResult);
        abstract public void setTlc39(bool tlc39, IMethodResult oResult);
        abstract public void getTrioptic39(IMethodResult oResult);
        abstract public void setTrioptic39(bool trioptic39, IMethodResult oResult);
        abstract public void getTrioptic39Redundancy(IMethodResult oResult);
        abstract public void setTrioptic39Redundancy(bool trioptic39Redundancy, IMethodResult oResult);
        abstract public void getUpcEanBookland(IMethodResult oResult);
        abstract public void setUpcEanBookland(bool upcEanBookland, IMethodResult oResult);
        abstract public void getUpcEanBooklandFormat(IMethodResult oResult);
        abstract public void setUpcEanBooklandFormat(string upcEanBooklandFormat, IMethodResult oResult);
        abstract public void getUpcEanConvertGs1dataBarToUpcEan(IMethodResult oResult);
        abstract public void setUpcEanConvertGs1dataBarToUpcEan(bool upcEanConvertGs1dataBarToUpcEan, IMethodResult oResult);
        abstract public void getUpcEanCoupon(IMethodResult oResult);
        abstract public void setUpcEanCoupon(bool upcEanCoupon, IMethodResult oResult);
        abstract public void getUpcEanLinearDecode(IMethodResult oResult);
        abstract public void setUpcEanLinearDecode(bool upcEanLinearDecode, IMethodResult oResult);
        abstract public void getUpcEanRandomWeightCheckDigit(IMethodResult oResult);
        abstract public void setUpcEanRandomWeightCheckDigit(bool upcEanRandomWeightCheckDigit, IMethodResult oResult);
        abstract public void getUpcEanRetryCount(IMethodResult oResult);
        abstract public void setUpcEanRetryCount(int upcEanRetryCount, IMethodResult oResult);
        abstract public void getUpcEanSecurityLevel(IMethodResult oResult);
        abstract public void setUpcEanSecurityLevel(int upcEanSecurityLevel, IMethodResult oResult);
        abstract public void getUpcEanSupplemental2(IMethodResult oResult);
        abstract public void setUpcEanSupplemental2(bool upcEanSupplemental2, IMethodResult oResult);
        abstract public void getUpcEanSupplemental5(IMethodResult oResult);
        abstract public void setUpcEanSupplemental5(bool upcEanSupplemental5, IMethodResult oResult);
        abstract public void getUpcEanSupplementalMode(IMethodResult oResult);
        abstract public void setUpcEanSupplementalMode(string upcEanSupplementalMode, IMethodResult oResult);
        abstract public void getUpca(IMethodResult oResult);
        abstract public void setUpca(bool upca, IMethodResult oResult);
        abstract public void getUpcaPreamble(IMethodResult oResult);
        abstract public void setUpcaPreamble(string upcaPreamble, IMethodResult oResult);
        abstract public void getUpcaReportCheckDigit(IMethodResult oResult);
        abstract public void setUpcaReportCheckDigit(bool upcaReportCheckDigit, IMethodResult oResult);
        abstract public void getUpce0(IMethodResult oResult);
        abstract public void setUpce0(bool upce0, IMethodResult oResult);
        abstract public void getUpce0convertToUpca(IMethodResult oResult);
        abstract public void setUpce0convertToUpca(bool upce0convertToUpca, IMethodResult oResult);
        abstract public void getUpce0preamble(IMethodResult oResult);
        abstract public void setUpce0preamble(string upce0preamble, IMethodResult oResult);
        abstract public void getUpce0reportCheckDigit(IMethodResult oResult);
        abstract public void setUpce0reportCheckDigit(bool upce0reportCheckDigit, IMethodResult oResult);
        abstract public void getUpce1(IMethodResult oResult);
        abstract public void setUpce1(bool upce1, IMethodResult oResult);
        abstract public void getUpce1convertToUpca(IMethodResult oResult);
        abstract public void setUpce1convertToUpca(bool upce1convertToUpca, IMethodResult oResult);
        abstract public void getUpce1preamble(IMethodResult oResult);
        abstract public void setUpce1preamble(string upce1preamble, IMethodResult oResult);
        abstract public void getUpce1reportCheckDigit(IMethodResult oResult);
        abstract public void setUpce1reportCheckDigit(bool upce1reportCheckDigit, IMethodResult oResult);
        abstract public void getWebcode(IMethodResult oResult);
        abstract public void setWebcode(bool webcode, IMethodResult oResult);
        abstract public void getWebcodeDecodeGtSubtype(IMethodResult oResult);
        abstract public void setWebcodeDecodeGtSubtype(bool webcodeDecodeGtSubtype, IMethodResult oResult);
        abstract public void getRsmModelNumber(IMethodResult oResult);
        abstract public void getRsmSerialNumber(IMethodResult oResult);
        abstract public void getRsmDateOfManufacture(IMethodResult oResult);
        abstract public void getRsmDateOfService(IMethodResult oResult);
        abstract public void getRsmBluetoothAddress(IMethodResult oResult);
        abstract public void getRsmFirmwareVersion(IMethodResult oResult);
        abstract public void getRsmDeviceClass(IMethodResult oResult);
        abstract public void getRsmBatteryStatus(IMethodResult oResult);
        abstract public void getRsmBatteryCapacity(IMethodResult oResult);
        abstract public void getRsmBatteryId(IMethodResult oResult);
        abstract public void getRsmBluetoothAuthentication(IMethodResult oResult);
        abstract public void setRsmBluetoothAuthentication(bool rsmBluetoothAuthentication, IMethodResult oResult);
        abstract public void getRsmBluetoothEncryption(IMethodResult oResult);
        abstract public void setRsmBluetoothEncryption(bool rsmBluetoothEncryption, IMethodResult oResult);
        abstract public void getRsmBluetoothPinCode(IMethodResult oResult);
        abstract public void setRsmBluetoothPinCode(string rsmBluetoothPinCode, IMethodResult oResult);
        abstract public void getRsmBluetoothPinCodeType(IMethodResult oResult);
        abstract public void setRsmBluetoothPinCodeType(string rsmBluetoothPinCodeType, IMethodResult oResult);
        abstract public void getRsmBluetoothReconnectionAttempts(IMethodResult oResult);
        abstract public void setRsmBluetoothReconnectionAttempts(int rsmBluetoothReconnectionAttempts, IMethodResult oResult);
        abstract public void getRsmBluetoothBeepOnReconnectAttempt(IMethodResult oResult);
        abstract public void setRsmBluetoothBeepOnReconnectAttempt(bool rsmBluetoothBeepOnReconnectAttempt, IMethodResult oResult);
        abstract public void getRsmBluetoothHidAutoReconnect(IMethodResult oResult);
        abstract public void setRsmBluetoothHidAutoReconnect(string rsmBluetoothHidAutoReconnect, IMethodResult oResult);
        abstract public void getRsmBluetoothFriendlyName(IMethodResult oResult);
        abstract public void setRsmBluetoothFriendlyName(string rsmBluetoothFriendlyName, IMethodResult oResult);
        abstract public void getRsmBluetoothInquiryMode(IMethodResult oResult);
        abstract public void setRsmBluetoothInquiryMode(string rsmBluetoothInquiryMode, IMethodResult oResult);
        abstract public void getRsmBluetoothAutoReconnect(IMethodResult oResult);
        abstract public void setRsmBluetoothAutoReconnect(string rsmBluetoothAutoReconnect, IMethodResult oResult);
        abstract public void getRsmForceSavePairingBarcode(IMethodResult oResult);
        abstract public void setRsmForceSavePairingBarcode(bool rsmForceSavePairingBarcode, IMethodResult oResult);
        abstract public void getRsmLowBatteryIndication(IMethodResult oResult);
        abstract public void setRsmLowBatteryIndication(bool rsmLowBatteryIndication, IMethodResult oResult);
        abstract public void getRsmLowBatteryIndicationCycle(IMethodResult oResult);
        abstract public void setRsmLowBatteryIndicationCycle(int rsmLowBatteryIndicationCycle, IMethodResult oResult);
        abstract public void getRsmScanLineWidth(IMethodResult oResult);
        abstract public void setRsmScanLineWidth(string rsmScanLineWidth, IMethodResult oResult);
        abstract public void getRsmGoodScansDelay(IMethodResult oResult);
        abstract public void setRsmGoodScansDelay(int rsmGoodScansDelay, IMethodResult oResult);
        abstract public void getRsmDecodeFeedback(IMethodResult oResult);
        abstract public void setRsmDecodeFeedback(bool rsmDecodeFeedback, IMethodResult oResult);
        abstract public void getRsmIgnoreCode128Usps(IMethodResult oResult);
        abstract public void setRsmIgnoreCode128Usps(bool rsmIgnoreCode128Usps, IMethodResult oResult);
        abstract public void getRsmScanTriggerWakeup(IMethodResult oResult);
        abstract public void setRsmScanTriggerWakeup(bool rsmScanTriggerWakeup, IMethodResult oResult);
        abstract public void getRsmMems(IMethodResult oResult);
        abstract public void setRsmMems(bool rsmMems, IMethodResult oResult);
        abstract public void getRsmProximityEnable(IMethodResult oResult);
        abstract public void setRsmProximityEnable(bool rsmProximityEnable, IMethodResult oResult);
        abstract public void getRsmProximityContinuous(IMethodResult oResult);
        abstract public void setRsmProximityContinuous(bool rsmProximityContinuous, IMethodResult oResult);
        abstract public void getRsmProximityDistance(IMethodResult oResult);
        abstract public void setRsmProximityDistance(string rsmProximityDistance, IMethodResult oResult);
        abstract public void getRsmPagingEnable(IMethodResult oResult);
        abstract public void setRsmPagingEnable(bool rsmPagingEnable, IMethodResult oResult);
        abstract public void getRsmPagingBeepSequence(IMethodResult oResult);
        abstract public void setRsmPagingBeepSequence(int rsmPagingBeepSequence, IMethodResult oResult);
        abstract public void enable(IReadOnlyDictionary<string, string> propertyMap, IMethodResult oResult);
        abstract public void registerBluetoothStatus(IMethodResult oResult);
        abstract public void start(IMethodResult oResult);
        abstract public void stop(IMethodResult oResult);
        abstract public void disable(IMethodResult oResult);
        abstract public void barcode_recognize(string imageFilePath, IMethodResult oResult);
        abstract public void getSupportedProperties(IMethodResult oResult);
        abstract public void take(IReadOnlyDictionary<string, string> propertyMap, IMethodResult oResult);
        abstract public void take_barcode(string rubyCallbackURL, IReadOnlyDictionary<string, string> propertyMap, IMethodResult oResult);
        abstract public void commandRemoteScanner(string command, IMethodResult oResult);
    }

    abstract public class BarcodeChainwaySingletonBase : IBarcodeChainwaySingletonImpl
    {

        protected SortedDictionary<string, BarcodeChainwayBase> keeper = new SortedDictionary<string, BarcodeChainwayBase>();

        public IBarcodeChainwayImpl getBarcodeChainwayByID(string id)
        {
            if (keeper.ContainsKey(id))
            {
                return keeper[id];
            }
            else
            {
                BarcodeChainwayBase impl = new BarcodeChainway(id);
                keeper.Add(id, impl);
                return impl;
            }
        }

        protected BarcodeChainwaySingletonComponent _runtime;

        public BarcodeChainwaySingletonBase()
        {
              try{dispatcher = MainPage.getDispatcher();
              }catch(Exception e){deb("Can't get access to dispatcher");}
              _runtime = new BarcodeChainwaySingletonComponent(this);
        }

        public static void deb(String s, [System.Runtime.CompilerServices.CallerMemberName] string memberName = "")
        {
            if (memberName.Length != 0) {memberName = memberName + " : ";}
            System.Diagnostics.Debug.WriteLine(memberName + s);
        }

        public void dispatchInvoke(Action a)
        {
            if (dispatcher != null) {
              var ignore = dispatcher.RunAsync(CoreDispatcherPriority.Normal, () =>
              {try{a();} catch (Exception ex) {System.Diagnostics.Debug.WriteLine("Invoke in UI Thread exception");} });
            }else{a();}
        }
        protected CoreDispatcher dispatcher = null;


        abstract public void enumerate(IMethodResult oResult);
    }

    public class BarcodeChainwayFactoryBase : IBarcodeChainwayFactoryImpl
    {
        protected static BarcodeChainwaySingleton instance = null;
        public virtual IBarcodeChainwayImpl getImpl(string id) {
            getSingletonImpl();
            return instance.getBarcodeChainwayByID(id);
        }
        public IBarcodeChainwaySingletonImpl getSingletonImpl() {
            if (instance == null){instance = new BarcodeChainwaySingleton();}
            return instance;
          
        }
    }
}

}
