
#import "BarcodeChainwayBase.h"
#import "api_generator/iphone/CMethodResult.h"





@implementation BarcodeChainwayBase

- (void) resetAllPropertiesToDefault {
    mDeclaredProperties = [[NSSet setWithObjects:@"autoEnter", @"autoTab", @"hapticFeedback", @"linearSecurityLevel", @"scanTimeout", @"rasterMode", @"rasterHeight", @"aimType", @"timedAimDuration", @"sameSymbolTimeout", @"differentSymbolTimeout", @"aimMode", @"picklistMode", @"viewfinderMode", @"viewfinderX", @"viewfinderY", @"viewfinderWidth", @"viewfinderHeight", @"viewfinderFeedback", @"viewfinderFeedbackTime", @"focusMode", @"illuminationMode", @"dpmMode", @"inverse1dMode", @"poorQuality1dMode", @"beamWidth", @"dbpMode", @"klasseEins", @"adaptiveScanning", @"bidirectionalRedundancy", @"barcodeDataFormat", @"dataBufferSize", @"connectionIdleTimeout", @"disconnectBtOnDisable", @"displayBtAddressBarcodeOnEnable", @"enableTimeout", @"friendlyName", @"lcdMode", @"lowBatteryScan", @"triggerConnected", @"disableScannerDuringNavigate", @"decodeVolume", @"decodeDuration", @"decodeFrequency", @"invalidDecodeFrequency", @"decodeSound", @"invalidDecodeSound", @"scannerType", @"allDecoders", @"aztec", @"chinese2of5", @"codabar", @"codabarClsiEditing", @"codabarMaxLength", @"codabarMinLength", @"codabarNotisEditing", @"codabarRedundancy", @"code11", @"code11checkDigitCount", @"code11maxLength", @"code11minLength", @"code11redundancy", @"code11reportCheckDigit", @"code128", @"code128checkIsBtTable", @"code128ean128", @"code128isbt128", @"code128isbt128ConcatMode", @"code128maxLength", @"code128minLength", @"code128other128", @"code128redundancy", @"code128securityLevel", @"compositeAb", @"compositeAbUccLinkMode", @"compositeAbUseUpcPreambleCheckDigitRules", @"compositeC", @"code39", @"code39code32Prefix", @"code39convertToCode32", @"code39fullAscii", @"code39maxLength", @"code39minLength", @"code39redundancy", @"code39reportCheckDigit", @"code39securityLevel", @"code39verifyCheckDigit", @"code93", @"code93maxLength", @"code93minLength", @"code93redundancy", @"d2of5", @"d2of5maxLength", @"d2of5minLength", @"d2of5redundancy", @"datamatrix", @"ean13", @"ean8", @"ean8convertToEan13", @"i2of5", @"i2of5convertToEan13", @"i2of5maxLength", @"i2of5minLength", @"i2of5redundancy", @"i2of5reportCheckDigit", @"i2of5verifyCheckDigit", @"korean3of5", @"korean3of5redundancy", @"korean3of5maxLength", @"korean3of5minLength", @"macroPdf", @"macroPdfBufferLabels", @"macroPdfConvertToPdf417", @"macroPdfExclusive", @"macroMicroPdf", @"macroMicroPdfBufferLabels", @"macroMicroPdfConvertToMicroPdf", @"macroMicroPdfExclusive", @"macroMicroPdfReportAppendInfo", @"matrix2of5", @"matrix2of5maxLength", @"matrix2of5minLength", @"matrix2of5reportCheckDigit", @"matrix2of5verifyCheckDigit", @"maxiCode", @"microPdf", @"microQr", @"msi", @"msiCheckDigits", @"msiCheckDigitScheme", @"msiMaxLength", @"msiMinLength", @"msiRedundancy", @"msiReportCheckDigit", @"pdf417", @"signature", @"signatureImageHeight", @"signatureImageWidth", @"signatureImageQuality", @"ausPostal", @"canPostal", @"dutchPostal", @"japPostal", @"ukPostal", @"ukPostalReportCheckDigit", @"us4state", @"us4stateFics", @"usPlanet", @"usPlanetReportCheckDigit", @"usPostNet", @"usPostNetReportCheckDigit", @"qrCode", @"gs1dataBar", @"gs1dataBarExpanded", @"gs1dataBarLimited", @"tlc39", @"trioptic39", @"trioptic39Redundancy", @"upcEanBookland", @"upcEanBooklandFormat", @"upcEanConvertGs1dataBarToUpcEan", @"upcEanCoupon", @"upcEanLinearDecode", @"upcEanRandomWeightCheckDigit", @"upcEanRetryCount", @"upcEanSecurityLevel", @"upcEanSupplemental2", @"upcEanSupplemental5", @"upcEanSupplementalMode", @"upca", @"upcaPreamble", @"upcaReportCheckDigit", @"upce0", @"upce0convertToUpca", @"upce0preamble", @"upce0reportCheckDigit", @"upce1", @"upce1convertToUpca", @"upce1preamble", @"upce1reportCheckDigit", @"webcode", @"webcodeDecodeGtSubtype", @"rsmModelNumber", @"rsmSerialNumber", @"rsmDateOfManufacture", @"rsmDateOfService", @"rsmBluetoothAddress", @"rsmFirmwareVersion", @"rsmDeviceClass", @"rsmBatteryStatus", @"rsmBatteryCapacity", @"rsmBatteryId", @"rsmBluetoothAuthentication", @"rsmBluetoothEncryption", @"rsmBluetoothPinCode", @"rsmBluetoothPinCodeType", @"rsmBluetoothReconnectionAttempts", @"rsmBluetoothBeepOnReconnectAttempt", @"rsmBluetoothHidAutoReconnect", @"rsmBluetoothFriendlyName", @"rsmBluetoothInquiryMode", @"rsmBluetoothAutoReconnect", @"rsmForceSavePairingBarcode", @"rsmLowBatteryIndication", @"rsmLowBatteryIndicationCycle", @"rsmScanLineWidth", @"rsmGoodScansDelay", @"rsmDecodeFeedback", @"rsmIgnoreCode128Usps", @"rsmScanTriggerWakeup", @"rsmMems", @"rsmProximityEnable", @"rsmProximityContinuous", @"rsmProximityDistance", @"rsmPagingEnable", @"rsmPagingBeepSequence", nil] retain];

    mProperties = [[NSMutableDictionary dictionaryWithCapacity:218] retain];
    
    [self setProperty:@"autoEnter" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"autoTab" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"hapticFeedback" propertyValue:@"true" methodResult:nil];
    [self setProperty:@"linearSecurityLevel" propertyValue:@"" methodResult:nil];
    [self setProperty:@"scanTimeout" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"rasterMode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rasterHeight" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"aimType" propertyValue:@"" methodResult:nil];
    [self setProperty:@"timedAimDuration" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"sameSymbolTimeout" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"differentSymbolTimeout" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"aimMode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"picklistMode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"viewfinderMode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"viewfinderX" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"viewfinderY" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"viewfinderWidth" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"viewfinderHeight" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"viewfinderFeedback" propertyValue:@"" methodResult:nil];
    [self setProperty:@"viewfinderFeedbackTime" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"focusMode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"illuminationMode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"dpmMode" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"inverse1dMode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"poorQuality1dMode" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"beamWidth" propertyValue:@"" methodResult:nil];
    [self setProperty:@"dbpMode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"klasseEins" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"adaptiveScanning" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"bidirectionalRedundancy" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"barcodeDataFormat" propertyValue:@"" methodResult:nil];
    [self setProperty:@"dataBufferSize" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"connectionIdleTimeout" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"disconnectBtOnDisable" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"displayBtAddressBarcodeOnEnable" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"enableTimeout" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"friendlyName" propertyValue:@"" methodResult:nil];
    [self setProperty:@"lcdMode" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"lowBatteryScan" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"triggerConnected" propertyValue:@"true" methodResult:nil];
    [self setProperty:@"disableScannerDuringNavigate" propertyValue:@"true" methodResult:nil];
    [self setProperty:@"decodeVolume" propertyValue:@"5" methodResult:nil];
    [self setProperty:@"decodeDuration" propertyValue:@"250" methodResult:nil];
    [self setProperty:@"decodeFrequency" propertyValue:@"3000" methodResult:nil];
    [self setProperty:@"invalidDecodeFrequency" propertyValue:@"2500" methodResult:nil];
    [self setProperty:@"decodeSound" propertyValue:@"" methodResult:nil];
    [self setProperty:@"invalidDecodeSound" propertyValue:@"" methodResult:nil];
    [self setProperty:@"scannerType" propertyValue:@"" methodResult:nil];
    [self setProperty:@"allDecoders" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"aztec" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"chinese2of5" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"codabar" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"codabarClsiEditing" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"codabarMaxLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"codabarMinLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"codabarNotisEditing" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"codabarRedundancy" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code11" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code11checkDigitCount" propertyValue:@"" methodResult:nil];
    [self setProperty:@"code11maxLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"code11minLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"code11redundancy" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code11reportCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code128" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code128checkIsBtTable" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code128ean128" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code128isbt128" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code128isbt128ConcatMode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"code128maxLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"code128minLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"code128other128" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code128redundancy" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code128securityLevel" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"compositeAb" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"compositeAbUccLinkMode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"compositeAbUseUpcPreambleCheckDigitRules" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"compositeC" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code39" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code39code32Prefix" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code39convertToCode32" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code39fullAscii" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code39maxLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"code39minLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"code39redundancy" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code39reportCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code39securityLevel" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"code39verifyCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code93" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"code93maxLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"code93minLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"code93redundancy" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"d2of5" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"d2of5maxLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"d2of5minLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"d2of5redundancy" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"datamatrix" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"ean13" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"ean8" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"ean8convertToEan13" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"i2of5" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"i2of5convertToEan13" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"i2of5maxLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"i2of5minLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"i2of5redundancy" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"i2of5reportCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"i2of5verifyCheckDigit" propertyValue:@"" methodResult:nil];
    [self setProperty:@"korean3of5" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"korean3of5redundancy" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"korean3of5maxLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"korean3of5minLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"macroPdf" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"macroPdfBufferLabels" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"macroPdfConvertToPdf417" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"macroPdfExclusive" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"macroMicroPdf" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"macroMicroPdfBufferLabels" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"macroMicroPdfConvertToMicroPdf" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"macroMicroPdfExclusive" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"macroMicroPdfReportAppendInfo" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"matrix2of5" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"matrix2of5maxLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"matrix2of5minLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"matrix2of5reportCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"matrix2of5verifyCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"maxiCode" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"microPdf" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"microQr" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"msi" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"msiCheckDigits" propertyValue:@"" methodResult:nil];
    [self setProperty:@"msiCheckDigitScheme" propertyValue:@"" methodResult:nil];
    [self setProperty:@"msiMaxLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"msiMinLength" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"msiRedundancy" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"msiReportCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"pdf417" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"signature" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"signatureImageHeight" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"signatureImageWidth" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"signatureImageQuality" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"ausPostal" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"canPostal" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"dutchPostal" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"japPostal" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"ukPostal" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"ukPostalReportCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"us4state" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"us4stateFics" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"usPlanet" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"usPlanetReportCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"usPostNet" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"usPostNetReportCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"qrCode" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"gs1dataBar" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"gs1dataBarExpanded" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"gs1dataBarLimited" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"tlc39" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"trioptic39" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"trioptic39Redundancy" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upcEanBookland" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upcEanBooklandFormat" propertyValue:@"" methodResult:nil];
    [self setProperty:@"upcEanConvertGs1dataBarToUpcEan" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upcEanCoupon" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upcEanLinearDecode" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upcEanRandomWeightCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upcEanRetryCount" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"upcEanSecurityLevel" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"upcEanSupplemental2" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upcEanSupplemental5" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upcEanSupplementalMode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"upca" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upcaPreamble" propertyValue:@"" methodResult:nil];
    [self setProperty:@"upcaReportCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upce0" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upce0convertToUpca" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upce0preamble" propertyValue:@"" methodResult:nil];
    [self setProperty:@"upce0reportCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upce1" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upce1convertToUpca" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"upce1preamble" propertyValue:@"" methodResult:nil];
    [self setProperty:@"upce1reportCheckDigit" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"webcode" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"webcodeDecodeGtSubtype" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmModelNumber" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmSerialNumber" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmDateOfManufacture" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmDateOfService" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmBluetoothAddress" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmFirmwareVersion" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmDeviceClass" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmBatteryStatus" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmBatteryCapacity" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmBatteryId" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmBluetoothAuthentication" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmBluetoothEncryption" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmBluetoothPinCode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmBluetoothPinCodeType" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmBluetoothReconnectionAttempts" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"rsmBluetoothBeepOnReconnectAttempt" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmBluetoothHidAutoReconnect" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmBluetoothFriendlyName" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmBluetoothInquiryMode" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmBluetoothAutoReconnect" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmForceSavePairingBarcode" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmLowBatteryIndication" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmLowBatteryIndicationCycle" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"rsmScanLineWidth" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmGoodScansDelay" propertyValue:@"0" methodResult:nil];
    [self setProperty:@"rsmDecodeFeedback" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmIgnoreCode128Usps" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmScanTriggerWakeup" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmMems" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmProximityEnable" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmProximityContinuous" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmProximityDistance" propertyValue:@"" methodResult:nil];
    [self setProperty:@"rsmPagingEnable" propertyValue:@"false" methodResult:nil];
    [self setProperty:@"rsmPagingBeepSequence" propertyValue:@"0" methodResult:nil];

}

- (id) init {
    self = [super init];
    [self resetAllPropertiesToDefault];
    return self;
}



+(NSString*) applyAliasesToPropertyName:(NSString*)prop_name {
return prop_name;

}

+(NSDictionary*) applyAliasesToDictionary:(NSDictionary*)dict {
return dict;

}




-(void) getProperty:(NSString*)propertyName methodResult:(id<IMethodResult>)methodResult {
    NSObject* value = [mProperties objectForKey:[BarcodeChainwayBase applyAliasesToPropertyName:propertyName]];
    [methodResult setResult:value];
}

-(void) setProperty:(NSString*)propertyName propertyValue:(NSString*)propertyValue methodResult:(id<IMethodResult>)methodResult {
    NSObject* value = propertyValue;
    NSString* strValue = propertyValue;
    if ([propertyName isEqualToString:@"ID"] && [value isKindOfClass:[NSString class]] && [strValue isEqualToString:@""]) {
        //NSLog(@"Clearing ID!");
    }
    if ([value isKindOfClass:[NSNumber class]]) {
        NSNumber* numValue = (NSNumber*)value;
        if ([CMethodResult isBoolInsideNumber:numValue]) {
            BOOL boolValue = [numValue boolValue];
            if (boolValue) {
                strValue = @"true";
            }
            else {
                strValue = @"false";
            }
        }
        else if ([CMethodResult isIntInsideNumber:numValue]) {
            strValue =  [NSString stringWithFormat:@"%@", numValue];
        }
        else if ([CMethodResult isFloatInsideNumber:numValue]) {
            strValue =  [NSString stringWithFormat:@"%@", numValue];
        }
        else {
            // error !
            NSLog(@"BarcodeChainway.setProperty(\"%@\", value) UNSUPPORTED VALUE TYPE ! MUST BE STRING !!!", propertyName);
        }
    }
    else if ([value isKindOfClass:[NSString class]]) {
        //is OK!
    }
    else {
        // error !
        NSLog(@"BarcodeChainway.setProperty(\"%@\", value) UNSUPPORTED VALUE TYPE ! MUST BE STRING !!!", propertyName);

    }

   [mProperties setObject:strValue forKey:[BarcodeChainwayBase applyAliasesToPropertyName:propertyName]];
}

-(void) getProperties:(NSArray*)arrayofNames methodResult:(id<IMethodResult>)methodResult {
    NSMutableDictionary* dict = [[NSMutableDictionary dictionaryWithCapacity:[arrayofNames count]] autorelease];
    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    for (NSString* key in arrayofNames) {
      [resultHolder setResult:nil];
      [self getProperty:key methodResult:resultHolder];
      if ([resultHolder getResult] != nil) {
          NSString* value = (NSString*)[resultHolder getResult];
          [dict setObject:value forKey:key];
      } 
      else {
        [dict setObject:@"" forKey:key];
      }
    }

    [methodResult setResult:dict];
}

-(void) getAllProperties:(id<IMethodResult>)methodResult {
    [self getProperties:[mProperties allKeys] methodResult:methodResult];
}


-(void) setProperties:(NSDictionary*)propertyMap methodResult:(id<IMethodResult>)methodResult {
    for (NSString* key in propertyMap) {
        NSString* value = (NSString*)[propertyMap objectForKey:key];
        [self setProperty:key propertyValue:value methodResult:methodResult];
    }
}

-(void) clearAllProperties:(id<IMethodResult>)methodResult {
   [mProperties removeAllObjects];
   [self resetAllPropertiesToDefault];
}










-(void) getAutoEnter:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"autoEnter" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setAutoEnter:(BOOL)autoEnter methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = autoEnter?@"true":@"false";
    [self setProperty:@"autoEnter" propertyValue:strValue methodResult:methodResult];

}

-(void) getAutoTab:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"autoTab" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setAutoTab:(BOOL)autoTab methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = autoTab?@"true":@"false";
    [self setProperty:@"autoTab" propertyValue:strValue methodResult:methodResult];

}

-(void) getHapticFeedback:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"hapticFeedback" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setHapticFeedback:(BOOL)hapticFeedback methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = hapticFeedback?@"true":@"false";
    [self setProperty:@"hapticFeedback" propertyValue:strValue methodResult:methodResult];

}

-(void) getLinearSecurityLevel:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"linearSecurityLevel" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setLinearSecurityLevel:(NSString*)linearSecurityLevel methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", linearSecurityLevel];
    [self setProperty:@"linearSecurityLevel" propertyValue:strValue methodResult:methodResult];

}

-(void) getScanTimeout:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"scanTimeout" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setScanTimeout:(int)scanTimeout methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:scanTimeout]];
    [self setProperty:@"scanTimeout" propertyValue:strValue methodResult:methodResult];

}

-(void) getRasterMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rasterMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRasterMode:(NSString*)rasterMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", rasterMode];
    [self setProperty:@"rasterMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getRasterHeight:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rasterHeight" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRasterHeight:(int)rasterHeight methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:rasterHeight]];
    [self setProperty:@"rasterHeight" propertyValue:strValue methodResult:methodResult];

}

-(void) getAimType:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"aimType" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setAimType:(NSString*)aimType methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", aimType];
    [self setProperty:@"aimType" propertyValue:strValue methodResult:methodResult];

}

-(void) getTimedAimDuration:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"timedAimDuration" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setTimedAimDuration:(int)timedAimDuration methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:timedAimDuration]];
    [self setProperty:@"timedAimDuration" propertyValue:strValue methodResult:methodResult];

}

-(void) getSameSymbolTimeout:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"sameSymbolTimeout" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setSameSymbolTimeout:(int)sameSymbolTimeout methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:sameSymbolTimeout]];
    [self setProperty:@"sameSymbolTimeout" propertyValue:strValue methodResult:methodResult];

}

-(void) getDifferentSymbolTimeout:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"differentSymbolTimeout" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDifferentSymbolTimeout:(int)differentSymbolTimeout methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:differentSymbolTimeout]];
    [self setProperty:@"differentSymbolTimeout" propertyValue:strValue methodResult:methodResult];

}

-(void) getAimMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"aimMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setAimMode:(NSString*)aimMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", aimMode];
    [self setProperty:@"aimMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getPicklistMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"picklistMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setPicklistMode:(NSString*)picklistMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", picklistMode];
    [self setProperty:@"picklistMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getViewfinderMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"viewfinderMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setViewfinderMode:(NSString*)viewfinderMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", viewfinderMode];
    [self setProperty:@"viewfinderMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getViewfinderX:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"viewfinderX" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setViewfinderX:(int)viewfinderX methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:viewfinderX]];
    [self setProperty:@"viewfinderX" propertyValue:strValue methodResult:methodResult];

}

-(void) getViewfinderY:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"viewfinderY" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setViewfinderY:(int)viewfinderY methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:viewfinderY]];
    [self setProperty:@"viewfinderY" propertyValue:strValue methodResult:methodResult];

}

-(void) getViewfinderWidth:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"viewfinderWidth" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setViewfinderWidth:(int)viewfinderWidth methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:viewfinderWidth]];
    [self setProperty:@"viewfinderWidth" propertyValue:strValue methodResult:methodResult];

}

-(void) getViewfinderHeight:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"viewfinderHeight" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setViewfinderHeight:(int)viewfinderHeight methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:viewfinderHeight]];
    [self setProperty:@"viewfinderHeight" propertyValue:strValue methodResult:methodResult];

}

-(void) getViewfinderFeedback:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"viewfinderFeedback" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setViewfinderFeedback:(NSString*)viewfinderFeedback methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", viewfinderFeedback];
    [self setProperty:@"viewfinderFeedback" propertyValue:strValue methodResult:methodResult];

}

-(void) getViewfinderFeedbackTime:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"viewfinderFeedbackTime" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setViewfinderFeedbackTime:(int)viewfinderFeedbackTime methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:viewfinderFeedbackTime]];
    [self setProperty:@"viewfinderFeedbackTime" propertyValue:strValue methodResult:methodResult];

}

-(void) getFocusMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"focusMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setFocusMode:(NSString*)focusMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", focusMode];
    [self setProperty:@"focusMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getIlluminationMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"illuminationMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setIlluminationMode:(NSString*)illuminationMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", illuminationMode];
    [self setProperty:@"illuminationMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getDpmMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"dpmMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDpmMode:(BOOL)dpmMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = dpmMode?@"true":@"false";
    [self setProperty:@"dpmMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getInverse1dMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"inverse1dMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setInverse1dMode:(NSString*)inverse1dMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", inverse1dMode];
    [self setProperty:@"inverse1dMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getPoorQuality1dMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"poorQuality1dMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setPoorQuality1dMode:(BOOL)poorQuality1dMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = poorQuality1dMode?@"true":@"false";
    [self setProperty:@"poorQuality1dMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getBeamWidth:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"beamWidth" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setBeamWidth:(NSString*)beamWidth methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", beamWidth];
    [self setProperty:@"beamWidth" propertyValue:strValue methodResult:methodResult];

}

-(void) getDbpMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"dbpMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDbpMode:(NSString*)dbpMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", dbpMode];
    [self setProperty:@"dbpMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getKlasseEins:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"klasseEins" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setKlasseEins:(BOOL)klasseEins methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = klasseEins?@"true":@"false";
    [self setProperty:@"klasseEins" propertyValue:strValue methodResult:methodResult];

}

-(void) getAdaptiveScanning:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"adaptiveScanning" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setAdaptiveScanning:(BOOL)adaptiveScanning methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = adaptiveScanning?@"true":@"false";
    [self setProperty:@"adaptiveScanning" propertyValue:strValue methodResult:methodResult];

}

-(void) getBidirectionalRedundancy:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"bidirectionalRedundancy" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setBidirectionalRedundancy:(BOOL)bidirectionalRedundancy methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = bidirectionalRedundancy?@"true":@"false";
    [self setProperty:@"bidirectionalRedundancy" propertyValue:strValue methodResult:methodResult];

}

-(void) getBarcodeDataFormat:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"barcodeDataFormat" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setBarcodeDataFormat:(NSString*)barcodeDataFormat methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", barcodeDataFormat];
    [self setProperty:@"barcodeDataFormat" propertyValue:strValue methodResult:methodResult];

}

-(void) getDataBufferSize:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"dataBufferSize" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDataBufferSize:(int)dataBufferSize methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:dataBufferSize]];
    [self setProperty:@"dataBufferSize" propertyValue:strValue methodResult:methodResult];

}

-(void) getConnectionIdleTimeout:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"connectionIdleTimeout" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setConnectionIdleTimeout:(int)connectionIdleTimeout methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:connectionIdleTimeout]];
    [self setProperty:@"connectionIdleTimeout" propertyValue:strValue methodResult:methodResult];

}

-(void) getDisconnectBtOnDisable:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"disconnectBtOnDisable" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDisconnectBtOnDisable:(BOOL)disconnectBtOnDisable methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = disconnectBtOnDisable?@"true":@"false";
    [self setProperty:@"disconnectBtOnDisable" propertyValue:strValue methodResult:methodResult];

}

-(void) getDisplayBtAddressBarcodeOnEnable:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"displayBtAddressBarcodeOnEnable" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDisplayBtAddressBarcodeOnEnable:(BOOL)displayBtAddressBarcodeOnEnable methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = displayBtAddressBarcodeOnEnable?@"true":@"false";
    [self setProperty:@"displayBtAddressBarcodeOnEnable" propertyValue:strValue methodResult:methodResult];

}

-(void) getEnableTimeout:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"enableTimeout" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setEnableTimeout:(int)enableTimeout methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:enableTimeout]];
    [self setProperty:@"enableTimeout" propertyValue:strValue methodResult:methodResult];

}

-(void) getFriendlyName:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"friendlyName" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) getLcdMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"lcdMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setLcdMode:(BOOL)lcdMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = lcdMode?@"true":@"false";
    [self setProperty:@"lcdMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getLowBatteryScan:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"lowBatteryScan" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setLowBatteryScan:(BOOL)lowBatteryScan methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = lowBatteryScan?@"true":@"false";
    [self setProperty:@"lowBatteryScan" propertyValue:strValue methodResult:methodResult];

}

-(void) getTriggerConnected:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"triggerConnected" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setTriggerConnected:(BOOL)triggerConnected methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = triggerConnected?@"true":@"false";
    [self setProperty:@"triggerConnected" propertyValue:strValue methodResult:methodResult];

}

-(void) getDisableScannerDuringNavigate:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"disableScannerDuringNavigate" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDisableScannerDuringNavigate:(BOOL)disableScannerDuringNavigate methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = disableScannerDuringNavigate?@"true":@"false";
    [self setProperty:@"disableScannerDuringNavigate" propertyValue:strValue methodResult:methodResult];

}

-(void) getDecodeVolume:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"decodeVolume" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDecodeVolume:(int)decodeVolume methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:decodeVolume]];
    [self setProperty:@"decodeVolume" propertyValue:strValue methodResult:methodResult];

}

-(void) getDecodeDuration:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"decodeDuration" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDecodeDuration:(int)decodeDuration methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:decodeDuration]];
    [self setProperty:@"decodeDuration" propertyValue:strValue methodResult:methodResult];

}

-(void) getDecodeFrequency:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"decodeFrequency" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDecodeFrequency:(int)decodeFrequency methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:decodeFrequency]];
    [self setProperty:@"decodeFrequency" propertyValue:strValue methodResult:methodResult];

}

-(void) getInvalidDecodeFrequency:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"invalidDecodeFrequency" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setInvalidDecodeFrequency:(int)invalidDecodeFrequency methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:invalidDecodeFrequency]];
    [self setProperty:@"invalidDecodeFrequency" propertyValue:strValue methodResult:methodResult];

}

-(void) getDecodeSound:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"decodeSound" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDecodeSound:(NSString*)decodeSound methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", decodeSound];
    [self setProperty:@"decodeSound" propertyValue:strValue methodResult:methodResult];

}

-(void) getInvalidDecodeSound:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"invalidDecodeSound" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setInvalidDecodeSound:(NSString*)invalidDecodeSound methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", invalidDecodeSound];
    [self setProperty:@"invalidDecodeSound" propertyValue:strValue methodResult:methodResult];

}

-(void) getScannerType:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"scannerType" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) getAllDecoders:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"allDecoders" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setAllDecoders:(BOOL)allDecoders methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = allDecoders?@"true":@"false";
    [self setProperty:@"allDecoders" propertyValue:strValue methodResult:methodResult];

}

-(void) getAztec:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"aztec" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setAztec:(BOOL)aztec methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = aztec?@"true":@"false";
    [self setProperty:@"aztec" propertyValue:strValue methodResult:methodResult];

}

-(void) getChinese2of5:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"chinese2of5" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setChinese2of5:(BOOL)chinese2of5 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = chinese2of5?@"true":@"false";
    [self setProperty:@"chinese2of5" propertyValue:strValue methodResult:methodResult];

}

-(void) getCodabar:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"codabar" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCodabar:(BOOL)codabar methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = codabar?@"true":@"false";
    [self setProperty:@"codabar" propertyValue:strValue methodResult:methodResult];

}

-(void) getCodabarClsiEditing:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"codabarClsiEditing" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCodabarClsiEditing:(BOOL)codabarClsiEditing methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = codabarClsiEditing?@"true":@"false";
    [self setProperty:@"codabarClsiEditing" propertyValue:strValue methodResult:methodResult];

}

-(void) getCodabarMaxLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"codabarMaxLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCodabarMaxLength:(int)codabarMaxLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:codabarMaxLength]];
    [self setProperty:@"codabarMaxLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getCodabarMinLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"codabarMinLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCodabarMinLength:(int)codabarMinLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:codabarMinLength]];
    [self setProperty:@"codabarMinLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getCodabarNotisEditing:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"codabarNotisEditing" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCodabarNotisEditing:(BOOL)codabarNotisEditing methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = codabarNotisEditing?@"true":@"false";
    [self setProperty:@"codabarNotisEditing" propertyValue:strValue methodResult:methodResult];

}

-(void) getCodabarRedundancy:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"codabarRedundancy" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCodabarRedundancy:(BOOL)codabarRedundancy methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = codabarRedundancy?@"true":@"false";
    [self setProperty:@"codabarRedundancy" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode11:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code11" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode11:(BOOL)code11 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code11?@"true":@"false";
    [self setProperty:@"code11" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode11checkDigitCount:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code11checkDigitCount" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode11checkDigitCount:(NSString*)code11checkDigitCount methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", code11checkDigitCount];
    [self setProperty:@"code11checkDigitCount" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode11maxLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code11maxLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode11maxLength:(int)code11maxLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:code11maxLength]];
    [self setProperty:@"code11maxLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode11minLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code11minLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode11minLength:(int)code11minLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:code11minLength]];
    [self setProperty:@"code11minLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode11redundancy:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code11redundancy" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode11redundancy:(BOOL)code11redundancy methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code11redundancy?@"true":@"false";
    [self setProperty:@"code11redundancy" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode11reportCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code11reportCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode11reportCheckDigit:(BOOL)code11reportCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code11reportCheckDigit?@"true":@"false";
    [self setProperty:@"code11reportCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode128:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code128" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode128:(BOOL)code128 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code128?@"true":@"false";
    [self setProperty:@"code128" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode128checkIsBtTable:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code128checkIsBtTable" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode128checkIsBtTable:(BOOL)code128checkIsBtTable methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code128checkIsBtTable?@"true":@"false";
    [self setProperty:@"code128checkIsBtTable" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode128ean128:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code128ean128" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode128ean128:(BOOL)code128ean128 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code128ean128?@"true":@"false";
    [self setProperty:@"code128ean128" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode128isbt128:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code128isbt128" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode128isbt128:(BOOL)code128isbt128 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code128isbt128?@"true":@"false";
    [self setProperty:@"code128isbt128" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode128isbt128ConcatMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code128isbt128ConcatMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode128isbt128ConcatMode:(NSString*)code128isbt128ConcatMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", code128isbt128ConcatMode];
    [self setProperty:@"code128isbt128ConcatMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode128maxLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code128maxLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode128maxLength:(int)code128maxLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:code128maxLength]];
    [self setProperty:@"code128maxLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode128minLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code128minLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode128minLength:(int)code128minLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:code128minLength]];
    [self setProperty:@"code128minLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode128other128:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code128other128" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode128other128:(BOOL)code128other128 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code128other128?@"true":@"false";
    [self setProperty:@"code128other128" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode128redundancy:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code128redundancy" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode128redundancy:(BOOL)code128redundancy methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code128redundancy?@"true":@"false";
    [self setProperty:@"code128redundancy" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode128securityLevel:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code128securityLevel" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode128securityLevel:(int)code128securityLevel methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:code128securityLevel]];
    [self setProperty:@"code128securityLevel" propertyValue:strValue methodResult:methodResult];

}

-(void) getCompositeAb:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"compositeAb" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCompositeAb:(BOOL)compositeAb methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = compositeAb?@"true":@"false";
    [self setProperty:@"compositeAb" propertyValue:strValue methodResult:methodResult];

}

-(void) getCompositeAbUccLinkMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"compositeAbUccLinkMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCompositeAbUccLinkMode:(NSString*)compositeAbUccLinkMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", compositeAbUccLinkMode];
    [self setProperty:@"compositeAbUccLinkMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getCompositeAbUseUpcPreambleCheckDigitRules:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"compositeAbUseUpcPreambleCheckDigitRules" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCompositeAbUseUpcPreambleCheckDigitRules:(BOOL)compositeAbUseUpcPreambleCheckDigitRules methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = compositeAbUseUpcPreambleCheckDigitRules?@"true":@"false";
    [self setProperty:@"compositeAbUseUpcPreambleCheckDigitRules" propertyValue:strValue methodResult:methodResult];

}

-(void) getCompositeC:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"compositeC" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCompositeC:(BOOL)compositeC methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = compositeC?@"true":@"false";
    [self setProperty:@"compositeC" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode39:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code39" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode39:(BOOL)code39 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code39?@"true":@"false";
    [self setProperty:@"code39" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode39code32Prefix:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code39code32Prefix" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode39code32Prefix:(BOOL)code39code32Prefix methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code39code32Prefix?@"true":@"false";
    [self setProperty:@"code39code32Prefix" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode39convertToCode32:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code39convertToCode32" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode39convertToCode32:(BOOL)code39convertToCode32 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code39convertToCode32?@"true":@"false";
    [self setProperty:@"code39convertToCode32" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode39fullAscii:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code39fullAscii" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode39fullAscii:(BOOL)code39fullAscii methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code39fullAscii?@"true":@"false";
    [self setProperty:@"code39fullAscii" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode39maxLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code39maxLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode39maxLength:(int)code39maxLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:code39maxLength]];
    [self setProperty:@"code39maxLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode39minLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code39minLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode39minLength:(int)code39minLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:code39minLength]];
    [self setProperty:@"code39minLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode39redundancy:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code39redundancy" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode39redundancy:(BOOL)code39redundancy methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code39redundancy?@"true":@"false";
    [self setProperty:@"code39redundancy" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode39reportCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code39reportCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode39reportCheckDigit:(BOOL)code39reportCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code39reportCheckDigit?@"true":@"false";
    [self setProperty:@"code39reportCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode39securityLevel:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code39securityLevel" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode39securityLevel:(int)code39securityLevel methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:code39securityLevel]];
    [self setProperty:@"code39securityLevel" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode39verifyCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code39verifyCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode39verifyCheckDigit:(BOOL)code39verifyCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code39verifyCheckDigit?@"true":@"false";
    [self setProperty:@"code39verifyCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode93:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code93" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode93:(BOOL)code93 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code93?@"true":@"false";
    [self setProperty:@"code93" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode93maxLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code93maxLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode93maxLength:(int)code93maxLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:code93maxLength]];
    [self setProperty:@"code93maxLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode93minLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code93minLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode93minLength:(int)code93minLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:code93minLength]];
    [self setProperty:@"code93minLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getCode93redundancy:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"code93redundancy" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCode93redundancy:(BOOL)code93redundancy methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = code93redundancy?@"true":@"false";
    [self setProperty:@"code93redundancy" propertyValue:strValue methodResult:methodResult];

}

-(void) getD2of5:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"d2of5" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setD2of5:(BOOL)d2of5 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = d2of5?@"true":@"false";
    [self setProperty:@"d2of5" propertyValue:strValue methodResult:methodResult];

}

-(void) getD2of5maxLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"d2of5maxLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setD2of5maxLength:(int)d2of5maxLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:d2of5maxLength]];
    [self setProperty:@"d2of5maxLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getD2of5minLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"d2of5minLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setD2of5minLength:(int)d2of5minLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:d2of5minLength]];
    [self setProperty:@"d2of5minLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getD2of5redundancy:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"d2of5redundancy" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setD2of5redundancy:(BOOL)d2of5redundancy methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = d2of5redundancy?@"true":@"false";
    [self setProperty:@"d2of5redundancy" propertyValue:strValue methodResult:methodResult];

}

-(void) getDatamatrix:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"datamatrix" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDatamatrix:(BOOL)datamatrix methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = datamatrix?@"true":@"false";
    [self setProperty:@"datamatrix" propertyValue:strValue methodResult:methodResult];

}

-(void) getEan13:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"ean13" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setEan13:(BOOL)ean13 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = ean13?@"true":@"false";
    [self setProperty:@"ean13" propertyValue:strValue methodResult:methodResult];

}

-(void) getEan8:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"ean8" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setEan8:(BOOL)ean8 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = ean8?@"true":@"false";
    [self setProperty:@"ean8" propertyValue:strValue methodResult:methodResult];

}

-(void) getEan8convertToEan13:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"ean8convertToEan13" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setEan8convertToEan13:(BOOL)ean8convertToEan13 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = ean8convertToEan13?@"true":@"false";
    [self setProperty:@"ean8convertToEan13" propertyValue:strValue methodResult:methodResult];

}

-(void) getI2of5:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"i2of5" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setI2of5:(BOOL)i2of5 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = i2of5?@"true":@"false";
    [self setProperty:@"i2of5" propertyValue:strValue methodResult:methodResult];

}

-(void) getI2of5convertToEan13:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"i2of5convertToEan13" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setI2of5convertToEan13:(BOOL)i2of5convertToEan13 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = i2of5convertToEan13?@"true":@"false";
    [self setProperty:@"i2of5convertToEan13" propertyValue:strValue methodResult:methodResult];

}

-(void) getI2of5maxLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"i2of5maxLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setI2of5maxLength:(int)i2of5maxLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:i2of5maxLength]];
    [self setProperty:@"i2of5maxLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getI2of5minLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"i2of5minLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setI2of5minLength:(int)i2of5minLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:i2of5minLength]];
    [self setProperty:@"i2of5minLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getI2of5redundancy:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"i2of5redundancy" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setI2of5redundancy:(BOOL)i2of5redundancy methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = i2of5redundancy?@"true":@"false";
    [self setProperty:@"i2of5redundancy" propertyValue:strValue methodResult:methodResult];

}

-(void) getI2of5reportCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"i2of5reportCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setI2of5reportCheckDigit:(BOOL)i2of5reportCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = i2of5reportCheckDigit?@"true":@"false";
    [self setProperty:@"i2of5reportCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getI2of5verifyCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"i2of5verifyCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setI2of5verifyCheckDigit:(NSString*)i2of5verifyCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", i2of5verifyCheckDigit];
    [self setProperty:@"i2of5verifyCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getKorean3of5:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"korean3of5" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setKorean3of5:(BOOL)korean3of5 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = korean3of5?@"true":@"false";
    [self setProperty:@"korean3of5" propertyValue:strValue methodResult:methodResult];

}

-(void) getKorean3of5redundancy:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"korean3of5redundancy" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setKorean3of5redundancy:(BOOL)korean3of5redundancy methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = korean3of5redundancy?@"true":@"false";
    [self setProperty:@"korean3of5redundancy" propertyValue:strValue methodResult:methodResult];

}

-(void) getKorean3of5maxLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"korean3of5maxLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setKorean3of5maxLength:(int)korean3of5maxLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:korean3of5maxLength]];
    [self setProperty:@"korean3of5maxLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getKorean3of5minLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"korean3of5minLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setKorean3of5minLength:(int)korean3of5minLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:korean3of5minLength]];
    [self setProperty:@"korean3of5minLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getMacroPdf:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"macroPdf" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMacroPdf:(BOOL)macroPdf methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = macroPdf?@"true":@"false";
    [self setProperty:@"macroPdf" propertyValue:strValue methodResult:methodResult];

}

-(void) getMacroPdfBufferLabels:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"macroPdfBufferLabels" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMacroPdfBufferLabels:(BOOL)macroPdfBufferLabels methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = macroPdfBufferLabels?@"true":@"false";
    [self setProperty:@"macroPdfBufferLabels" propertyValue:strValue methodResult:methodResult];

}

-(void) getMacroPdfConvertToPdf417:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"macroPdfConvertToPdf417" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMacroPdfConvertToPdf417:(BOOL)macroPdfConvertToPdf417 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = macroPdfConvertToPdf417?@"true":@"false";
    [self setProperty:@"macroPdfConvertToPdf417" propertyValue:strValue methodResult:methodResult];

}

-(void) getMacroPdfExclusive:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"macroPdfExclusive" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMacroPdfExclusive:(BOOL)macroPdfExclusive methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = macroPdfExclusive?@"true":@"false";
    [self setProperty:@"macroPdfExclusive" propertyValue:strValue methodResult:methodResult];

}

-(void) getMacroMicroPdf:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"macroMicroPdf" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMacroMicroPdf:(BOOL)macroMicroPdf methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = macroMicroPdf?@"true":@"false";
    [self setProperty:@"macroMicroPdf" propertyValue:strValue methodResult:methodResult];

}

-(void) getMacroMicroPdfBufferLabels:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"macroMicroPdfBufferLabels" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMacroMicroPdfBufferLabels:(BOOL)macroMicroPdfBufferLabels methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = macroMicroPdfBufferLabels?@"true":@"false";
    [self setProperty:@"macroMicroPdfBufferLabels" propertyValue:strValue methodResult:methodResult];

}

-(void) getMacroMicroPdfConvertToMicroPdf:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"macroMicroPdfConvertToMicroPdf" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMacroMicroPdfConvertToMicroPdf:(BOOL)macroMicroPdfConvertToMicroPdf methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = macroMicroPdfConvertToMicroPdf?@"true":@"false";
    [self setProperty:@"macroMicroPdfConvertToMicroPdf" propertyValue:strValue methodResult:methodResult];

}

-(void) getMacroMicroPdfExclusive:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"macroMicroPdfExclusive" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMacroMicroPdfExclusive:(BOOL)macroMicroPdfExclusive methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = macroMicroPdfExclusive?@"true":@"false";
    [self setProperty:@"macroMicroPdfExclusive" propertyValue:strValue methodResult:methodResult];

}

-(void) getMacroMicroPdfReportAppendInfo:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"macroMicroPdfReportAppendInfo" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMacroMicroPdfReportAppendInfo:(BOOL)macroMicroPdfReportAppendInfo methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = macroMicroPdfReportAppendInfo?@"true":@"false";
    [self setProperty:@"macroMicroPdfReportAppendInfo" propertyValue:strValue methodResult:methodResult];

}

-(void) getMatrix2of5:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"matrix2of5" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMatrix2of5:(BOOL)matrix2of5 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = matrix2of5?@"true":@"false";
    [self setProperty:@"matrix2of5" propertyValue:strValue methodResult:methodResult];

}

-(void) getMatrix2of5maxLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"matrix2of5maxLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMatrix2of5maxLength:(int)matrix2of5maxLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:matrix2of5maxLength]];
    [self setProperty:@"matrix2of5maxLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getMatrix2of5minLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"matrix2of5minLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMatrix2of5minLength:(int)matrix2of5minLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:matrix2of5minLength]];
    [self setProperty:@"matrix2of5minLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getMatrix2of5reportCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"matrix2of5reportCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMatrix2of5reportCheckDigit:(BOOL)matrix2of5reportCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = matrix2of5reportCheckDigit?@"true":@"false";
    [self setProperty:@"matrix2of5reportCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getMatrix2of5verifyCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"matrix2of5verifyCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMatrix2of5verifyCheckDigit:(BOOL)matrix2of5verifyCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = matrix2of5verifyCheckDigit?@"true":@"false";
    [self setProperty:@"matrix2of5verifyCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getMaxiCode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"maxiCode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMaxiCode:(BOOL)maxiCode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = maxiCode?@"true":@"false";
    [self setProperty:@"maxiCode" propertyValue:strValue methodResult:methodResult];

}

-(void) getMicroPdf:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"microPdf" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMicroPdf:(BOOL)microPdf methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = microPdf?@"true":@"false";
    [self setProperty:@"microPdf" propertyValue:strValue methodResult:methodResult];

}

-(void) getMicroQr:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"microQr" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMicroQr:(BOOL)microQr methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = microQr?@"true":@"false";
    [self setProperty:@"microQr" propertyValue:strValue methodResult:methodResult];

}

-(void) getMsi:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"msi" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMsi:(BOOL)msi methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = msi?@"true":@"false";
    [self setProperty:@"msi" propertyValue:strValue methodResult:methodResult];

}

-(void) getMsiCheckDigits:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"msiCheckDigits" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMsiCheckDigits:(NSString*)msiCheckDigits methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", msiCheckDigits];
    [self setProperty:@"msiCheckDigits" propertyValue:strValue methodResult:methodResult];

}

-(void) getMsiCheckDigitScheme:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"msiCheckDigitScheme" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMsiCheckDigitScheme:(NSString*)msiCheckDigitScheme methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", msiCheckDigitScheme];
    [self setProperty:@"msiCheckDigitScheme" propertyValue:strValue methodResult:methodResult];

}

-(void) getMsiMaxLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"msiMaxLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMsiMaxLength:(int)msiMaxLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:msiMaxLength]];
    [self setProperty:@"msiMaxLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getMsiMinLength:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"msiMinLength" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMsiMinLength:(int)msiMinLength methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:msiMinLength]];
    [self setProperty:@"msiMinLength" propertyValue:strValue methodResult:methodResult];

}

-(void) getMsiRedundancy:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"msiRedundancy" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMsiRedundancy:(BOOL)msiRedundancy methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = msiRedundancy?@"true":@"false";
    [self setProperty:@"msiRedundancy" propertyValue:strValue methodResult:methodResult];

}

-(void) getMsiReportCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"msiReportCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setMsiReportCheckDigit:(BOOL)msiReportCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = msiReportCheckDigit?@"true":@"false";
    [self setProperty:@"msiReportCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getPdf417:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"pdf417" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setPdf417:(BOOL)pdf417 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = pdf417?@"true":@"false";
    [self setProperty:@"pdf417" propertyValue:strValue methodResult:methodResult];

}

-(void) getSignature:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"signature" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setSignature:(BOOL)signature methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = signature?@"true":@"false";
    [self setProperty:@"signature" propertyValue:strValue methodResult:methodResult];

}

-(void) getSignatureImageHeight:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"signatureImageHeight" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setSignatureImageHeight:(int)signatureImageHeight methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:signatureImageHeight]];
    [self setProperty:@"signatureImageHeight" propertyValue:strValue methodResult:methodResult];

}

-(void) getSignatureImageWidth:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"signatureImageWidth" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setSignatureImageWidth:(int)signatureImageWidth methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:signatureImageWidth]];
    [self setProperty:@"signatureImageWidth" propertyValue:strValue methodResult:methodResult];

}

-(void) getSignatureImageQuality:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"signatureImageQuality" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setSignatureImageQuality:(int)signatureImageQuality methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:signatureImageQuality]];
    [self setProperty:@"signatureImageQuality" propertyValue:strValue methodResult:methodResult];

}

-(void) getAusPostal:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"ausPostal" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setAusPostal:(BOOL)ausPostal methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = ausPostal?@"true":@"false";
    [self setProperty:@"ausPostal" propertyValue:strValue methodResult:methodResult];

}

-(void) getCanPostal:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"canPostal" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setCanPostal:(BOOL)canPostal methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = canPostal?@"true":@"false";
    [self setProperty:@"canPostal" propertyValue:strValue methodResult:methodResult];

}

-(void) getDutchPostal:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"dutchPostal" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setDutchPostal:(BOOL)dutchPostal methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = dutchPostal?@"true":@"false";
    [self setProperty:@"dutchPostal" propertyValue:strValue methodResult:methodResult];

}

-(void) getJapPostal:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"japPostal" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setJapPostal:(BOOL)japPostal methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = japPostal?@"true":@"false";
    [self setProperty:@"japPostal" propertyValue:strValue methodResult:methodResult];

}

-(void) getUkPostal:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"ukPostal" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUkPostal:(BOOL)ukPostal methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = ukPostal?@"true":@"false";
    [self setProperty:@"ukPostal" propertyValue:strValue methodResult:methodResult];

}

-(void) getUkPostalReportCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"ukPostalReportCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUkPostalReportCheckDigit:(BOOL)ukPostalReportCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = ukPostalReportCheckDigit?@"true":@"false";
    [self setProperty:@"ukPostalReportCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getUs4state:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"us4state" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUs4state:(BOOL)us4state methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = us4state?@"true":@"false";
    [self setProperty:@"us4state" propertyValue:strValue methodResult:methodResult];

}

-(void) getUs4stateFics:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"us4stateFics" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUs4stateFics:(BOOL)us4stateFics methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = us4stateFics?@"true":@"false";
    [self setProperty:@"us4stateFics" propertyValue:strValue methodResult:methodResult];

}

-(void) getUsPlanet:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"usPlanet" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUsPlanet:(BOOL)usPlanet methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = usPlanet?@"true":@"false";
    [self setProperty:@"usPlanet" propertyValue:strValue methodResult:methodResult];

}

-(void) getUsPlanetReportCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"usPlanetReportCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUsPlanetReportCheckDigit:(BOOL)usPlanetReportCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = usPlanetReportCheckDigit?@"true":@"false";
    [self setProperty:@"usPlanetReportCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getUsPostNet:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"usPostNet" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUsPostNet:(BOOL)usPostNet methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = usPostNet?@"true":@"false";
    [self setProperty:@"usPostNet" propertyValue:strValue methodResult:methodResult];

}

-(void) getUsPostNetReportCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"usPostNetReportCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUsPostNetReportCheckDigit:(BOOL)usPostNetReportCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = usPostNetReportCheckDigit?@"true":@"false";
    [self setProperty:@"usPostNetReportCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getQrCode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"qrCode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setQrCode:(BOOL)qrCode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = qrCode?@"true":@"false";
    [self setProperty:@"qrCode" propertyValue:strValue methodResult:methodResult];

}

-(void) getGs1dataBar:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"gs1dataBar" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setGs1dataBar:(BOOL)gs1dataBar methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = gs1dataBar?@"true":@"false";
    [self setProperty:@"gs1dataBar" propertyValue:strValue methodResult:methodResult];

}

-(void) getGs1dataBarExpanded:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"gs1dataBarExpanded" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setGs1dataBarExpanded:(BOOL)gs1dataBarExpanded methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = gs1dataBarExpanded?@"true":@"false";
    [self setProperty:@"gs1dataBarExpanded" propertyValue:strValue methodResult:methodResult];

}

-(void) getGs1dataBarLimited:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"gs1dataBarLimited" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setGs1dataBarLimited:(BOOL)gs1dataBarLimited methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = gs1dataBarLimited?@"true":@"false";
    [self setProperty:@"gs1dataBarLimited" propertyValue:strValue methodResult:methodResult];

}

-(void) getTlc39:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"tlc39" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setTlc39:(BOOL)tlc39 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = tlc39?@"true":@"false";
    [self setProperty:@"tlc39" propertyValue:strValue methodResult:methodResult];

}

-(void) getTrioptic39:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"trioptic39" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setTrioptic39:(BOOL)trioptic39 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = trioptic39?@"true":@"false";
    [self setProperty:@"trioptic39" propertyValue:strValue methodResult:methodResult];

}

-(void) getTrioptic39Redundancy:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"trioptic39Redundancy" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setTrioptic39Redundancy:(BOOL)trioptic39Redundancy methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = trioptic39Redundancy?@"true":@"false";
    [self setProperty:@"trioptic39Redundancy" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcEanBookland:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcEanBookland" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcEanBookland:(BOOL)upcEanBookland methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upcEanBookland?@"true":@"false";
    [self setProperty:@"upcEanBookland" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcEanBooklandFormat:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcEanBooklandFormat" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcEanBooklandFormat:(NSString*)upcEanBooklandFormat methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", upcEanBooklandFormat];
    [self setProperty:@"upcEanBooklandFormat" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcEanConvertGs1dataBarToUpcEan:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcEanConvertGs1dataBarToUpcEan" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcEanConvertGs1dataBarToUpcEan:(BOOL)upcEanConvertGs1dataBarToUpcEan methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upcEanConvertGs1dataBarToUpcEan?@"true":@"false";
    [self setProperty:@"upcEanConvertGs1dataBarToUpcEan" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcEanCoupon:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcEanCoupon" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcEanCoupon:(BOOL)upcEanCoupon methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upcEanCoupon?@"true":@"false";
    [self setProperty:@"upcEanCoupon" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcEanLinearDecode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcEanLinearDecode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcEanLinearDecode:(BOOL)upcEanLinearDecode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upcEanLinearDecode?@"true":@"false";
    [self setProperty:@"upcEanLinearDecode" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcEanRandomWeightCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcEanRandomWeightCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcEanRandomWeightCheckDigit:(BOOL)upcEanRandomWeightCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upcEanRandomWeightCheckDigit?@"true":@"false";
    [self setProperty:@"upcEanRandomWeightCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcEanRetryCount:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcEanRetryCount" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcEanRetryCount:(int)upcEanRetryCount methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:upcEanRetryCount]];
    [self setProperty:@"upcEanRetryCount" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcEanSecurityLevel:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcEanSecurityLevel" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcEanSecurityLevel:(int)upcEanSecurityLevel methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:upcEanSecurityLevel]];
    [self setProperty:@"upcEanSecurityLevel" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcEanSupplemental2:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcEanSupplemental2" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcEanSupplemental2:(BOOL)upcEanSupplemental2 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upcEanSupplemental2?@"true":@"false";
    [self setProperty:@"upcEanSupplemental2" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcEanSupplemental5:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcEanSupplemental5" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcEanSupplemental5:(BOOL)upcEanSupplemental5 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upcEanSupplemental5?@"true":@"false";
    [self setProperty:@"upcEanSupplemental5" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcEanSupplementalMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcEanSupplementalMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcEanSupplementalMode:(NSString*)upcEanSupplementalMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", upcEanSupplementalMode];
    [self setProperty:@"upcEanSupplementalMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpca:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upca" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpca:(BOOL)upca methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upca?@"true":@"false";
    [self setProperty:@"upca" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcaPreamble:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcaPreamble" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcaPreamble:(NSString*)upcaPreamble methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", upcaPreamble];
    [self setProperty:@"upcaPreamble" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpcaReportCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upcaReportCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpcaReportCheckDigit:(BOOL)upcaReportCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upcaReportCheckDigit?@"true":@"false";
    [self setProperty:@"upcaReportCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpce0:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upce0" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpce0:(BOOL)upce0 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upce0?@"true":@"false";
    [self setProperty:@"upce0" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpce0convertToUpca:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upce0convertToUpca" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpce0convertToUpca:(BOOL)upce0convertToUpca methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upce0convertToUpca?@"true":@"false";
    [self setProperty:@"upce0convertToUpca" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpce0preamble:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upce0preamble" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpce0preamble:(NSString*)upce0preamble methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", upce0preamble];
    [self setProperty:@"upce0preamble" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpce0reportCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upce0reportCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpce0reportCheckDigit:(BOOL)upce0reportCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upce0reportCheckDigit?@"true":@"false";
    [self setProperty:@"upce0reportCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpce1:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upce1" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpce1:(BOOL)upce1 methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upce1?@"true":@"false";
    [self setProperty:@"upce1" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpce1convertToUpca:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upce1convertToUpca" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpce1convertToUpca:(BOOL)upce1convertToUpca methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upce1convertToUpca?@"true":@"false";
    [self setProperty:@"upce1convertToUpca" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpce1preamble:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upce1preamble" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpce1preamble:(NSString*)upce1preamble methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", upce1preamble];
    [self setProperty:@"upce1preamble" propertyValue:strValue methodResult:methodResult];

}

-(void) getUpce1reportCheckDigit:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"upce1reportCheckDigit" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setUpce1reportCheckDigit:(BOOL)upce1reportCheckDigit methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = upce1reportCheckDigit?@"true":@"false";
    [self setProperty:@"upce1reportCheckDigit" propertyValue:strValue methodResult:methodResult];

}

-(void) getWebcode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"webcode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setWebcode:(BOOL)webcode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = webcode?@"true":@"false";
    [self setProperty:@"webcode" propertyValue:strValue methodResult:methodResult];

}

-(void) getWebcodeDecodeGtSubtype:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"webcodeDecodeGtSubtype" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setWebcodeDecodeGtSubtype:(BOOL)webcodeDecodeGtSubtype methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = webcodeDecodeGtSubtype?@"true":@"false";
    [self setProperty:@"webcodeDecodeGtSubtype" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmModelNumber:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmModelNumber" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) getRsmSerialNumber:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmSerialNumber" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) getRsmDateOfManufacture:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmDateOfManufacture" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) getRsmDateOfService:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmDateOfService" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) getRsmBluetoothAddress:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBluetoothAddress" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) getRsmFirmwareVersion:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmFirmwareVersion" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) getRsmDeviceClass:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmDeviceClass" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) getRsmBatteryStatus:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBatteryStatus" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) getRsmBatteryCapacity:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBatteryCapacity" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) getRsmBatteryId:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBatteryId" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) getRsmBluetoothAuthentication:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBluetoothAuthentication" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmBluetoothAuthentication:(BOOL)rsmBluetoothAuthentication methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = rsmBluetoothAuthentication?@"true":@"false";
    [self setProperty:@"rsmBluetoothAuthentication" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmBluetoothEncryption:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBluetoothEncryption" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmBluetoothEncryption:(BOOL)rsmBluetoothEncryption methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = rsmBluetoothEncryption?@"true":@"false";
    [self setProperty:@"rsmBluetoothEncryption" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmBluetoothPinCode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBluetoothPinCode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmBluetoothPinCode:(NSString*)rsmBluetoothPinCode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", rsmBluetoothPinCode];
    [self setProperty:@"rsmBluetoothPinCode" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmBluetoothPinCodeType:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBluetoothPinCodeType" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmBluetoothPinCodeType:(NSString*)rsmBluetoothPinCodeType methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", rsmBluetoothPinCodeType];
    [self setProperty:@"rsmBluetoothPinCodeType" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmBluetoothReconnectionAttempts:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBluetoothReconnectionAttempts" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmBluetoothReconnectionAttempts:(int)rsmBluetoothReconnectionAttempts methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:rsmBluetoothReconnectionAttempts]];
    [self setProperty:@"rsmBluetoothReconnectionAttempts" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmBluetoothBeepOnReconnectAttempt:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBluetoothBeepOnReconnectAttempt" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmBluetoothBeepOnReconnectAttempt:(BOOL)rsmBluetoothBeepOnReconnectAttempt methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = rsmBluetoothBeepOnReconnectAttempt?@"true":@"false";
    [self setProperty:@"rsmBluetoothBeepOnReconnectAttempt" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmBluetoothHidAutoReconnect:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBluetoothHidAutoReconnect" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmBluetoothHidAutoReconnect:(NSString*)rsmBluetoothHidAutoReconnect methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", rsmBluetoothHidAutoReconnect];
    [self setProperty:@"rsmBluetoothHidAutoReconnect" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmBluetoothFriendlyName:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBluetoothFriendlyName" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmBluetoothFriendlyName:(NSString*)rsmBluetoothFriendlyName methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", rsmBluetoothFriendlyName];
    [self setProperty:@"rsmBluetoothFriendlyName" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmBluetoothInquiryMode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBluetoothInquiryMode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmBluetoothInquiryMode:(NSString*)rsmBluetoothInquiryMode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", rsmBluetoothInquiryMode];
    [self setProperty:@"rsmBluetoothInquiryMode" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmBluetoothAutoReconnect:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmBluetoothAutoReconnect" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmBluetoothAutoReconnect:(NSString*)rsmBluetoothAutoReconnect methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", rsmBluetoothAutoReconnect];
    [self setProperty:@"rsmBluetoothAutoReconnect" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmForceSavePairingBarcode:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmForceSavePairingBarcode" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmForceSavePairingBarcode:(BOOL)rsmForceSavePairingBarcode methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = rsmForceSavePairingBarcode?@"true":@"false";
    [self setProperty:@"rsmForceSavePairingBarcode" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmLowBatteryIndication:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmLowBatteryIndication" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmLowBatteryIndication:(BOOL)rsmLowBatteryIndication methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = rsmLowBatteryIndication?@"true":@"false";
    [self setProperty:@"rsmLowBatteryIndication" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmLowBatteryIndicationCycle:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmLowBatteryIndicationCycle" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmLowBatteryIndicationCycle:(int)rsmLowBatteryIndicationCycle methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:rsmLowBatteryIndicationCycle]];
    [self setProperty:@"rsmLowBatteryIndicationCycle" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmScanLineWidth:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmScanLineWidth" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmScanLineWidth:(NSString*)rsmScanLineWidth methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", rsmScanLineWidth];
    [self setProperty:@"rsmScanLineWidth" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmGoodScansDelay:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmGoodScansDelay" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmGoodScansDelay:(int)rsmGoodScansDelay methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:rsmGoodScansDelay]];
    [self setProperty:@"rsmGoodScansDelay" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmDecodeFeedback:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmDecodeFeedback" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmDecodeFeedback:(BOOL)rsmDecodeFeedback methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = rsmDecodeFeedback?@"true":@"false";
    [self setProperty:@"rsmDecodeFeedback" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmIgnoreCode128Usps:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmIgnoreCode128Usps" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmIgnoreCode128Usps:(BOOL)rsmIgnoreCode128Usps methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = rsmIgnoreCode128Usps?@"true":@"false";
    [self setProperty:@"rsmIgnoreCode128Usps" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmScanTriggerWakeup:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmScanTriggerWakeup" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmScanTriggerWakeup:(BOOL)rsmScanTriggerWakeup methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = rsmScanTriggerWakeup?@"true":@"false";
    [self setProperty:@"rsmScanTriggerWakeup" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmMems:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmMems" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmMems:(BOOL)rsmMems methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = rsmMems?@"true":@"false";
    [self setProperty:@"rsmMems" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmProximityEnable:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmProximityEnable" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmProximityEnable:(BOOL)rsmProximityEnable methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = rsmProximityEnable?@"true":@"false";
    [self setProperty:@"rsmProximityEnable" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmProximityContinuous:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmProximityContinuous" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmProximityContinuous:(BOOL)rsmProximityContinuous methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = rsmProximityContinuous?@"true":@"false";
    [self setProperty:@"rsmProximityContinuous" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmProximityDistance:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmProximityDistance" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSString* typedResult = strResult;
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmProximityDistance:(NSString*)rsmProximityDistance methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", rsmProximityDistance];
    [self setProperty:@"rsmProximityDistance" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmPagingEnable:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmPagingEnable" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithBool:(([@"true" caseInsensitiveCompare:strResult] == NSOrderedSame)?YES:NO)];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmPagingEnable:(BOOL)rsmPagingEnable methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = rsmPagingEnable?@"true":@"false";
    [self setProperty:@"rsmPagingEnable" propertyValue:strValue methodResult:methodResult];

}

-(void) getRsmPagingBeepSequence:(id<IMethodResult>)methodResult {

    CMethodResult_SimpleHolder* resultHolder = [CMethodResult_SimpleHolder makeEmptyHolder];
    [self getProperty:@"rsmPagingBeepSequence" methodResult:resultHolder];
    if ([resultHolder getResult] != nil) {
        NSString* strResult = (NSString*)[resultHolder getResult];
        NSNumber* typedResult = [NSNumber numberWithInt:[strResult intValue]];
        [methodResult setResult:typedResult];
    }
    else {
        [methodResult setResult:nil];
    }

}

-(void) setRsmPagingBeepSequence:(int)rsmPagingBeepSequence methodResult:(id<IMethodResult>)methodResult {

    NSString* strValue = [NSString stringWithFormat:@"%@", [NSNumber numberWithInt:rsmPagingBeepSequence]];
    [self setProperty:@"rsmPagingBeepSequence" propertyValue:strValue methodResult:methodResult];

}




-(void) dealloc {

    [mProperties release];
    [mDeclaredProperties release];

    [super dealloc];
}

@end
