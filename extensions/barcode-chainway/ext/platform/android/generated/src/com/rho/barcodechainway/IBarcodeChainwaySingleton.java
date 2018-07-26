package com.rho.barcodechainway;



import java.util.Map;
import java.util.List;

import com.rhomobile.rhodes.api.IMethodResult;

import com.rhomobile.rhodes.api.IRhoApiDefaultId;


public interface IBarcodeChainwaySingleton
       extends IRhoApiDefaultId  {


    static final String AIMMODE_DOT = "dot";
    static final String AIMMODE_NONE = "none";
    static final String AIMMODE_RETICLE = "reticle";
    static final String AIMMODE_SLAB = "slab";
    static final String AIMTYPE_CONTINUOUS_READ = "continuousRead";
    static final String AIMTYPE_PRESENTATION = "presentation";
    static final String AIMTYPE_PRESS_AND_RELEASE = "pressAndRelease";
    static final String AIMTYPE_TIMED_HOLD = "timedHold";
    static final String AIMTYPE_TIMED_RELEASE = "timedRelease";
    static final String AIMTYPE_TRIGGER = "trigger";
    static final String ALL_THRICE = "allThrice";
    static final String ALL_TWICE = "allTwice";
    static final String BEAM_NARROW = "narrow";
    static final String BEAM_NORMAL = "normal";
    static final String BEAM_WIDE = "wide";
    static final String BOOKLAND_ISBN10 = "isbn10";
    static final String BOOKLAND_ISBN13 = "isbn13";
    static final String CODE11_CHECKDIGIT_NONE = "none";
    static final String CODE11_CHECKDIGIT_ONE = "one";
    static final String CODE11_CHECKDIGIT_TWO = "two";
    static final String CODE128ISBT_ALWAYS = "always";
    static final String CODE128ISBT_AUTO = "auto";
    static final String CODE128ISBT_NEVER = "never";
    static final String DBP_COMPOSITE = "composite";
    static final String DBP_NORMAL = "normal";
    static final String FOCUS_AUTO = "auto";
    static final String FOCUS_FIXED = "fixed";
    static final String FORMAT_BINARY = "binary";
    static final String FORMAT_TEXT = "text";
    static final String I2OF5_VERIFY_NONE = "none";
    static final String I2OF5_VERIFY_OPCC = "opcc";
    static final String I2OF5_VERIFY_USS = "uss";
    static final String ILLUMINATION_ALWAYS_OFF = "alwaysOff";
    static final String ILLUMINATION_ALWAYS_ON = "alwaysOn";
    static final String ILLUMINATION_AUTO = "auto";
    static final String INVERSE_AUTO = "auto";
    static final String INVERSE_DISABLED = "disabled";
    static final String INVERSE_ENABLED = "enabled";
    static final String LONG_AND_SHORT = "longAndShort";
    static final String MSI_CHECKDIGITS_MOD10 = "mod10";
    static final String MSI_CHECKDIGITS_MOD11 = "mod11";
    static final String MSI_CHECKDIGITS_ONE = "one";
    static final String MSI_CHECKDIGITS_TWO = "two";
    static final String PICKLIST_DISABLED = "disabled";
    static final String PICKLIST_HARDWARE_RETICLE = "hardwareReticle";
    static final String PICKLIST_SOFTWARE_RETICLE = "softwareReticle";
    static final String RASTER_CYCLONE = "cyclone";
    static final String RASTER_NONE = "none";
    static final String RASTER_OPEN_ALWAYS = "openAlways";
    static final String RASTER_SMART = "smart";
    static final String REDUNDANCY_AND_LENGTH = "redundancyAndLength";
    static final String RSM_AUTORECONNECT_NONE = "none";
    static final String RSM_AUTORECONNECT_ON_OUT_OF_RANGE = "onOutOfRange";
    static final String RSM_AUTORECONNECT_ON_POWER = "onPower";
    static final String RSM_AUTORECONNECT_ON_POWER_OUT_OF_RANGE = "onPowerOutOfRange";
    static final String SHORT_OR_CODABAR = "shortOrCodabar";
    static final String UCC_ALWAYS = "always";
    static final String UCC_AUTO = "auto";
    static final String UCC_NEVER = "never";
    static final String UPCA_PREAMBLE_COUNTRY = "countryAndSystemChars";
    static final String UPCA_PREAMBLE_NONE = "none";
    static final String UPCA_PREAMBLE_SYSTEMCHAR = "systemChar";
    static final String UPCE0_PREAMBLE_COUNTRY = "countryAndSystemChars";
    static final String UPCE0_PREAMBLE_NONE = "none";
    static final String UPCE0_PREAMBLE_SYSTEMCHAR = "systemChar";
    static final String UPCE1_PREAMBLE_COUNTRY = "countryAndSystemChars";
    static final String UPCE1_PREAMBLE_NONE = "none";
    static final String UPCE1_PREAMBLE_SYSTEMCHAR = "systemChar";
    static final String UPCEAN_379 = "378or379";
    static final String UPCEAN_439 = "414or419or434or439";
    static final String UPCEAN_979 = "978or979";
    static final String UPCEAN_ALWAYS = "always";
    static final String UPCEAN_AUTO = "auto";
    static final String UPCEAN_NONE = "none";
    static final String UPCEAN_SMART = "smart";
    static final String VF_FEEDBACK_DISABLED = "disabled";
    static final String VF_FEEDBACK_ENABLED = "enabled";
    static final String VF_FEEDBACK_RETICLE = "reticle";
    static final String VIEWFINDER_DISABLED = "disabled";
    static final String VIEWFINDER_DYNAMIC_RETICLE = "dynamicReticle";
    static final String VIEWFINDER_ENABLED = "enabled";
    static final String VIEWFINDER_STATIC_RETICLE = "staticReticle";

  // hash keys used in properties and parameters

    static final String HK_BARCODE = "barcode"; 
    static final String HK_DATA = "data"; 
    static final String HK_DIRECTION = "direction"; 
    static final String HK_LENGTH = "length"; 
    static final String HK_SOURCE = "source"; 
    static final String HK_STATUS = "status"; 
    static final String HK_TIME = "time"; 
    static final String HK_TYPE = "type"; 
    static final String PROPERTY_ADAPTIVE_SCANNING = "adaptiveScanning"; 
    static final String PROPERTY_AIM_MODE = "aimMode"; 
    static final String PROPERTY_AIM_TYPE = "aimType"; 
    static final String PROPERTY_ALL_DECODERS = "allDecoders"; 
    static final String PROPERTY_AUS_POSTAL = "ausPostal"; 
    static final String PROPERTY_AUTO_ENTER = "autoEnter"; 
    static final String PROPERTY_AUTO_TAB = "autoTab"; 
    static final String PROPERTY_AZTEC = "aztec"; 
    static final String PROPERTY_BARCODE_DATA_FORMAT = "barcodeDataFormat"; 
    static final String PROPERTY_BEAM_WIDTH = "beamWidth"; 
    static final String PROPERTY_BIDIRECTIONAL_REDUNDANCY = "bidirectionalRedundancy"; 
    static final String PROPERTY_CAN_POSTAL = "canPostal"; 
    static final String PROPERTY_CHINESE2OF5 = "chinese2of5"; 
    static final String PROPERTY_CODABAR = "codabar"; 
    static final String PROPERTY_CODABAR_CLSI_EDITING = "codabarClsiEditing"; 
    static final String PROPERTY_CODABAR_MAX_LENGTH = "codabarMaxLength"; 
    static final String PROPERTY_CODABAR_MIN_LENGTH = "codabarMinLength"; 
    static final String PROPERTY_CODABAR_NOTIS_EDITING = "codabarNotisEditing"; 
    static final String PROPERTY_CODABAR_REDUNDANCY = "codabarRedundancy"; 
    static final String PROPERTY_CODE11 = "code11"; 
    static final String PROPERTY_CODE11CHECK_DIGIT_COUNT = "code11checkDigitCount"; 
    static final String PROPERTY_CODE11MAX_LENGTH = "code11maxLength"; 
    static final String PROPERTY_CODE11MIN_LENGTH = "code11minLength"; 
    static final String PROPERTY_CODE11REDUNDANCY = "code11redundancy"; 
    static final String PROPERTY_CODE11REPORT_CHECK_DIGIT = "code11reportCheckDigit"; 
    static final String PROPERTY_CODE128 = "code128"; 
    static final String PROPERTY_CODE128CHECK_IS_BT_TABLE = "code128checkIsBtTable"; 
    static final String PROPERTY_CODE128EAN128 = "code128ean128"; 
    static final String PROPERTY_CODE128ISBT128 = "code128isbt128"; 
    static final String PROPERTY_CODE128ISBT128_CONCAT_MODE = "code128isbt128ConcatMode"; 
    static final String PROPERTY_CODE128MAX_LENGTH = "code128maxLength"; 
    static final String PROPERTY_CODE128MIN_LENGTH = "code128minLength"; 
    static final String PROPERTY_CODE128OTHER128 = "code128other128"; 
    static final String PROPERTY_CODE128REDUNDANCY = "code128redundancy"; 
    static final String PROPERTY_CODE128SECURITY_LEVEL = "code128securityLevel"; 
    static final String PROPERTY_CODE39 = "code39"; 
    static final String PROPERTY_CODE39CODE32_PREFIX = "code39code32Prefix"; 
    static final String PROPERTY_CODE39CONVERT_TO_CODE32 = "code39convertToCode32"; 
    static final String PROPERTY_CODE39FULL_ASCII = "code39fullAscii"; 
    static final String PROPERTY_CODE39MAX_LENGTH = "code39maxLength"; 
    static final String PROPERTY_CODE39MIN_LENGTH = "code39minLength"; 
    static final String PROPERTY_CODE39REDUNDANCY = "code39redundancy"; 
    static final String PROPERTY_CODE39REPORT_CHECK_DIGIT = "code39reportCheckDigit"; 
    static final String PROPERTY_CODE39SECURITY_LEVEL = "code39securityLevel"; 
    static final String PROPERTY_CODE39VERIFY_CHECK_DIGIT = "code39verifyCheckDigit"; 
    static final String PROPERTY_CODE93 = "code93"; 
    static final String PROPERTY_CODE93MAX_LENGTH = "code93maxLength"; 
    static final String PROPERTY_CODE93MIN_LENGTH = "code93minLength"; 
    static final String PROPERTY_CODE93REDUNDANCY = "code93redundancy"; 
    static final String PROPERTY_COMPOSITE_AB = "compositeAb"; 
    static final String PROPERTY_COMPOSITE_AB_UCC_LINK_MODE = "compositeAbUccLinkMode"; 
    static final String PROPERTY_COMPOSITE_AB_USE_UPC_PREAMBLE_CHECK_DIGIT_RULES = "compositeAbUseUpcPreambleCheckDigitRules"; 
    static final String PROPERTY_COMPOSITE_C = "compositeC"; 
    static final String PROPERTY_CONNECTION_IDLE_TIMEOUT = "connectionIdleTimeout"; 
    static final String PROPERTY_D2OF5 = "d2of5"; 
    static final String PROPERTY_D2OF5MAX_LENGTH = "d2of5maxLength"; 
    static final String PROPERTY_D2OF5MIN_LENGTH = "d2of5minLength"; 
    static final String PROPERTY_D2OF5REDUNDANCY = "d2of5redundancy"; 
    static final String PROPERTY_DATAMATRIX = "datamatrix"; 
    static final String PROPERTY_DATA_BUFFER_SIZE = "dataBufferSize"; 
    static final String PROPERTY_DBP_MODE = "dbpMode"; 
    static final String PROPERTY_DECODE_DURATION = "decodeDuration"; 
    static final String PROPERTY_DECODE_FREQUENCY = "decodeFrequency"; 
    static final String PROPERTY_DECODE_SOUND = "decodeSound"; 
    static final String PROPERTY_DECODE_VOLUME = "decodeVolume"; 
    static final String PROPERTY_DIFFERENT_SYMBOL_TIMEOUT = "differentSymbolTimeout"; 
    static final String PROPERTY_DISABLE_SCANNER_DURING_NAVIGATE = "disableScannerDuringNavigate"; 
    static final String PROPERTY_DISCONNECT_BT_ON_DISABLE = "disconnectBtOnDisable"; 
    static final String PROPERTY_DISPLAY_BT_ADDRESS_BARCODE_ON_ENABLE = "displayBtAddressBarcodeOnEnable"; 
    static final String PROPERTY_DPM_MODE = "dpmMode"; 
    static final String PROPERTY_DUTCH_POSTAL = "dutchPostal"; 
    static final String PROPERTY_EAN13 = "ean13"; 
    static final String PROPERTY_EAN8 = "ean8"; 
    static final String PROPERTY_EAN8CONVERT_TO_EAN13 = "ean8convertToEan13"; 
    static final String PROPERTY_ENABLE_TIMEOUT = "enableTimeout"; 
    static final String PROPERTY_FOCUS_MODE = "focusMode"; 
    static final String PROPERTY_FRIENDLY_NAME = "friendlyName"; 
    static final String PROPERTY_GS1DATA_BAR = "gs1dataBar"; 
    static final String PROPERTY_GS1DATA_BAR_EXPANDED = "gs1dataBarExpanded"; 
    static final String PROPERTY_GS1DATA_BAR_LIMITED = "gs1dataBarLimited"; 
    static final String PROPERTY_HAPTIC_FEEDBACK = "hapticFeedback"; 
    static final String PROPERTY_I2OF5 = "i2of5"; 
    static final String PROPERTY_I2OF5CONVERT_TO_EAN13 = "i2of5convertToEan13"; 
    static final String PROPERTY_I2OF5MAX_LENGTH = "i2of5maxLength"; 
    static final String PROPERTY_I2OF5MIN_LENGTH = "i2of5minLength"; 
    static final String PROPERTY_I2OF5REDUNDANCY = "i2of5redundancy"; 
    static final String PROPERTY_I2OF5REPORT_CHECK_DIGIT = "i2of5reportCheckDigit"; 
    static final String PROPERTY_I2OF5VERIFY_CHECK_DIGIT = "i2of5verifyCheckDigit"; 
    static final String PROPERTY_ILLUMINATION_MODE = "illuminationMode"; 
    static final String PROPERTY_INVALID_DECODE_FREQUENCY = "invalidDecodeFrequency"; 
    static final String PROPERTY_INVALID_DECODE_SOUND = "invalidDecodeSound"; 
    static final String PROPERTY_INVERSE1D_MODE = "inverse1dMode"; 
    static final String PROPERTY_JAP_POSTAL = "japPostal"; 
    static final String PROPERTY_KLASSE_EINS = "klasseEins"; 
    static final String PROPERTY_KOREAN3OF5 = "korean3of5"; 
    static final String PROPERTY_KOREAN3OF5MAX_LENGTH = "korean3of5maxLength"; 
    static final String PROPERTY_KOREAN3OF5MIN_LENGTH = "korean3of5minLength"; 
    static final String PROPERTY_KOREAN3OF5REDUNDANCY = "korean3of5redundancy"; 
    static final String PROPERTY_LCD_MODE = "lcdMode"; 
    static final String PROPERTY_LINEAR_SECURITY_LEVEL = "linearSecurityLevel"; 
    static final String PROPERTY_LOW_BATTERY_SCAN = "lowBatteryScan"; 
    static final String PROPERTY_MACRO_MICRO_PDF = "macroMicroPdf"; 
    static final String PROPERTY_MACRO_MICRO_PDF_BUFFER_LABELS = "macroMicroPdfBufferLabels"; 
    static final String PROPERTY_MACRO_MICRO_PDF_CONVERT_TO_MICRO_PDF = "macroMicroPdfConvertToMicroPdf"; 
    static final String PROPERTY_MACRO_MICRO_PDF_EXCLUSIVE = "macroMicroPdfExclusive"; 
    static final String PROPERTY_MACRO_MICRO_PDF_REPORT_APPEND_INFO = "macroMicroPdfReportAppendInfo"; 
    static final String PROPERTY_MACRO_PDF = "macroPdf"; 
    static final String PROPERTY_MACRO_PDF_BUFFER_LABELS = "macroPdfBufferLabels"; 
    static final String PROPERTY_MACRO_PDF_CONVERT_TO_PDF417 = "macroPdfConvertToPdf417"; 
    static final String PROPERTY_MACRO_PDF_EXCLUSIVE = "macroPdfExclusive"; 
    static final String PROPERTY_MATRIX2OF5 = "matrix2of5"; 
    static final String PROPERTY_MATRIX2OF5MAX_LENGTH = "matrix2of5maxLength"; 
    static final String PROPERTY_MATRIX2OF5MIN_LENGTH = "matrix2of5minLength"; 
    static final String PROPERTY_MATRIX2OF5REPORT_CHECK_DIGIT = "matrix2of5reportCheckDigit"; 
    static final String PROPERTY_MATRIX2OF5VERIFY_CHECK_DIGIT = "matrix2of5verifyCheckDigit"; 
    static final String PROPERTY_MAXI_CODE = "maxiCode"; 
    static final String PROPERTY_MICRO_PDF = "microPdf"; 
    static final String PROPERTY_MICRO_QR = "microQr"; 
    static final String PROPERTY_MSI = "msi"; 
    static final String PROPERTY_MSI_CHECK_DIGITS = "msiCheckDigits"; 
    static final String PROPERTY_MSI_CHECK_DIGIT_SCHEME = "msiCheckDigitScheme"; 
    static final String PROPERTY_MSI_MAX_LENGTH = "msiMaxLength"; 
    static final String PROPERTY_MSI_MIN_LENGTH = "msiMinLength"; 
    static final String PROPERTY_MSI_REDUNDANCY = "msiRedundancy"; 
    static final String PROPERTY_MSI_REPORT_CHECK_DIGIT = "msiReportCheckDigit"; 
    static final String PROPERTY_PDF417 = "pdf417"; 
    static final String PROPERTY_PICKLIST_MODE = "picklistMode"; 
    static final String PROPERTY_POOR_QUALITY1D_MODE = "poorQuality1dMode"; 
    static final String PROPERTY_QR_CODE = "qrCode"; 
    static final String PROPERTY_RASTER_HEIGHT = "rasterHeight"; 
    static final String PROPERTY_RASTER_MODE = "rasterMode"; 
    static final String PROPERTY_RSM_BATTERY_CAPACITY = "rsmBatteryCapacity"; 
    static final String PROPERTY_RSM_BATTERY_ID = "rsmBatteryId"; 
    static final String PROPERTY_RSM_BATTERY_STATUS = "rsmBatteryStatus"; 
    static final String PROPERTY_RSM_BLUETOOTH_ADDRESS = "rsmBluetoothAddress"; 
    static final String PROPERTY_RSM_BLUETOOTH_AUTHENTICATION = "rsmBluetoothAuthentication"; 
    static final String PROPERTY_RSM_BLUETOOTH_AUTO_RECONNECT = "rsmBluetoothAutoReconnect"; 
    static final String PROPERTY_RSM_BLUETOOTH_BEEP_ON_RECONNECT_ATTEMPT = "rsmBluetoothBeepOnReconnectAttempt"; 
    static final String PROPERTY_RSM_BLUETOOTH_ENCRYPTION = "rsmBluetoothEncryption"; 
    static final String PROPERTY_RSM_BLUETOOTH_FRIENDLY_NAME = "rsmBluetoothFriendlyName"; 
    static final String PROPERTY_RSM_BLUETOOTH_HID_AUTO_RECONNECT = "rsmBluetoothHidAutoReconnect"; 
    static final String PROPERTY_RSM_BLUETOOTH_INQUIRY_MODE = "rsmBluetoothInquiryMode"; 
    static final String PROPERTY_RSM_BLUETOOTH_PIN_CODE = "rsmBluetoothPinCode"; 
    static final String PROPERTY_RSM_BLUETOOTH_PIN_CODE_TYPE = "rsmBluetoothPinCodeType"; 
    static final String PROPERTY_RSM_BLUETOOTH_RECONNECTION_ATTEMPTS = "rsmBluetoothReconnectionAttempts"; 
    static final String PROPERTY_RSM_DATE_OF_MANUFACTURE = "rsmDateOfManufacture"; 
    static final String PROPERTY_RSM_DATE_OF_SERVICE = "rsmDateOfService"; 
    static final String PROPERTY_RSM_DECODE_FEEDBACK = "rsmDecodeFeedback"; 
    static final String PROPERTY_RSM_DEVICE_CLASS = "rsmDeviceClass"; 
    static final String PROPERTY_RSM_FIRMWARE_VERSION = "rsmFirmwareVersion"; 
    static final String PROPERTY_RSM_FORCE_SAVE_PAIRING_BARCODE = "rsmForceSavePairingBarcode"; 
    static final String PROPERTY_RSM_GOOD_SCANS_DELAY = "rsmGoodScansDelay"; 
    static final String PROPERTY_RSM_IGNORE_CODE128_USPS = "rsmIgnoreCode128Usps"; 
    static final String PROPERTY_RSM_LOW_BATTERY_INDICATION = "rsmLowBatteryIndication"; 
    static final String PROPERTY_RSM_LOW_BATTERY_INDICATION_CYCLE = "rsmLowBatteryIndicationCycle"; 
    static final String PROPERTY_RSM_MEMS = "rsmMems"; 
    static final String PROPERTY_RSM_MODEL_NUMBER = "rsmModelNumber"; 
    static final String PROPERTY_RSM_PAGING_BEEP_SEQUENCE = "rsmPagingBeepSequence"; 
    static final String PROPERTY_RSM_PAGING_ENABLE = "rsmPagingEnable"; 
    static final String PROPERTY_RSM_PROXIMITY_CONTINUOUS = "rsmProximityContinuous"; 
    static final String PROPERTY_RSM_PROXIMITY_DISTANCE = "rsmProximityDistance"; 
    static final String PROPERTY_RSM_PROXIMITY_ENABLE = "rsmProximityEnable"; 
    static final String PROPERTY_RSM_SCAN_LINE_WIDTH = "rsmScanLineWidth"; 
    static final String PROPERTY_RSM_SCAN_TRIGGER_WAKEUP = "rsmScanTriggerWakeup"; 
    static final String PROPERTY_RSM_SERIAL_NUMBER = "rsmSerialNumber"; 
    static final String PROPERTY_SAME_SYMBOL_TIMEOUT = "sameSymbolTimeout"; 
    static final String PROPERTY_SCANNER_TYPE = "scannerType"; 
    static final String PROPERTY_SCAN_TIMEOUT = "scanTimeout"; 
    static final String PROPERTY_SIGNATURE = "signature"; 
    static final String PROPERTY_SIGNATURE_IMAGE_HEIGHT = "signatureImageHeight"; 
    static final String PROPERTY_SIGNATURE_IMAGE_QUALITY = "signatureImageQuality"; 
    static final String PROPERTY_SIGNATURE_IMAGE_WIDTH = "signatureImageWidth"; 
    static final String PROPERTY_TIMED_AIM_DURATION = "timedAimDuration"; 
    static final String PROPERTY_TLC39 = "tlc39"; 
    static final String PROPERTY_TRIGGER_CONNECTED = "triggerConnected"; 
    static final String PROPERTY_TRIOPTIC39 = "trioptic39"; 
    static final String PROPERTY_TRIOPTIC39_REDUNDANCY = "trioptic39Redundancy"; 
    static final String PROPERTY_UK_POSTAL = "ukPostal"; 
    static final String PROPERTY_UK_POSTAL_REPORT_CHECK_DIGIT = "ukPostalReportCheckDigit"; 
    static final String PROPERTY_UPCA = "upca"; 
    static final String PROPERTY_UPCA_PREAMBLE = "upcaPreamble"; 
    static final String PROPERTY_UPCA_REPORT_CHECK_DIGIT = "upcaReportCheckDigit"; 
    static final String PROPERTY_UPCE0 = "upce0"; 
    static final String PROPERTY_UPCE0CONVERT_TO_UPCA = "upce0convertToUpca"; 
    static final String PROPERTY_UPCE0PREAMBLE = "upce0preamble"; 
    static final String PROPERTY_UPCE0REPORT_CHECK_DIGIT = "upce0reportCheckDigit"; 
    static final String PROPERTY_UPCE1 = "upce1"; 
    static final String PROPERTY_UPCE1CONVERT_TO_UPCA = "upce1convertToUpca"; 
    static final String PROPERTY_UPCE1PREAMBLE = "upce1preamble"; 
    static final String PROPERTY_UPCE1REPORT_CHECK_DIGIT = "upce1reportCheckDigit"; 
    static final String PROPERTY_UPC_EAN_BOOKLAND = "upcEanBookland"; 
    static final String PROPERTY_UPC_EAN_BOOKLAND_FORMAT = "upcEanBooklandFormat"; 
    static final String PROPERTY_UPC_EAN_CONVERT_GS1DATA_BAR_TO_UPC_EAN = "upcEanConvertGs1dataBarToUpcEan"; 
    static final String PROPERTY_UPC_EAN_COUPON = "upcEanCoupon"; 
    static final String PROPERTY_UPC_EAN_LINEAR_DECODE = "upcEanLinearDecode"; 
    static final String PROPERTY_UPC_EAN_RANDOM_WEIGHT_CHECK_DIGIT = "upcEanRandomWeightCheckDigit"; 
    static final String PROPERTY_UPC_EAN_RETRY_COUNT = "upcEanRetryCount"; 
    static final String PROPERTY_UPC_EAN_SECURITY_LEVEL = "upcEanSecurityLevel"; 
    static final String PROPERTY_UPC_EAN_SUPPLEMENTAL2 = "upcEanSupplemental2"; 
    static final String PROPERTY_UPC_EAN_SUPPLEMENTAL5 = "upcEanSupplemental5"; 
    static final String PROPERTY_UPC_EAN_SUPPLEMENTAL_MODE = "upcEanSupplementalMode"; 
    static final String PROPERTY_US4STATE = "us4state"; 
    static final String PROPERTY_US4STATE_FICS = "us4stateFics"; 
    static final String PROPERTY_US_PLANET = "usPlanet"; 
    static final String PROPERTY_US_PLANET_REPORT_CHECK_DIGIT = "usPlanetReportCheckDigit"; 
    static final String PROPERTY_US_POST_NET = "usPostNet"; 
    static final String PROPERTY_US_POST_NET_REPORT_CHECK_DIGIT = "usPostNetReportCheckDigit"; 
    static final String PROPERTY_VIEWFINDER_FEEDBACK = "viewfinderFeedback"; 
    static final String PROPERTY_VIEWFINDER_FEEDBACK_TIME = "viewfinderFeedbackTime"; 
    static final String PROPERTY_VIEWFINDER_HEIGHT = "viewfinderHeight"; 
    static final String PROPERTY_VIEWFINDER_MODE = "viewfinderMode"; 
    static final String PROPERTY_VIEWFINDER_WIDTH = "viewfinderWidth"; 
    static final String PROPERTY_VIEWFINDER_X = "viewfinderX"; 
    static final String PROPERTY_VIEWFINDER_Y = "viewfinderY"; 
    static final String PROPERTY_WEBCODE = "webcode"; 
    static final String PROPERTY_WEBCODE_DECODE_GT_SUBTYPE = "webcodeDecodeGtSubtype"; 


    void enumerate(IMethodResult result); 

}
