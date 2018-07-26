
#import <Foundation/Foundation.h>

#import "api_generator/iphone/IMethodResult.h"

/* Laser barcode readers will show a dot for aiming. */
#define AIMMODE_DOT @"dot"

/* No Aiming (Can be overridden by picklistMode). */
#define AIMMODE_NONE @"none"

/* Imager barcode readers will show a reticle for aiming. */
#define AIMMODE_RETICLE @"reticle"

/* Laser barcode readers will show a slab for aiming. */
#define AIMMODE_SLAB @"slab"

/* Once the trigger is pulled barcodes will continue to be scanned as long as the trigger is held, enabling rapid scanning, to be used in conjunction with sameSymbolTimeout and differentSymbolTimeout. This value is ignored if viewfinderMode is set to 'dynamicReticle' */
#define AIMTYPE_CONTINUOUS_READ @"continuousRead"

/* Provided to support Kiosk devices. The scanner illuminates when movement is detected in the range of the scanner window. In order to use this mode the scanner must be initiated with a softscan using the Rho.Barcode.start() method and again after each decode. The device must be equipped with a sensor to detect movement to use presentation mode. MK31XX devices come with presentation mode pre-enabled in the scanner driver and the aimType cannot be modified for these devices. */
#define AIMTYPE_PRESENTATION @"presentation"

/* Scan will continue after the trigger is released until scanTimeout occurs. */
#define AIMTYPE_PRESS_AND_RELEASE @"pressAndRelease"

/* Aiming lasts for the time specified by 'timedAimDuration' before decoding. The opportunity to scan will last until the barcode is decoded or scanTimeout occurs. */
#define AIMTYPE_TIMED_HOLD @"timedHold"

/* Aiming lasts until trigger is released. If the timedAimDuration has expired when the trigger is released then a decode session is started until a barcode is decoded or for the remaining time equal to the scanTimeout value. */
#define AIMTYPE_TIMED_RELEASE @"timedRelease"

/* Standard trigger mode. Holding the trigger will start a decoding session. */
#define AIMTYPE_TRIGGER @"trigger"

/* Triple redundancy for all barcodes. */
#define ALL_THRICE @"allThrice"

/* Double redundancy for all barcodes. */
#define ALL_TWICE @"allTwice"

/* Laser beam width is narrow. */
#define BEAM_NARROW @"narrow"

/* Laser beam width is normal. */
#define BEAM_NORMAL @"normal"

/* Laser beam width is wide. */
#define BEAM_WIDE @"wide"

/* Causes 978 bookland barcodes to be reported in 10 digit mode. */
#define BOOKLAND_ISBN10 @"isbn10"

/* Causes 978/979 bookland barcodes to be transmitted as EAN13 as per 2007 ISBN-13 protocol. */
#define BOOKLAND_ISBN13 @"isbn13"

/* Scanning engine will verify no Code 11 check digits. */
#define CODE11_CHECKDIGIT_NONE @"none"

/* Scanning engine will verify one Code 11 check digit. */
#define CODE11_CHECKDIGIT_ONE @"one"

/* Scanning engine will verify two Code 11 check digits. */
#define CODE11_CHECKDIGIT_TWO @"two"

/* Will not decode if both barcodes are not present or if one of them can not be decoded. */
#define CODE128ISBT_ALWAYS @"always"

/* Auto-Discriminate. */
#define CODE128ISBT_AUTO @"auto"

/* Will ignore the barcode pair and only output decode data for one of the barcodes. */
#define CODE128ISBT_NEVER @"never"

/* Tells the scan engine to produce composite DBP, which is 2 different sets of DBP data multiplexed together for better decode performance. In order to enable this mode it must be supported by the scanner. */
#define DBP_COMPOSITE @"composite"

/* Tells the scan engine to produce normal DBP. */
#define DBP_NORMAL @"normal"

/* Use auto focus. */
#define FOCUS_AUTO @"auto"

/* Use fixed focus. */
#define FOCUS_FIXED @"fixed"

/* Scanned data will be returned in Data URI format. */
#define FORMAT_BINARY @"binary"

/* Scanned data will be returned in Text format. */
#define FORMAT_TEXT @"text"

/* Disables verification of the check digit. */
#define I2OF5_VERIFY_NONE @"none"

/* Enables the OPCC format for the check digit. */
#define I2OF5_VERIFY_OPCC @"opcc"

/* Enables the USS format for the check digit. */
#define I2OF5_VERIFY_USS @"uss"

/* External illumination is always off. */
#define ILLUMINATION_ALWAYS_OFF @"alwaysOff"

/* External illumination is always on. */
#define ILLUMINATION_ALWAYS_ON @"alwaysOn"

/* Auto-exposure algorithms will decide whether illumination is required. Not currently supported on Android. */
#define ILLUMINATION_AUTO @"auto"

/* Allows decoding of both positive and inverse 1D symbologies. */
#define INVERSE_AUTO @"auto"

/* Inverse 1D symbology decoding is disabled. */
#define INVERSE_DISABLED @"disabled"

/* Inverse 1D symbology decoding is enabled. */
#define INVERSE_ENABLED @"enabled"

/* Double redundancy for long barcodes, triple for short barcodes. */
#define LONG_AND_SHORT @"longAndShort"

/* Both check digits are MOD 10. */
#define MSI_CHECKDIGITS_MOD10 @"mod10"

/* The first check digit is MOD 11, the second is MOD 10. */
#define MSI_CHECKDIGITS_MOD11 @"mod11"

/* Use one check digit for MSI barcodes. */
#define MSI_CHECKDIGITS_ONE @"one"

/* Use two check digits for MSI barcodes. */
#define MSI_CHECKDIGITS_TWO @"two"

/* Disables picklist mode so any barcode within the field of view can be decoded. */
#define PICKLIST_DISABLED @"disabled"

/* Enables picklist mode so that only the barcode under the projected reticle can be decoded. On Windows, if the imager does not support a projected reticle then the behavior is the same as softwareReticle. On Android, this is only supported for Imager (non-viewfinder) based scanners. */
#define PICKLIST_HARDWARE_RETICLE @"hardwareReticle"

/* Enables picklist mode so that only the barcode in the center of the image is decoded. This is most useful when used in conjunction with static and dynamic reticle viewfinder modes. This value is not supported on Android Platform. */
#define PICKLIST_SOFTWARE_RETICLE @"softwareReticle"

/* Vertical rastering mode is 'Cyclone'. */
#define RASTER_CYCLONE @"cyclone"

/* No vertical rastering. */
#define RASTER_NONE @"none"

/* Vertical rastering is always full open. To adjust the rastering height use the rasterHeight property. */
#define RASTER_OPEN_ALWAYS @"openAlways"

/* Vertical rastering mode is 'Smart'. */
#define RASTER_SMART @"smart"

/* Double redundancy based on redundancy flags and code length. Only applicable to laser scanners, not BlockBuster imager scanners. Not supported on Android with EMDK version 3.1 and above. */
#define REDUNDANCY_AND_LENGTH @"redundancyAndLength"

/* No scheme. */
#define RSM_AUTORECONNECT_NONE @"none"

/* When device goes out of range. */
#define RSM_AUTORECONNECT_ON_OUT_OF_RANGE @"onOutOfRange"

/* When powered on. */
#define RSM_AUTORECONNECT_ON_POWER @"onPower"

/* When powered on or when the device goes out of range. */
#define RSM_AUTORECONNECT_ON_POWER_OUT_OF_RANGE @"onPowerOutOfRange"

/* Double redundancy if short barcode or Codabar. */
#define SHORT_OR_CODABAR @"shortOrCodabar"

/* Composite AB barcodes are always linked. */
#define UCC_ALWAYS @"always"

/* Auto-discriminate whether Composite AB barcodes are linked. */
#define UCC_AUTO @"auto"

/* Link flag is ignored. */
#define UCC_NEVER @"never"

/* Applies both system and country code preamble to the bar code. */
#define UPCA_PREAMBLE_COUNTRY @"countryAndSystemChars"

/* Applies no preamble to the bar code. */
#define UPCA_PREAMBLE_NONE @"none"

/* Applies system character preamble to the bar code. */
#define UPCA_PREAMBLE_SYSTEMCHAR @"systemChar"

/* Applies both system and country code preamble to the bar code. */
#define UPCE0_PREAMBLE_COUNTRY @"countryAndSystemChars"

/* Applies no preamble to the bar code. */
#define UPCE0_PREAMBLE_NONE @"none"

/* Applies system character preamble to the bar code. */
#define UPCE0_PREAMBLE_SYSTEMCHAR @"systemChar"

/* Applies both system and country code preamble to the bar code. */
#define UPCE1_PREAMBLE_COUNTRY @"countryAndSystemChars"

/* Applies no preamble to the bar code. */
#define UPCE1_PREAMBLE_NONE @"none"

/* Applies system character preamble to the bar code. */
#define UPCE1_PREAMBLE_SYSTEMCHAR @"systemChar"

/* Auto-discriminates supplemental for upc/ean codes starting with 378 or 379. Will disable reading of supplementals for any other upc/ean barcodes not starting with these values. The supplemental will be scanned if present but if scanning fails then the main barcode will be returned. */
#define UPCEAN_379 @"378or379"

/* Auto-discriminates supplemental for upc/ean codes starting with 414 or 419 or 434 or 439. Will disable reading of supplementals for any other upc/ean barcodes not starting with these values. The supplemental will be scanned if present but if scanning fails then the main barcode will be returned. */
#define UPCEAN_439 @"414or419or434or439"

/* Auto-discriminates supplemental for upc/ean codes starting with 978 or 979. Will disable reading of supplementals for any other upc/ean barcodes not starting with these values. The supplemental will be scanned if present but if scanning fails then the main barcode will be returned. */
#define UPCEAN_979 @"978or979"

/* Will not decode upc/ean without supplementals. */
#define UPCEAN_ALWAYS @"always"

/* Auto-discriminates supplementals. */
#define UPCEAN_AUTO @"auto"

/* Supplementals are ignored. */
#define UPCEAN_NONE @"none"

/* The decoder will return the decoded value of the main block right away if it does not belong to any of the supplemental types. If the barcode starts with one of the prefixes it will search the image more aggressively for a supplemental. The scanner will try to scan the supplemental if it is present but if that fails, the main barcode will be returned. */
#define UPCEAN_SMART @"smart"

/* No feedback is given in the viewfinder after a successful decode. */
#define VF_FEEDBACK_DISABLED @"disabled"

/* The last image that was successfully decoded is displayed. The time for which the image is displayed can be configured by the viewfinderFeedbackTime parameter. */
#define VF_FEEDBACK_ENABLED @"enabled"

/* The last image that was successfully decoded is displayed along with a red reticle in the center of the image. The time for which the image is displayed can be configured by the viewfinderFeedbackTime parameter. */
#define VF_FEEDBACK_RETICLE @"reticle"

/* The viewfinder will not be displayed during aiming or scanning. */
#define VIEWFINDER_DISABLED @"disabled"

/* Displays the viewfinder as well as draws a red reticle in the center of the image. If the barcode in the image is 'decodable' the reticle turns green to indicate this. This mode requires a second trigger press to decode the barcode after the reticle turns green. Not supported on Android. */
#define VIEWFINDER_DYNAMIC_RETICLE @"dynamicReticle"

/* Only the viewfinder is enabled (not the reticle). Displays a viewfinder on the screen showing the image being captured by the camera. */
#define VIEWFINDER_ENABLED @"enabled"

/* Displays the viewfinder as well as draws a red reticle in the center of the image which helps with tracking the barcode. */
#define VIEWFINDER_STATIC_RETICLE @"staticReticle"


// hash keys used in properties and parameters

#define HK_BARCODE @"barcode"

#define HK_DATA @"data"

#define HK_DIRECTION @"direction"

#define HK_LENGTH @"length"

#define HK_SOURCE @"source"

#define HK_STATUS @"status"

#define HK_TIME @"time"

#define HK_TYPE @"type"

#define PROPERTY_ADAPTIVE_SCANNING @"adaptiveScanning"

#define PROPERTY_AIM_MODE @"aimMode"

#define PROPERTY_AIM_TYPE @"aimType"

#define PROPERTY_ALL_DECODERS @"allDecoders"

#define PROPERTY_AUS_POSTAL @"ausPostal"

#define PROPERTY_AUTO_ENTER @"autoEnter"

#define PROPERTY_AUTO_TAB @"autoTab"

#define PROPERTY_AZTEC @"aztec"

#define PROPERTY_BARCODE_DATA_FORMAT @"barcodeDataFormat"

#define PROPERTY_BEAM_WIDTH @"beamWidth"

#define PROPERTY_BIDIRECTIONAL_REDUNDANCY @"bidirectionalRedundancy"

#define PROPERTY_CAN_POSTAL @"canPostal"

#define PROPERTY_CHINESE2OF5 @"chinese2of5"

#define PROPERTY_CODABAR @"codabar"

#define PROPERTY_CODABAR_CLSI_EDITING @"codabarClsiEditing"

#define PROPERTY_CODABAR_MAX_LENGTH @"codabarMaxLength"

#define PROPERTY_CODABAR_MIN_LENGTH @"codabarMinLength"

#define PROPERTY_CODABAR_NOTIS_EDITING @"codabarNotisEditing"

#define PROPERTY_CODABAR_REDUNDANCY @"codabarRedundancy"

#define PROPERTY_CODE11 @"code11"

#define PROPERTY_CODE11CHECK_DIGIT_COUNT @"code11checkDigitCount"

#define PROPERTY_CODE11MAX_LENGTH @"code11maxLength"

#define PROPERTY_CODE11MIN_LENGTH @"code11minLength"

#define PROPERTY_CODE11REDUNDANCY @"code11redundancy"

#define PROPERTY_CODE11REPORT_CHECK_DIGIT @"code11reportCheckDigit"

#define PROPERTY_CODE128 @"code128"

#define PROPERTY_CODE128CHECK_IS_BT_TABLE @"code128checkIsBtTable"

#define PROPERTY_CODE128EAN128 @"code128ean128"

#define PROPERTY_CODE128ISBT128 @"code128isbt128"

#define PROPERTY_CODE128ISBT128_CONCAT_MODE @"code128isbt128ConcatMode"

#define PROPERTY_CODE128MAX_LENGTH @"code128maxLength"

#define PROPERTY_CODE128MIN_LENGTH @"code128minLength"

#define PROPERTY_CODE128OTHER128 @"code128other128"

#define PROPERTY_CODE128REDUNDANCY @"code128redundancy"

#define PROPERTY_CODE128SECURITY_LEVEL @"code128securityLevel"

#define PROPERTY_CODE39 @"code39"

#define PROPERTY_CODE39CODE32_PREFIX @"code39code32Prefix"

#define PROPERTY_CODE39CONVERT_TO_CODE32 @"code39convertToCode32"

#define PROPERTY_CODE39FULL_ASCII @"code39fullAscii"

#define PROPERTY_CODE39MAX_LENGTH @"code39maxLength"

#define PROPERTY_CODE39MIN_LENGTH @"code39minLength"

#define PROPERTY_CODE39REDUNDANCY @"code39redundancy"

#define PROPERTY_CODE39REPORT_CHECK_DIGIT @"code39reportCheckDigit"

#define PROPERTY_CODE39SECURITY_LEVEL @"code39securityLevel"

#define PROPERTY_CODE39VERIFY_CHECK_DIGIT @"code39verifyCheckDigit"

#define PROPERTY_CODE93 @"code93"

#define PROPERTY_CODE93MAX_LENGTH @"code93maxLength"

#define PROPERTY_CODE93MIN_LENGTH @"code93minLength"

#define PROPERTY_CODE93REDUNDANCY @"code93redundancy"

#define PROPERTY_COMPOSITE_AB @"compositeAb"

#define PROPERTY_COMPOSITE_AB_UCC_LINK_MODE @"compositeAbUccLinkMode"

#define PROPERTY_COMPOSITE_AB_USE_UPC_PREAMBLE_CHECK_DIGIT_RULES @"compositeAbUseUpcPreambleCheckDigitRules"

#define PROPERTY_COMPOSITE_C @"compositeC"

#define PROPERTY_CONNECTION_IDLE_TIMEOUT @"connectionIdleTimeout"

#define PROPERTY_D2OF5 @"d2of5"

#define PROPERTY_D2OF5MAX_LENGTH @"d2of5maxLength"

#define PROPERTY_D2OF5MIN_LENGTH @"d2of5minLength"

#define PROPERTY_D2OF5REDUNDANCY @"d2of5redundancy"

#define PROPERTY_DATAMATRIX @"datamatrix"

#define PROPERTY_DATA_BUFFER_SIZE @"dataBufferSize"

#define PROPERTY_DBP_MODE @"dbpMode"

#define PROPERTY_DECODE_DURATION @"decodeDuration"

#define PROPERTY_DECODE_FREQUENCY @"decodeFrequency"

#define PROPERTY_DECODE_SOUND @"decodeSound"

#define PROPERTY_DECODE_VOLUME @"decodeVolume"

#define PROPERTY_DIFFERENT_SYMBOL_TIMEOUT @"differentSymbolTimeout"

#define PROPERTY_DISABLE_SCANNER_DURING_NAVIGATE @"disableScannerDuringNavigate"

#define PROPERTY_DISCONNECT_BT_ON_DISABLE @"disconnectBtOnDisable"

#define PROPERTY_DISPLAY_BT_ADDRESS_BARCODE_ON_ENABLE @"displayBtAddressBarcodeOnEnable"

#define PROPERTY_DPM_MODE @"dpmMode"

#define PROPERTY_DUTCH_POSTAL @"dutchPostal"

#define PROPERTY_EAN13 @"ean13"

#define PROPERTY_EAN8 @"ean8"

#define PROPERTY_EAN8CONVERT_TO_EAN13 @"ean8convertToEan13"

#define PROPERTY_ENABLE_TIMEOUT @"enableTimeout"

#define PROPERTY_FOCUS_MODE @"focusMode"

#define PROPERTY_FRIENDLY_NAME @"friendlyName"

#define PROPERTY_GS1DATA_BAR @"gs1dataBar"

#define PROPERTY_GS1DATA_BAR_EXPANDED @"gs1dataBarExpanded"

#define PROPERTY_GS1DATA_BAR_LIMITED @"gs1dataBarLimited"

#define PROPERTY_HAPTIC_FEEDBACK @"hapticFeedback"

#define PROPERTY_I2OF5 @"i2of5"

#define PROPERTY_I2OF5CONVERT_TO_EAN13 @"i2of5convertToEan13"

#define PROPERTY_I2OF5MAX_LENGTH @"i2of5maxLength"

#define PROPERTY_I2OF5MIN_LENGTH @"i2of5minLength"

#define PROPERTY_I2OF5REDUNDANCY @"i2of5redundancy"

#define PROPERTY_I2OF5REPORT_CHECK_DIGIT @"i2of5reportCheckDigit"

#define PROPERTY_I2OF5VERIFY_CHECK_DIGIT @"i2of5verifyCheckDigit"

#define PROPERTY_ILLUMINATION_MODE @"illuminationMode"

#define PROPERTY_INVALID_DECODE_FREQUENCY @"invalidDecodeFrequency"

#define PROPERTY_INVALID_DECODE_SOUND @"invalidDecodeSound"

#define PROPERTY_INVERSE1D_MODE @"inverse1dMode"

#define PROPERTY_JAP_POSTAL @"japPostal"

#define PROPERTY_KLASSE_EINS @"klasseEins"

#define PROPERTY_KOREAN3OF5 @"korean3of5"

#define PROPERTY_KOREAN3OF5MAX_LENGTH @"korean3of5maxLength"

#define PROPERTY_KOREAN3OF5MIN_LENGTH @"korean3of5minLength"

#define PROPERTY_KOREAN3OF5REDUNDANCY @"korean3of5redundancy"

#define PROPERTY_LCD_MODE @"lcdMode"

#define PROPERTY_LINEAR_SECURITY_LEVEL @"linearSecurityLevel"

#define PROPERTY_LOW_BATTERY_SCAN @"lowBatteryScan"

#define PROPERTY_MACRO_MICRO_PDF @"macroMicroPdf"

#define PROPERTY_MACRO_MICRO_PDF_BUFFER_LABELS @"macroMicroPdfBufferLabels"

#define PROPERTY_MACRO_MICRO_PDF_CONVERT_TO_MICRO_PDF @"macroMicroPdfConvertToMicroPdf"

#define PROPERTY_MACRO_MICRO_PDF_EXCLUSIVE @"macroMicroPdfExclusive"

#define PROPERTY_MACRO_MICRO_PDF_REPORT_APPEND_INFO @"macroMicroPdfReportAppendInfo"

#define PROPERTY_MACRO_PDF @"macroPdf"

#define PROPERTY_MACRO_PDF_BUFFER_LABELS @"macroPdfBufferLabels"

#define PROPERTY_MACRO_PDF_CONVERT_TO_PDF417 @"macroPdfConvertToPdf417"

#define PROPERTY_MACRO_PDF_EXCLUSIVE @"macroPdfExclusive"

#define PROPERTY_MATRIX2OF5 @"matrix2of5"

#define PROPERTY_MATRIX2OF5MAX_LENGTH @"matrix2of5maxLength"

#define PROPERTY_MATRIX2OF5MIN_LENGTH @"matrix2of5minLength"

#define PROPERTY_MATRIX2OF5REPORT_CHECK_DIGIT @"matrix2of5reportCheckDigit"

#define PROPERTY_MATRIX2OF5VERIFY_CHECK_DIGIT @"matrix2of5verifyCheckDigit"

#define PROPERTY_MAXI_CODE @"maxiCode"

#define PROPERTY_MICRO_PDF @"microPdf"

#define PROPERTY_MICRO_QR @"microQr"

#define PROPERTY_MSI @"msi"

#define PROPERTY_MSI_CHECK_DIGITS @"msiCheckDigits"

#define PROPERTY_MSI_CHECK_DIGIT_SCHEME @"msiCheckDigitScheme"

#define PROPERTY_MSI_MAX_LENGTH @"msiMaxLength"

#define PROPERTY_MSI_MIN_LENGTH @"msiMinLength"

#define PROPERTY_MSI_REDUNDANCY @"msiRedundancy"

#define PROPERTY_MSI_REPORT_CHECK_DIGIT @"msiReportCheckDigit"

#define PROPERTY_PDF417 @"pdf417"

#define PROPERTY_PICKLIST_MODE @"picklistMode"

#define PROPERTY_POOR_QUALITY1D_MODE @"poorQuality1dMode"

#define PROPERTY_QR_CODE @"qrCode"

#define PROPERTY_RASTER_HEIGHT @"rasterHeight"

#define PROPERTY_RASTER_MODE @"rasterMode"

#define PROPERTY_RSM_BATTERY_CAPACITY @"rsmBatteryCapacity"

#define PROPERTY_RSM_BATTERY_ID @"rsmBatteryId"

#define PROPERTY_RSM_BATTERY_STATUS @"rsmBatteryStatus"

#define PROPERTY_RSM_BLUETOOTH_ADDRESS @"rsmBluetoothAddress"

#define PROPERTY_RSM_BLUETOOTH_AUTHENTICATION @"rsmBluetoothAuthentication"

#define PROPERTY_RSM_BLUETOOTH_AUTO_RECONNECT @"rsmBluetoothAutoReconnect"

#define PROPERTY_RSM_BLUETOOTH_BEEP_ON_RECONNECT_ATTEMPT @"rsmBluetoothBeepOnReconnectAttempt"

#define PROPERTY_RSM_BLUETOOTH_ENCRYPTION @"rsmBluetoothEncryption"

#define PROPERTY_RSM_BLUETOOTH_FRIENDLY_NAME @"rsmBluetoothFriendlyName"

#define PROPERTY_RSM_BLUETOOTH_HID_AUTO_RECONNECT @"rsmBluetoothHidAutoReconnect"

#define PROPERTY_RSM_BLUETOOTH_INQUIRY_MODE @"rsmBluetoothInquiryMode"

#define PROPERTY_RSM_BLUETOOTH_PIN_CODE @"rsmBluetoothPinCode"

#define PROPERTY_RSM_BLUETOOTH_PIN_CODE_TYPE @"rsmBluetoothPinCodeType"

#define PROPERTY_RSM_BLUETOOTH_RECONNECTION_ATTEMPTS @"rsmBluetoothReconnectionAttempts"

#define PROPERTY_RSM_DATE_OF_MANUFACTURE @"rsmDateOfManufacture"

#define PROPERTY_RSM_DATE_OF_SERVICE @"rsmDateOfService"

#define PROPERTY_RSM_DECODE_FEEDBACK @"rsmDecodeFeedback"

#define PROPERTY_RSM_DEVICE_CLASS @"rsmDeviceClass"

#define PROPERTY_RSM_FIRMWARE_VERSION @"rsmFirmwareVersion"

#define PROPERTY_RSM_FORCE_SAVE_PAIRING_BARCODE @"rsmForceSavePairingBarcode"

#define PROPERTY_RSM_GOOD_SCANS_DELAY @"rsmGoodScansDelay"

#define PROPERTY_RSM_IGNORE_CODE128_USPS @"rsmIgnoreCode128Usps"

#define PROPERTY_RSM_LOW_BATTERY_INDICATION @"rsmLowBatteryIndication"

#define PROPERTY_RSM_LOW_BATTERY_INDICATION_CYCLE @"rsmLowBatteryIndicationCycle"

#define PROPERTY_RSM_MEMS @"rsmMems"

#define PROPERTY_RSM_MODEL_NUMBER @"rsmModelNumber"

#define PROPERTY_RSM_PAGING_BEEP_SEQUENCE @"rsmPagingBeepSequence"

#define PROPERTY_RSM_PAGING_ENABLE @"rsmPagingEnable"

#define PROPERTY_RSM_PROXIMITY_CONTINUOUS @"rsmProximityContinuous"

#define PROPERTY_RSM_PROXIMITY_DISTANCE @"rsmProximityDistance"

#define PROPERTY_RSM_PROXIMITY_ENABLE @"rsmProximityEnable"

#define PROPERTY_RSM_SCAN_LINE_WIDTH @"rsmScanLineWidth"

#define PROPERTY_RSM_SCAN_TRIGGER_WAKEUP @"rsmScanTriggerWakeup"

#define PROPERTY_RSM_SERIAL_NUMBER @"rsmSerialNumber"

#define PROPERTY_SAME_SYMBOL_TIMEOUT @"sameSymbolTimeout"

#define PROPERTY_SCANNER_TYPE @"scannerType"

#define PROPERTY_SCAN_TIMEOUT @"scanTimeout"

#define PROPERTY_SIGNATURE @"signature"

#define PROPERTY_SIGNATURE_IMAGE_HEIGHT @"signatureImageHeight"

#define PROPERTY_SIGNATURE_IMAGE_QUALITY @"signatureImageQuality"

#define PROPERTY_SIGNATURE_IMAGE_WIDTH @"signatureImageWidth"

#define PROPERTY_TIMED_AIM_DURATION @"timedAimDuration"

#define PROPERTY_TLC39 @"tlc39"

#define PROPERTY_TRIGGER_CONNECTED @"triggerConnected"

#define PROPERTY_TRIOPTIC39 @"trioptic39"

#define PROPERTY_TRIOPTIC39_REDUNDANCY @"trioptic39Redundancy"

#define PROPERTY_UK_POSTAL @"ukPostal"

#define PROPERTY_UK_POSTAL_REPORT_CHECK_DIGIT @"ukPostalReportCheckDigit"

#define PROPERTY_UPCA @"upca"

#define PROPERTY_UPCA_PREAMBLE @"upcaPreamble"

#define PROPERTY_UPCA_REPORT_CHECK_DIGIT @"upcaReportCheckDigit"

#define PROPERTY_UPCE0 @"upce0"

#define PROPERTY_UPCE0CONVERT_TO_UPCA @"upce0convertToUpca"

#define PROPERTY_UPCE0PREAMBLE @"upce0preamble"

#define PROPERTY_UPCE0REPORT_CHECK_DIGIT @"upce0reportCheckDigit"

#define PROPERTY_UPCE1 @"upce1"

#define PROPERTY_UPCE1CONVERT_TO_UPCA @"upce1convertToUpca"

#define PROPERTY_UPCE1PREAMBLE @"upce1preamble"

#define PROPERTY_UPCE1REPORT_CHECK_DIGIT @"upce1reportCheckDigit"

#define PROPERTY_UPC_EAN_BOOKLAND @"upcEanBookland"

#define PROPERTY_UPC_EAN_BOOKLAND_FORMAT @"upcEanBooklandFormat"

#define PROPERTY_UPC_EAN_CONVERT_GS1DATA_BAR_TO_UPC_EAN @"upcEanConvertGs1dataBarToUpcEan"

#define PROPERTY_UPC_EAN_COUPON @"upcEanCoupon"

#define PROPERTY_UPC_EAN_LINEAR_DECODE @"upcEanLinearDecode"

#define PROPERTY_UPC_EAN_RANDOM_WEIGHT_CHECK_DIGIT @"upcEanRandomWeightCheckDigit"

#define PROPERTY_UPC_EAN_RETRY_COUNT @"upcEanRetryCount"

#define PROPERTY_UPC_EAN_SECURITY_LEVEL @"upcEanSecurityLevel"

#define PROPERTY_UPC_EAN_SUPPLEMENTAL2 @"upcEanSupplemental2"

#define PROPERTY_UPC_EAN_SUPPLEMENTAL5 @"upcEanSupplemental5"

#define PROPERTY_UPC_EAN_SUPPLEMENTAL_MODE @"upcEanSupplementalMode"

#define PROPERTY_US4STATE @"us4state"

#define PROPERTY_US4STATE_FICS @"us4stateFics"

#define PROPERTY_US_PLANET @"usPlanet"

#define PROPERTY_US_PLANET_REPORT_CHECK_DIGIT @"usPlanetReportCheckDigit"

#define PROPERTY_US_POST_NET @"usPostNet"

#define PROPERTY_US_POST_NET_REPORT_CHECK_DIGIT @"usPostNetReportCheckDigit"

#define PROPERTY_VIEWFINDER_FEEDBACK @"viewfinderFeedback"

#define PROPERTY_VIEWFINDER_FEEDBACK_TIME @"viewfinderFeedbackTime"

#define PROPERTY_VIEWFINDER_HEIGHT @"viewfinderHeight"

#define PROPERTY_VIEWFINDER_MODE @"viewfinderMode"

#define PROPERTY_VIEWFINDER_WIDTH @"viewfinderWidth"

#define PROPERTY_VIEWFINDER_X @"viewfinderX"

#define PROPERTY_VIEWFINDER_Y @"viewfinderY"

#define PROPERTY_WEBCODE @"webcode"

#define PROPERTY_WEBCODE_DECODE_GT_SUBTYPE @"webcodeDecodeGtSubtype"


@protocol IBarcodeChainway <NSObject>


/* getter for "autoEnter" property */
-(void) getAutoEnter:(id<IMethodResult>)methodResult;

/* setter for "autoEnter" property */
-(void) setAutoEnter:(BOOL)autoEnter methodResult:(id<IMethodResult>)methodResult;

/* getter for "autoTab" property */
-(void) getAutoTab:(id<IMethodResult>)methodResult;

/* setter for "autoTab" property */
-(void) setAutoTab:(BOOL)autoTab methodResult:(id<IMethodResult>)methodResult;

/* getter for "hapticFeedback" property */
-(void) getHapticFeedback:(id<IMethodResult>)methodResult;

/* setter for "hapticFeedback" property */
-(void) setHapticFeedback:(BOOL)hapticFeedback methodResult:(id<IMethodResult>)methodResult;

/* getter for "linearSecurityLevel" property */
-(void) getLinearSecurityLevel:(id<IMethodResult>)methodResult;

/* setter for "linearSecurityLevel" property */
-(void) setLinearSecurityLevel:(NSString*)linearSecurityLevel methodResult:(id<IMethodResult>)methodResult;

/* getter for "scanTimeout" property */
-(void) getScanTimeout:(id<IMethodResult>)methodResult;

/* setter for "scanTimeout" property */
-(void) setScanTimeout:(int)scanTimeout methodResult:(id<IMethodResult>)methodResult;

/* getter for "rasterMode" property */
-(void) getRasterMode:(id<IMethodResult>)methodResult;

/* setter for "rasterMode" property */
-(void) setRasterMode:(NSString*)rasterMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "rasterHeight" property */
-(void) getRasterHeight:(id<IMethodResult>)methodResult;

/* setter for "rasterHeight" property */
-(void) setRasterHeight:(int)rasterHeight methodResult:(id<IMethodResult>)methodResult;

/* getter for "aimType" property */
-(void) getAimType:(id<IMethodResult>)methodResult;

/* setter for "aimType" property */
-(void) setAimType:(NSString*)aimType methodResult:(id<IMethodResult>)methodResult;

/* getter for "timedAimDuration" property */
-(void) getTimedAimDuration:(id<IMethodResult>)methodResult;

/* setter for "timedAimDuration" property */
-(void) setTimedAimDuration:(int)timedAimDuration methodResult:(id<IMethodResult>)methodResult;

/* getter for "sameSymbolTimeout" property */
-(void) getSameSymbolTimeout:(id<IMethodResult>)methodResult;

/* setter for "sameSymbolTimeout" property */
-(void) setSameSymbolTimeout:(int)sameSymbolTimeout methodResult:(id<IMethodResult>)methodResult;

/* getter for "differentSymbolTimeout" property */
-(void) getDifferentSymbolTimeout:(id<IMethodResult>)methodResult;

/* setter for "differentSymbolTimeout" property */
-(void) setDifferentSymbolTimeout:(int)differentSymbolTimeout methodResult:(id<IMethodResult>)methodResult;

/* getter for "aimMode" property */
-(void) getAimMode:(id<IMethodResult>)methodResult;

/* setter for "aimMode" property */
-(void) setAimMode:(NSString*)aimMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "picklistMode" property */
-(void) getPicklistMode:(id<IMethodResult>)methodResult;

/* setter for "picklistMode" property */
-(void) setPicklistMode:(NSString*)picklistMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "viewfinderMode" property */
-(void) getViewfinderMode:(id<IMethodResult>)methodResult;

/* setter for "viewfinderMode" property */
-(void) setViewfinderMode:(NSString*)viewfinderMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "viewfinderX" property */
-(void) getViewfinderX:(id<IMethodResult>)methodResult;

/* setter for "viewfinderX" property */
-(void) setViewfinderX:(int)viewfinderX methodResult:(id<IMethodResult>)methodResult;

/* getter for "viewfinderY" property */
-(void) getViewfinderY:(id<IMethodResult>)methodResult;

/* setter for "viewfinderY" property */
-(void) setViewfinderY:(int)viewfinderY methodResult:(id<IMethodResult>)methodResult;

/* getter for "viewfinderWidth" property */
-(void) getViewfinderWidth:(id<IMethodResult>)methodResult;

/* setter for "viewfinderWidth" property */
-(void) setViewfinderWidth:(int)viewfinderWidth methodResult:(id<IMethodResult>)methodResult;

/* getter for "viewfinderHeight" property */
-(void) getViewfinderHeight:(id<IMethodResult>)methodResult;

/* setter for "viewfinderHeight" property */
-(void) setViewfinderHeight:(int)viewfinderHeight methodResult:(id<IMethodResult>)methodResult;

/* getter for "viewfinderFeedback" property */
-(void) getViewfinderFeedback:(id<IMethodResult>)methodResult;

/* setter for "viewfinderFeedback" property */
-(void) setViewfinderFeedback:(NSString*)viewfinderFeedback methodResult:(id<IMethodResult>)methodResult;

/* getter for "viewfinderFeedbackTime" property */
-(void) getViewfinderFeedbackTime:(id<IMethodResult>)methodResult;

/* setter for "viewfinderFeedbackTime" property */
-(void) setViewfinderFeedbackTime:(int)viewfinderFeedbackTime methodResult:(id<IMethodResult>)methodResult;

/* getter for "focusMode" property */
-(void) getFocusMode:(id<IMethodResult>)methodResult;

/* setter for "focusMode" property */
-(void) setFocusMode:(NSString*)focusMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "illuminationMode" property */
-(void) getIlluminationMode:(id<IMethodResult>)methodResult;

/* setter for "illuminationMode" property */
-(void) setIlluminationMode:(NSString*)illuminationMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "dpmMode" property */
-(void) getDpmMode:(id<IMethodResult>)methodResult;

/* setter for "dpmMode" property */
-(void) setDpmMode:(BOOL)dpmMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "inverse1dMode" property */
-(void) getInverse1dMode:(id<IMethodResult>)methodResult;

/* setter for "inverse1dMode" property */
-(void) setInverse1dMode:(NSString*)inverse1dMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "poorQuality1dMode" property */
-(void) getPoorQuality1dMode:(id<IMethodResult>)methodResult;

/* setter for "poorQuality1dMode" property */
-(void) setPoorQuality1dMode:(BOOL)poorQuality1dMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "beamWidth" property */
-(void) getBeamWidth:(id<IMethodResult>)methodResult;

/* setter for "beamWidth" property */
-(void) setBeamWidth:(NSString*)beamWidth methodResult:(id<IMethodResult>)methodResult;

/* getter for "dbpMode" property */
-(void) getDbpMode:(id<IMethodResult>)methodResult;

/* setter for "dbpMode" property */
-(void) setDbpMode:(NSString*)dbpMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "klasseEins" property */
-(void) getKlasseEins:(id<IMethodResult>)methodResult;

/* setter for "klasseEins" property */
-(void) setKlasseEins:(BOOL)klasseEins methodResult:(id<IMethodResult>)methodResult;

/* getter for "adaptiveScanning" property */
-(void) getAdaptiveScanning:(id<IMethodResult>)methodResult;

/* setter for "adaptiveScanning" property */
-(void) setAdaptiveScanning:(BOOL)adaptiveScanning methodResult:(id<IMethodResult>)methodResult;

/* getter for "bidirectionalRedundancy" property */
-(void) getBidirectionalRedundancy:(id<IMethodResult>)methodResult;

/* setter for "bidirectionalRedundancy" property */
-(void) setBidirectionalRedundancy:(BOOL)bidirectionalRedundancy methodResult:(id<IMethodResult>)methodResult;

/* getter for "barcodeDataFormat" property */
-(void) getBarcodeDataFormat:(id<IMethodResult>)methodResult;

/* setter for "barcodeDataFormat" property */
-(void) setBarcodeDataFormat:(NSString*)barcodeDataFormat methodResult:(id<IMethodResult>)methodResult;

/* getter for "dataBufferSize" property */
-(void) getDataBufferSize:(id<IMethodResult>)methodResult;

/* setter for "dataBufferSize" property */
-(void) setDataBufferSize:(int)dataBufferSize methodResult:(id<IMethodResult>)methodResult;

/* getter for "connectionIdleTimeout" property */
-(void) getConnectionIdleTimeout:(id<IMethodResult>)methodResult;

/* setter for "connectionIdleTimeout" property */
-(void) setConnectionIdleTimeout:(int)connectionIdleTimeout methodResult:(id<IMethodResult>)methodResult;

/* getter for "disconnectBtOnDisable" property */
-(void) getDisconnectBtOnDisable:(id<IMethodResult>)methodResult;

/* setter for "disconnectBtOnDisable" property */
-(void) setDisconnectBtOnDisable:(BOOL)disconnectBtOnDisable methodResult:(id<IMethodResult>)methodResult;

/* getter for "displayBtAddressBarcodeOnEnable" property */
-(void) getDisplayBtAddressBarcodeOnEnable:(id<IMethodResult>)methodResult;

/* setter for "displayBtAddressBarcodeOnEnable" property */
-(void) setDisplayBtAddressBarcodeOnEnable:(BOOL)displayBtAddressBarcodeOnEnable methodResult:(id<IMethodResult>)methodResult;

/* getter for "enableTimeout" property */
-(void) getEnableTimeout:(id<IMethodResult>)methodResult;

/* setter for "enableTimeout" property */
-(void) setEnableTimeout:(int)enableTimeout methodResult:(id<IMethodResult>)methodResult;

/* getter for "friendlyName" property */
-(void) getFriendlyName:(id<IMethodResult>)methodResult;

/* getter for "lcdMode" property */
-(void) getLcdMode:(id<IMethodResult>)methodResult;

/* setter for "lcdMode" property */
-(void) setLcdMode:(BOOL)lcdMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "lowBatteryScan" property */
-(void) getLowBatteryScan:(id<IMethodResult>)methodResult;

/* setter for "lowBatteryScan" property */
-(void) setLowBatteryScan:(BOOL)lowBatteryScan methodResult:(id<IMethodResult>)methodResult;

/* getter for "triggerConnected" property */
-(void) getTriggerConnected:(id<IMethodResult>)methodResult;

/* setter for "triggerConnected" property */
-(void) setTriggerConnected:(BOOL)triggerConnected methodResult:(id<IMethodResult>)methodResult;

/* getter for "disableScannerDuringNavigate" property */
-(void) getDisableScannerDuringNavigate:(id<IMethodResult>)methodResult;

/* setter for "disableScannerDuringNavigate" property */
-(void) setDisableScannerDuringNavigate:(BOOL)disableScannerDuringNavigate methodResult:(id<IMethodResult>)methodResult;

/* getter for "decodeVolume" property */
-(void) getDecodeVolume:(id<IMethodResult>)methodResult;

/* setter for "decodeVolume" property */
-(void) setDecodeVolume:(int)decodeVolume methodResult:(id<IMethodResult>)methodResult;

/* getter for "decodeDuration" property */
-(void) getDecodeDuration:(id<IMethodResult>)methodResult;

/* setter for "decodeDuration" property */
-(void) setDecodeDuration:(int)decodeDuration methodResult:(id<IMethodResult>)methodResult;

/* getter for "decodeFrequency" property */
-(void) getDecodeFrequency:(id<IMethodResult>)methodResult;

/* setter for "decodeFrequency" property */
-(void) setDecodeFrequency:(int)decodeFrequency methodResult:(id<IMethodResult>)methodResult;

/* getter for "invalidDecodeFrequency" property */
-(void) getInvalidDecodeFrequency:(id<IMethodResult>)methodResult;

/* setter for "invalidDecodeFrequency" property */
-(void) setInvalidDecodeFrequency:(int)invalidDecodeFrequency methodResult:(id<IMethodResult>)methodResult;

/* getter for "decodeSound" property */
-(void) getDecodeSound:(id<IMethodResult>)methodResult;

/* setter for "decodeSound" property */
-(void) setDecodeSound:(NSString*)decodeSound methodResult:(id<IMethodResult>)methodResult;

/* getter for "invalidDecodeSound" property */
-(void) getInvalidDecodeSound:(id<IMethodResult>)methodResult;

/* setter for "invalidDecodeSound" property */
-(void) setInvalidDecodeSound:(NSString*)invalidDecodeSound methodResult:(id<IMethodResult>)methodResult;

/* getter for "scannerType" property */
-(void) getScannerType:(id<IMethodResult>)methodResult;

/* getter for "allDecoders" property */
-(void) getAllDecoders:(id<IMethodResult>)methodResult;

/* setter for "allDecoders" property */
-(void) setAllDecoders:(BOOL)allDecoders methodResult:(id<IMethodResult>)methodResult;

/* getter for "aztec" property */
-(void) getAztec:(id<IMethodResult>)methodResult;

/* setter for "aztec" property */
-(void) setAztec:(BOOL)aztec methodResult:(id<IMethodResult>)methodResult;

/* getter for "chinese2of5" property */
-(void) getChinese2of5:(id<IMethodResult>)methodResult;

/* setter for "chinese2of5" property */
-(void) setChinese2of5:(BOOL)chinese2of5 methodResult:(id<IMethodResult>)methodResult;

/* getter for "codabar" property */
-(void) getCodabar:(id<IMethodResult>)methodResult;

/* setter for "codabar" property */
-(void) setCodabar:(BOOL)codabar methodResult:(id<IMethodResult>)methodResult;

/* getter for "codabarClsiEditing" property */
-(void) getCodabarClsiEditing:(id<IMethodResult>)methodResult;

/* setter for "codabarClsiEditing" property */
-(void) setCodabarClsiEditing:(BOOL)codabarClsiEditing methodResult:(id<IMethodResult>)methodResult;

/* getter for "codabarMaxLength" property */
-(void) getCodabarMaxLength:(id<IMethodResult>)methodResult;

/* setter for "codabarMaxLength" property */
-(void) setCodabarMaxLength:(int)codabarMaxLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "codabarMinLength" property */
-(void) getCodabarMinLength:(id<IMethodResult>)methodResult;

/* setter for "codabarMinLength" property */
-(void) setCodabarMinLength:(int)codabarMinLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "codabarNotisEditing" property */
-(void) getCodabarNotisEditing:(id<IMethodResult>)methodResult;

/* setter for "codabarNotisEditing" property */
-(void) setCodabarNotisEditing:(BOOL)codabarNotisEditing methodResult:(id<IMethodResult>)methodResult;

/* getter for "codabarRedundancy" property */
-(void) getCodabarRedundancy:(id<IMethodResult>)methodResult;

/* setter for "codabarRedundancy" property */
-(void) setCodabarRedundancy:(BOOL)codabarRedundancy methodResult:(id<IMethodResult>)methodResult;

/* getter for "code11" property */
-(void) getCode11:(id<IMethodResult>)methodResult;

/* setter for "code11" property */
-(void) setCode11:(BOOL)code11 methodResult:(id<IMethodResult>)methodResult;

/* getter for "code11checkDigitCount" property */
-(void) getCode11checkDigitCount:(id<IMethodResult>)methodResult;

/* setter for "code11checkDigitCount" property */
-(void) setCode11checkDigitCount:(NSString*)code11checkDigitCount methodResult:(id<IMethodResult>)methodResult;

/* getter for "code11maxLength" property */
-(void) getCode11maxLength:(id<IMethodResult>)methodResult;

/* setter for "code11maxLength" property */
-(void) setCode11maxLength:(int)code11maxLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "code11minLength" property */
-(void) getCode11minLength:(id<IMethodResult>)methodResult;

/* setter for "code11minLength" property */
-(void) setCode11minLength:(int)code11minLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "code11redundancy" property */
-(void) getCode11redundancy:(id<IMethodResult>)methodResult;

/* setter for "code11redundancy" property */
-(void) setCode11redundancy:(BOOL)code11redundancy methodResult:(id<IMethodResult>)methodResult;

/* getter for "code11reportCheckDigit" property */
-(void) getCode11reportCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "code11reportCheckDigit" property */
-(void) setCode11reportCheckDigit:(BOOL)code11reportCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "code128" property */
-(void) getCode128:(id<IMethodResult>)methodResult;

/* setter for "code128" property */
-(void) setCode128:(BOOL)code128 methodResult:(id<IMethodResult>)methodResult;

/* getter for "code128checkIsBtTable" property */
-(void) getCode128checkIsBtTable:(id<IMethodResult>)methodResult;

/* setter for "code128checkIsBtTable" property */
-(void) setCode128checkIsBtTable:(BOOL)code128checkIsBtTable methodResult:(id<IMethodResult>)methodResult;

/* getter for "code128ean128" property */
-(void) getCode128ean128:(id<IMethodResult>)methodResult;

/* setter for "code128ean128" property */
-(void) setCode128ean128:(BOOL)code128ean128 methodResult:(id<IMethodResult>)methodResult;

/* getter for "code128isbt128" property */
-(void) getCode128isbt128:(id<IMethodResult>)methodResult;

/* setter for "code128isbt128" property */
-(void) setCode128isbt128:(BOOL)code128isbt128 methodResult:(id<IMethodResult>)methodResult;

/* getter for "code128isbt128ConcatMode" property */
-(void) getCode128isbt128ConcatMode:(id<IMethodResult>)methodResult;

/* setter for "code128isbt128ConcatMode" property */
-(void) setCode128isbt128ConcatMode:(NSString*)code128isbt128ConcatMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "code128maxLength" property */
-(void) getCode128maxLength:(id<IMethodResult>)methodResult;

/* setter for "code128maxLength" property */
-(void) setCode128maxLength:(int)code128maxLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "code128minLength" property */
-(void) getCode128minLength:(id<IMethodResult>)methodResult;

/* setter for "code128minLength" property */
-(void) setCode128minLength:(int)code128minLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "code128other128" property */
-(void) getCode128other128:(id<IMethodResult>)methodResult;

/* setter for "code128other128" property */
-(void) setCode128other128:(BOOL)code128other128 methodResult:(id<IMethodResult>)methodResult;

/* getter for "code128redundancy" property */
-(void) getCode128redundancy:(id<IMethodResult>)methodResult;

/* setter for "code128redundancy" property */
-(void) setCode128redundancy:(BOOL)code128redundancy methodResult:(id<IMethodResult>)methodResult;

/* getter for "code128securityLevel" property */
-(void) getCode128securityLevel:(id<IMethodResult>)methodResult;

/* setter for "code128securityLevel" property */
-(void) setCode128securityLevel:(int)code128securityLevel methodResult:(id<IMethodResult>)methodResult;

/* getter for "compositeAb" property */
-(void) getCompositeAb:(id<IMethodResult>)methodResult;

/* setter for "compositeAb" property */
-(void) setCompositeAb:(BOOL)compositeAb methodResult:(id<IMethodResult>)methodResult;

/* getter for "compositeAbUccLinkMode" property */
-(void) getCompositeAbUccLinkMode:(id<IMethodResult>)methodResult;

/* setter for "compositeAbUccLinkMode" property */
-(void) setCompositeAbUccLinkMode:(NSString*)compositeAbUccLinkMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "compositeAbUseUpcPreambleCheckDigitRules" property */
-(void) getCompositeAbUseUpcPreambleCheckDigitRules:(id<IMethodResult>)methodResult;

/* setter for "compositeAbUseUpcPreambleCheckDigitRules" property */
-(void) setCompositeAbUseUpcPreambleCheckDigitRules:(BOOL)compositeAbUseUpcPreambleCheckDigitRules methodResult:(id<IMethodResult>)methodResult;

/* getter for "compositeC" property */
-(void) getCompositeC:(id<IMethodResult>)methodResult;

/* setter for "compositeC" property */
-(void) setCompositeC:(BOOL)compositeC methodResult:(id<IMethodResult>)methodResult;

/* getter for "code39" property */
-(void) getCode39:(id<IMethodResult>)methodResult;

/* setter for "code39" property */
-(void) setCode39:(BOOL)code39 methodResult:(id<IMethodResult>)methodResult;

/* getter for "code39code32Prefix" property */
-(void) getCode39code32Prefix:(id<IMethodResult>)methodResult;

/* setter for "code39code32Prefix" property */
-(void) setCode39code32Prefix:(BOOL)code39code32Prefix methodResult:(id<IMethodResult>)methodResult;

/* getter for "code39convertToCode32" property */
-(void) getCode39convertToCode32:(id<IMethodResult>)methodResult;

/* setter for "code39convertToCode32" property */
-(void) setCode39convertToCode32:(BOOL)code39convertToCode32 methodResult:(id<IMethodResult>)methodResult;

/* getter for "code39fullAscii" property */
-(void) getCode39fullAscii:(id<IMethodResult>)methodResult;

/* setter for "code39fullAscii" property */
-(void) setCode39fullAscii:(BOOL)code39fullAscii methodResult:(id<IMethodResult>)methodResult;

/* getter for "code39maxLength" property */
-(void) getCode39maxLength:(id<IMethodResult>)methodResult;

/* setter for "code39maxLength" property */
-(void) setCode39maxLength:(int)code39maxLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "code39minLength" property */
-(void) getCode39minLength:(id<IMethodResult>)methodResult;

/* setter for "code39minLength" property */
-(void) setCode39minLength:(int)code39minLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "code39redundancy" property */
-(void) getCode39redundancy:(id<IMethodResult>)methodResult;

/* setter for "code39redundancy" property */
-(void) setCode39redundancy:(BOOL)code39redundancy methodResult:(id<IMethodResult>)methodResult;

/* getter for "code39reportCheckDigit" property */
-(void) getCode39reportCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "code39reportCheckDigit" property */
-(void) setCode39reportCheckDigit:(BOOL)code39reportCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "code39securityLevel" property */
-(void) getCode39securityLevel:(id<IMethodResult>)methodResult;

/* setter for "code39securityLevel" property */
-(void) setCode39securityLevel:(int)code39securityLevel methodResult:(id<IMethodResult>)methodResult;

/* getter for "code39verifyCheckDigit" property */
-(void) getCode39verifyCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "code39verifyCheckDigit" property */
-(void) setCode39verifyCheckDigit:(BOOL)code39verifyCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "code93" property */
-(void) getCode93:(id<IMethodResult>)methodResult;

/* setter for "code93" property */
-(void) setCode93:(BOOL)code93 methodResult:(id<IMethodResult>)methodResult;

/* getter for "code93maxLength" property */
-(void) getCode93maxLength:(id<IMethodResult>)methodResult;

/* setter for "code93maxLength" property */
-(void) setCode93maxLength:(int)code93maxLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "code93minLength" property */
-(void) getCode93minLength:(id<IMethodResult>)methodResult;

/* setter for "code93minLength" property */
-(void) setCode93minLength:(int)code93minLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "code93redundancy" property */
-(void) getCode93redundancy:(id<IMethodResult>)methodResult;

/* setter for "code93redundancy" property */
-(void) setCode93redundancy:(BOOL)code93redundancy methodResult:(id<IMethodResult>)methodResult;

/* getter for "d2of5" property */
-(void) getD2of5:(id<IMethodResult>)methodResult;

/* setter for "d2of5" property */
-(void) setD2of5:(BOOL)d2of5 methodResult:(id<IMethodResult>)methodResult;

/* getter for "d2of5maxLength" property */
-(void) getD2of5maxLength:(id<IMethodResult>)methodResult;

/* setter for "d2of5maxLength" property */
-(void) setD2of5maxLength:(int)d2of5maxLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "d2of5minLength" property */
-(void) getD2of5minLength:(id<IMethodResult>)methodResult;

/* setter for "d2of5minLength" property */
-(void) setD2of5minLength:(int)d2of5minLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "d2of5redundancy" property */
-(void) getD2of5redundancy:(id<IMethodResult>)methodResult;

/* setter for "d2of5redundancy" property */
-(void) setD2of5redundancy:(BOOL)d2of5redundancy methodResult:(id<IMethodResult>)methodResult;

/* getter for "datamatrix" property */
-(void) getDatamatrix:(id<IMethodResult>)methodResult;

/* setter for "datamatrix" property */
-(void) setDatamatrix:(BOOL)datamatrix methodResult:(id<IMethodResult>)methodResult;

/* getter for "ean13" property */
-(void) getEan13:(id<IMethodResult>)methodResult;

/* setter for "ean13" property */
-(void) setEan13:(BOOL)ean13 methodResult:(id<IMethodResult>)methodResult;

/* getter for "ean8" property */
-(void) getEan8:(id<IMethodResult>)methodResult;

/* setter for "ean8" property */
-(void) setEan8:(BOOL)ean8 methodResult:(id<IMethodResult>)methodResult;

/* getter for "ean8convertToEan13" property */
-(void) getEan8convertToEan13:(id<IMethodResult>)methodResult;

/* setter for "ean8convertToEan13" property */
-(void) setEan8convertToEan13:(BOOL)ean8convertToEan13 methodResult:(id<IMethodResult>)methodResult;

/* getter for "i2of5" property */
-(void) getI2of5:(id<IMethodResult>)methodResult;

/* setter for "i2of5" property */
-(void) setI2of5:(BOOL)i2of5 methodResult:(id<IMethodResult>)methodResult;

/* getter for "i2of5convertToEan13" property */
-(void) getI2of5convertToEan13:(id<IMethodResult>)methodResult;

/* setter for "i2of5convertToEan13" property */
-(void) setI2of5convertToEan13:(BOOL)i2of5convertToEan13 methodResult:(id<IMethodResult>)methodResult;

/* getter for "i2of5maxLength" property */
-(void) getI2of5maxLength:(id<IMethodResult>)methodResult;

/* setter for "i2of5maxLength" property */
-(void) setI2of5maxLength:(int)i2of5maxLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "i2of5minLength" property */
-(void) getI2of5minLength:(id<IMethodResult>)methodResult;

/* setter for "i2of5minLength" property */
-(void) setI2of5minLength:(int)i2of5minLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "i2of5redundancy" property */
-(void) getI2of5redundancy:(id<IMethodResult>)methodResult;

/* setter for "i2of5redundancy" property */
-(void) setI2of5redundancy:(BOOL)i2of5redundancy methodResult:(id<IMethodResult>)methodResult;

/* getter for "i2of5reportCheckDigit" property */
-(void) getI2of5reportCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "i2of5reportCheckDigit" property */
-(void) setI2of5reportCheckDigit:(BOOL)i2of5reportCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "i2of5verifyCheckDigit" property */
-(void) getI2of5verifyCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "i2of5verifyCheckDigit" property */
-(void) setI2of5verifyCheckDigit:(NSString*)i2of5verifyCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "korean3of5" property */
-(void) getKorean3of5:(id<IMethodResult>)methodResult;

/* setter for "korean3of5" property */
-(void) setKorean3of5:(BOOL)korean3of5 methodResult:(id<IMethodResult>)methodResult;

/* getter for "korean3of5redundancy" property */
-(void) getKorean3of5redundancy:(id<IMethodResult>)methodResult;

/* setter for "korean3of5redundancy" property */
-(void) setKorean3of5redundancy:(BOOL)korean3of5redundancy methodResult:(id<IMethodResult>)methodResult;

/* getter for "korean3of5maxLength" property */
-(void) getKorean3of5maxLength:(id<IMethodResult>)methodResult;

/* setter for "korean3of5maxLength" property */
-(void) setKorean3of5maxLength:(int)korean3of5maxLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "korean3of5minLength" property */
-(void) getKorean3of5minLength:(id<IMethodResult>)methodResult;

/* setter for "korean3of5minLength" property */
-(void) setKorean3of5minLength:(int)korean3of5minLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "macroPdf" property */
-(void) getMacroPdf:(id<IMethodResult>)methodResult;

/* setter for "macroPdf" property */
-(void) setMacroPdf:(BOOL)macroPdf methodResult:(id<IMethodResult>)methodResult;

/* getter for "macroPdfBufferLabels" property */
-(void) getMacroPdfBufferLabels:(id<IMethodResult>)methodResult;

/* setter for "macroPdfBufferLabels" property */
-(void) setMacroPdfBufferLabels:(BOOL)macroPdfBufferLabels methodResult:(id<IMethodResult>)methodResult;

/* getter for "macroPdfConvertToPdf417" property */
-(void) getMacroPdfConvertToPdf417:(id<IMethodResult>)methodResult;

/* setter for "macroPdfConvertToPdf417" property */
-(void) setMacroPdfConvertToPdf417:(BOOL)macroPdfConvertToPdf417 methodResult:(id<IMethodResult>)methodResult;

/* getter for "macroPdfExclusive" property */
-(void) getMacroPdfExclusive:(id<IMethodResult>)methodResult;

/* setter for "macroPdfExclusive" property */
-(void) setMacroPdfExclusive:(BOOL)macroPdfExclusive methodResult:(id<IMethodResult>)methodResult;

/* getter for "macroMicroPdf" property */
-(void) getMacroMicroPdf:(id<IMethodResult>)methodResult;

/* setter for "macroMicroPdf" property */
-(void) setMacroMicroPdf:(BOOL)macroMicroPdf methodResult:(id<IMethodResult>)methodResult;

/* getter for "macroMicroPdfBufferLabels" property */
-(void) getMacroMicroPdfBufferLabels:(id<IMethodResult>)methodResult;

/* setter for "macroMicroPdfBufferLabels" property */
-(void) setMacroMicroPdfBufferLabels:(BOOL)macroMicroPdfBufferLabels methodResult:(id<IMethodResult>)methodResult;

/* getter for "macroMicroPdfConvertToMicroPdf" property */
-(void) getMacroMicroPdfConvertToMicroPdf:(id<IMethodResult>)methodResult;

/* setter for "macroMicroPdfConvertToMicroPdf" property */
-(void) setMacroMicroPdfConvertToMicroPdf:(BOOL)macroMicroPdfConvertToMicroPdf methodResult:(id<IMethodResult>)methodResult;

/* getter for "macroMicroPdfExclusive" property */
-(void) getMacroMicroPdfExclusive:(id<IMethodResult>)methodResult;

/* setter for "macroMicroPdfExclusive" property */
-(void) setMacroMicroPdfExclusive:(BOOL)macroMicroPdfExclusive methodResult:(id<IMethodResult>)methodResult;

/* getter for "macroMicroPdfReportAppendInfo" property */
-(void) getMacroMicroPdfReportAppendInfo:(id<IMethodResult>)methodResult;

/* setter for "macroMicroPdfReportAppendInfo" property */
-(void) setMacroMicroPdfReportAppendInfo:(BOOL)macroMicroPdfReportAppendInfo methodResult:(id<IMethodResult>)methodResult;

/* getter for "matrix2of5" property */
-(void) getMatrix2of5:(id<IMethodResult>)methodResult;

/* setter for "matrix2of5" property */
-(void) setMatrix2of5:(BOOL)matrix2of5 methodResult:(id<IMethodResult>)methodResult;

/* getter for "matrix2of5maxLength" property */
-(void) getMatrix2of5maxLength:(id<IMethodResult>)methodResult;

/* setter for "matrix2of5maxLength" property */
-(void) setMatrix2of5maxLength:(int)matrix2of5maxLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "matrix2of5minLength" property */
-(void) getMatrix2of5minLength:(id<IMethodResult>)methodResult;

/* setter for "matrix2of5minLength" property */
-(void) setMatrix2of5minLength:(int)matrix2of5minLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "matrix2of5reportCheckDigit" property */
-(void) getMatrix2of5reportCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "matrix2of5reportCheckDigit" property */
-(void) setMatrix2of5reportCheckDigit:(BOOL)matrix2of5reportCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "matrix2of5verifyCheckDigit" property */
-(void) getMatrix2of5verifyCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "matrix2of5verifyCheckDigit" property */
-(void) setMatrix2of5verifyCheckDigit:(BOOL)matrix2of5verifyCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "maxiCode" property */
-(void) getMaxiCode:(id<IMethodResult>)methodResult;

/* setter for "maxiCode" property */
-(void) setMaxiCode:(BOOL)maxiCode methodResult:(id<IMethodResult>)methodResult;

/* getter for "microPdf" property */
-(void) getMicroPdf:(id<IMethodResult>)methodResult;

/* setter for "microPdf" property */
-(void) setMicroPdf:(BOOL)microPdf methodResult:(id<IMethodResult>)methodResult;

/* getter for "microQr" property */
-(void) getMicroQr:(id<IMethodResult>)methodResult;

/* setter for "microQr" property */
-(void) setMicroQr:(BOOL)microQr methodResult:(id<IMethodResult>)methodResult;

/* getter for "msi" property */
-(void) getMsi:(id<IMethodResult>)methodResult;

/* setter for "msi" property */
-(void) setMsi:(BOOL)msi methodResult:(id<IMethodResult>)methodResult;

/* getter for "msiCheckDigits" property */
-(void) getMsiCheckDigits:(id<IMethodResult>)methodResult;

/* setter for "msiCheckDigits" property */
-(void) setMsiCheckDigits:(NSString*)msiCheckDigits methodResult:(id<IMethodResult>)methodResult;

/* getter for "msiCheckDigitScheme" property */
-(void) getMsiCheckDigitScheme:(id<IMethodResult>)methodResult;

/* setter for "msiCheckDigitScheme" property */
-(void) setMsiCheckDigitScheme:(NSString*)msiCheckDigitScheme methodResult:(id<IMethodResult>)methodResult;

/* getter for "msiMaxLength" property */
-(void) getMsiMaxLength:(id<IMethodResult>)methodResult;

/* setter for "msiMaxLength" property */
-(void) setMsiMaxLength:(int)msiMaxLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "msiMinLength" property */
-(void) getMsiMinLength:(id<IMethodResult>)methodResult;

/* setter for "msiMinLength" property */
-(void) setMsiMinLength:(int)msiMinLength methodResult:(id<IMethodResult>)methodResult;

/* getter for "msiRedundancy" property */
-(void) getMsiRedundancy:(id<IMethodResult>)methodResult;

/* setter for "msiRedundancy" property */
-(void) setMsiRedundancy:(BOOL)msiRedundancy methodResult:(id<IMethodResult>)methodResult;

/* getter for "msiReportCheckDigit" property */
-(void) getMsiReportCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "msiReportCheckDigit" property */
-(void) setMsiReportCheckDigit:(BOOL)msiReportCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "pdf417" property */
-(void) getPdf417:(id<IMethodResult>)methodResult;

/* setter for "pdf417" property */
-(void) setPdf417:(BOOL)pdf417 methodResult:(id<IMethodResult>)methodResult;

/* getter for "signature" property */
-(void) getSignature:(id<IMethodResult>)methodResult;

/* setter for "signature" property */
-(void) setSignature:(BOOL)signature methodResult:(id<IMethodResult>)methodResult;

/* getter for "signatureImageHeight" property */
-(void) getSignatureImageHeight:(id<IMethodResult>)methodResult;

/* setter for "signatureImageHeight" property */
-(void) setSignatureImageHeight:(int)signatureImageHeight methodResult:(id<IMethodResult>)methodResult;

/* getter for "signatureImageWidth" property */
-(void) getSignatureImageWidth:(id<IMethodResult>)methodResult;

/* setter for "signatureImageWidth" property */
-(void) setSignatureImageWidth:(int)signatureImageWidth methodResult:(id<IMethodResult>)methodResult;

/* getter for "signatureImageQuality" property */
-(void) getSignatureImageQuality:(id<IMethodResult>)methodResult;

/* setter for "signatureImageQuality" property */
-(void) setSignatureImageQuality:(int)signatureImageQuality methodResult:(id<IMethodResult>)methodResult;

/* getter for "ausPostal" property */
-(void) getAusPostal:(id<IMethodResult>)methodResult;

/* setter for "ausPostal" property */
-(void) setAusPostal:(BOOL)ausPostal methodResult:(id<IMethodResult>)methodResult;

/* getter for "canPostal" property */
-(void) getCanPostal:(id<IMethodResult>)methodResult;

/* setter for "canPostal" property */
-(void) setCanPostal:(BOOL)canPostal methodResult:(id<IMethodResult>)methodResult;

/* getter for "dutchPostal" property */
-(void) getDutchPostal:(id<IMethodResult>)methodResult;

/* setter for "dutchPostal" property */
-(void) setDutchPostal:(BOOL)dutchPostal methodResult:(id<IMethodResult>)methodResult;

/* getter for "japPostal" property */
-(void) getJapPostal:(id<IMethodResult>)methodResult;

/* setter for "japPostal" property */
-(void) setJapPostal:(BOOL)japPostal methodResult:(id<IMethodResult>)methodResult;

/* getter for "ukPostal" property */
-(void) getUkPostal:(id<IMethodResult>)methodResult;

/* setter for "ukPostal" property */
-(void) setUkPostal:(BOOL)ukPostal methodResult:(id<IMethodResult>)methodResult;

/* getter for "ukPostalReportCheckDigit" property */
-(void) getUkPostalReportCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "ukPostalReportCheckDigit" property */
-(void) setUkPostalReportCheckDigit:(BOOL)ukPostalReportCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "us4state" property */
-(void) getUs4state:(id<IMethodResult>)methodResult;

/* setter for "us4state" property */
-(void) setUs4state:(BOOL)us4state methodResult:(id<IMethodResult>)methodResult;

/* getter for "us4stateFics" property */
-(void) getUs4stateFics:(id<IMethodResult>)methodResult;

/* setter for "us4stateFics" property */
-(void) setUs4stateFics:(BOOL)us4stateFics methodResult:(id<IMethodResult>)methodResult;

/* getter for "usPlanet" property */
-(void) getUsPlanet:(id<IMethodResult>)methodResult;

/* setter for "usPlanet" property */
-(void) setUsPlanet:(BOOL)usPlanet methodResult:(id<IMethodResult>)methodResult;

/* getter for "usPlanetReportCheckDigit" property */
-(void) getUsPlanetReportCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "usPlanetReportCheckDigit" property */
-(void) setUsPlanetReportCheckDigit:(BOOL)usPlanetReportCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "usPostNet" property */
-(void) getUsPostNet:(id<IMethodResult>)methodResult;

/* setter for "usPostNet" property */
-(void) setUsPostNet:(BOOL)usPostNet methodResult:(id<IMethodResult>)methodResult;

/* getter for "usPostNetReportCheckDigit" property */
-(void) getUsPostNetReportCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "usPostNetReportCheckDigit" property */
-(void) setUsPostNetReportCheckDigit:(BOOL)usPostNetReportCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "qrCode" property */
-(void) getQrCode:(id<IMethodResult>)methodResult;

/* setter for "qrCode" property */
-(void) setQrCode:(BOOL)qrCode methodResult:(id<IMethodResult>)methodResult;

/* getter for "gs1dataBar" property */
-(void) getGs1dataBar:(id<IMethodResult>)methodResult;

/* setter for "gs1dataBar" property */
-(void) setGs1dataBar:(BOOL)gs1dataBar methodResult:(id<IMethodResult>)methodResult;

/* getter for "gs1dataBarExpanded" property */
-(void) getGs1dataBarExpanded:(id<IMethodResult>)methodResult;

/* setter for "gs1dataBarExpanded" property */
-(void) setGs1dataBarExpanded:(BOOL)gs1dataBarExpanded methodResult:(id<IMethodResult>)methodResult;

/* getter for "gs1dataBarLimited" property */
-(void) getGs1dataBarLimited:(id<IMethodResult>)methodResult;

/* setter for "gs1dataBarLimited" property */
-(void) setGs1dataBarLimited:(BOOL)gs1dataBarLimited methodResult:(id<IMethodResult>)methodResult;

/* getter for "tlc39" property */
-(void) getTlc39:(id<IMethodResult>)methodResult;

/* setter for "tlc39" property */
-(void) setTlc39:(BOOL)tlc39 methodResult:(id<IMethodResult>)methodResult;

/* getter for "trioptic39" property */
-(void) getTrioptic39:(id<IMethodResult>)methodResult;

/* setter for "trioptic39" property */
-(void) setTrioptic39:(BOOL)trioptic39 methodResult:(id<IMethodResult>)methodResult;

/* getter for "trioptic39Redundancy" property */
-(void) getTrioptic39Redundancy:(id<IMethodResult>)methodResult;

/* setter for "trioptic39Redundancy" property */
-(void) setTrioptic39Redundancy:(BOOL)trioptic39Redundancy methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcEanBookland" property */
-(void) getUpcEanBookland:(id<IMethodResult>)methodResult;

/* setter for "upcEanBookland" property */
-(void) setUpcEanBookland:(BOOL)upcEanBookland methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcEanBooklandFormat" property */
-(void) getUpcEanBooklandFormat:(id<IMethodResult>)methodResult;

/* setter for "upcEanBooklandFormat" property */
-(void) setUpcEanBooklandFormat:(NSString*)upcEanBooklandFormat methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcEanConvertGs1dataBarToUpcEan" property */
-(void) getUpcEanConvertGs1dataBarToUpcEan:(id<IMethodResult>)methodResult;

/* setter for "upcEanConvertGs1dataBarToUpcEan" property */
-(void) setUpcEanConvertGs1dataBarToUpcEan:(BOOL)upcEanConvertGs1dataBarToUpcEan methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcEanCoupon" property */
-(void) getUpcEanCoupon:(id<IMethodResult>)methodResult;

/* setter for "upcEanCoupon" property */
-(void) setUpcEanCoupon:(BOOL)upcEanCoupon methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcEanLinearDecode" property */
-(void) getUpcEanLinearDecode:(id<IMethodResult>)methodResult;

/* setter for "upcEanLinearDecode" property */
-(void) setUpcEanLinearDecode:(BOOL)upcEanLinearDecode methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcEanRandomWeightCheckDigit" property */
-(void) getUpcEanRandomWeightCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "upcEanRandomWeightCheckDigit" property */
-(void) setUpcEanRandomWeightCheckDigit:(BOOL)upcEanRandomWeightCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcEanRetryCount" property */
-(void) getUpcEanRetryCount:(id<IMethodResult>)methodResult;

/* setter for "upcEanRetryCount" property */
-(void) setUpcEanRetryCount:(int)upcEanRetryCount methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcEanSecurityLevel" property */
-(void) getUpcEanSecurityLevel:(id<IMethodResult>)methodResult;

/* setter for "upcEanSecurityLevel" property */
-(void) setUpcEanSecurityLevel:(int)upcEanSecurityLevel methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcEanSupplemental2" property */
-(void) getUpcEanSupplemental2:(id<IMethodResult>)methodResult;

/* setter for "upcEanSupplemental2" property */
-(void) setUpcEanSupplemental2:(BOOL)upcEanSupplemental2 methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcEanSupplemental5" property */
-(void) getUpcEanSupplemental5:(id<IMethodResult>)methodResult;

/* setter for "upcEanSupplemental5" property */
-(void) setUpcEanSupplemental5:(BOOL)upcEanSupplemental5 methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcEanSupplementalMode" property */
-(void) getUpcEanSupplementalMode:(id<IMethodResult>)methodResult;

/* setter for "upcEanSupplementalMode" property */
-(void) setUpcEanSupplementalMode:(NSString*)upcEanSupplementalMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "upca" property */
-(void) getUpca:(id<IMethodResult>)methodResult;

/* setter for "upca" property */
-(void) setUpca:(BOOL)upca methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcaPreamble" property */
-(void) getUpcaPreamble:(id<IMethodResult>)methodResult;

/* setter for "upcaPreamble" property */
-(void) setUpcaPreamble:(NSString*)upcaPreamble methodResult:(id<IMethodResult>)methodResult;

/* getter for "upcaReportCheckDigit" property */
-(void) getUpcaReportCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "upcaReportCheckDigit" property */
-(void) setUpcaReportCheckDigit:(BOOL)upcaReportCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "upce0" property */
-(void) getUpce0:(id<IMethodResult>)methodResult;

/* setter for "upce0" property */
-(void) setUpce0:(BOOL)upce0 methodResult:(id<IMethodResult>)methodResult;

/* getter for "upce0convertToUpca" property */
-(void) getUpce0convertToUpca:(id<IMethodResult>)methodResult;

/* setter for "upce0convertToUpca" property */
-(void) setUpce0convertToUpca:(BOOL)upce0convertToUpca methodResult:(id<IMethodResult>)methodResult;

/* getter for "upce0preamble" property */
-(void) getUpce0preamble:(id<IMethodResult>)methodResult;

/* setter for "upce0preamble" property */
-(void) setUpce0preamble:(NSString*)upce0preamble methodResult:(id<IMethodResult>)methodResult;

/* getter for "upce0reportCheckDigit" property */
-(void) getUpce0reportCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "upce0reportCheckDigit" property */
-(void) setUpce0reportCheckDigit:(BOOL)upce0reportCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "upce1" property */
-(void) getUpce1:(id<IMethodResult>)methodResult;

/* setter for "upce1" property */
-(void) setUpce1:(BOOL)upce1 methodResult:(id<IMethodResult>)methodResult;

/* getter for "upce1convertToUpca" property */
-(void) getUpce1convertToUpca:(id<IMethodResult>)methodResult;

/* setter for "upce1convertToUpca" property */
-(void) setUpce1convertToUpca:(BOOL)upce1convertToUpca methodResult:(id<IMethodResult>)methodResult;

/* getter for "upce1preamble" property */
-(void) getUpce1preamble:(id<IMethodResult>)methodResult;

/* setter for "upce1preamble" property */
-(void) setUpce1preamble:(NSString*)upce1preamble methodResult:(id<IMethodResult>)methodResult;

/* getter for "upce1reportCheckDigit" property */
-(void) getUpce1reportCheckDigit:(id<IMethodResult>)methodResult;

/* setter for "upce1reportCheckDigit" property */
-(void) setUpce1reportCheckDigit:(BOOL)upce1reportCheckDigit methodResult:(id<IMethodResult>)methodResult;

/* getter for "webcode" property */
-(void) getWebcode:(id<IMethodResult>)methodResult;

/* setter for "webcode" property */
-(void) setWebcode:(BOOL)webcode methodResult:(id<IMethodResult>)methodResult;

/* getter for "webcodeDecodeGtSubtype" property */
-(void) getWebcodeDecodeGtSubtype:(id<IMethodResult>)methodResult;

/* setter for "webcodeDecodeGtSubtype" property */
-(void) setWebcodeDecodeGtSubtype:(BOOL)webcodeDecodeGtSubtype methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmModelNumber" property */
-(void) getRsmModelNumber:(id<IMethodResult>)methodResult;

/* getter for "rsmSerialNumber" property */
-(void) getRsmSerialNumber:(id<IMethodResult>)methodResult;

/* getter for "rsmDateOfManufacture" property */
-(void) getRsmDateOfManufacture:(id<IMethodResult>)methodResult;

/* getter for "rsmDateOfService" property */
-(void) getRsmDateOfService:(id<IMethodResult>)methodResult;

/* getter for "rsmBluetoothAddress" property */
-(void) getRsmBluetoothAddress:(id<IMethodResult>)methodResult;

/* getter for "rsmFirmwareVersion" property */
-(void) getRsmFirmwareVersion:(id<IMethodResult>)methodResult;

/* getter for "rsmDeviceClass" property */
-(void) getRsmDeviceClass:(id<IMethodResult>)methodResult;

/* getter for "rsmBatteryStatus" property */
-(void) getRsmBatteryStatus:(id<IMethodResult>)methodResult;

/* getter for "rsmBatteryCapacity" property */
-(void) getRsmBatteryCapacity:(id<IMethodResult>)methodResult;

/* getter for "rsmBatteryId" property */
-(void) getRsmBatteryId:(id<IMethodResult>)methodResult;

/* getter for "rsmBluetoothAuthentication" property */
-(void) getRsmBluetoothAuthentication:(id<IMethodResult>)methodResult;

/* setter for "rsmBluetoothAuthentication" property */
-(void) setRsmBluetoothAuthentication:(BOOL)rsmBluetoothAuthentication methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmBluetoothEncryption" property */
-(void) getRsmBluetoothEncryption:(id<IMethodResult>)methodResult;

/* setter for "rsmBluetoothEncryption" property */
-(void) setRsmBluetoothEncryption:(BOOL)rsmBluetoothEncryption methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmBluetoothPinCode" property */
-(void) getRsmBluetoothPinCode:(id<IMethodResult>)methodResult;

/* setter for "rsmBluetoothPinCode" property */
-(void) setRsmBluetoothPinCode:(NSString*)rsmBluetoothPinCode methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmBluetoothPinCodeType" property */
-(void) getRsmBluetoothPinCodeType:(id<IMethodResult>)methodResult;

/* setter for "rsmBluetoothPinCodeType" property */
-(void) setRsmBluetoothPinCodeType:(NSString*)rsmBluetoothPinCodeType methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmBluetoothReconnectionAttempts" property */
-(void) getRsmBluetoothReconnectionAttempts:(id<IMethodResult>)methodResult;

/* setter for "rsmBluetoothReconnectionAttempts" property */
-(void) setRsmBluetoothReconnectionAttempts:(int)rsmBluetoothReconnectionAttempts methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmBluetoothBeepOnReconnectAttempt" property */
-(void) getRsmBluetoothBeepOnReconnectAttempt:(id<IMethodResult>)methodResult;

/* setter for "rsmBluetoothBeepOnReconnectAttempt" property */
-(void) setRsmBluetoothBeepOnReconnectAttempt:(BOOL)rsmBluetoothBeepOnReconnectAttempt methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmBluetoothHidAutoReconnect" property */
-(void) getRsmBluetoothHidAutoReconnect:(id<IMethodResult>)methodResult;

/* setter for "rsmBluetoothHidAutoReconnect" property */
-(void) setRsmBluetoothHidAutoReconnect:(NSString*)rsmBluetoothHidAutoReconnect methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmBluetoothFriendlyName" property */
-(void) getRsmBluetoothFriendlyName:(id<IMethodResult>)methodResult;

/* setter for "rsmBluetoothFriendlyName" property */
-(void) setRsmBluetoothFriendlyName:(NSString*)rsmBluetoothFriendlyName methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmBluetoothInquiryMode" property */
-(void) getRsmBluetoothInquiryMode:(id<IMethodResult>)methodResult;

/* setter for "rsmBluetoothInquiryMode" property */
-(void) setRsmBluetoothInquiryMode:(NSString*)rsmBluetoothInquiryMode methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmBluetoothAutoReconnect" property */
-(void) getRsmBluetoothAutoReconnect:(id<IMethodResult>)methodResult;

/* setter for "rsmBluetoothAutoReconnect" property */
-(void) setRsmBluetoothAutoReconnect:(NSString*)rsmBluetoothAutoReconnect methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmForceSavePairingBarcode" property */
-(void) getRsmForceSavePairingBarcode:(id<IMethodResult>)methodResult;

/* setter for "rsmForceSavePairingBarcode" property */
-(void) setRsmForceSavePairingBarcode:(BOOL)rsmForceSavePairingBarcode methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmLowBatteryIndication" property */
-(void) getRsmLowBatteryIndication:(id<IMethodResult>)methodResult;

/* setter for "rsmLowBatteryIndication" property */
-(void) setRsmLowBatteryIndication:(BOOL)rsmLowBatteryIndication methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmLowBatteryIndicationCycle" property */
-(void) getRsmLowBatteryIndicationCycle:(id<IMethodResult>)methodResult;

/* setter for "rsmLowBatteryIndicationCycle" property */
-(void) setRsmLowBatteryIndicationCycle:(int)rsmLowBatteryIndicationCycle methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmScanLineWidth" property */
-(void) getRsmScanLineWidth:(id<IMethodResult>)methodResult;

/* setter for "rsmScanLineWidth" property */
-(void) setRsmScanLineWidth:(NSString*)rsmScanLineWidth methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmGoodScansDelay" property */
-(void) getRsmGoodScansDelay:(id<IMethodResult>)methodResult;

/* setter for "rsmGoodScansDelay" property */
-(void) setRsmGoodScansDelay:(int)rsmGoodScansDelay methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmDecodeFeedback" property */
-(void) getRsmDecodeFeedback:(id<IMethodResult>)methodResult;

/* setter for "rsmDecodeFeedback" property */
-(void) setRsmDecodeFeedback:(BOOL)rsmDecodeFeedback methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmIgnoreCode128Usps" property */
-(void) getRsmIgnoreCode128Usps:(id<IMethodResult>)methodResult;

/* setter for "rsmIgnoreCode128Usps" property */
-(void) setRsmIgnoreCode128Usps:(BOOL)rsmIgnoreCode128Usps methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmScanTriggerWakeup" property */
-(void) getRsmScanTriggerWakeup:(id<IMethodResult>)methodResult;

/* setter for "rsmScanTriggerWakeup" property */
-(void) setRsmScanTriggerWakeup:(BOOL)rsmScanTriggerWakeup methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmMems" property */
-(void) getRsmMems:(id<IMethodResult>)methodResult;

/* setter for "rsmMems" property */
-(void) setRsmMems:(BOOL)rsmMems methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmProximityEnable" property */
-(void) getRsmProximityEnable:(id<IMethodResult>)methodResult;

/* setter for "rsmProximityEnable" property */
-(void) setRsmProximityEnable:(BOOL)rsmProximityEnable methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmProximityContinuous" property */
-(void) getRsmProximityContinuous:(id<IMethodResult>)methodResult;

/* setter for "rsmProximityContinuous" property */
-(void) setRsmProximityContinuous:(BOOL)rsmProximityContinuous methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmProximityDistance" property */
-(void) getRsmProximityDistance:(id<IMethodResult>)methodResult;

/* setter for "rsmProximityDistance" property */
-(void) setRsmProximityDistance:(NSString*)rsmProximityDistance methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmPagingEnable" property */
-(void) getRsmPagingEnable:(id<IMethodResult>)methodResult;

/* setter for "rsmPagingEnable" property */
-(void) setRsmPagingEnable:(BOOL)rsmPagingEnable methodResult:(id<IMethodResult>)methodResult;

/* getter for "rsmPagingBeepSequence" property */
-(void) getRsmPagingBeepSequence:(id<IMethodResult>)methodResult;

/* setter for "rsmPagingBeepSequence" property */
-(void) setRsmPagingBeepSequence:(int)rsmPagingBeepSequence methodResult:(id<IMethodResult>)methodResult;

/* Enabling the scanner puts it in a state where it will respond to the trigger (on devices with a hardware trigger) or will accept a command to initiate a soft scan (start method). Scanned barcodes will be available to the application through the callback provided to this method. Only one scanner on the device can be enabled at any one time, to switch between the imager and camera scanners (for example) then first disable the currently enabled scanner. If you do not specify a callback to this method you will received the scanned data as keystrokes. Note that it is necessary to enable the scanner on WM/CE devices prior to being able to retrieve the state of properties. */
-(void) enable:(NSDictionary*)propertyMap methodResult:(id<IMethodResult>)methodResult;

/* If you are using an RS507 barcode scanner you can register to receive connected or disconnected events through this method. */
-(void) registerBluetoothStatus:(id<IMethodResult>)methodResult;

/* Performs a soft trigger start, initiating a scan without pressing the hardware trigger. If the scan does not result in a decode it is necessary to perform a soft stop before another soft start. */
-(void) start:(id<IMethodResult>)methodResult;

/* Performs a soft trigger stop. */
-(void) stop:(id<IMethodResult>)methodResult;

/* Disables the barcode scanner. This reverts the scanner to its default state and flushes any current decoder settings. */
-(void) disable:(id<IMethodResult>)methodResult;

/* Recognizes a barcode on an image. Returns a string with recognized code, or empty string if the barcode is not recognized. */
-(void) barcode_recognize:(NSString*)imageFilePath methodResult:(id<IMethodResult>)methodResult;

/* Return array of properties supported by this scanner. */
-(void) getSupportedProperties:(id<IMethodResult>)methodResult;

/* Enable the scanner and start capturing the barcode automatically. On Symbol Technologies' devices the amount of time to scan the barcode is defined by the scanTimeout property. On iPhone and Android if a barcode is found, the user can confirm barcode recognition, or continue to try to recognize the barcode. When the user confirms or cancels, the callback is called. Once the callback has been called the barcode hardware is disabled.This method will work only on scanners which support soft scan. */
-(void) take:(NSDictionary*)propertyMap methodResult:(id<IMethodResult>)methodResult;

/* Deprecated old method for Barcode.take(). */
-(void) take_barcode:(NSString*)rubyCallbackURL propertyMap:(NSDictionary*)propertyMap methodResult:(id<IMethodResult>)methodResult;

/* Instruct the connected RS507 scanner to perform some action. */
-(void) commandRemoteScanner:(NSString*)command methodResult:(id<IMethodResult>)methodResult;

/* This method will return the value of the propertyName that is passed in. The propertyName must be a valid property of the API class. */
-(void) getProperty:(NSString*)propertyName methodResult:(id<IMethodResult>)methodResult;

/* This method will return a set of object/value pairs for the list of the propertyName that is passed in. The propertyNames must be a valid property of the API class. */
-(void) getProperties:(NSArray*)arrayofNames methodResult:(id<IMethodResult>)methodResult;

/* This method will return all of object/value pairs for the propertyNames of the API class. */
-(void) getAllProperties:(id<IMethodResult>)methodResult;

/* This method will set the value of a property for the API class. The propertyName must be a valid property for the class and must also not be read only. */
-(void) setProperty:(NSString*)propertyName propertyValue:(NSString*)propertyValue methodResult:(id<IMethodResult>)methodResult;

/* This method will set the values of a list of properties for the API class. The propertyName must be a valid property for the class and must also not be read only. */
-(void) setProperties:(NSDictionary*)propertyMap methodResult:(id<IMethodResult>)methodResult;


// NOTE: if you want to hold methodResult(for example periodically call callbacks) you should release it manually when you stop using it!
@end


@protocol IBarcodeChainwaySingleton <NSObject>


-(NSString*) getDefaultID;
-(void) setDefaultID:(NSString*)defaultID;
-(NSString*)getInitialDefaultID;
    


/* Used to gain access to all scanner objects present on the device. For consumer devices you will most likely only have a single scanner, your device's camera but Enterprise grade hardware may have two or more scanners attached. */
-(void) enumerate:(id<IMethodResult>)methodResult;


@end


@protocol IBarcodeChainwayFactory <NSObject>
-(id<IBarcodeChainwaySingleton>) getBarcodeChainwaySingleton;
-(id<IBarcodeChainway>) getBarcodeChainwayByID:(NSString*)ID;
-(void) destroyObjectByID:(NSString*)ID;
-(NSArray*) enumerateBarcodeChainwayInstances;
@end


@interface BarcodeChainwayFactorySingleton : NSObject {
}
+(id<IBarcodeChainwayFactory>) getBarcodeChainwayFactoryInstance;
@end


