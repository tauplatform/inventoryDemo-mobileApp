
(function ($, rho, rhoUtil) {
    'use strict';

    var moduleNS = 'Rho.Barcode';
    var apiReq = rhoUtil.apiReqFor(moduleNS);


    // === Barcode class definition ===

    function Barcode() {
        var id = null;
        this.getId = function () {return id;};

        if (1 == arguments.length && arguments[0][rhoUtil.rhoIdParam()]) {
            if (moduleNS != arguments[0][rhoUtil.rhoClassParam()]) {
                throw "Wrong class instantiation!";
            }
            id = arguments[0][rhoUtil.rhoIdParam()];
        } else {
            id = rhoUtil.nextId();
            // constructor methods are following:
            
        }
    };

    // === Barcode instance properties ===

    rhoUtil.createPropsProxy(Barcode.prototype, [
        { propName: 'autoEnter', propAccess: 'rw' }
      , { propName: 'autoTab', propAccess: 'rw' }
      , { propName: 'hapticFeedback', propAccess: 'rw' }
      , { propName: 'linearSecurityLevel', propAccess: 'rw' }
      , { propName: 'scanTimeout', propAccess: 'rw' }
      , { propName: 'rasterMode', propAccess: 'rw' }
      , { propName: 'rasterHeight', propAccess: 'rw' }
      , { propName: 'aimType', propAccess: 'rw' }
      , { propName: 'timedAimDuration', propAccess: 'rw' }
      , { propName: 'sameSymbolTimeout', propAccess: 'rw' }
      , { propName: 'differentSymbolTimeout', propAccess: 'rw' }
      , { propName: 'aimMode', propAccess: 'rw' }
      , { propName: 'picklistMode', propAccess: 'rw' }
      , { propName: 'viewfinderMode', propAccess: 'rw' }
      , { propName: 'viewfinderX', propAccess: 'rw' }
      , { propName: 'viewfinderY', propAccess: 'rw' }
      , { propName: 'viewfinderWidth', propAccess: 'rw' }
      , { propName: 'viewfinderHeight', propAccess: 'rw' }
      , { propName: 'viewfinderFeedback', propAccess: 'rw' }
      , { propName: 'viewfinderFeedbackTime', propAccess: 'rw' }
      , { propName: 'focusMode', propAccess: 'rw' }
      , { propName: 'illuminationMode', propAccess: 'rw' }
      , { propName: 'dpmMode', propAccess: 'rw' }
      , { propName: 'inverse1dMode', propAccess: 'rw' }
      , { propName: 'poorQuality1dMode', propAccess: 'rw' }
      , { propName: 'beamWidth', propAccess: 'rw' }
      , { propName: 'dbpMode', propAccess: 'rw' }
      , { propName: 'klasseEins', propAccess: 'rw' }
      , { propName: 'adaptiveScanning', propAccess: 'rw' }
      , { propName: 'bidirectionalRedundancy', propAccess: 'rw' }
      , { propName: 'barcodeDataFormat', propAccess: 'rw' }
      , { propName: 'dataBufferSize', propAccess: 'rw' }
      , { propName: 'connectionIdleTimeout', propAccess: 'rw' }
      , { propName: 'disconnectBtOnDisable', propAccess: 'rw' }
      , { propName: 'displayBtAddressBarcodeOnEnable', propAccess: 'rw' }
      , { propName: 'enableTimeout', propAccess: 'rw' }
      , { propName: 'friendlyName', propAccess: 'r' }
      , { propName: 'lcdMode', propAccess: 'rw' }
      , { propName: 'lowBatteryScan', propAccess: 'rw' }
      , { propName: 'triggerConnected', propAccess: 'rw' }
      , { propName: 'disableScannerDuringNavigate', propAccess: 'rw' }
      , { propName: 'decodeVolume', propAccess: 'rw' }
      , { propName: 'decodeDuration', propAccess: 'rw' }
      , { propName: 'decodeFrequency', propAccess: 'rw' }
      , { propName: 'invalidDecodeFrequency', propAccess: 'rw' }
      , { propName: 'decodeSound', propAccess: 'rw' }
      , { propName: 'invalidDecodeSound', propAccess: 'rw' }
      , { propName: 'scannerType', propAccess: 'r' }
      , { propName: 'allDecoders', propAccess: 'rw' }
      , { propName: 'aztec', propAccess: 'rw' }
      , { propName: 'chinese2of5', propAccess: 'rw' }
      , { propName: 'codabar', propAccess: 'rw' }
      , { propName: 'codabarClsiEditing', propAccess: 'rw' }
      , { propName: 'codabarMaxLength', propAccess: 'rw' }
      , { propName: 'codabarMinLength', propAccess: 'rw' }
      , { propName: 'codabarNotisEditing', propAccess: 'rw' }
      , { propName: 'codabarRedundancy', propAccess: 'rw' }
      , { propName: 'code11', propAccess: 'rw' }
      , { propName: 'code11checkDigitCount', propAccess: 'rw' }
      , { propName: 'code11maxLength', propAccess: 'rw' }
      , { propName: 'code11minLength', propAccess: 'rw' }
      , { propName: 'code11redundancy', propAccess: 'rw' }
      , { propName: 'code11reportCheckDigit', propAccess: 'rw' }
      , { propName: 'code128', propAccess: 'rw' }
      , { propName: 'code128checkIsBtTable', propAccess: 'rw' }
      , { propName: 'code128ean128', propAccess: 'rw' }
      , { propName: 'code128isbt128', propAccess: 'rw' }
      , { propName: 'code128isbt128ConcatMode', propAccess: 'rw' }
      , { propName: 'code128maxLength', propAccess: 'rw' }
      , { propName: 'code128minLength', propAccess: 'rw' }
      , { propName: 'code128other128', propAccess: 'rw' }
      , { propName: 'code128redundancy', propAccess: 'rw' }
      , { propName: 'code128securityLevel', propAccess: 'rw' }
      , { propName: 'compositeAb', propAccess: 'rw' }
      , { propName: 'compositeAbUccLinkMode', propAccess: 'rw' }
      , { propName: 'compositeAbUseUpcPreambleCheckDigitRules', propAccess: 'rw' }
      , { propName: 'compositeC', propAccess: 'rw' }
      , { propName: 'code39', propAccess: 'rw' }
      , { propName: 'code39code32Prefix', propAccess: 'rw' }
      , { propName: 'code39convertToCode32', propAccess: 'rw' }
      , { propName: 'code39fullAscii', propAccess: 'rw' }
      , { propName: 'code39maxLength', propAccess: 'rw' }
      , { propName: 'code39minLength', propAccess: 'rw' }
      , { propName: 'code39redundancy', propAccess: 'rw' }
      , { propName: 'code39reportCheckDigit', propAccess: 'rw' }
      , { propName: 'code39securityLevel', propAccess: 'rw' }
      , { propName: 'code39verifyCheckDigit', propAccess: 'rw' }
      , { propName: 'code93', propAccess: 'rw' }
      , { propName: 'code93maxLength', propAccess: 'rw' }
      , { propName: 'code93minLength', propAccess: 'rw' }
      , { propName: 'code93redundancy', propAccess: 'rw' }
      , { propName: 'd2of5', propAccess: 'rw' }
      , { propName: 'd2of5maxLength', propAccess: 'rw' }
      , { propName: 'd2of5minLength', propAccess: 'rw' }
      , { propName: 'd2of5redundancy', propAccess: 'rw' }
      , { propName: 'datamatrix', propAccess: 'rw' }
      , { propName: 'ean13', propAccess: 'rw' }
      , { propName: 'ean8', propAccess: 'rw' }
      , { propName: 'ean8convertToEan13', propAccess: 'rw' }
      , { propName: 'i2of5', propAccess: 'rw' }
      , { propName: 'i2of5convertToEan13', propAccess: 'rw' }
      , { propName: 'i2of5maxLength', propAccess: 'rw' }
      , { propName: 'i2of5minLength', propAccess: 'rw' }
      , { propName: 'i2of5redundancy', propAccess: 'rw' }
      , { propName: 'i2of5reportCheckDigit', propAccess: 'rw' }
      , { propName: 'i2of5verifyCheckDigit', propAccess: 'rw' }
      , { propName: 'korean3of5', propAccess: 'rw' }
      , { propName: 'korean3of5redundancy', propAccess: 'rw' }
      , { propName: 'korean3of5maxLength', propAccess: 'rw' }
      , { propName: 'korean3of5minLength', propAccess: 'rw' }
      , { propName: 'macroPdf', propAccess: 'rw' }
      , { propName: 'macroPdfBufferLabels', propAccess: 'rw' }
      , { propName: 'macroPdfConvertToPdf417', propAccess: 'rw' }
      , { propName: 'macroPdfExclusive', propAccess: 'rw' }
      , { propName: 'macroMicroPdf', propAccess: 'rw' }
      , { propName: 'macroMicroPdfBufferLabels', propAccess: 'rw' }
      , { propName: 'macroMicroPdfConvertToMicroPdf', propAccess: 'rw' }
      , { propName: 'macroMicroPdfExclusive', propAccess: 'rw' }
      , { propName: 'macroMicroPdfReportAppendInfo', propAccess: 'rw' }
      , { propName: 'matrix2of5', propAccess: 'rw' }
      , { propName: 'matrix2of5maxLength', propAccess: 'rw' }
      , { propName: 'matrix2of5minLength', propAccess: 'rw' }
      , { propName: 'matrix2of5reportCheckDigit', propAccess: 'rw' }
      , { propName: 'matrix2of5verifyCheckDigit', propAccess: 'rw' }
      , { propName: 'maxiCode', propAccess: 'rw' }
      , { propName: 'microPdf', propAccess: 'rw' }
      , { propName: 'microQr', propAccess: 'rw' }
      , { propName: 'msi', propAccess: 'rw' }
      , { propName: 'msiCheckDigits', propAccess: 'rw' }
      , { propName: 'msiCheckDigitScheme', propAccess: 'rw' }
      , { propName: 'msiMaxLength', propAccess: 'rw' }
      , { propName: 'msiMinLength', propAccess: 'rw' }
      , { propName: 'msiRedundancy', propAccess: 'rw' }
      , { propName: 'msiReportCheckDigit', propAccess: 'rw' }
      , { propName: 'pdf417', propAccess: 'rw' }
      , { propName: 'signature', propAccess: 'rw' }
      , { propName: 'signatureImageHeight', propAccess: 'rw' }
      , { propName: 'signatureImageWidth', propAccess: 'rw' }
      , { propName: 'signatureImageQuality', propAccess: 'rw' }
      , { propName: 'ausPostal', propAccess: 'rw' }
      , { propName: 'canPostal', propAccess: 'rw' }
      , { propName: 'dutchPostal', propAccess: 'rw' }
      , { propName: 'japPostal', propAccess: 'rw' }
      , { propName: 'ukPostal', propAccess: 'rw' }
      , { propName: 'ukPostalReportCheckDigit', propAccess: 'rw' }
      , { propName: 'us4state', propAccess: 'rw' }
      , { propName: 'us4stateFics', propAccess: 'rw' }
      , { propName: 'usPlanet', propAccess: 'rw' }
      , { propName: 'usPlanetReportCheckDigit', propAccess: 'rw' }
      , { propName: 'usPostNet', propAccess: 'rw' }
      , { propName: 'usPostNetReportCheckDigit', propAccess: 'rw' }
      , { propName: 'qrCode', propAccess: 'rw' }
      , { propName: 'gs1dataBar', propAccess: 'rw' }
      , { propName: 'gs1dataBarExpanded', propAccess: 'rw' }
      , { propName: 'gs1dataBarLimited', propAccess: 'rw' }
      , { propName: 'tlc39', propAccess: 'rw' }
      , { propName: 'trioptic39', propAccess: 'rw' }
      , { propName: 'trioptic39Redundancy', propAccess: 'rw' }
      , { propName: 'upcEanBookland', propAccess: 'rw' }
      , { propName: 'upcEanBooklandFormat', propAccess: 'rw' }
      , { propName: 'upcEanConvertGs1dataBarToUpcEan', propAccess: 'rw' }
      , { propName: 'upcEanCoupon', propAccess: 'rw' }
      , { propName: 'upcEanLinearDecode', propAccess: 'rw' }
      , { propName: 'upcEanRandomWeightCheckDigit', propAccess: 'rw' }
      , { propName: 'upcEanRetryCount', propAccess: 'rw' }
      , { propName: 'upcEanSecurityLevel', propAccess: 'rw' }
      , { propName: 'upcEanSupplemental2', propAccess: 'rw' }
      , { propName: 'upcEanSupplemental5', propAccess: 'rw' }
      , { propName: 'upcEanSupplementalMode', propAccess: 'rw' }
      , { propName: 'upca', propAccess: 'rw' }
      , { propName: 'upcaPreamble', propAccess: 'rw' }
      , { propName: 'upcaReportCheckDigit', propAccess: 'rw' }
      , { propName: 'upce0', propAccess: 'rw' }
      , { propName: 'upce0convertToUpca', propAccess: 'rw' }
      , { propName: 'upce0preamble', propAccess: 'rw' }
      , { propName: 'upce0reportCheckDigit', propAccess: 'rw' }
      , { propName: 'upce1', propAccess: 'rw' }
      , { propName: 'upce1convertToUpca', propAccess: 'rw' }
      , { propName: 'upce1preamble', propAccess: 'rw' }
      , { propName: 'upce1reportCheckDigit', propAccess: 'rw' }
      , { propName: 'webcode', propAccess: 'rw' }
      , { propName: 'webcodeDecodeGtSubtype', propAccess: 'rw' }
      , { propName: 'rsmModelNumber', propAccess: 'r' }
      , { propName: 'rsmSerialNumber', propAccess: 'r' }
      , { propName: 'rsmDateOfManufacture', propAccess: 'r' }
      , { propName: 'rsmDateOfService', propAccess: 'r' }
      , { propName: 'rsmBluetoothAddress', propAccess: 'r' }
      , { propName: 'rsmFirmwareVersion', propAccess: 'r' }
      , { propName: 'rsmDeviceClass', propAccess: 'r' }
      , { propName: 'rsmBatteryStatus', propAccess: 'r' }
      , { propName: 'rsmBatteryCapacity', propAccess: 'r' }
      , { propName: 'rsmBatteryId', propAccess: 'r' }
      , { propName: 'rsmBluetoothAuthentication', propAccess: 'rw' }
      , { propName: 'rsmBluetoothEncryption', propAccess: 'rw' }
      , { propName: 'rsmBluetoothPinCode', propAccess: 'rw' }
      , { propName: 'rsmBluetoothPinCodeType', propAccess: 'rw' }
      , { propName: 'rsmBluetoothReconnectionAttempts', propAccess: 'rw' }
      , { propName: 'rsmBluetoothBeepOnReconnectAttempt', propAccess: 'rw' }
      , { propName: 'rsmBluetoothHidAutoReconnect', propAccess: 'rw' }
      , { propName: 'rsmBluetoothFriendlyName', propAccess: 'rw' }
      , { propName: 'rsmBluetoothInquiryMode', propAccess: 'rw' }
      , { propName: 'rsmBluetoothAutoReconnect', propAccess: 'rw' }
      , { propName: 'rsmForceSavePairingBarcode', propAccess: 'rw' }
      , { propName: 'rsmLowBatteryIndication', propAccess: 'rw' }
      , { propName: 'rsmLowBatteryIndicationCycle', propAccess: 'rw' }
      , { propName: 'rsmScanLineWidth', propAccess: 'rw' }
      , { propName: 'rsmGoodScansDelay', propAccess: 'rw' }
      , { propName: 'rsmDecodeFeedback', propAccess: 'rw' }
      , { propName: 'rsmIgnoreCode128Usps', propAccess: 'rw' }
      , { propName: 'rsmScanTriggerWakeup', propAccess: 'rw' }
      , { propName: 'rsmMems', propAccess: 'rw' }
      , { propName: 'rsmProximityEnable', propAccess: 'rw' }
      , { propName: 'rsmProximityContinuous', propAccess: 'rw' }
      , { propName: 'rsmProximityDistance', propAccess: 'rw' }
      , { propName: 'rsmPagingEnable', propAccess: 'rw' }
      , { propName: 'rsmPagingBeepSequence', propAccess: 'rw' }
    ], apiReq, function(){ return this.getId(); });

    // === Barcode instance methods ===

    rhoUtil.createMethodsProxy(Barcode.prototype, [
    
          // function(/* const rho::Hashtable<rho::String, rho::String>& */ propertyMap, /* optional function */ oResult)
          { methodName: 'enable', nativeName: 'enable', persistentCallbackIndex: 1, valueCallbackIndex: 3 }
    
          // function(/* optional function */ oResult)
        , { methodName: 'registerBluetoothStatus', nativeName: 'registerBluetoothStatus', persistentCallbackIndex: 0, valueCallbackIndex: 2 }
    
          // function(/* optional function */ oResult)
        , { methodName: 'start', nativeName: 'start', valueCallbackIndex: 0 }
    
          // function(/* optional function */ oResult)
        , { methodName: 'stop', nativeName: 'stop', valueCallbackIndex: 0 }
    
          // function(/* optional function */ oResult)
        , { methodName: 'disable', nativeName: 'disable', valueCallbackIndex: 0 }
    
          // function(/* optional function */ oResult)
        , { methodName: 'getSupportedProperties', nativeName: 'getSupportedProperties', persistentCallbackIndex: 0, valueCallbackIndex: 2 }
    
          // function(/* const rho::Hashtable<rho::String, rho::String>& */ propertyMap, /* optional function */ oResult)
        , { methodName: 'take', nativeName: 'take', persistentCallbackIndex: 1, valueCallbackIndex: 3 }
    
          // function(/* const rho::String& */ command, /* optional function */ oResult)
        , { methodName: 'commandRemoteScanner', nativeName: 'commandRemoteScanner', valueCallbackIndex: 1 }
    
          // function(/* const rho::String& */ propertyName, /* optional function */ oResult)
        , { methodName: 'getProperty', nativeName: 'getProperty', persistentCallbackIndex: 1, valueCallbackIndex: 3 }
    
          // function(/* const rho::Vector<rho::String>& */ arrayofNames, /* optional function */ oResult)
        , { methodName: 'getProperties', nativeName: 'getProperties', persistentCallbackIndex: 1, valueCallbackIndex: 3 }
    
          // function(/* optional function */ oResult)
        , { methodName: 'getAllProperties', nativeName: 'getAllProperties', persistentCallbackIndex: 0, valueCallbackIndex: 2 }
    
          // function(/* const rho::String& */ propertyName, /* const rho::String& */ propertyValue, /* optional function */ oResult)
        , { methodName: 'setProperty', nativeName: 'setProperty', valueCallbackIndex: 2 }
    
          // function(/* const rho::Hashtable<rho::String, rho::String>& */ propertyMap, /* optional function */ oResult)
        , { methodName: 'setProperties', nativeName: 'setProperties', valueCallbackIndex: 1 }
    
    ], apiReq, function(){ return this.getId(); });

    

    rhoUtil.createRawPropsProxy(Barcode.prototype, [
    ]);

    // === Barcode constants ===

    
            Barcode.AIMMODE_DOT = 'dot'; 
    
            Barcode.AIMMODE_NONE = 'none'; 
    
            Barcode.AIMMODE_RETICLE = 'reticle'; 
    
            Barcode.AIMMODE_SLAB = 'slab'; 
    
            Barcode.AIMTYPE_CONTINUOUS_READ = 'continuousRead'; 
    
            Barcode.AIMTYPE_PRESENTATION = 'presentation'; 
    
            Barcode.AIMTYPE_PRESS_AND_RELEASE = 'pressAndRelease'; 
    
            Barcode.AIMTYPE_TIMED_HOLD = 'timedHold'; 
    
            Barcode.AIMTYPE_TIMED_RELEASE = 'timedRelease'; 
    
            Barcode.AIMTYPE_TRIGGER = 'trigger'; 
    
            Barcode.ALL_THRICE = 'allThrice'; 
    
            Barcode.ALL_TWICE = 'allTwice'; 
    
            Barcode.BEAM_NARROW = 'narrow'; 
    
            Barcode.BEAM_NORMAL = 'normal'; 
    
            Barcode.BEAM_WIDE = 'wide'; 
    
            Barcode.BOOKLAND_ISBN10 = 'isbn10'; 
    
            Barcode.BOOKLAND_ISBN13 = 'isbn13'; 
    
            Barcode.CODE11_CHECKDIGIT_NONE = 'none'; 
    
            Barcode.CODE11_CHECKDIGIT_ONE = 'one'; 
    
            Barcode.CODE11_CHECKDIGIT_TWO = 'two'; 
    
            Barcode.CODE128ISBT_ALWAYS = 'always'; 
    
            Barcode.CODE128ISBT_AUTO = 'auto'; 
    
            Barcode.CODE128ISBT_NEVER = 'never'; 
    
            Barcode.DBP_COMPOSITE = 'composite'; 
    
            Barcode.DBP_NORMAL = 'normal'; 
    
            Barcode.FOCUS_AUTO = 'auto'; 
    
            Barcode.FOCUS_FIXED = 'fixed'; 
    
            Barcode.FORMAT_BINARY = 'binary'; 
    
            Barcode.FORMAT_TEXT = 'text'; 
    
            Barcode.I2OF5_VERIFY_NONE = 'none'; 
    
            Barcode.I2OF5_VERIFY_OPCC = 'opcc'; 
    
            Barcode.I2OF5_VERIFY_USS = 'uss'; 
    
            Barcode.ILLUMINATION_ALWAYS_OFF = 'alwaysOff'; 
    
            Barcode.ILLUMINATION_ALWAYS_ON = 'alwaysOn'; 
    
            Barcode.ILLUMINATION_AUTO = 'auto'; 
    
            Barcode.INVERSE_AUTO = 'auto'; 
    
            Barcode.INVERSE_DISABLED = 'disabled'; 
    
            Barcode.INVERSE_ENABLED = 'enabled'; 
    
            Barcode.LONG_AND_SHORT = 'longAndShort'; 
    
            Barcode.MSI_CHECKDIGITS_MOD10 = 'mod10'; 
    
            Barcode.MSI_CHECKDIGITS_MOD11 = 'mod11'; 
    
            Barcode.MSI_CHECKDIGITS_ONE = 'one'; 
    
            Barcode.MSI_CHECKDIGITS_TWO = 'two'; 
    
            Barcode.PICKLIST_DISABLED = 'disabled'; 
    
            Barcode.PICKLIST_HARDWARE_RETICLE = 'hardwareReticle'; 
    
            Barcode.PICKLIST_SOFTWARE_RETICLE = 'softwareReticle'; 
    
            Barcode.RASTER_CYCLONE = 'cyclone'; 
    
            Barcode.RASTER_NONE = 'none'; 
    
            Barcode.RASTER_OPEN_ALWAYS = 'openAlways'; 
    
            Barcode.RASTER_SMART = 'smart'; 
    
            Barcode.REDUNDANCY_AND_LENGTH = 'redundancyAndLength'; 
    
            Barcode.RSM_AUTORECONNECT_NONE = 'none'; 
    
            Barcode.RSM_AUTORECONNECT_ON_OUT_OF_RANGE = 'onOutOfRange'; 
    
            Barcode.RSM_AUTORECONNECT_ON_POWER = 'onPower'; 
    
            Barcode.RSM_AUTORECONNECT_ON_POWER_OUT_OF_RANGE = 'onPowerOutOfRange'; 
    
            Barcode.SHORT_OR_CODABAR = 'shortOrCodabar'; 
    
            Barcode.UCC_ALWAYS = 'always'; 
    
            Barcode.UCC_AUTO = 'auto'; 
    
            Barcode.UCC_NEVER = 'never'; 
    
            Barcode.UPCA_PREAMBLE_COUNTRY = 'countryAndSystemChars'; 
    
            Barcode.UPCA_PREAMBLE_NONE = 'none'; 
    
            Barcode.UPCA_PREAMBLE_SYSTEMCHAR = 'systemChar'; 
    
            Barcode.UPCE0_PREAMBLE_COUNTRY = 'countryAndSystemChars'; 
    
            Barcode.UPCE0_PREAMBLE_NONE = 'none'; 
    
            Barcode.UPCE0_PREAMBLE_SYSTEMCHAR = 'systemChar'; 
    
            Barcode.UPCE1_PREAMBLE_COUNTRY = 'countryAndSystemChars'; 
    
            Barcode.UPCE1_PREAMBLE_NONE = 'none'; 
    
            Barcode.UPCE1_PREAMBLE_SYSTEMCHAR = 'systemChar'; 
    
            Barcode.UPCEAN_379 = '378or379'; 
    
            Barcode.UPCEAN_439 = '414or419or434or439'; 
    
            Barcode.UPCEAN_979 = '978or979'; 
    
            Barcode.UPCEAN_ALWAYS = 'always'; 
    
            Barcode.UPCEAN_AUTO = 'auto'; 
    
            Barcode.UPCEAN_NONE = 'none'; 
    
            Barcode.UPCEAN_SMART = 'smart'; 
    
            Barcode.VF_FEEDBACK_DISABLED = 'disabled'; 
    
            Barcode.VF_FEEDBACK_ENABLED = 'enabled'; 
    
            Barcode.VF_FEEDBACK_RETICLE = 'reticle'; 
    
            Barcode.VIEWFINDER_DISABLED = 'disabled'; 
    
            Barcode.VIEWFINDER_DYNAMIC_RETICLE = 'dynamicReticle'; 
    
            Barcode.VIEWFINDER_ENABLED = 'enabled'; 
    
            Barcode.VIEWFINDER_STATIC_RETICLE = 'staticReticle'; 
    



    // === Barcode static properties ===

    rhoUtil.createPropsProxy(Barcode, [
    ], apiReq);

    // === Barcode static methods ===

    rhoUtil.createMethodsProxy(Barcode, [
    
          // function(/* optional function */ oResult)
          { methodName: 'enumerate', nativeName: 'enumerate', persistentCallbackIndex: 0, valueCallbackIndex: 2 }
    
    ], apiReq);

    // === Barcode default instance support ===
    

        rhoUtil.createPropsProxy(Barcode, [
            { propName: 'defaultInstance:getDefault:setDefault', propAccess: 'rw', customSet: function(obj) { if(!obj || 'function' != typeof obj.getId){ throw 'Default object should provide getId method!' }; Barcode.setDefaultID(obj.getId()); } }
          , { propName: 'defaultID:getDefaultID:setDefaultID', propAccess: 'rw' }
        ], apiReq);

        Barcode.getId = function() {
            return Barcode.getDefaultID();
        }

        // === Barcode default instance properties ===

        rhoUtil.createPropsProxy(Barcode, [
            { propName: 'autoEnter', propAccess: 'rw' }
          , { propName: 'autoTab', propAccess: 'rw' }
          , { propName: 'hapticFeedback', propAccess: 'rw' }
          , { propName: 'linearSecurityLevel', propAccess: 'rw' }
          , { propName: 'scanTimeout', propAccess: 'rw' }
          , { propName: 'rasterMode', propAccess: 'rw' }
          , { propName: 'rasterHeight', propAccess: 'rw' }
          , { propName: 'aimType', propAccess: 'rw' }
          , { propName: 'timedAimDuration', propAccess: 'rw' }
          , { propName: 'sameSymbolTimeout', propAccess: 'rw' }
          , { propName: 'differentSymbolTimeout', propAccess: 'rw' }
          , { propName: 'aimMode', propAccess: 'rw' }
          , { propName: 'picklistMode', propAccess: 'rw' }
          , { propName: 'viewfinderMode', propAccess: 'rw' }
          , { propName: 'viewfinderX', propAccess: 'rw' }
          , { propName: 'viewfinderY', propAccess: 'rw' }
          , { propName: 'viewfinderWidth', propAccess: 'rw' }
          , { propName: 'viewfinderHeight', propAccess: 'rw' }
          , { propName: 'viewfinderFeedback', propAccess: 'rw' }
          , { propName: 'viewfinderFeedbackTime', propAccess: 'rw' }
          , { propName: 'focusMode', propAccess: 'rw' }
          , { propName: 'illuminationMode', propAccess: 'rw' }
          , { propName: 'dpmMode', propAccess: 'rw' }
          , { propName: 'inverse1dMode', propAccess: 'rw' }
          , { propName: 'poorQuality1dMode', propAccess: 'rw' }
          , { propName: 'beamWidth', propAccess: 'rw' }
          , { propName: 'dbpMode', propAccess: 'rw' }
          , { propName: 'klasseEins', propAccess: 'rw' }
          , { propName: 'adaptiveScanning', propAccess: 'rw' }
          , { propName: 'bidirectionalRedundancy', propAccess: 'rw' }
          , { propName: 'barcodeDataFormat', propAccess: 'rw' }
          , { propName: 'dataBufferSize', propAccess: 'rw' }
          , { propName: 'connectionIdleTimeout', propAccess: 'rw' }
          , { propName: 'disconnectBtOnDisable', propAccess: 'rw' }
          , { propName: 'displayBtAddressBarcodeOnEnable', propAccess: 'rw' }
          , { propName: 'enableTimeout', propAccess: 'rw' }
          , { propName: 'friendlyName', propAccess: 'r' }
          , { propName: 'lcdMode', propAccess: 'rw' }
          , { propName: 'lowBatteryScan', propAccess: 'rw' }
          , { propName: 'triggerConnected', propAccess: 'rw' }
          , { propName: 'disableScannerDuringNavigate', propAccess: 'rw' }
          , { propName: 'decodeVolume', propAccess: 'rw' }
          , { propName: 'decodeDuration', propAccess: 'rw' }
          , { propName: 'decodeFrequency', propAccess: 'rw' }
          , { propName: 'invalidDecodeFrequency', propAccess: 'rw' }
          , { propName: 'decodeSound', propAccess: 'rw' }
          , { propName: 'invalidDecodeSound', propAccess: 'rw' }
          , { propName: 'scannerType', propAccess: 'r' }
          , { propName: 'allDecoders', propAccess: 'rw' }
          , { propName: 'aztec', propAccess: 'rw' }
          , { propName: 'chinese2of5', propAccess: 'rw' }
          , { propName: 'codabar', propAccess: 'rw' }
          , { propName: 'codabarClsiEditing', propAccess: 'rw' }
          , { propName: 'codabarMaxLength', propAccess: 'rw' }
          , { propName: 'codabarMinLength', propAccess: 'rw' }
          , { propName: 'codabarNotisEditing', propAccess: 'rw' }
          , { propName: 'codabarRedundancy', propAccess: 'rw' }
          , { propName: 'code11', propAccess: 'rw' }
          , { propName: 'code11checkDigitCount', propAccess: 'rw' }
          , { propName: 'code11maxLength', propAccess: 'rw' }
          , { propName: 'code11minLength', propAccess: 'rw' }
          , { propName: 'code11redundancy', propAccess: 'rw' }
          , { propName: 'code11reportCheckDigit', propAccess: 'rw' }
          , { propName: 'code128', propAccess: 'rw' }
          , { propName: 'code128checkIsBtTable', propAccess: 'rw' }
          , { propName: 'code128ean128', propAccess: 'rw' }
          , { propName: 'code128isbt128', propAccess: 'rw' }
          , { propName: 'code128isbt128ConcatMode', propAccess: 'rw' }
          , { propName: 'code128maxLength', propAccess: 'rw' }
          , { propName: 'code128minLength', propAccess: 'rw' }
          , { propName: 'code128other128', propAccess: 'rw' }
          , { propName: 'code128redundancy', propAccess: 'rw' }
          , { propName: 'code128securityLevel', propAccess: 'rw' }
          , { propName: 'compositeAb', propAccess: 'rw' }
          , { propName: 'compositeAbUccLinkMode', propAccess: 'rw' }
          , { propName: 'compositeAbUseUpcPreambleCheckDigitRules', propAccess: 'rw' }
          , { propName: 'compositeC', propAccess: 'rw' }
          , { propName: 'code39', propAccess: 'rw' }
          , { propName: 'code39code32Prefix', propAccess: 'rw' }
          , { propName: 'code39convertToCode32', propAccess: 'rw' }
          , { propName: 'code39fullAscii', propAccess: 'rw' }
          , { propName: 'code39maxLength', propAccess: 'rw' }
          , { propName: 'code39minLength', propAccess: 'rw' }
          , { propName: 'code39redundancy', propAccess: 'rw' }
          , { propName: 'code39reportCheckDigit', propAccess: 'rw' }
          , { propName: 'code39securityLevel', propAccess: 'rw' }
          , { propName: 'code39verifyCheckDigit', propAccess: 'rw' }
          , { propName: 'code93', propAccess: 'rw' }
          , { propName: 'code93maxLength', propAccess: 'rw' }
          , { propName: 'code93minLength', propAccess: 'rw' }
          , { propName: 'code93redundancy', propAccess: 'rw' }
          , { propName: 'd2of5', propAccess: 'rw' }
          , { propName: 'd2of5maxLength', propAccess: 'rw' }
          , { propName: 'd2of5minLength', propAccess: 'rw' }
          , { propName: 'd2of5redundancy', propAccess: 'rw' }
          , { propName: 'datamatrix', propAccess: 'rw' }
          , { propName: 'ean13', propAccess: 'rw' }
          , { propName: 'ean8', propAccess: 'rw' }
          , { propName: 'ean8convertToEan13', propAccess: 'rw' }
          , { propName: 'i2of5', propAccess: 'rw' }
          , { propName: 'i2of5convertToEan13', propAccess: 'rw' }
          , { propName: 'i2of5maxLength', propAccess: 'rw' }
          , { propName: 'i2of5minLength', propAccess: 'rw' }
          , { propName: 'i2of5redundancy', propAccess: 'rw' }
          , { propName: 'i2of5reportCheckDigit', propAccess: 'rw' }
          , { propName: 'i2of5verifyCheckDigit', propAccess: 'rw' }
          , { propName: 'korean3of5', propAccess: 'rw' }
          , { propName: 'korean3of5redundancy', propAccess: 'rw' }
          , { propName: 'korean3of5maxLength', propAccess: 'rw' }
          , { propName: 'korean3of5minLength', propAccess: 'rw' }
          , { propName: 'macroPdf', propAccess: 'rw' }
          , { propName: 'macroPdfBufferLabels', propAccess: 'rw' }
          , { propName: 'macroPdfConvertToPdf417', propAccess: 'rw' }
          , { propName: 'macroPdfExclusive', propAccess: 'rw' }
          , { propName: 'macroMicroPdf', propAccess: 'rw' }
          , { propName: 'macroMicroPdfBufferLabels', propAccess: 'rw' }
          , { propName: 'macroMicroPdfConvertToMicroPdf', propAccess: 'rw' }
          , { propName: 'macroMicroPdfExclusive', propAccess: 'rw' }
          , { propName: 'macroMicroPdfReportAppendInfo', propAccess: 'rw' }
          , { propName: 'matrix2of5', propAccess: 'rw' }
          , { propName: 'matrix2of5maxLength', propAccess: 'rw' }
          , { propName: 'matrix2of5minLength', propAccess: 'rw' }
          , { propName: 'matrix2of5reportCheckDigit', propAccess: 'rw' }
          , { propName: 'matrix2of5verifyCheckDigit', propAccess: 'rw' }
          , { propName: 'maxiCode', propAccess: 'rw' }
          , { propName: 'microPdf', propAccess: 'rw' }
          , { propName: 'microQr', propAccess: 'rw' }
          , { propName: 'msi', propAccess: 'rw' }
          , { propName: 'msiCheckDigits', propAccess: 'rw' }
          , { propName: 'msiCheckDigitScheme', propAccess: 'rw' }
          , { propName: 'msiMaxLength', propAccess: 'rw' }
          , { propName: 'msiMinLength', propAccess: 'rw' }
          , { propName: 'msiRedundancy', propAccess: 'rw' }
          , { propName: 'msiReportCheckDigit', propAccess: 'rw' }
          , { propName: 'pdf417', propAccess: 'rw' }
          , { propName: 'signature', propAccess: 'rw' }
          , { propName: 'signatureImageHeight', propAccess: 'rw' }
          , { propName: 'signatureImageWidth', propAccess: 'rw' }
          , { propName: 'signatureImageQuality', propAccess: 'rw' }
          , { propName: 'ausPostal', propAccess: 'rw' }
          , { propName: 'canPostal', propAccess: 'rw' }
          , { propName: 'dutchPostal', propAccess: 'rw' }
          , { propName: 'japPostal', propAccess: 'rw' }
          , { propName: 'ukPostal', propAccess: 'rw' }
          , { propName: 'ukPostalReportCheckDigit', propAccess: 'rw' }
          , { propName: 'us4state', propAccess: 'rw' }
          , { propName: 'us4stateFics', propAccess: 'rw' }
          , { propName: 'usPlanet', propAccess: 'rw' }
          , { propName: 'usPlanetReportCheckDigit', propAccess: 'rw' }
          , { propName: 'usPostNet', propAccess: 'rw' }
          , { propName: 'usPostNetReportCheckDigit', propAccess: 'rw' }
          , { propName: 'qrCode', propAccess: 'rw' }
          , { propName: 'gs1dataBar', propAccess: 'rw' }
          , { propName: 'gs1dataBarExpanded', propAccess: 'rw' }
          , { propName: 'gs1dataBarLimited', propAccess: 'rw' }
          , { propName: 'tlc39', propAccess: 'rw' }
          , { propName: 'trioptic39', propAccess: 'rw' }
          , { propName: 'trioptic39Redundancy', propAccess: 'rw' }
          , { propName: 'upcEanBookland', propAccess: 'rw' }
          , { propName: 'upcEanBooklandFormat', propAccess: 'rw' }
          , { propName: 'upcEanConvertGs1dataBarToUpcEan', propAccess: 'rw' }
          , { propName: 'upcEanCoupon', propAccess: 'rw' }
          , { propName: 'upcEanLinearDecode', propAccess: 'rw' }
          , { propName: 'upcEanRandomWeightCheckDigit', propAccess: 'rw' }
          , { propName: 'upcEanRetryCount', propAccess: 'rw' }
          , { propName: 'upcEanSecurityLevel', propAccess: 'rw' }
          , { propName: 'upcEanSupplemental2', propAccess: 'rw' }
          , { propName: 'upcEanSupplemental5', propAccess: 'rw' }
          , { propName: 'upcEanSupplementalMode', propAccess: 'rw' }
          , { propName: 'upca', propAccess: 'rw' }
          , { propName: 'upcaPreamble', propAccess: 'rw' }
          , { propName: 'upcaReportCheckDigit', propAccess: 'rw' }
          , { propName: 'upce0', propAccess: 'rw' }
          , { propName: 'upce0convertToUpca', propAccess: 'rw' }
          , { propName: 'upce0preamble', propAccess: 'rw' }
          , { propName: 'upce0reportCheckDigit', propAccess: 'rw' }
          , { propName: 'upce1', propAccess: 'rw' }
          , { propName: 'upce1convertToUpca', propAccess: 'rw' }
          , { propName: 'upce1preamble', propAccess: 'rw' }
          , { propName: 'upce1reportCheckDigit', propAccess: 'rw' }
          , { propName: 'webcode', propAccess: 'rw' }
          , { propName: 'webcodeDecodeGtSubtype', propAccess: 'rw' }
          , { propName: 'rsmModelNumber', propAccess: 'r' }
          , { propName: 'rsmSerialNumber', propAccess: 'r' }
          , { propName: 'rsmDateOfManufacture', propAccess: 'r' }
          , { propName: 'rsmDateOfService', propAccess: 'r' }
          , { propName: 'rsmBluetoothAddress', propAccess: 'r' }
          , { propName: 'rsmFirmwareVersion', propAccess: 'r' }
          , { propName: 'rsmDeviceClass', propAccess: 'r' }
          , { propName: 'rsmBatteryStatus', propAccess: 'r' }
          , { propName: 'rsmBatteryCapacity', propAccess: 'r' }
          , { propName: 'rsmBatteryId', propAccess: 'r' }
          , { propName: 'rsmBluetoothAuthentication', propAccess: 'rw' }
          , { propName: 'rsmBluetoothEncryption', propAccess: 'rw' }
          , { propName: 'rsmBluetoothPinCode', propAccess: 'rw' }
          , { propName: 'rsmBluetoothPinCodeType', propAccess: 'rw' }
          , { propName: 'rsmBluetoothReconnectionAttempts', propAccess: 'rw' }
          , { propName: 'rsmBluetoothBeepOnReconnectAttempt', propAccess: 'rw' }
          , { propName: 'rsmBluetoothHidAutoReconnect', propAccess: 'rw' }
          , { propName: 'rsmBluetoothFriendlyName', propAccess: 'rw' }
          , { propName: 'rsmBluetoothInquiryMode', propAccess: 'rw' }
          , { propName: 'rsmBluetoothAutoReconnect', propAccess: 'rw' }
          , { propName: 'rsmForceSavePairingBarcode', propAccess: 'rw' }
          , { propName: 'rsmLowBatteryIndication', propAccess: 'rw' }
          , { propName: 'rsmLowBatteryIndicationCycle', propAccess: 'rw' }
          , { propName: 'rsmScanLineWidth', propAccess: 'rw' }
          , { propName: 'rsmGoodScansDelay', propAccess: 'rw' }
          , { propName: 'rsmDecodeFeedback', propAccess: 'rw' }
          , { propName: 'rsmIgnoreCode128Usps', propAccess: 'rw' }
          , { propName: 'rsmScanTriggerWakeup', propAccess: 'rw' }
          , { propName: 'rsmMems', propAccess: 'rw' }
          , { propName: 'rsmProximityEnable', propAccess: 'rw' }
          , { propName: 'rsmProximityContinuous', propAccess: 'rw' }
          , { propName: 'rsmProximityDistance', propAccess: 'rw' }
          , { propName: 'rsmPagingEnable', propAccess: 'rw' }
          , { propName: 'rsmPagingBeepSequence', propAccess: 'rw' }
        ], apiReq, function(){ return this.getId(); });

        // === Barcode default instance methods ===

        rhoUtil.createMethodsProxy(Barcode, [
        
              // function(/* const rho::Hashtable<rho::String, rho::String>& */ propertyMap, /* optional function */ oResult)
              { methodName: 'enable', nativeName: 'enable', persistentCallbackIndex: 1, valueCallbackIndex: 3 }
        
              // function(/* optional function */ oResult)
            , { methodName: 'registerBluetoothStatus', nativeName: 'registerBluetoothStatus', persistentCallbackIndex: 0, valueCallbackIndex: 2 }
        
              // function(/* optional function */ oResult)
            , { methodName: 'start', nativeName: 'start', valueCallbackIndex: 0 }
        
              // function(/* optional function */ oResult)
            , { methodName: 'stop', nativeName: 'stop', valueCallbackIndex: 0 }
        
              // function(/* optional function */ oResult)
            , { methodName: 'disable', nativeName: 'disable', valueCallbackIndex: 0 }
        
              // function(/* optional function */ oResult)
            , { methodName: 'getSupportedProperties', nativeName: 'getSupportedProperties', persistentCallbackIndex: 0, valueCallbackIndex: 2 }
        
              // function(/* const rho::Hashtable<rho::String, rho::String>& */ propertyMap, /* optional function */ oResult)
            , { methodName: 'take', nativeName: 'take', persistentCallbackIndex: 1, valueCallbackIndex: 3 }
        
              // function(/* const rho::String& */ command, /* optional function */ oResult)
            , { methodName: 'commandRemoteScanner', nativeName: 'commandRemoteScanner', valueCallbackIndex: 1 }
        
              // function(/* const rho::String& */ propertyName, /* optional function */ oResult)
            , { methodName: 'getProperty', nativeName: 'getProperty', persistentCallbackIndex: 1, valueCallbackIndex: 3 }
        
              // function(/* const rho::Vector<rho::String>& */ arrayofNames, /* optional function */ oResult)
            , { methodName: 'getProperties', nativeName: 'getProperties', persistentCallbackIndex: 1, valueCallbackIndex: 3 }
        
              // function(/* optional function */ oResult)
            , { methodName: 'getAllProperties', nativeName: 'getAllProperties', persistentCallbackIndex: 0, valueCallbackIndex: 2 }
        
              // function(/* const rho::String& */ propertyName, /* const rho::String& */ propertyValue, /* optional function */ oResult)
            , { methodName: 'setProperty', nativeName: 'setProperty', valueCallbackIndex: 2 }
        
              // function(/* const rho::Hashtable<rho::String, rho::String>& */ propertyMap, /* optional function */ oResult)
            , { methodName: 'setProperties', nativeName: 'setProperties', valueCallbackIndex: 1 }
        
        ], apiReq, function(){ return this.getId(); });

        // will reuse already defined methods
        rhoUtil.createRawPropsProxy(Barcode, [
        ]);

    

    rhoUtil.namespace(moduleNS, Barcode);

    

    

})(Rho.jQuery, Rho, Rho.util);
