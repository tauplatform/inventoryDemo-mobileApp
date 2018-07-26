#pragma once

#include "common/RhoStd.h"
#include "logging/RhoLog.h"
#include "rhodes/JNIRhodes.h"
#include "MethodExecutorJni.h"
#include "MethodResultJni.h"


namespace rho {

using rho::apiGenerator::MethodResultJni;
using rho::apiGenerator::MethodExecutorJni;

class CBarcodeChainwayBase : public MethodExecutorJni
{
protected:
    DEFINE_LOGCLASS;

    static const char* const FACTORY_SINGLETON_CLASS;
    static jclass s_clsFactorySingleton;
    static jmethodID s_midFactorySetInstance;
    static jmethodID s_midFactoryGetInstance;

    //IBarcodeChainwayFactory staff
    static const char* const IFACTORY_CLASS;
    static jclass s_clsIFactory;
    static jmethodID s_midGetApiSingleton;
    static jmethodID s_midGetApiObject;

    //BarcodeChainwaySingletonBase staff
    static const char* const SINGLETON_BASE_CLASS;
    static jclass s_clsSingletonBase;

    //BarcodeChainwayBase staff
    static const char* const OBJECT_BASE_CLASS;
    static jclass s_clsObjectBase;

    //Method tasks

    static const char* const GETAUTOENTER_TASK_CLASS;
    static jclass s_clsgetAutoEnterTask;
    static jmethodID s_midgetAutoEnterTask;
    static const char* const SETAUTOENTER_TASK_CLASS;
    static jclass s_clssetAutoEnterTask;
    static jmethodID s_midsetAutoEnterTask;
    static const char* const GETAUTOTAB_TASK_CLASS;
    static jclass s_clsgetAutoTabTask;
    static jmethodID s_midgetAutoTabTask;
    static const char* const SETAUTOTAB_TASK_CLASS;
    static jclass s_clssetAutoTabTask;
    static jmethodID s_midsetAutoTabTask;
    static const char* const GETHAPTICFEEDBACK_TASK_CLASS;
    static jclass s_clsgetHapticFeedbackTask;
    static jmethodID s_midgetHapticFeedbackTask;
    static const char* const SETHAPTICFEEDBACK_TASK_CLASS;
    static jclass s_clssetHapticFeedbackTask;
    static jmethodID s_midsetHapticFeedbackTask;
    static const char* const GETLINEARSECURITYLEVEL_TASK_CLASS;
    static jclass s_clsgetLinearSecurityLevelTask;
    static jmethodID s_midgetLinearSecurityLevelTask;
    static const char* const SETLINEARSECURITYLEVEL_TASK_CLASS;
    static jclass s_clssetLinearSecurityLevelTask;
    static jmethodID s_midsetLinearSecurityLevelTask;
    static const char* const GETSCANTIMEOUT_TASK_CLASS;
    static jclass s_clsgetScanTimeoutTask;
    static jmethodID s_midgetScanTimeoutTask;
    static const char* const SETSCANTIMEOUT_TASK_CLASS;
    static jclass s_clssetScanTimeoutTask;
    static jmethodID s_midsetScanTimeoutTask;
    static const char* const GETRASTERMODE_TASK_CLASS;
    static jclass s_clsgetRasterModeTask;
    static jmethodID s_midgetRasterModeTask;
    static const char* const SETRASTERMODE_TASK_CLASS;
    static jclass s_clssetRasterModeTask;
    static jmethodID s_midsetRasterModeTask;
    static const char* const GETRASTERHEIGHT_TASK_CLASS;
    static jclass s_clsgetRasterHeightTask;
    static jmethodID s_midgetRasterHeightTask;
    static const char* const SETRASTERHEIGHT_TASK_CLASS;
    static jclass s_clssetRasterHeightTask;
    static jmethodID s_midsetRasterHeightTask;
    static const char* const GETAIMTYPE_TASK_CLASS;
    static jclass s_clsgetAimTypeTask;
    static jmethodID s_midgetAimTypeTask;
    static const char* const SETAIMTYPE_TASK_CLASS;
    static jclass s_clssetAimTypeTask;
    static jmethodID s_midsetAimTypeTask;
    static const char* const GETTIMEDAIMDURATION_TASK_CLASS;
    static jclass s_clsgetTimedAimDurationTask;
    static jmethodID s_midgetTimedAimDurationTask;
    static const char* const SETTIMEDAIMDURATION_TASK_CLASS;
    static jclass s_clssetTimedAimDurationTask;
    static jmethodID s_midsetTimedAimDurationTask;
    static const char* const GETSAMESYMBOLTIMEOUT_TASK_CLASS;
    static jclass s_clsgetSameSymbolTimeoutTask;
    static jmethodID s_midgetSameSymbolTimeoutTask;
    static const char* const SETSAMESYMBOLTIMEOUT_TASK_CLASS;
    static jclass s_clssetSameSymbolTimeoutTask;
    static jmethodID s_midsetSameSymbolTimeoutTask;
    static const char* const GETDIFFERENTSYMBOLTIMEOUT_TASK_CLASS;
    static jclass s_clsgetDifferentSymbolTimeoutTask;
    static jmethodID s_midgetDifferentSymbolTimeoutTask;
    static const char* const SETDIFFERENTSYMBOLTIMEOUT_TASK_CLASS;
    static jclass s_clssetDifferentSymbolTimeoutTask;
    static jmethodID s_midsetDifferentSymbolTimeoutTask;
    static const char* const GETAIMMODE_TASK_CLASS;
    static jclass s_clsgetAimModeTask;
    static jmethodID s_midgetAimModeTask;
    static const char* const SETAIMMODE_TASK_CLASS;
    static jclass s_clssetAimModeTask;
    static jmethodID s_midsetAimModeTask;
    static const char* const GETPICKLISTMODE_TASK_CLASS;
    static jclass s_clsgetPicklistModeTask;
    static jmethodID s_midgetPicklistModeTask;
    static const char* const SETPICKLISTMODE_TASK_CLASS;
    static jclass s_clssetPicklistModeTask;
    static jmethodID s_midsetPicklistModeTask;
    static const char* const GETVIEWFINDERMODE_TASK_CLASS;
    static jclass s_clsgetViewfinderModeTask;
    static jmethodID s_midgetViewfinderModeTask;
    static const char* const SETVIEWFINDERMODE_TASK_CLASS;
    static jclass s_clssetViewfinderModeTask;
    static jmethodID s_midsetViewfinderModeTask;
    static const char* const GETVIEWFINDERX_TASK_CLASS;
    static jclass s_clsgetViewfinderXTask;
    static jmethodID s_midgetViewfinderXTask;
    static const char* const SETVIEWFINDERX_TASK_CLASS;
    static jclass s_clssetViewfinderXTask;
    static jmethodID s_midsetViewfinderXTask;
    static const char* const GETVIEWFINDERY_TASK_CLASS;
    static jclass s_clsgetViewfinderYTask;
    static jmethodID s_midgetViewfinderYTask;
    static const char* const SETVIEWFINDERY_TASK_CLASS;
    static jclass s_clssetViewfinderYTask;
    static jmethodID s_midsetViewfinderYTask;
    static const char* const GETVIEWFINDERWIDTH_TASK_CLASS;
    static jclass s_clsgetViewfinderWidthTask;
    static jmethodID s_midgetViewfinderWidthTask;
    static const char* const SETVIEWFINDERWIDTH_TASK_CLASS;
    static jclass s_clssetViewfinderWidthTask;
    static jmethodID s_midsetViewfinderWidthTask;
    static const char* const GETVIEWFINDERHEIGHT_TASK_CLASS;
    static jclass s_clsgetViewfinderHeightTask;
    static jmethodID s_midgetViewfinderHeightTask;
    static const char* const SETVIEWFINDERHEIGHT_TASK_CLASS;
    static jclass s_clssetViewfinderHeightTask;
    static jmethodID s_midsetViewfinderHeightTask;
    static const char* const GETVIEWFINDERFEEDBACK_TASK_CLASS;
    static jclass s_clsgetViewfinderFeedbackTask;
    static jmethodID s_midgetViewfinderFeedbackTask;
    static const char* const SETVIEWFINDERFEEDBACK_TASK_CLASS;
    static jclass s_clssetViewfinderFeedbackTask;
    static jmethodID s_midsetViewfinderFeedbackTask;
    static const char* const GETVIEWFINDERFEEDBACKTIME_TASK_CLASS;
    static jclass s_clsgetViewfinderFeedbackTimeTask;
    static jmethodID s_midgetViewfinderFeedbackTimeTask;
    static const char* const SETVIEWFINDERFEEDBACKTIME_TASK_CLASS;
    static jclass s_clssetViewfinderFeedbackTimeTask;
    static jmethodID s_midsetViewfinderFeedbackTimeTask;
    static const char* const GETFOCUSMODE_TASK_CLASS;
    static jclass s_clsgetFocusModeTask;
    static jmethodID s_midgetFocusModeTask;
    static const char* const SETFOCUSMODE_TASK_CLASS;
    static jclass s_clssetFocusModeTask;
    static jmethodID s_midsetFocusModeTask;
    static const char* const GETILLUMINATIONMODE_TASK_CLASS;
    static jclass s_clsgetIlluminationModeTask;
    static jmethodID s_midgetIlluminationModeTask;
    static const char* const SETILLUMINATIONMODE_TASK_CLASS;
    static jclass s_clssetIlluminationModeTask;
    static jmethodID s_midsetIlluminationModeTask;
    static const char* const GETDPMMODE_TASK_CLASS;
    static jclass s_clsgetDpmModeTask;
    static jmethodID s_midgetDpmModeTask;
    static const char* const SETDPMMODE_TASK_CLASS;
    static jclass s_clssetDpmModeTask;
    static jmethodID s_midsetDpmModeTask;
    static const char* const GETINVERSE1DMODE_TASK_CLASS;
    static jclass s_clsgetInverse1dModeTask;
    static jmethodID s_midgetInverse1dModeTask;
    static const char* const SETINVERSE1DMODE_TASK_CLASS;
    static jclass s_clssetInverse1dModeTask;
    static jmethodID s_midsetInverse1dModeTask;
    static const char* const GETPOORQUALITY1DMODE_TASK_CLASS;
    static jclass s_clsgetPoorQuality1dModeTask;
    static jmethodID s_midgetPoorQuality1dModeTask;
    static const char* const SETPOORQUALITY1DMODE_TASK_CLASS;
    static jclass s_clssetPoorQuality1dModeTask;
    static jmethodID s_midsetPoorQuality1dModeTask;
    static const char* const GETBEAMWIDTH_TASK_CLASS;
    static jclass s_clsgetBeamWidthTask;
    static jmethodID s_midgetBeamWidthTask;
    static const char* const SETBEAMWIDTH_TASK_CLASS;
    static jclass s_clssetBeamWidthTask;
    static jmethodID s_midsetBeamWidthTask;
    static const char* const GETDBPMODE_TASK_CLASS;
    static jclass s_clsgetDbpModeTask;
    static jmethodID s_midgetDbpModeTask;
    static const char* const SETDBPMODE_TASK_CLASS;
    static jclass s_clssetDbpModeTask;
    static jmethodID s_midsetDbpModeTask;
    static const char* const GETKLASSEEINS_TASK_CLASS;
    static jclass s_clsgetKlasseEinsTask;
    static jmethodID s_midgetKlasseEinsTask;
    static const char* const SETKLASSEEINS_TASK_CLASS;
    static jclass s_clssetKlasseEinsTask;
    static jmethodID s_midsetKlasseEinsTask;
    static const char* const GETADAPTIVESCANNING_TASK_CLASS;
    static jclass s_clsgetAdaptiveScanningTask;
    static jmethodID s_midgetAdaptiveScanningTask;
    static const char* const SETADAPTIVESCANNING_TASK_CLASS;
    static jclass s_clssetAdaptiveScanningTask;
    static jmethodID s_midsetAdaptiveScanningTask;
    static const char* const GETBIDIRECTIONALREDUNDANCY_TASK_CLASS;
    static jclass s_clsgetBidirectionalRedundancyTask;
    static jmethodID s_midgetBidirectionalRedundancyTask;
    static const char* const SETBIDIRECTIONALREDUNDANCY_TASK_CLASS;
    static jclass s_clssetBidirectionalRedundancyTask;
    static jmethodID s_midsetBidirectionalRedundancyTask;
    static const char* const GETBARCODEDATAFORMAT_TASK_CLASS;
    static jclass s_clsgetBarcodeDataFormatTask;
    static jmethodID s_midgetBarcodeDataFormatTask;
    static const char* const SETBARCODEDATAFORMAT_TASK_CLASS;
    static jclass s_clssetBarcodeDataFormatTask;
    static jmethodID s_midsetBarcodeDataFormatTask;
    static const char* const GETDATABUFFERSIZE_TASK_CLASS;
    static jclass s_clsgetDataBufferSizeTask;
    static jmethodID s_midgetDataBufferSizeTask;
    static const char* const SETDATABUFFERSIZE_TASK_CLASS;
    static jclass s_clssetDataBufferSizeTask;
    static jmethodID s_midsetDataBufferSizeTask;
    static const char* const GETCONNECTIONIDLETIMEOUT_TASK_CLASS;
    static jclass s_clsgetConnectionIdleTimeoutTask;
    static jmethodID s_midgetConnectionIdleTimeoutTask;
    static const char* const SETCONNECTIONIDLETIMEOUT_TASK_CLASS;
    static jclass s_clssetConnectionIdleTimeoutTask;
    static jmethodID s_midsetConnectionIdleTimeoutTask;
    static const char* const GETDISCONNECTBTONDISABLE_TASK_CLASS;
    static jclass s_clsgetDisconnectBtOnDisableTask;
    static jmethodID s_midgetDisconnectBtOnDisableTask;
    static const char* const SETDISCONNECTBTONDISABLE_TASK_CLASS;
    static jclass s_clssetDisconnectBtOnDisableTask;
    static jmethodID s_midsetDisconnectBtOnDisableTask;
    static const char* const GETDISPLAYBTADDRESSBARCODEONENABLE_TASK_CLASS;
    static jclass s_clsgetDisplayBtAddressBarcodeOnEnableTask;
    static jmethodID s_midgetDisplayBtAddressBarcodeOnEnableTask;
    static const char* const SETDISPLAYBTADDRESSBARCODEONENABLE_TASK_CLASS;
    static jclass s_clssetDisplayBtAddressBarcodeOnEnableTask;
    static jmethodID s_midsetDisplayBtAddressBarcodeOnEnableTask;
    static const char* const GETENABLETIMEOUT_TASK_CLASS;
    static jclass s_clsgetEnableTimeoutTask;
    static jmethodID s_midgetEnableTimeoutTask;
    static const char* const SETENABLETIMEOUT_TASK_CLASS;
    static jclass s_clssetEnableTimeoutTask;
    static jmethodID s_midsetEnableTimeoutTask;
    static const char* const GETFRIENDLYNAME_TASK_CLASS;
    static jclass s_clsgetFriendlyNameTask;
    static jmethodID s_midgetFriendlyNameTask;
    static const char* const GETLCDMODE_TASK_CLASS;
    static jclass s_clsgetLcdModeTask;
    static jmethodID s_midgetLcdModeTask;
    static const char* const SETLCDMODE_TASK_CLASS;
    static jclass s_clssetLcdModeTask;
    static jmethodID s_midsetLcdModeTask;
    static const char* const GETLOWBATTERYSCAN_TASK_CLASS;
    static jclass s_clsgetLowBatteryScanTask;
    static jmethodID s_midgetLowBatteryScanTask;
    static const char* const SETLOWBATTERYSCAN_TASK_CLASS;
    static jclass s_clssetLowBatteryScanTask;
    static jmethodID s_midsetLowBatteryScanTask;
    static const char* const GETTRIGGERCONNECTED_TASK_CLASS;
    static jclass s_clsgetTriggerConnectedTask;
    static jmethodID s_midgetTriggerConnectedTask;
    static const char* const SETTRIGGERCONNECTED_TASK_CLASS;
    static jclass s_clssetTriggerConnectedTask;
    static jmethodID s_midsetTriggerConnectedTask;
    static const char* const GETDISABLESCANNERDURINGNAVIGATE_TASK_CLASS;
    static jclass s_clsgetDisableScannerDuringNavigateTask;
    static jmethodID s_midgetDisableScannerDuringNavigateTask;
    static const char* const SETDISABLESCANNERDURINGNAVIGATE_TASK_CLASS;
    static jclass s_clssetDisableScannerDuringNavigateTask;
    static jmethodID s_midsetDisableScannerDuringNavigateTask;
    static const char* const GETDECODEVOLUME_TASK_CLASS;
    static jclass s_clsgetDecodeVolumeTask;
    static jmethodID s_midgetDecodeVolumeTask;
    static const char* const SETDECODEVOLUME_TASK_CLASS;
    static jclass s_clssetDecodeVolumeTask;
    static jmethodID s_midsetDecodeVolumeTask;
    static const char* const GETDECODEDURATION_TASK_CLASS;
    static jclass s_clsgetDecodeDurationTask;
    static jmethodID s_midgetDecodeDurationTask;
    static const char* const SETDECODEDURATION_TASK_CLASS;
    static jclass s_clssetDecodeDurationTask;
    static jmethodID s_midsetDecodeDurationTask;
    static const char* const GETDECODEFREQUENCY_TASK_CLASS;
    static jclass s_clsgetDecodeFrequencyTask;
    static jmethodID s_midgetDecodeFrequencyTask;
    static const char* const SETDECODEFREQUENCY_TASK_CLASS;
    static jclass s_clssetDecodeFrequencyTask;
    static jmethodID s_midsetDecodeFrequencyTask;
    static const char* const GETINVALIDDECODEFREQUENCY_TASK_CLASS;
    static jclass s_clsgetInvalidDecodeFrequencyTask;
    static jmethodID s_midgetInvalidDecodeFrequencyTask;
    static const char* const SETINVALIDDECODEFREQUENCY_TASK_CLASS;
    static jclass s_clssetInvalidDecodeFrequencyTask;
    static jmethodID s_midsetInvalidDecodeFrequencyTask;
    static const char* const GETDECODESOUND_TASK_CLASS;
    static jclass s_clsgetDecodeSoundTask;
    static jmethodID s_midgetDecodeSoundTask;
    static const char* const SETDECODESOUND_TASK_CLASS;
    static jclass s_clssetDecodeSoundTask;
    static jmethodID s_midsetDecodeSoundTask;
    static const char* const GETINVALIDDECODESOUND_TASK_CLASS;
    static jclass s_clsgetInvalidDecodeSoundTask;
    static jmethodID s_midgetInvalidDecodeSoundTask;
    static const char* const SETINVALIDDECODESOUND_TASK_CLASS;
    static jclass s_clssetInvalidDecodeSoundTask;
    static jmethodID s_midsetInvalidDecodeSoundTask;
    static const char* const GETSCANNERTYPE_TASK_CLASS;
    static jclass s_clsgetScannerTypeTask;
    static jmethodID s_midgetScannerTypeTask;
    static const char* const GETALLDECODERS_TASK_CLASS;
    static jclass s_clsgetAllDecodersTask;
    static jmethodID s_midgetAllDecodersTask;
    static const char* const SETALLDECODERS_TASK_CLASS;
    static jclass s_clssetAllDecodersTask;
    static jmethodID s_midsetAllDecodersTask;
    static const char* const GETAZTEC_TASK_CLASS;
    static jclass s_clsgetAztecTask;
    static jmethodID s_midgetAztecTask;
    static const char* const SETAZTEC_TASK_CLASS;
    static jclass s_clssetAztecTask;
    static jmethodID s_midsetAztecTask;
    static const char* const GETCHINESE2OF5_TASK_CLASS;
    static jclass s_clsgetChinese2of5Task;
    static jmethodID s_midgetChinese2of5Task;
    static const char* const SETCHINESE2OF5_TASK_CLASS;
    static jclass s_clssetChinese2of5Task;
    static jmethodID s_midsetChinese2of5Task;
    static const char* const GETCODABAR_TASK_CLASS;
    static jclass s_clsgetCodabarTask;
    static jmethodID s_midgetCodabarTask;
    static const char* const SETCODABAR_TASK_CLASS;
    static jclass s_clssetCodabarTask;
    static jmethodID s_midsetCodabarTask;
    static const char* const GETCODABARCLSIEDITING_TASK_CLASS;
    static jclass s_clsgetCodabarClsiEditingTask;
    static jmethodID s_midgetCodabarClsiEditingTask;
    static const char* const SETCODABARCLSIEDITING_TASK_CLASS;
    static jclass s_clssetCodabarClsiEditingTask;
    static jmethodID s_midsetCodabarClsiEditingTask;
    static const char* const GETCODABARMAXLENGTH_TASK_CLASS;
    static jclass s_clsgetCodabarMaxLengthTask;
    static jmethodID s_midgetCodabarMaxLengthTask;
    static const char* const SETCODABARMAXLENGTH_TASK_CLASS;
    static jclass s_clssetCodabarMaxLengthTask;
    static jmethodID s_midsetCodabarMaxLengthTask;
    static const char* const GETCODABARMINLENGTH_TASK_CLASS;
    static jclass s_clsgetCodabarMinLengthTask;
    static jmethodID s_midgetCodabarMinLengthTask;
    static const char* const SETCODABARMINLENGTH_TASK_CLASS;
    static jclass s_clssetCodabarMinLengthTask;
    static jmethodID s_midsetCodabarMinLengthTask;
    static const char* const GETCODABARNOTISEDITING_TASK_CLASS;
    static jclass s_clsgetCodabarNotisEditingTask;
    static jmethodID s_midgetCodabarNotisEditingTask;
    static const char* const SETCODABARNOTISEDITING_TASK_CLASS;
    static jclass s_clssetCodabarNotisEditingTask;
    static jmethodID s_midsetCodabarNotisEditingTask;
    static const char* const GETCODABARREDUNDANCY_TASK_CLASS;
    static jclass s_clsgetCodabarRedundancyTask;
    static jmethodID s_midgetCodabarRedundancyTask;
    static const char* const SETCODABARREDUNDANCY_TASK_CLASS;
    static jclass s_clssetCodabarRedundancyTask;
    static jmethodID s_midsetCodabarRedundancyTask;
    static const char* const GETCODE11_TASK_CLASS;
    static jclass s_clsgetCode11Task;
    static jmethodID s_midgetCode11Task;
    static const char* const SETCODE11_TASK_CLASS;
    static jclass s_clssetCode11Task;
    static jmethodID s_midsetCode11Task;
    static const char* const GETCODE11CHECKDIGITCOUNT_TASK_CLASS;
    static jclass s_clsgetCode11checkDigitCountTask;
    static jmethodID s_midgetCode11checkDigitCountTask;
    static const char* const SETCODE11CHECKDIGITCOUNT_TASK_CLASS;
    static jclass s_clssetCode11checkDigitCountTask;
    static jmethodID s_midsetCode11checkDigitCountTask;
    static const char* const GETCODE11MAXLENGTH_TASK_CLASS;
    static jclass s_clsgetCode11maxLengthTask;
    static jmethodID s_midgetCode11maxLengthTask;
    static const char* const SETCODE11MAXLENGTH_TASK_CLASS;
    static jclass s_clssetCode11maxLengthTask;
    static jmethodID s_midsetCode11maxLengthTask;
    static const char* const GETCODE11MINLENGTH_TASK_CLASS;
    static jclass s_clsgetCode11minLengthTask;
    static jmethodID s_midgetCode11minLengthTask;
    static const char* const SETCODE11MINLENGTH_TASK_CLASS;
    static jclass s_clssetCode11minLengthTask;
    static jmethodID s_midsetCode11minLengthTask;
    static const char* const GETCODE11REDUNDANCY_TASK_CLASS;
    static jclass s_clsgetCode11redundancyTask;
    static jmethodID s_midgetCode11redundancyTask;
    static const char* const SETCODE11REDUNDANCY_TASK_CLASS;
    static jclass s_clssetCode11redundancyTask;
    static jmethodID s_midsetCode11redundancyTask;
    static const char* const GETCODE11REPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetCode11reportCheckDigitTask;
    static jmethodID s_midgetCode11reportCheckDigitTask;
    static const char* const SETCODE11REPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetCode11reportCheckDigitTask;
    static jmethodID s_midsetCode11reportCheckDigitTask;
    static const char* const GETCODE128_TASK_CLASS;
    static jclass s_clsgetCode128Task;
    static jmethodID s_midgetCode128Task;
    static const char* const SETCODE128_TASK_CLASS;
    static jclass s_clssetCode128Task;
    static jmethodID s_midsetCode128Task;
    static const char* const GETCODE128CHECKISBTTABLE_TASK_CLASS;
    static jclass s_clsgetCode128checkIsBtTableTask;
    static jmethodID s_midgetCode128checkIsBtTableTask;
    static const char* const SETCODE128CHECKISBTTABLE_TASK_CLASS;
    static jclass s_clssetCode128checkIsBtTableTask;
    static jmethodID s_midsetCode128checkIsBtTableTask;
    static const char* const GETCODE128EAN128_TASK_CLASS;
    static jclass s_clsgetCode128ean128Task;
    static jmethodID s_midgetCode128ean128Task;
    static const char* const SETCODE128EAN128_TASK_CLASS;
    static jclass s_clssetCode128ean128Task;
    static jmethodID s_midsetCode128ean128Task;
    static const char* const GETCODE128ISBT128_TASK_CLASS;
    static jclass s_clsgetCode128isbt128Task;
    static jmethodID s_midgetCode128isbt128Task;
    static const char* const SETCODE128ISBT128_TASK_CLASS;
    static jclass s_clssetCode128isbt128Task;
    static jmethodID s_midsetCode128isbt128Task;
    static const char* const GETCODE128ISBT128CONCATMODE_TASK_CLASS;
    static jclass s_clsgetCode128isbt128ConcatModeTask;
    static jmethodID s_midgetCode128isbt128ConcatModeTask;
    static const char* const SETCODE128ISBT128CONCATMODE_TASK_CLASS;
    static jclass s_clssetCode128isbt128ConcatModeTask;
    static jmethodID s_midsetCode128isbt128ConcatModeTask;
    static const char* const GETCODE128MAXLENGTH_TASK_CLASS;
    static jclass s_clsgetCode128maxLengthTask;
    static jmethodID s_midgetCode128maxLengthTask;
    static const char* const SETCODE128MAXLENGTH_TASK_CLASS;
    static jclass s_clssetCode128maxLengthTask;
    static jmethodID s_midsetCode128maxLengthTask;
    static const char* const GETCODE128MINLENGTH_TASK_CLASS;
    static jclass s_clsgetCode128minLengthTask;
    static jmethodID s_midgetCode128minLengthTask;
    static const char* const SETCODE128MINLENGTH_TASK_CLASS;
    static jclass s_clssetCode128minLengthTask;
    static jmethodID s_midsetCode128minLengthTask;
    static const char* const GETCODE128OTHER128_TASK_CLASS;
    static jclass s_clsgetCode128other128Task;
    static jmethodID s_midgetCode128other128Task;
    static const char* const SETCODE128OTHER128_TASK_CLASS;
    static jclass s_clssetCode128other128Task;
    static jmethodID s_midsetCode128other128Task;
    static const char* const GETCODE128REDUNDANCY_TASK_CLASS;
    static jclass s_clsgetCode128redundancyTask;
    static jmethodID s_midgetCode128redundancyTask;
    static const char* const SETCODE128REDUNDANCY_TASK_CLASS;
    static jclass s_clssetCode128redundancyTask;
    static jmethodID s_midsetCode128redundancyTask;
    static const char* const GETCODE128SECURITYLEVEL_TASK_CLASS;
    static jclass s_clsgetCode128securityLevelTask;
    static jmethodID s_midgetCode128securityLevelTask;
    static const char* const SETCODE128SECURITYLEVEL_TASK_CLASS;
    static jclass s_clssetCode128securityLevelTask;
    static jmethodID s_midsetCode128securityLevelTask;
    static const char* const GETCOMPOSITEAB_TASK_CLASS;
    static jclass s_clsgetCompositeAbTask;
    static jmethodID s_midgetCompositeAbTask;
    static const char* const SETCOMPOSITEAB_TASK_CLASS;
    static jclass s_clssetCompositeAbTask;
    static jmethodID s_midsetCompositeAbTask;
    static const char* const GETCOMPOSITEABUCCLINKMODE_TASK_CLASS;
    static jclass s_clsgetCompositeAbUccLinkModeTask;
    static jmethodID s_midgetCompositeAbUccLinkModeTask;
    static const char* const SETCOMPOSITEABUCCLINKMODE_TASK_CLASS;
    static jclass s_clssetCompositeAbUccLinkModeTask;
    static jmethodID s_midsetCompositeAbUccLinkModeTask;
    static const char* const GETCOMPOSITEABUSEUPCPREAMBLECHECKDIGITRULES_TASK_CLASS;
    static jclass s_clsgetCompositeAbUseUpcPreambleCheckDigitRulesTask;
    static jmethodID s_midgetCompositeAbUseUpcPreambleCheckDigitRulesTask;
    static const char* const SETCOMPOSITEABUSEUPCPREAMBLECHECKDIGITRULES_TASK_CLASS;
    static jclass s_clssetCompositeAbUseUpcPreambleCheckDigitRulesTask;
    static jmethodID s_midsetCompositeAbUseUpcPreambleCheckDigitRulesTask;
    static const char* const GETCOMPOSITEC_TASK_CLASS;
    static jclass s_clsgetCompositeCTask;
    static jmethodID s_midgetCompositeCTask;
    static const char* const SETCOMPOSITEC_TASK_CLASS;
    static jclass s_clssetCompositeCTask;
    static jmethodID s_midsetCompositeCTask;
    static const char* const GETCODE39_TASK_CLASS;
    static jclass s_clsgetCode39Task;
    static jmethodID s_midgetCode39Task;
    static const char* const SETCODE39_TASK_CLASS;
    static jclass s_clssetCode39Task;
    static jmethodID s_midsetCode39Task;
    static const char* const GETCODE39CODE32PREFIX_TASK_CLASS;
    static jclass s_clsgetCode39code32PrefixTask;
    static jmethodID s_midgetCode39code32PrefixTask;
    static const char* const SETCODE39CODE32PREFIX_TASK_CLASS;
    static jclass s_clssetCode39code32PrefixTask;
    static jmethodID s_midsetCode39code32PrefixTask;
    static const char* const GETCODE39CONVERTTOCODE32_TASK_CLASS;
    static jclass s_clsgetCode39convertToCode32Task;
    static jmethodID s_midgetCode39convertToCode32Task;
    static const char* const SETCODE39CONVERTTOCODE32_TASK_CLASS;
    static jclass s_clssetCode39convertToCode32Task;
    static jmethodID s_midsetCode39convertToCode32Task;
    static const char* const GETCODE39FULLASCII_TASK_CLASS;
    static jclass s_clsgetCode39fullAsciiTask;
    static jmethodID s_midgetCode39fullAsciiTask;
    static const char* const SETCODE39FULLASCII_TASK_CLASS;
    static jclass s_clssetCode39fullAsciiTask;
    static jmethodID s_midsetCode39fullAsciiTask;
    static const char* const GETCODE39MAXLENGTH_TASK_CLASS;
    static jclass s_clsgetCode39maxLengthTask;
    static jmethodID s_midgetCode39maxLengthTask;
    static const char* const SETCODE39MAXLENGTH_TASK_CLASS;
    static jclass s_clssetCode39maxLengthTask;
    static jmethodID s_midsetCode39maxLengthTask;
    static const char* const GETCODE39MINLENGTH_TASK_CLASS;
    static jclass s_clsgetCode39minLengthTask;
    static jmethodID s_midgetCode39minLengthTask;
    static const char* const SETCODE39MINLENGTH_TASK_CLASS;
    static jclass s_clssetCode39minLengthTask;
    static jmethodID s_midsetCode39minLengthTask;
    static const char* const GETCODE39REDUNDANCY_TASK_CLASS;
    static jclass s_clsgetCode39redundancyTask;
    static jmethodID s_midgetCode39redundancyTask;
    static const char* const SETCODE39REDUNDANCY_TASK_CLASS;
    static jclass s_clssetCode39redundancyTask;
    static jmethodID s_midsetCode39redundancyTask;
    static const char* const GETCODE39REPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetCode39reportCheckDigitTask;
    static jmethodID s_midgetCode39reportCheckDigitTask;
    static const char* const SETCODE39REPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetCode39reportCheckDigitTask;
    static jmethodID s_midsetCode39reportCheckDigitTask;
    static const char* const GETCODE39SECURITYLEVEL_TASK_CLASS;
    static jclass s_clsgetCode39securityLevelTask;
    static jmethodID s_midgetCode39securityLevelTask;
    static const char* const SETCODE39SECURITYLEVEL_TASK_CLASS;
    static jclass s_clssetCode39securityLevelTask;
    static jmethodID s_midsetCode39securityLevelTask;
    static const char* const GETCODE39VERIFYCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetCode39verifyCheckDigitTask;
    static jmethodID s_midgetCode39verifyCheckDigitTask;
    static const char* const SETCODE39VERIFYCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetCode39verifyCheckDigitTask;
    static jmethodID s_midsetCode39verifyCheckDigitTask;
    static const char* const GETCODE93_TASK_CLASS;
    static jclass s_clsgetCode93Task;
    static jmethodID s_midgetCode93Task;
    static const char* const SETCODE93_TASK_CLASS;
    static jclass s_clssetCode93Task;
    static jmethodID s_midsetCode93Task;
    static const char* const GETCODE93MAXLENGTH_TASK_CLASS;
    static jclass s_clsgetCode93maxLengthTask;
    static jmethodID s_midgetCode93maxLengthTask;
    static const char* const SETCODE93MAXLENGTH_TASK_CLASS;
    static jclass s_clssetCode93maxLengthTask;
    static jmethodID s_midsetCode93maxLengthTask;
    static const char* const GETCODE93MINLENGTH_TASK_CLASS;
    static jclass s_clsgetCode93minLengthTask;
    static jmethodID s_midgetCode93minLengthTask;
    static const char* const SETCODE93MINLENGTH_TASK_CLASS;
    static jclass s_clssetCode93minLengthTask;
    static jmethodID s_midsetCode93minLengthTask;
    static const char* const GETCODE93REDUNDANCY_TASK_CLASS;
    static jclass s_clsgetCode93redundancyTask;
    static jmethodID s_midgetCode93redundancyTask;
    static const char* const SETCODE93REDUNDANCY_TASK_CLASS;
    static jclass s_clssetCode93redundancyTask;
    static jmethodID s_midsetCode93redundancyTask;
    static const char* const GETD2OF5_TASK_CLASS;
    static jclass s_clsgetD2of5Task;
    static jmethodID s_midgetD2of5Task;
    static const char* const SETD2OF5_TASK_CLASS;
    static jclass s_clssetD2of5Task;
    static jmethodID s_midsetD2of5Task;
    static const char* const GETD2OF5MAXLENGTH_TASK_CLASS;
    static jclass s_clsgetD2of5maxLengthTask;
    static jmethodID s_midgetD2of5maxLengthTask;
    static const char* const SETD2OF5MAXLENGTH_TASK_CLASS;
    static jclass s_clssetD2of5maxLengthTask;
    static jmethodID s_midsetD2of5maxLengthTask;
    static const char* const GETD2OF5MINLENGTH_TASK_CLASS;
    static jclass s_clsgetD2of5minLengthTask;
    static jmethodID s_midgetD2of5minLengthTask;
    static const char* const SETD2OF5MINLENGTH_TASK_CLASS;
    static jclass s_clssetD2of5minLengthTask;
    static jmethodID s_midsetD2of5minLengthTask;
    static const char* const GETD2OF5REDUNDANCY_TASK_CLASS;
    static jclass s_clsgetD2of5redundancyTask;
    static jmethodID s_midgetD2of5redundancyTask;
    static const char* const SETD2OF5REDUNDANCY_TASK_CLASS;
    static jclass s_clssetD2of5redundancyTask;
    static jmethodID s_midsetD2of5redundancyTask;
    static const char* const GETDATAMATRIX_TASK_CLASS;
    static jclass s_clsgetDatamatrixTask;
    static jmethodID s_midgetDatamatrixTask;
    static const char* const SETDATAMATRIX_TASK_CLASS;
    static jclass s_clssetDatamatrixTask;
    static jmethodID s_midsetDatamatrixTask;
    static const char* const GETEAN13_TASK_CLASS;
    static jclass s_clsgetEan13Task;
    static jmethodID s_midgetEan13Task;
    static const char* const SETEAN13_TASK_CLASS;
    static jclass s_clssetEan13Task;
    static jmethodID s_midsetEan13Task;
    static const char* const GETEAN8_TASK_CLASS;
    static jclass s_clsgetEan8Task;
    static jmethodID s_midgetEan8Task;
    static const char* const SETEAN8_TASK_CLASS;
    static jclass s_clssetEan8Task;
    static jmethodID s_midsetEan8Task;
    static const char* const GETEAN8CONVERTTOEAN13_TASK_CLASS;
    static jclass s_clsgetEan8convertToEan13Task;
    static jmethodID s_midgetEan8convertToEan13Task;
    static const char* const SETEAN8CONVERTTOEAN13_TASK_CLASS;
    static jclass s_clssetEan8convertToEan13Task;
    static jmethodID s_midsetEan8convertToEan13Task;
    static const char* const GETI2OF5_TASK_CLASS;
    static jclass s_clsgetI2of5Task;
    static jmethodID s_midgetI2of5Task;
    static const char* const SETI2OF5_TASK_CLASS;
    static jclass s_clssetI2of5Task;
    static jmethodID s_midsetI2of5Task;
    static const char* const GETI2OF5CONVERTTOEAN13_TASK_CLASS;
    static jclass s_clsgetI2of5convertToEan13Task;
    static jmethodID s_midgetI2of5convertToEan13Task;
    static const char* const SETI2OF5CONVERTTOEAN13_TASK_CLASS;
    static jclass s_clssetI2of5convertToEan13Task;
    static jmethodID s_midsetI2of5convertToEan13Task;
    static const char* const GETI2OF5MAXLENGTH_TASK_CLASS;
    static jclass s_clsgetI2of5maxLengthTask;
    static jmethodID s_midgetI2of5maxLengthTask;
    static const char* const SETI2OF5MAXLENGTH_TASK_CLASS;
    static jclass s_clssetI2of5maxLengthTask;
    static jmethodID s_midsetI2of5maxLengthTask;
    static const char* const GETI2OF5MINLENGTH_TASK_CLASS;
    static jclass s_clsgetI2of5minLengthTask;
    static jmethodID s_midgetI2of5minLengthTask;
    static const char* const SETI2OF5MINLENGTH_TASK_CLASS;
    static jclass s_clssetI2of5minLengthTask;
    static jmethodID s_midsetI2of5minLengthTask;
    static const char* const GETI2OF5REDUNDANCY_TASK_CLASS;
    static jclass s_clsgetI2of5redundancyTask;
    static jmethodID s_midgetI2of5redundancyTask;
    static const char* const SETI2OF5REDUNDANCY_TASK_CLASS;
    static jclass s_clssetI2of5redundancyTask;
    static jmethodID s_midsetI2of5redundancyTask;
    static const char* const GETI2OF5REPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetI2of5reportCheckDigitTask;
    static jmethodID s_midgetI2of5reportCheckDigitTask;
    static const char* const SETI2OF5REPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetI2of5reportCheckDigitTask;
    static jmethodID s_midsetI2of5reportCheckDigitTask;
    static const char* const GETI2OF5VERIFYCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetI2of5verifyCheckDigitTask;
    static jmethodID s_midgetI2of5verifyCheckDigitTask;
    static const char* const SETI2OF5VERIFYCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetI2of5verifyCheckDigitTask;
    static jmethodID s_midsetI2of5verifyCheckDigitTask;
    static const char* const GETKOREAN3OF5_TASK_CLASS;
    static jclass s_clsgetKorean3of5Task;
    static jmethodID s_midgetKorean3of5Task;
    static const char* const SETKOREAN3OF5_TASK_CLASS;
    static jclass s_clssetKorean3of5Task;
    static jmethodID s_midsetKorean3of5Task;
    static const char* const GETKOREAN3OF5REDUNDANCY_TASK_CLASS;
    static jclass s_clsgetKorean3of5redundancyTask;
    static jmethodID s_midgetKorean3of5redundancyTask;
    static const char* const SETKOREAN3OF5REDUNDANCY_TASK_CLASS;
    static jclass s_clssetKorean3of5redundancyTask;
    static jmethodID s_midsetKorean3of5redundancyTask;
    static const char* const GETKOREAN3OF5MAXLENGTH_TASK_CLASS;
    static jclass s_clsgetKorean3of5maxLengthTask;
    static jmethodID s_midgetKorean3of5maxLengthTask;
    static const char* const SETKOREAN3OF5MAXLENGTH_TASK_CLASS;
    static jclass s_clssetKorean3of5maxLengthTask;
    static jmethodID s_midsetKorean3of5maxLengthTask;
    static const char* const GETKOREAN3OF5MINLENGTH_TASK_CLASS;
    static jclass s_clsgetKorean3of5minLengthTask;
    static jmethodID s_midgetKorean3of5minLengthTask;
    static const char* const SETKOREAN3OF5MINLENGTH_TASK_CLASS;
    static jclass s_clssetKorean3of5minLengthTask;
    static jmethodID s_midsetKorean3of5minLengthTask;
    static const char* const GETMACROPDF_TASK_CLASS;
    static jclass s_clsgetMacroPdfTask;
    static jmethodID s_midgetMacroPdfTask;
    static const char* const SETMACROPDF_TASK_CLASS;
    static jclass s_clssetMacroPdfTask;
    static jmethodID s_midsetMacroPdfTask;
    static const char* const GETMACROPDFBUFFERLABELS_TASK_CLASS;
    static jclass s_clsgetMacroPdfBufferLabelsTask;
    static jmethodID s_midgetMacroPdfBufferLabelsTask;
    static const char* const SETMACROPDFBUFFERLABELS_TASK_CLASS;
    static jclass s_clssetMacroPdfBufferLabelsTask;
    static jmethodID s_midsetMacroPdfBufferLabelsTask;
    static const char* const GETMACROPDFCONVERTTOPDF417_TASK_CLASS;
    static jclass s_clsgetMacroPdfConvertToPdf417Task;
    static jmethodID s_midgetMacroPdfConvertToPdf417Task;
    static const char* const SETMACROPDFCONVERTTOPDF417_TASK_CLASS;
    static jclass s_clssetMacroPdfConvertToPdf417Task;
    static jmethodID s_midsetMacroPdfConvertToPdf417Task;
    static const char* const GETMACROPDFEXCLUSIVE_TASK_CLASS;
    static jclass s_clsgetMacroPdfExclusiveTask;
    static jmethodID s_midgetMacroPdfExclusiveTask;
    static const char* const SETMACROPDFEXCLUSIVE_TASK_CLASS;
    static jclass s_clssetMacroPdfExclusiveTask;
    static jmethodID s_midsetMacroPdfExclusiveTask;
    static const char* const GETMACROMICROPDF_TASK_CLASS;
    static jclass s_clsgetMacroMicroPdfTask;
    static jmethodID s_midgetMacroMicroPdfTask;
    static const char* const SETMACROMICROPDF_TASK_CLASS;
    static jclass s_clssetMacroMicroPdfTask;
    static jmethodID s_midsetMacroMicroPdfTask;
    static const char* const GETMACROMICROPDFBUFFERLABELS_TASK_CLASS;
    static jclass s_clsgetMacroMicroPdfBufferLabelsTask;
    static jmethodID s_midgetMacroMicroPdfBufferLabelsTask;
    static const char* const SETMACROMICROPDFBUFFERLABELS_TASK_CLASS;
    static jclass s_clssetMacroMicroPdfBufferLabelsTask;
    static jmethodID s_midsetMacroMicroPdfBufferLabelsTask;
    static const char* const GETMACROMICROPDFCONVERTTOMICROPDF_TASK_CLASS;
    static jclass s_clsgetMacroMicroPdfConvertToMicroPdfTask;
    static jmethodID s_midgetMacroMicroPdfConvertToMicroPdfTask;
    static const char* const SETMACROMICROPDFCONVERTTOMICROPDF_TASK_CLASS;
    static jclass s_clssetMacroMicroPdfConvertToMicroPdfTask;
    static jmethodID s_midsetMacroMicroPdfConvertToMicroPdfTask;
    static const char* const GETMACROMICROPDFEXCLUSIVE_TASK_CLASS;
    static jclass s_clsgetMacroMicroPdfExclusiveTask;
    static jmethodID s_midgetMacroMicroPdfExclusiveTask;
    static const char* const SETMACROMICROPDFEXCLUSIVE_TASK_CLASS;
    static jclass s_clssetMacroMicroPdfExclusiveTask;
    static jmethodID s_midsetMacroMicroPdfExclusiveTask;
    static const char* const GETMACROMICROPDFREPORTAPPENDINFO_TASK_CLASS;
    static jclass s_clsgetMacroMicroPdfReportAppendInfoTask;
    static jmethodID s_midgetMacroMicroPdfReportAppendInfoTask;
    static const char* const SETMACROMICROPDFREPORTAPPENDINFO_TASK_CLASS;
    static jclass s_clssetMacroMicroPdfReportAppendInfoTask;
    static jmethodID s_midsetMacroMicroPdfReportAppendInfoTask;
    static const char* const GETMATRIX2OF5_TASK_CLASS;
    static jclass s_clsgetMatrix2of5Task;
    static jmethodID s_midgetMatrix2of5Task;
    static const char* const SETMATRIX2OF5_TASK_CLASS;
    static jclass s_clssetMatrix2of5Task;
    static jmethodID s_midsetMatrix2of5Task;
    static const char* const GETMATRIX2OF5MAXLENGTH_TASK_CLASS;
    static jclass s_clsgetMatrix2of5maxLengthTask;
    static jmethodID s_midgetMatrix2of5maxLengthTask;
    static const char* const SETMATRIX2OF5MAXLENGTH_TASK_CLASS;
    static jclass s_clssetMatrix2of5maxLengthTask;
    static jmethodID s_midsetMatrix2of5maxLengthTask;
    static const char* const GETMATRIX2OF5MINLENGTH_TASK_CLASS;
    static jclass s_clsgetMatrix2of5minLengthTask;
    static jmethodID s_midgetMatrix2of5minLengthTask;
    static const char* const SETMATRIX2OF5MINLENGTH_TASK_CLASS;
    static jclass s_clssetMatrix2of5minLengthTask;
    static jmethodID s_midsetMatrix2of5minLengthTask;
    static const char* const GETMATRIX2OF5REPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetMatrix2of5reportCheckDigitTask;
    static jmethodID s_midgetMatrix2of5reportCheckDigitTask;
    static const char* const SETMATRIX2OF5REPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetMatrix2of5reportCheckDigitTask;
    static jmethodID s_midsetMatrix2of5reportCheckDigitTask;
    static const char* const GETMATRIX2OF5VERIFYCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetMatrix2of5verifyCheckDigitTask;
    static jmethodID s_midgetMatrix2of5verifyCheckDigitTask;
    static const char* const SETMATRIX2OF5VERIFYCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetMatrix2of5verifyCheckDigitTask;
    static jmethodID s_midsetMatrix2of5verifyCheckDigitTask;
    static const char* const GETMAXICODE_TASK_CLASS;
    static jclass s_clsgetMaxiCodeTask;
    static jmethodID s_midgetMaxiCodeTask;
    static const char* const SETMAXICODE_TASK_CLASS;
    static jclass s_clssetMaxiCodeTask;
    static jmethodID s_midsetMaxiCodeTask;
    static const char* const GETMICROPDF_TASK_CLASS;
    static jclass s_clsgetMicroPdfTask;
    static jmethodID s_midgetMicroPdfTask;
    static const char* const SETMICROPDF_TASK_CLASS;
    static jclass s_clssetMicroPdfTask;
    static jmethodID s_midsetMicroPdfTask;
    static const char* const GETMICROQR_TASK_CLASS;
    static jclass s_clsgetMicroQrTask;
    static jmethodID s_midgetMicroQrTask;
    static const char* const SETMICROQR_TASK_CLASS;
    static jclass s_clssetMicroQrTask;
    static jmethodID s_midsetMicroQrTask;
    static const char* const GETMSI_TASK_CLASS;
    static jclass s_clsgetMsiTask;
    static jmethodID s_midgetMsiTask;
    static const char* const SETMSI_TASK_CLASS;
    static jclass s_clssetMsiTask;
    static jmethodID s_midsetMsiTask;
    static const char* const GETMSICHECKDIGITS_TASK_CLASS;
    static jclass s_clsgetMsiCheckDigitsTask;
    static jmethodID s_midgetMsiCheckDigitsTask;
    static const char* const SETMSICHECKDIGITS_TASK_CLASS;
    static jclass s_clssetMsiCheckDigitsTask;
    static jmethodID s_midsetMsiCheckDigitsTask;
    static const char* const GETMSICHECKDIGITSCHEME_TASK_CLASS;
    static jclass s_clsgetMsiCheckDigitSchemeTask;
    static jmethodID s_midgetMsiCheckDigitSchemeTask;
    static const char* const SETMSICHECKDIGITSCHEME_TASK_CLASS;
    static jclass s_clssetMsiCheckDigitSchemeTask;
    static jmethodID s_midsetMsiCheckDigitSchemeTask;
    static const char* const GETMSIMAXLENGTH_TASK_CLASS;
    static jclass s_clsgetMsiMaxLengthTask;
    static jmethodID s_midgetMsiMaxLengthTask;
    static const char* const SETMSIMAXLENGTH_TASK_CLASS;
    static jclass s_clssetMsiMaxLengthTask;
    static jmethodID s_midsetMsiMaxLengthTask;
    static const char* const GETMSIMINLENGTH_TASK_CLASS;
    static jclass s_clsgetMsiMinLengthTask;
    static jmethodID s_midgetMsiMinLengthTask;
    static const char* const SETMSIMINLENGTH_TASK_CLASS;
    static jclass s_clssetMsiMinLengthTask;
    static jmethodID s_midsetMsiMinLengthTask;
    static const char* const GETMSIREDUNDANCY_TASK_CLASS;
    static jclass s_clsgetMsiRedundancyTask;
    static jmethodID s_midgetMsiRedundancyTask;
    static const char* const SETMSIREDUNDANCY_TASK_CLASS;
    static jclass s_clssetMsiRedundancyTask;
    static jmethodID s_midsetMsiRedundancyTask;
    static const char* const GETMSIREPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetMsiReportCheckDigitTask;
    static jmethodID s_midgetMsiReportCheckDigitTask;
    static const char* const SETMSIREPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetMsiReportCheckDigitTask;
    static jmethodID s_midsetMsiReportCheckDigitTask;
    static const char* const GETPDF417_TASK_CLASS;
    static jclass s_clsgetPdf417Task;
    static jmethodID s_midgetPdf417Task;
    static const char* const SETPDF417_TASK_CLASS;
    static jclass s_clssetPdf417Task;
    static jmethodID s_midsetPdf417Task;
    static const char* const GETSIGNATURE_TASK_CLASS;
    static jclass s_clsgetSignatureTask;
    static jmethodID s_midgetSignatureTask;
    static const char* const SETSIGNATURE_TASK_CLASS;
    static jclass s_clssetSignatureTask;
    static jmethodID s_midsetSignatureTask;
    static const char* const GETSIGNATUREIMAGEHEIGHT_TASK_CLASS;
    static jclass s_clsgetSignatureImageHeightTask;
    static jmethodID s_midgetSignatureImageHeightTask;
    static const char* const SETSIGNATUREIMAGEHEIGHT_TASK_CLASS;
    static jclass s_clssetSignatureImageHeightTask;
    static jmethodID s_midsetSignatureImageHeightTask;
    static const char* const GETSIGNATUREIMAGEWIDTH_TASK_CLASS;
    static jclass s_clsgetSignatureImageWidthTask;
    static jmethodID s_midgetSignatureImageWidthTask;
    static const char* const SETSIGNATUREIMAGEWIDTH_TASK_CLASS;
    static jclass s_clssetSignatureImageWidthTask;
    static jmethodID s_midsetSignatureImageWidthTask;
    static const char* const GETSIGNATUREIMAGEQUALITY_TASK_CLASS;
    static jclass s_clsgetSignatureImageQualityTask;
    static jmethodID s_midgetSignatureImageQualityTask;
    static const char* const SETSIGNATUREIMAGEQUALITY_TASK_CLASS;
    static jclass s_clssetSignatureImageQualityTask;
    static jmethodID s_midsetSignatureImageQualityTask;
    static const char* const GETAUSPOSTAL_TASK_CLASS;
    static jclass s_clsgetAusPostalTask;
    static jmethodID s_midgetAusPostalTask;
    static const char* const SETAUSPOSTAL_TASK_CLASS;
    static jclass s_clssetAusPostalTask;
    static jmethodID s_midsetAusPostalTask;
    static const char* const GETCANPOSTAL_TASK_CLASS;
    static jclass s_clsgetCanPostalTask;
    static jmethodID s_midgetCanPostalTask;
    static const char* const SETCANPOSTAL_TASK_CLASS;
    static jclass s_clssetCanPostalTask;
    static jmethodID s_midsetCanPostalTask;
    static const char* const GETDUTCHPOSTAL_TASK_CLASS;
    static jclass s_clsgetDutchPostalTask;
    static jmethodID s_midgetDutchPostalTask;
    static const char* const SETDUTCHPOSTAL_TASK_CLASS;
    static jclass s_clssetDutchPostalTask;
    static jmethodID s_midsetDutchPostalTask;
    static const char* const GETJAPPOSTAL_TASK_CLASS;
    static jclass s_clsgetJapPostalTask;
    static jmethodID s_midgetJapPostalTask;
    static const char* const SETJAPPOSTAL_TASK_CLASS;
    static jclass s_clssetJapPostalTask;
    static jmethodID s_midsetJapPostalTask;
    static const char* const GETUKPOSTAL_TASK_CLASS;
    static jclass s_clsgetUkPostalTask;
    static jmethodID s_midgetUkPostalTask;
    static const char* const SETUKPOSTAL_TASK_CLASS;
    static jclass s_clssetUkPostalTask;
    static jmethodID s_midsetUkPostalTask;
    static const char* const GETUKPOSTALREPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetUkPostalReportCheckDigitTask;
    static jmethodID s_midgetUkPostalReportCheckDigitTask;
    static const char* const SETUKPOSTALREPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetUkPostalReportCheckDigitTask;
    static jmethodID s_midsetUkPostalReportCheckDigitTask;
    static const char* const GETUS4STATE_TASK_CLASS;
    static jclass s_clsgetUs4stateTask;
    static jmethodID s_midgetUs4stateTask;
    static const char* const SETUS4STATE_TASK_CLASS;
    static jclass s_clssetUs4stateTask;
    static jmethodID s_midsetUs4stateTask;
    static const char* const GETUS4STATEFICS_TASK_CLASS;
    static jclass s_clsgetUs4stateFicsTask;
    static jmethodID s_midgetUs4stateFicsTask;
    static const char* const SETUS4STATEFICS_TASK_CLASS;
    static jclass s_clssetUs4stateFicsTask;
    static jmethodID s_midsetUs4stateFicsTask;
    static const char* const GETUSPLANET_TASK_CLASS;
    static jclass s_clsgetUsPlanetTask;
    static jmethodID s_midgetUsPlanetTask;
    static const char* const SETUSPLANET_TASK_CLASS;
    static jclass s_clssetUsPlanetTask;
    static jmethodID s_midsetUsPlanetTask;
    static const char* const GETUSPLANETREPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetUsPlanetReportCheckDigitTask;
    static jmethodID s_midgetUsPlanetReportCheckDigitTask;
    static const char* const SETUSPLANETREPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetUsPlanetReportCheckDigitTask;
    static jmethodID s_midsetUsPlanetReportCheckDigitTask;
    static const char* const GETUSPOSTNET_TASK_CLASS;
    static jclass s_clsgetUsPostNetTask;
    static jmethodID s_midgetUsPostNetTask;
    static const char* const SETUSPOSTNET_TASK_CLASS;
    static jclass s_clssetUsPostNetTask;
    static jmethodID s_midsetUsPostNetTask;
    static const char* const GETUSPOSTNETREPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetUsPostNetReportCheckDigitTask;
    static jmethodID s_midgetUsPostNetReportCheckDigitTask;
    static const char* const SETUSPOSTNETREPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetUsPostNetReportCheckDigitTask;
    static jmethodID s_midsetUsPostNetReportCheckDigitTask;
    static const char* const GETQRCODE_TASK_CLASS;
    static jclass s_clsgetQrCodeTask;
    static jmethodID s_midgetQrCodeTask;
    static const char* const SETQRCODE_TASK_CLASS;
    static jclass s_clssetQrCodeTask;
    static jmethodID s_midsetQrCodeTask;
    static const char* const GETGS1DATABAR_TASK_CLASS;
    static jclass s_clsgetGs1dataBarTask;
    static jmethodID s_midgetGs1dataBarTask;
    static const char* const SETGS1DATABAR_TASK_CLASS;
    static jclass s_clssetGs1dataBarTask;
    static jmethodID s_midsetGs1dataBarTask;
    static const char* const GETGS1DATABAREXPANDED_TASK_CLASS;
    static jclass s_clsgetGs1dataBarExpandedTask;
    static jmethodID s_midgetGs1dataBarExpandedTask;
    static const char* const SETGS1DATABAREXPANDED_TASK_CLASS;
    static jclass s_clssetGs1dataBarExpandedTask;
    static jmethodID s_midsetGs1dataBarExpandedTask;
    static const char* const GETGS1DATABARLIMITED_TASK_CLASS;
    static jclass s_clsgetGs1dataBarLimitedTask;
    static jmethodID s_midgetGs1dataBarLimitedTask;
    static const char* const SETGS1DATABARLIMITED_TASK_CLASS;
    static jclass s_clssetGs1dataBarLimitedTask;
    static jmethodID s_midsetGs1dataBarLimitedTask;
    static const char* const GETTLC39_TASK_CLASS;
    static jclass s_clsgetTlc39Task;
    static jmethodID s_midgetTlc39Task;
    static const char* const SETTLC39_TASK_CLASS;
    static jclass s_clssetTlc39Task;
    static jmethodID s_midsetTlc39Task;
    static const char* const GETTRIOPTIC39_TASK_CLASS;
    static jclass s_clsgetTrioptic39Task;
    static jmethodID s_midgetTrioptic39Task;
    static const char* const SETTRIOPTIC39_TASK_CLASS;
    static jclass s_clssetTrioptic39Task;
    static jmethodID s_midsetTrioptic39Task;
    static const char* const GETTRIOPTIC39REDUNDANCY_TASK_CLASS;
    static jclass s_clsgetTrioptic39RedundancyTask;
    static jmethodID s_midgetTrioptic39RedundancyTask;
    static const char* const SETTRIOPTIC39REDUNDANCY_TASK_CLASS;
    static jclass s_clssetTrioptic39RedundancyTask;
    static jmethodID s_midsetTrioptic39RedundancyTask;
    static const char* const GETUPCEANBOOKLAND_TASK_CLASS;
    static jclass s_clsgetUpcEanBooklandTask;
    static jmethodID s_midgetUpcEanBooklandTask;
    static const char* const SETUPCEANBOOKLAND_TASK_CLASS;
    static jclass s_clssetUpcEanBooklandTask;
    static jmethodID s_midsetUpcEanBooklandTask;
    static const char* const GETUPCEANBOOKLANDFORMAT_TASK_CLASS;
    static jclass s_clsgetUpcEanBooklandFormatTask;
    static jmethodID s_midgetUpcEanBooklandFormatTask;
    static const char* const SETUPCEANBOOKLANDFORMAT_TASK_CLASS;
    static jclass s_clssetUpcEanBooklandFormatTask;
    static jmethodID s_midsetUpcEanBooklandFormatTask;
    static const char* const GETUPCEANCONVERTGS1DATABARTOUPCEAN_TASK_CLASS;
    static jclass s_clsgetUpcEanConvertGs1dataBarToUpcEanTask;
    static jmethodID s_midgetUpcEanConvertGs1dataBarToUpcEanTask;
    static const char* const SETUPCEANCONVERTGS1DATABARTOUPCEAN_TASK_CLASS;
    static jclass s_clssetUpcEanConvertGs1dataBarToUpcEanTask;
    static jmethodID s_midsetUpcEanConvertGs1dataBarToUpcEanTask;
    static const char* const GETUPCEANCOUPON_TASK_CLASS;
    static jclass s_clsgetUpcEanCouponTask;
    static jmethodID s_midgetUpcEanCouponTask;
    static const char* const SETUPCEANCOUPON_TASK_CLASS;
    static jclass s_clssetUpcEanCouponTask;
    static jmethodID s_midsetUpcEanCouponTask;
    static const char* const GETUPCEANLINEARDECODE_TASK_CLASS;
    static jclass s_clsgetUpcEanLinearDecodeTask;
    static jmethodID s_midgetUpcEanLinearDecodeTask;
    static const char* const SETUPCEANLINEARDECODE_TASK_CLASS;
    static jclass s_clssetUpcEanLinearDecodeTask;
    static jmethodID s_midsetUpcEanLinearDecodeTask;
    static const char* const GETUPCEANRANDOMWEIGHTCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetUpcEanRandomWeightCheckDigitTask;
    static jmethodID s_midgetUpcEanRandomWeightCheckDigitTask;
    static const char* const SETUPCEANRANDOMWEIGHTCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetUpcEanRandomWeightCheckDigitTask;
    static jmethodID s_midsetUpcEanRandomWeightCheckDigitTask;
    static const char* const GETUPCEANRETRYCOUNT_TASK_CLASS;
    static jclass s_clsgetUpcEanRetryCountTask;
    static jmethodID s_midgetUpcEanRetryCountTask;
    static const char* const SETUPCEANRETRYCOUNT_TASK_CLASS;
    static jclass s_clssetUpcEanRetryCountTask;
    static jmethodID s_midsetUpcEanRetryCountTask;
    static const char* const GETUPCEANSECURITYLEVEL_TASK_CLASS;
    static jclass s_clsgetUpcEanSecurityLevelTask;
    static jmethodID s_midgetUpcEanSecurityLevelTask;
    static const char* const SETUPCEANSECURITYLEVEL_TASK_CLASS;
    static jclass s_clssetUpcEanSecurityLevelTask;
    static jmethodID s_midsetUpcEanSecurityLevelTask;
    static const char* const GETUPCEANSUPPLEMENTAL2_TASK_CLASS;
    static jclass s_clsgetUpcEanSupplemental2Task;
    static jmethodID s_midgetUpcEanSupplemental2Task;
    static const char* const SETUPCEANSUPPLEMENTAL2_TASK_CLASS;
    static jclass s_clssetUpcEanSupplemental2Task;
    static jmethodID s_midsetUpcEanSupplemental2Task;
    static const char* const GETUPCEANSUPPLEMENTAL5_TASK_CLASS;
    static jclass s_clsgetUpcEanSupplemental5Task;
    static jmethodID s_midgetUpcEanSupplemental5Task;
    static const char* const SETUPCEANSUPPLEMENTAL5_TASK_CLASS;
    static jclass s_clssetUpcEanSupplemental5Task;
    static jmethodID s_midsetUpcEanSupplemental5Task;
    static const char* const GETUPCEANSUPPLEMENTALMODE_TASK_CLASS;
    static jclass s_clsgetUpcEanSupplementalModeTask;
    static jmethodID s_midgetUpcEanSupplementalModeTask;
    static const char* const SETUPCEANSUPPLEMENTALMODE_TASK_CLASS;
    static jclass s_clssetUpcEanSupplementalModeTask;
    static jmethodID s_midsetUpcEanSupplementalModeTask;
    static const char* const GETUPCA_TASK_CLASS;
    static jclass s_clsgetUpcaTask;
    static jmethodID s_midgetUpcaTask;
    static const char* const SETUPCA_TASK_CLASS;
    static jclass s_clssetUpcaTask;
    static jmethodID s_midsetUpcaTask;
    static const char* const GETUPCAPREAMBLE_TASK_CLASS;
    static jclass s_clsgetUpcaPreambleTask;
    static jmethodID s_midgetUpcaPreambleTask;
    static const char* const SETUPCAPREAMBLE_TASK_CLASS;
    static jclass s_clssetUpcaPreambleTask;
    static jmethodID s_midsetUpcaPreambleTask;
    static const char* const GETUPCAREPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetUpcaReportCheckDigitTask;
    static jmethodID s_midgetUpcaReportCheckDigitTask;
    static const char* const SETUPCAREPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetUpcaReportCheckDigitTask;
    static jmethodID s_midsetUpcaReportCheckDigitTask;
    static const char* const GETUPCE0_TASK_CLASS;
    static jclass s_clsgetUpce0Task;
    static jmethodID s_midgetUpce0Task;
    static const char* const SETUPCE0_TASK_CLASS;
    static jclass s_clssetUpce0Task;
    static jmethodID s_midsetUpce0Task;
    static const char* const GETUPCE0CONVERTTOUPCA_TASK_CLASS;
    static jclass s_clsgetUpce0convertToUpcaTask;
    static jmethodID s_midgetUpce0convertToUpcaTask;
    static const char* const SETUPCE0CONVERTTOUPCA_TASK_CLASS;
    static jclass s_clssetUpce0convertToUpcaTask;
    static jmethodID s_midsetUpce0convertToUpcaTask;
    static const char* const GETUPCE0PREAMBLE_TASK_CLASS;
    static jclass s_clsgetUpce0preambleTask;
    static jmethodID s_midgetUpce0preambleTask;
    static const char* const SETUPCE0PREAMBLE_TASK_CLASS;
    static jclass s_clssetUpce0preambleTask;
    static jmethodID s_midsetUpce0preambleTask;
    static const char* const GETUPCE0REPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetUpce0reportCheckDigitTask;
    static jmethodID s_midgetUpce0reportCheckDigitTask;
    static const char* const SETUPCE0REPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetUpce0reportCheckDigitTask;
    static jmethodID s_midsetUpce0reportCheckDigitTask;
    static const char* const GETUPCE1_TASK_CLASS;
    static jclass s_clsgetUpce1Task;
    static jmethodID s_midgetUpce1Task;
    static const char* const SETUPCE1_TASK_CLASS;
    static jclass s_clssetUpce1Task;
    static jmethodID s_midsetUpce1Task;
    static const char* const GETUPCE1CONVERTTOUPCA_TASK_CLASS;
    static jclass s_clsgetUpce1convertToUpcaTask;
    static jmethodID s_midgetUpce1convertToUpcaTask;
    static const char* const SETUPCE1CONVERTTOUPCA_TASK_CLASS;
    static jclass s_clssetUpce1convertToUpcaTask;
    static jmethodID s_midsetUpce1convertToUpcaTask;
    static const char* const GETUPCE1PREAMBLE_TASK_CLASS;
    static jclass s_clsgetUpce1preambleTask;
    static jmethodID s_midgetUpce1preambleTask;
    static const char* const SETUPCE1PREAMBLE_TASK_CLASS;
    static jclass s_clssetUpce1preambleTask;
    static jmethodID s_midsetUpce1preambleTask;
    static const char* const GETUPCE1REPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clsgetUpce1reportCheckDigitTask;
    static jmethodID s_midgetUpce1reportCheckDigitTask;
    static const char* const SETUPCE1REPORTCHECKDIGIT_TASK_CLASS;
    static jclass s_clssetUpce1reportCheckDigitTask;
    static jmethodID s_midsetUpce1reportCheckDigitTask;
    static const char* const GETWEBCODE_TASK_CLASS;
    static jclass s_clsgetWebcodeTask;
    static jmethodID s_midgetWebcodeTask;
    static const char* const SETWEBCODE_TASK_CLASS;
    static jclass s_clssetWebcodeTask;
    static jmethodID s_midsetWebcodeTask;
    static const char* const GETWEBCODEDECODEGTSUBTYPE_TASK_CLASS;
    static jclass s_clsgetWebcodeDecodeGtSubtypeTask;
    static jmethodID s_midgetWebcodeDecodeGtSubtypeTask;
    static const char* const SETWEBCODEDECODEGTSUBTYPE_TASK_CLASS;
    static jclass s_clssetWebcodeDecodeGtSubtypeTask;
    static jmethodID s_midsetWebcodeDecodeGtSubtypeTask;
    static const char* const GETRSMMODELNUMBER_TASK_CLASS;
    static jclass s_clsgetRsmModelNumberTask;
    static jmethodID s_midgetRsmModelNumberTask;
    static const char* const GETRSMSERIALNUMBER_TASK_CLASS;
    static jclass s_clsgetRsmSerialNumberTask;
    static jmethodID s_midgetRsmSerialNumberTask;
    static const char* const GETRSMDATEOFMANUFACTURE_TASK_CLASS;
    static jclass s_clsgetRsmDateOfManufactureTask;
    static jmethodID s_midgetRsmDateOfManufactureTask;
    static const char* const GETRSMDATEOFSERVICE_TASK_CLASS;
    static jclass s_clsgetRsmDateOfServiceTask;
    static jmethodID s_midgetRsmDateOfServiceTask;
    static const char* const GETRSMBLUETOOTHADDRESS_TASK_CLASS;
    static jclass s_clsgetRsmBluetoothAddressTask;
    static jmethodID s_midgetRsmBluetoothAddressTask;
    static const char* const GETRSMFIRMWAREVERSION_TASK_CLASS;
    static jclass s_clsgetRsmFirmwareVersionTask;
    static jmethodID s_midgetRsmFirmwareVersionTask;
    static const char* const GETRSMDEVICECLASS_TASK_CLASS;
    static jclass s_clsgetRsmDeviceClassTask;
    static jmethodID s_midgetRsmDeviceClassTask;
    static const char* const GETRSMBATTERYSTATUS_TASK_CLASS;
    static jclass s_clsgetRsmBatteryStatusTask;
    static jmethodID s_midgetRsmBatteryStatusTask;
    static const char* const GETRSMBATTERYCAPACITY_TASK_CLASS;
    static jclass s_clsgetRsmBatteryCapacityTask;
    static jmethodID s_midgetRsmBatteryCapacityTask;
    static const char* const GETRSMBATTERYID_TASK_CLASS;
    static jclass s_clsgetRsmBatteryIdTask;
    static jmethodID s_midgetRsmBatteryIdTask;
    static const char* const GETRSMBLUETOOTHAUTHENTICATION_TASK_CLASS;
    static jclass s_clsgetRsmBluetoothAuthenticationTask;
    static jmethodID s_midgetRsmBluetoothAuthenticationTask;
    static const char* const SETRSMBLUETOOTHAUTHENTICATION_TASK_CLASS;
    static jclass s_clssetRsmBluetoothAuthenticationTask;
    static jmethodID s_midsetRsmBluetoothAuthenticationTask;
    static const char* const GETRSMBLUETOOTHENCRYPTION_TASK_CLASS;
    static jclass s_clsgetRsmBluetoothEncryptionTask;
    static jmethodID s_midgetRsmBluetoothEncryptionTask;
    static const char* const SETRSMBLUETOOTHENCRYPTION_TASK_CLASS;
    static jclass s_clssetRsmBluetoothEncryptionTask;
    static jmethodID s_midsetRsmBluetoothEncryptionTask;
    static const char* const GETRSMBLUETOOTHPINCODE_TASK_CLASS;
    static jclass s_clsgetRsmBluetoothPinCodeTask;
    static jmethodID s_midgetRsmBluetoothPinCodeTask;
    static const char* const SETRSMBLUETOOTHPINCODE_TASK_CLASS;
    static jclass s_clssetRsmBluetoothPinCodeTask;
    static jmethodID s_midsetRsmBluetoothPinCodeTask;
    static const char* const GETRSMBLUETOOTHPINCODETYPE_TASK_CLASS;
    static jclass s_clsgetRsmBluetoothPinCodeTypeTask;
    static jmethodID s_midgetRsmBluetoothPinCodeTypeTask;
    static const char* const SETRSMBLUETOOTHPINCODETYPE_TASK_CLASS;
    static jclass s_clssetRsmBluetoothPinCodeTypeTask;
    static jmethodID s_midsetRsmBluetoothPinCodeTypeTask;
    static const char* const GETRSMBLUETOOTHRECONNECTIONATTEMPTS_TASK_CLASS;
    static jclass s_clsgetRsmBluetoothReconnectionAttemptsTask;
    static jmethodID s_midgetRsmBluetoothReconnectionAttemptsTask;
    static const char* const SETRSMBLUETOOTHRECONNECTIONATTEMPTS_TASK_CLASS;
    static jclass s_clssetRsmBluetoothReconnectionAttemptsTask;
    static jmethodID s_midsetRsmBluetoothReconnectionAttemptsTask;
    static const char* const GETRSMBLUETOOTHBEEPONRECONNECTATTEMPT_TASK_CLASS;
    static jclass s_clsgetRsmBluetoothBeepOnReconnectAttemptTask;
    static jmethodID s_midgetRsmBluetoothBeepOnReconnectAttemptTask;
    static const char* const SETRSMBLUETOOTHBEEPONRECONNECTATTEMPT_TASK_CLASS;
    static jclass s_clssetRsmBluetoothBeepOnReconnectAttemptTask;
    static jmethodID s_midsetRsmBluetoothBeepOnReconnectAttemptTask;
    static const char* const GETRSMBLUETOOTHHIDAUTORECONNECT_TASK_CLASS;
    static jclass s_clsgetRsmBluetoothHidAutoReconnectTask;
    static jmethodID s_midgetRsmBluetoothHidAutoReconnectTask;
    static const char* const SETRSMBLUETOOTHHIDAUTORECONNECT_TASK_CLASS;
    static jclass s_clssetRsmBluetoothHidAutoReconnectTask;
    static jmethodID s_midsetRsmBluetoothHidAutoReconnectTask;
    static const char* const GETRSMBLUETOOTHFRIENDLYNAME_TASK_CLASS;
    static jclass s_clsgetRsmBluetoothFriendlyNameTask;
    static jmethodID s_midgetRsmBluetoothFriendlyNameTask;
    static const char* const SETRSMBLUETOOTHFRIENDLYNAME_TASK_CLASS;
    static jclass s_clssetRsmBluetoothFriendlyNameTask;
    static jmethodID s_midsetRsmBluetoothFriendlyNameTask;
    static const char* const GETRSMBLUETOOTHINQUIRYMODE_TASK_CLASS;
    static jclass s_clsgetRsmBluetoothInquiryModeTask;
    static jmethodID s_midgetRsmBluetoothInquiryModeTask;
    static const char* const SETRSMBLUETOOTHINQUIRYMODE_TASK_CLASS;
    static jclass s_clssetRsmBluetoothInquiryModeTask;
    static jmethodID s_midsetRsmBluetoothInquiryModeTask;
    static const char* const GETRSMBLUETOOTHAUTORECONNECT_TASK_CLASS;
    static jclass s_clsgetRsmBluetoothAutoReconnectTask;
    static jmethodID s_midgetRsmBluetoothAutoReconnectTask;
    static const char* const SETRSMBLUETOOTHAUTORECONNECT_TASK_CLASS;
    static jclass s_clssetRsmBluetoothAutoReconnectTask;
    static jmethodID s_midsetRsmBluetoothAutoReconnectTask;
    static const char* const GETRSMFORCESAVEPAIRINGBARCODE_TASK_CLASS;
    static jclass s_clsgetRsmForceSavePairingBarcodeTask;
    static jmethodID s_midgetRsmForceSavePairingBarcodeTask;
    static const char* const SETRSMFORCESAVEPAIRINGBARCODE_TASK_CLASS;
    static jclass s_clssetRsmForceSavePairingBarcodeTask;
    static jmethodID s_midsetRsmForceSavePairingBarcodeTask;
    static const char* const GETRSMLOWBATTERYINDICATION_TASK_CLASS;
    static jclass s_clsgetRsmLowBatteryIndicationTask;
    static jmethodID s_midgetRsmLowBatteryIndicationTask;
    static const char* const SETRSMLOWBATTERYINDICATION_TASK_CLASS;
    static jclass s_clssetRsmLowBatteryIndicationTask;
    static jmethodID s_midsetRsmLowBatteryIndicationTask;
    static const char* const GETRSMLOWBATTERYINDICATIONCYCLE_TASK_CLASS;
    static jclass s_clsgetRsmLowBatteryIndicationCycleTask;
    static jmethodID s_midgetRsmLowBatteryIndicationCycleTask;
    static const char* const SETRSMLOWBATTERYINDICATIONCYCLE_TASK_CLASS;
    static jclass s_clssetRsmLowBatteryIndicationCycleTask;
    static jmethodID s_midsetRsmLowBatteryIndicationCycleTask;
    static const char* const GETRSMSCANLINEWIDTH_TASK_CLASS;
    static jclass s_clsgetRsmScanLineWidthTask;
    static jmethodID s_midgetRsmScanLineWidthTask;
    static const char* const SETRSMSCANLINEWIDTH_TASK_CLASS;
    static jclass s_clssetRsmScanLineWidthTask;
    static jmethodID s_midsetRsmScanLineWidthTask;
    static const char* const GETRSMGOODSCANSDELAY_TASK_CLASS;
    static jclass s_clsgetRsmGoodScansDelayTask;
    static jmethodID s_midgetRsmGoodScansDelayTask;
    static const char* const SETRSMGOODSCANSDELAY_TASK_CLASS;
    static jclass s_clssetRsmGoodScansDelayTask;
    static jmethodID s_midsetRsmGoodScansDelayTask;
    static const char* const GETRSMDECODEFEEDBACK_TASK_CLASS;
    static jclass s_clsgetRsmDecodeFeedbackTask;
    static jmethodID s_midgetRsmDecodeFeedbackTask;
    static const char* const SETRSMDECODEFEEDBACK_TASK_CLASS;
    static jclass s_clssetRsmDecodeFeedbackTask;
    static jmethodID s_midsetRsmDecodeFeedbackTask;
    static const char* const GETRSMIGNORECODE128USPS_TASK_CLASS;
    static jclass s_clsgetRsmIgnoreCode128UspsTask;
    static jmethodID s_midgetRsmIgnoreCode128UspsTask;
    static const char* const SETRSMIGNORECODE128USPS_TASK_CLASS;
    static jclass s_clssetRsmIgnoreCode128UspsTask;
    static jmethodID s_midsetRsmIgnoreCode128UspsTask;
    static const char* const GETRSMSCANTRIGGERWAKEUP_TASK_CLASS;
    static jclass s_clsgetRsmScanTriggerWakeupTask;
    static jmethodID s_midgetRsmScanTriggerWakeupTask;
    static const char* const SETRSMSCANTRIGGERWAKEUP_TASK_CLASS;
    static jclass s_clssetRsmScanTriggerWakeupTask;
    static jmethodID s_midsetRsmScanTriggerWakeupTask;
    static const char* const GETRSMMEMS_TASK_CLASS;
    static jclass s_clsgetRsmMemsTask;
    static jmethodID s_midgetRsmMemsTask;
    static const char* const SETRSMMEMS_TASK_CLASS;
    static jclass s_clssetRsmMemsTask;
    static jmethodID s_midsetRsmMemsTask;
    static const char* const GETRSMPROXIMITYENABLE_TASK_CLASS;
    static jclass s_clsgetRsmProximityEnableTask;
    static jmethodID s_midgetRsmProximityEnableTask;
    static const char* const SETRSMPROXIMITYENABLE_TASK_CLASS;
    static jclass s_clssetRsmProximityEnableTask;
    static jmethodID s_midsetRsmProximityEnableTask;
    static const char* const GETRSMPROXIMITYCONTINUOUS_TASK_CLASS;
    static jclass s_clsgetRsmProximityContinuousTask;
    static jmethodID s_midgetRsmProximityContinuousTask;
    static const char* const SETRSMPROXIMITYCONTINUOUS_TASK_CLASS;
    static jclass s_clssetRsmProximityContinuousTask;
    static jmethodID s_midsetRsmProximityContinuousTask;
    static const char* const GETRSMPROXIMITYDISTANCE_TASK_CLASS;
    static jclass s_clsgetRsmProximityDistanceTask;
    static jmethodID s_midgetRsmProximityDistanceTask;
    static const char* const SETRSMPROXIMITYDISTANCE_TASK_CLASS;
    static jclass s_clssetRsmProximityDistanceTask;
    static jmethodID s_midsetRsmProximityDistanceTask;
    static const char* const GETRSMPAGINGENABLE_TASK_CLASS;
    static jclass s_clsgetRsmPagingEnableTask;
    static jmethodID s_midgetRsmPagingEnableTask;
    static const char* const SETRSMPAGINGENABLE_TASK_CLASS;
    static jclass s_clssetRsmPagingEnableTask;
    static jmethodID s_midsetRsmPagingEnableTask;
    static const char* const GETRSMPAGINGBEEPSEQUENCE_TASK_CLASS;
    static jclass s_clsgetRsmPagingBeepSequenceTask;
    static jmethodID s_midgetRsmPagingBeepSequenceTask;
    static const char* const SETRSMPAGINGBEEPSEQUENCE_TASK_CLASS;
    static jclass s_clssetRsmPagingBeepSequenceTask;
    static jmethodID s_midsetRsmPagingBeepSequenceTask;
    static const char* const ENUMERATE_TASK_CLASS;
    static jclass s_clsenumerateTask;
    static jmethodID s_midenumerateTask;
    static const char* const ENABLE_TASK_CLASS;
    static jclass s_clsenableTask;
    static jmethodID s_midenableTask;
    static const char* const REGISTERBLUETOOTHSTATUS_TASK_CLASS;
    static jclass s_clsregisterBluetoothStatusTask;
    static jmethodID s_midregisterBluetoothStatusTask;
    static const char* const START_TASK_CLASS;
    static jclass s_clsstartTask;
    static jmethodID s_midstartTask;
    static const char* const STOP_TASK_CLASS;
    static jclass s_clsstopTask;
    static jmethodID s_midstopTask;
    static const char* const DISABLE_TASK_CLASS;
    static jclass s_clsdisableTask;
    static jmethodID s_middisableTask;
    static const char* const BARCODE_RECOGNIZE_TASK_CLASS;
    static jclass s_clsbarcode_recognizeTask;
    static jmethodID s_midbarcode_recognizeTask;
    static const char* const GETSUPPORTEDPROPERTIES_TASK_CLASS;
    static jclass s_clsgetSupportedPropertiesTask;
    static jmethodID s_midgetSupportedPropertiesTask;
    static const char* const TAKE_TASK_CLASS;
    static jclass s_clstakeTask;
    static jmethodID s_midtakeTask;
    static const char* const TAKE_BARCODE_TASK_CLASS;
    static jclass s_clstake_barcodeTask;
    static jmethodID s_midtake_barcodeTask;
    static const char* const COMMANDREMOTESCANNER_TASK_CLASS;
    static jclass s_clscommandRemoteScannerTask;
    static jmethodID s_midcommandRemoteScannerTask;
    static const char* const GETPROPERTY_TASK_CLASS;
    static jclass s_clsgetPropertyTask;
    static jmethodID s_midgetPropertyTask;
    static const char* const GETPROPERTIES_TASK_CLASS;
    static jclass s_clsgetPropertiesTask;
    static jmethodID s_midgetPropertiesTask;
    static const char* const GETALLPROPERTIES_TASK_CLASS;
    static jclass s_clsgetAllPropertiesTask;
    static jmethodID s_midgetAllPropertiesTask;
    static const char* const SETPROPERTY_TASK_CLASS;
    static jclass s_clssetPropertyTask;
    static jmethodID s_midsetPropertyTask;
    static const char* const SETPROPERTIES_TASK_CLASS;
    static jclass s_clssetPropertiesTask;
    static jmethodID s_midsetPropertiesTask;

    //IRhoApiDefaultId staff
    static const char* const IDEFAULTID_CLASS;
    static jclass s_clsIDefaultId;
    static jmethodID s_midGetDefaultID;
    static jmethodID s_midSetDefaultID;

    static JNIEnv* jniInit(JNIEnv* env);
    static JNIEnv* jniInit();

    static jobject getFactory(JNIEnv* env);
    static jobject getSingleton(JNIEnv* env);

    rho::String m_id;
    jobject getObject(JNIEnv* env);
public:
    static void setJavaFactory(JNIEnv* env, jobject jFactory);

    static rho::String getDefaultID();
    static void setDefaultID(const rho::String& id); 

    CBarcodeChainwayBase(const rho::String& id)
        : MethodExecutorJni(), m_id(id)
        {}
    virtual ~CBarcodeChainwayBase() {}
};

template <typename T>
class CBarcodeChainwayProxy : public CBarcodeChainwayBase
{
public:
    CBarcodeChainwayProxy(const rho::String& id)
        : CBarcodeChainwayBase(id)
        {}
    virtual ~CBarcodeChainwayProxy() {}

    void getAutoEnter(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getAutoEnter";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetAutoEnterTask, s_midgetAutoEnterTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setAutoEnter(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setAutoEnter";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'autoEnter' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'autoEnter' must be set");
            return;
        }
        jholder< jboolean > jhautoEnter = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetAutoEnterTask, s_midsetAutoEnterTask,
                    jhObject.get(), 
                    jhautoEnter.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getAutoTab(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getAutoTab";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetAutoTabTask, s_midgetAutoTabTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setAutoTab(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setAutoTab";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'autoTab' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'autoTab' must be set");
            return;
        }
        jholder< jboolean > jhautoTab = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetAutoTabTask, s_midsetAutoTabTask,
                    jhObject.get(), 
                    jhautoTab.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getHapticFeedback(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getHapticFeedback";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetHapticFeedbackTask, s_midgetHapticFeedbackTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setHapticFeedback(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setHapticFeedback";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jholder< jboolean > jhhapticFeedback = (argsAdapter.size() <= 0) ?
            rho_cast<jboolean>(env, static_cast<bool>(true)) : 
                rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetHapticFeedbackTask, s_midsetHapticFeedbackTask,
                    jhObject.get(), 
                    jhhapticFeedback.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getLinearSecurityLevel(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getLinearSecurityLevel";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetLinearSecurityLevelTask, s_midgetLinearSecurityLevelTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setLinearSecurityLevel(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setLinearSecurityLevel";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'linearSecurityLevel' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'linearSecurityLevel' must be set");
            return;
        }
        jholder< jstring > jhlinearSecurityLevel = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetLinearSecurityLevelTask, s_midsetLinearSecurityLevelTask,
                    jhObject.get(), 
                    jhlinearSecurityLevel.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getScanTimeout(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getScanTimeout";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetScanTimeoutTask, s_midgetScanTimeoutTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setScanTimeout(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setScanTimeout";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'scanTimeout' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'scanTimeout' must be set");
            return;
        }
        jholder< jint > jhscanTimeout = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetScanTimeoutTask, s_midsetScanTimeoutTask,
                    jhObject.get(), 
                    jhscanTimeout.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRasterMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRasterMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRasterModeTask, s_midgetRasterModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRasterMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRasterMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rasterMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rasterMode' must be set");
            return;
        }
        jholder< jstring > jhrasterMode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRasterModeTask, s_midsetRasterModeTask,
                    jhObject.get(), 
                    jhrasterMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRasterHeight(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRasterHeight";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRasterHeightTask, s_midgetRasterHeightTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRasterHeight(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRasterHeight";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rasterHeight' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rasterHeight' must be set");
            return;
        }
        jholder< jint > jhrasterHeight = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRasterHeightTask, s_midsetRasterHeightTask,
                    jhObject.get(), 
                    jhrasterHeight.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getAimType(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getAimType";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetAimTypeTask, s_midgetAimTypeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setAimType(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setAimType";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'aimType' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'aimType' must be set");
            return;
        }
        jholder< jstring > jhaimType = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetAimTypeTask, s_midsetAimTypeTask,
                    jhObject.get(), 
                    jhaimType.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getTimedAimDuration(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getTimedAimDuration";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetTimedAimDurationTask, s_midgetTimedAimDurationTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setTimedAimDuration(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setTimedAimDuration";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'timedAimDuration' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'timedAimDuration' must be set");
            return;
        }
        jholder< jint > jhtimedAimDuration = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetTimedAimDurationTask, s_midsetTimedAimDurationTask,
                    jhObject.get(), 
                    jhtimedAimDuration.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getSameSymbolTimeout(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getSameSymbolTimeout";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetSameSymbolTimeoutTask, s_midgetSameSymbolTimeoutTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setSameSymbolTimeout(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setSameSymbolTimeout";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'sameSymbolTimeout' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'sameSymbolTimeout' must be set");
            return;
        }
        jholder< jint > jhsameSymbolTimeout = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetSameSymbolTimeoutTask, s_midsetSameSymbolTimeoutTask,
                    jhObject.get(), 
                    jhsameSymbolTimeout.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDifferentSymbolTimeout(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDifferentSymbolTimeout";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDifferentSymbolTimeoutTask, s_midgetDifferentSymbolTimeoutTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDifferentSymbolTimeout(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDifferentSymbolTimeout";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'differentSymbolTimeout' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'differentSymbolTimeout' must be set");
            return;
        }
        jholder< jint > jhdifferentSymbolTimeout = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDifferentSymbolTimeoutTask, s_midsetDifferentSymbolTimeoutTask,
                    jhObject.get(), 
                    jhdifferentSymbolTimeout.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getAimMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getAimMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetAimModeTask, s_midgetAimModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setAimMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setAimMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'aimMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'aimMode' must be set");
            return;
        }
        jholder< jstring > jhaimMode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetAimModeTask, s_midsetAimModeTask,
                    jhObject.get(), 
                    jhaimMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getPicklistMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getPicklistMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetPicklistModeTask, s_midgetPicklistModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setPicklistMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setPicklistMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'picklistMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'picklistMode' must be set");
            return;
        }
        jholder< jstring > jhpicklistMode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetPicklistModeTask, s_midsetPicklistModeTask,
                    jhObject.get(), 
                    jhpicklistMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getViewfinderMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getViewfinderMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetViewfinderModeTask, s_midgetViewfinderModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setViewfinderMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setViewfinderMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'viewfinderMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'viewfinderMode' must be set");
            return;
        }
        jholder< jstring > jhviewfinderMode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetViewfinderModeTask, s_midsetViewfinderModeTask,
                    jhObject.get(), 
                    jhviewfinderMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getViewfinderX(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getViewfinderX";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetViewfinderXTask, s_midgetViewfinderXTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setViewfinderX(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setViewfinderX";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'viewfinderX' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'viewfinderX' must be set");
            return;
        }
        jholder< jint > jhviewfinderX = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetViewfinderXTask, s_midsetViewfinderXTask,
                    jhObject.get(), 
                    jhviewfinderX.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getViewfinderY(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getViewfinderY";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetViewfinderYTask, s_midgetViewfinderYTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setViewfinderY(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setViewfinderY";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'viewfinderY' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'viewfinderY' must be set");
            return;
        }
        jholder< jint > jhviewfinderY = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetViewfinderYTask, s_midsetViewfinderYTask,
                    jhObject.get(), 
                    jhviewfinderY.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getViewfinderWidth(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getViewfinderWidth";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetViewfinderWidthTask, s_midgetViewfinderWidthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setViewfinderWidth(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setViewfinderWidth";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'viewfinderWidth' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'viewfinderWidth' must be set");
            return;
        }
        jholder< jint > jhviewfinderWidth = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetViewfinderWidthTask, s_midsetViewfinderWidthTask,
                    jhObject.get(), 
                    jhviewfinderWidth.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getViewfinderHeight(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getViewfinderHeight";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetViewfinderHeightTask, s_midgetViewfinderHeightTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setViewfinderHeight(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setViewfinderHeight";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'viewfinderHeight' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'viewfinderHeight' must be set");
            return;
        }
        jholder< jint > jhviewfinderHeight = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetViewfinderHeightTask, s_midsetViewfinderHeightTask,
                    jhObject.get(), 
                    jhviewfinderHeight.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getViewfinderFeedback(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getViewfinderFeedback";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetViewfinderFeedbackTask, s_midgetViewfinderFeedbackTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setViewfinderFeedback(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setViewfinderFeedback";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'viewfinderFeedback' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'viewfinderFeedback' must be set");
            return;
        }
        jholder< jstring > jhviewfinderFeedback = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetViewfinderFeedbackTask, s_midsetViewfinderFeedbackTask,
                    jhObject.get(), 
                    jhviewfinderFeedback.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getViewfinderFeedbackTime(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getViewfinderFeedbackTime";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetViewfinderFeedbackTimeTask, s_midgetViewfinderFeedbackTimeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setViewfinderFeedbackTime(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setViewfinderFeedbackTime";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'viewfinderFeedbackTime' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'viewfinderFeedbackTime' must be set");
            return;
        }
        jholder< jint > jhviewfinderFeedbackTime = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetViewfinderFeedbackTimeTask, s_midsetViewfinderFeedbackTimeTask,
                    jhObject.get(), 
                    jhviewfinderFeedbackTime.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getFocusMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getFocusMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetFocusModeTask, s_midgetFocusModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setFocusMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setFocusMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'focusMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'focusMode' must be set");
            return;
        }
        jholder< jstring > jhfocusMode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetFocusModeTask, s_midsetFocusModeTask,
                    jhObject.get(), 
                    jhfocusMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getIlluminationMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getIlluminationMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetIlluminationModeTask, s_midgetIlluminationModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setIlluminationMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setIlluminationMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'illuminationMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'illuminationMode' must be set");
            return;
        }
        jholder< jstring > jhilluminationMode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetIlluminationModeTask, s_midsetIlluminationModeTask,
                    jhObject.get(), 
                    jhilluminationMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDpmMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDpmMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDpmModeTask, s_midgetDpmModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDpmMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDpmMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'dpmMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'dpmMode' must be set");
            return;
        }
        jholder< jboolean > jhdpmMode = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDpmModeTask, s_midsetDpmModeTask,
                    jhObject.get(), 
                    jhdpmMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getInverse1dMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getInverse1dMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetInverse1dModeTask, s_midgetInverse1dModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setInverse1dMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setInverse1dMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'inverse1dMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'inverse1dMode' must be set");
            return;
        }
        jholder< jstring > jhinverse1dMode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetInverse1dModeTask, s_midsetInverse1dModeTask,
                    jhObject.get(), 
                    jhinverse1dMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getPoorQuality1dMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getPoorQuality1dMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetPoorQuality1dModeTask, s_midgetPoorQuality1dModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setPoorQuality1dMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setPoorQuality1dMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'poorQuality1dMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'poorQuality1dMode' must be set");
            return;
        }
        jholder< jboolean > jhpoorQuality1dMode = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetPoorQuality1dModeTask, s_midsetPoorQuality1dModeTask,
                    jhObject.get(), 
                    jhpoorQuality1dMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getBeamWidth(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getBeamWidth";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetBeamWidthTask, s_midgetBeamWidthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setBeamWidth(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setBeamWidth";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'beamWidth' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'beamWidth' must be set");
            return;
        }
        jholder< jstring > jhbeamWidth = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetBeamWidthTask, s_midsetBeamWidthTask,
                    jhObject.get(), 
                    jhbeamWidth.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDbpMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDbpMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDbpModeTask, s_midgetDbpModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDbpMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDbpMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'dbpMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'dbpMode' must be set");
            return;
        }
        jholder< jstring > jhdbpMode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDbpModeTask, s_midsetDbpModeTask,
                    jhObject.get(), 
                    jhdbpMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getKlasseEins(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getKlasseEins";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetKlasseEinsTask, s_midgetKlasseEinsTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setKlasseEins(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setKlasseEins";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'klasseEins' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'klasseEins' must be set");
            return;
        }
        jholder< jboolean > jhklasseEins = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetKlasseEinsTask, s_midsetKlasseEinsTask,
                    jhObject.get(), 
                    jhklasseEins.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getAdaptiveScanning(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getAdaptiveScanning";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetAdaptiveScanningTask, s_midgetAdaptiveScanningTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setAdaptiveScanning(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setAdaptiveScanning";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'adaptiveScanning' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'adaptiveScanning' must be set");
            return;
        }
        jholder< jboolean > jhadaptiveScanning = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetAdaptiveScanningTask, s_midsetAdaptiveScanningTask,
                    jhObject.get(), 
                    jhadaptiveScanning.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getBidirectionalRedundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getBidirectionalRedundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetBidirectionalRedundancyTask, s_midgetBidirectionalRedundancyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setBidirectionalRedundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setBidirectionalRedundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'bidirectionalRedundancy' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'bidirectionalRedundancy' must be set");
            return;
        }
        jholder< jboolean > jhbidirectionalRedundancy = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetBidirectionalRedundancyTask, s_midsetBidirectionalRedundancyTask,
                    jhObject.get(), 
                    jhbidirectionalRedundancy.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getBarcodeDataFormat(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getBarcodeDataFormat";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetBarcodeDataFormatTask, s_midgetBarcodeDataFormatTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setBarcodeDataFormat(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setBarcodeDataFormat";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'barcodeDataFormat' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'barcodeDataFormat' must be set");
            return;
        }
        jholder< jstring > jhbarcodeDataFormat = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetBarcodeDataFormatTask, s_midsetBarcodeDataFormatTask,
                    jhObject.get(), 
                    jhbarcodeDataFormat.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDataBufferSize(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDataBufferSize";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDataBufferSizeTask, s_midgetDataBufferSizeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDataBufferSize(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDataBufferSize";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'dataBufferSize' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'dataBufferSize' must be set");
            return;
        }
        jholder< jint > jhdataBufferSize = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDataBufferSizeTask, s_midsetDataBufferSizeTask,
                    jhObject.get(), 
                    jhdataBufferSize.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getConnectionIdleTimeout(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getConnectionIdleTimeout";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetConnectionIdleTimeoutTask, s_midgetConnectionIdleTimeoutTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setConnectionIdleTimeout(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setConnectionIdleTimeout";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'connectionIdleTimeout' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'connectionIdleTimeout' must be set");
            return;
        }
        jholder< jint > jhconnectionIdleTimeout = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetConnectionIdleTimeoutTask, s_midsetConnectionIdleTimeoutTask,
                    jhObject.get(), 
                    jhconnectionIdleTimeout.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDisconnectBtOnDisable(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDisconnectBtOnDisable";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDisconnectBtOnDisableTask, s_midgetDisconnectBtOnDisableTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDisconnectBtOnDisable(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDisconnectBtOnDisable";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'disconnectBtOnDisable' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'disconnectBtOnDisable' must be set");
            return;
        }
        jholder< jboolean > jhdisconnectBtOnDisable = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDisconnectBtOnDisableTask, s_midsetDisconnectBtOnDisableTask,
                    jhObject.get(), 
                    jhdisconnectBtOnDisable.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDisplayBtAddressBarcodeOnEnable(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDisplayBtAddressBarcodeOnEnable";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDisplayBtAddressBarcodeOnEnableTask, s_midgetDisplayBtAddressBarcodeOnEnableTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDisplayBtAddressBarcodeOnEnable(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDisplayBtAddressBarcodeOnEnable";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'displayBtAddressBarcodeOnEnable' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'displayBtAddressBarcodeOnEnable' must be set");
            return;
        }
        jholder< jboolean > jhdisplayBtAddressBarcodeOnEnable = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDisplayBtAddressBarcodeOnEnableTask, s_midsetDisplayBtAddressBarcodeOnEnableTask,
                    jhObject.get(), 
                    jhdisplayBtAddressBarcodeOnEnable.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getEnableTimeout(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getEnableTimeout";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetEnableTimeoutTask, s_midgetEnableTimeoutTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setEnableTimeout(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setEnableTimeout";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'enableTimeout' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'enableTimeout' must be set");
            return;
        }
        jholder< jint > jhenableTimeout = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetEnableTimeoutTask, s_midsetEnableTimeoutTask,
                    jhObject.get(), 
                    jhenableTimeout.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getFriendlyName(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getFriendlyName";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetFriendlyNameTask, s_midgetFriendlyNameTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getLcdMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getLcdMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetLcdModeTask, s_midgetLcdModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setLcdMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setLcdMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jholder< jboolean > jhlcdMode = (argsAdapter.size() <= 0) ?
            rho_cast<jboolean>(env, static_cast<bool>(false)) : 
                rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetLcdModeTask, s_midsetLcdModeTask,
                    jhObject.get(), 
                    jhlcdMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getLowBatteryScan(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getLowBatteryScan";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetLowBatteryScanTask, s_midgetLowBatteryScanTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setLowBatteryScan(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setLowBatteryScan";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jholder< jboolean > jhlowBatteryScan = (argsAdapter.size() <= 0) ?
            rho_cast<jboolean>(env, static_cast<bool>(false)) : 
                rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetLowBatteryScanTask, s_midsetLowBatteryScanTask,
                    jhObject.get(), 
                    jhlowBatteryScan.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getTriggerConnected(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getTriggerConnected";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetTriggerConnectedTask, s_midgetTriggerConnectedTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setTriggerConnected(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setTriggerConnected";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jholder< jboolean > jhtriggerConnected = (argsAdapter.size() <= 0) ?
            rho_cast<jboolean>(env, static_cast<bool>(true)) : 
                rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetTriggerConnectedTask, s_midsetTriggerConnectedTask,
                    jhObject.get(), 
                    jhtriggerConnected.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDisableScannerDuringNavigate(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDisableScannerDuringNavigate";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDisableScannerDuringNavigateTask, s_midgetDisableScannerDuringNavigateTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDisableScannerDuringNavigate(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDisableScannerDuringNavigate";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jholder< jboolean > jhdisableScannerDuringNavigate = (argsAdapter.size() <= 0) ?
            rho_cast<jboolean>(env, static_cast<bool>(true)) : 
                rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDisableScannerDuringNavigateTask, s_midsetDisableScannerDuringNavigateTask,
                    jhObject.get(), 
                    jhdisableScannerDuringNavigate.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDecodeVolume(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDecodeVolume";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDecodeVolumeTask, s_midgetDecodeVolumeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDecodeVolume(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDecodeVolume";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jholder< jint > jhdecodeVolume = (argsAdapter.size() <= 0) ?
            rho_cast<jint>(env, static_cast<int>(5)) : 
                rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDecodeVolumeTask, s_midsetDecodeVolumeTask,
                    jhObject.get(), 
                    jhdecodeVolume.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDecodeDuration(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDecodeDuration";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDecodeDurationTask, s_midgetDecodeDurationTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDecodeDuration(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDecodeDuration";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jholder< jint > jhdecodeDuration = (argsAdapter.size() <= 0) ?
            rho_cast<jint>(env, static_cast<int>(250)) : 
                rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDecodeDurationTask, s_midsetDecodeDurationTask,
                    jhObject.get(), 
                    jhdecodeDuration.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDecodeFrequency(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDecodeFrequency";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDecodeFrequencyTask, s_midgetDecodeFrequencyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDecodeFrequency(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDecodeFrequency";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jholder< jint > jhdecodeFrequency = (argsAdapter.size() <= 0) ?
            rho_cast<jint>(env, static_cast<int>(3000)) : 
                rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDecodeFrequencyTask, s_midsetDecodeFrequencyTask,
                    jhObject.get(), 
                    jhdecodeFrequency.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getInvalidDecodeFrequency(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getInvalidDecodeFrequency";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetInvalidDecodeFrequencyTask, s_midgetInvalidDecodeFrequencyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setInvalidDecodeFrequency(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setInvalidDecodeFrequency";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jholder< jint > jhinvalidDecodeFrequency = (argsAdapter.size() <= 0) ?
            rho_cast<jint>(env, static_cast<int>(2500)) : 
                rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetInvalidDecodeFrequencyTask, s_midsetInvalidDecodeFrequencyTask,
                    jhObject.get(), 
                    jhinvalidDecodeFrequency.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDecodeSound(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDecodeSound";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDecodeSoundTask, s_midgetDecodeSoundTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDecodeSound(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDecodeSound";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'decodeSound' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'decodeSound' must be set");
            return;
        }
        jholder< jstring > jhdecodeSound = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDecodeSoundTask, s_midsetDecodeSoundTask,
                    jhObject.get(), 
                    jhdecodeSound.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getInvalidDecodeSound(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getInvalidDecodeSound";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetInvalidDecodeSoundTask, s_midgetInvalidDecodeSoundTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setInvalidDecodeSound(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setInvalidDecodeSound";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'invalidDecodeSound' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'invalidDecodeSound' must be set");
            return;
        }
        jholder< jstring > jhinvalidDecodeSound = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetInvalidDecodeSoundTask, s_midsetInvalidDecodeSoundTask,
                    jhObject.get(), 
                    jhinvalidDecodeSound.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getScannerType(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getScannerType";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetScannerTypeTask, s_midgetScannerTypeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getAllDecoders(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getAllDecoders";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetAllDecodersTask, s_midgetAllDecodersTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setAllDecoders(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setAllDecoders";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'allDecoders' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'allDecoders' must be set");
            return;
        }
        jholder< jboolean > jhallDecoders = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetAllDecodersTask, s_midsetAllDecodersTask,
                    jhObject.get(), 
                    jhallDecoders.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getAztec(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getAztec";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetAztecTask, s_midgetAztecTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setAztec(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setAztec";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'aztec' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'aztec' must be set");
            return;
        }
        jholder< jboolean > jhaztec = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetAztecTask, s_midsetAztecTask,
                    jhObject.get(), 
                    jhaztec.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getChinese2of5(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getChinese2of5";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetChinese2of5Task, s_midgetChinese2of5Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setChinese2of5(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setChinese2of5";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'chinese2of5' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'chinese2of5' must be set");
            return;
        }
        jholder< jboolean > jhchinese2of5 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetChinese2of5Task, s_midsetChinese2of5Task,
                    jhObject.get(), 
                    jhchinese2of5.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCodabar(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCodabar";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCodabarTask, s_midgetCodabarTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCodabar(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCodabar";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'codabar' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'codabar' must be set");
            return;
        }
        jholder< jboolean > jhcodabar = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCodabarTask, s_midsetCodabarTask,
                    jhObject.get(), 
                    jhcodabar.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCodabarClsiEditing(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCodabarClsiEditing";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCodabarClsiEditingTask, s_midgetCodabarClsiEditingTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCodabarClsiEditing(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCodabarClsiEditing";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'codabarClsiEditing' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'codabarClsiEditing' must be set");
            return;
        }
        jholder< jboolean > jhcodabarClsiEditing = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCodabarClsiEditingTask, s_midsetCodabarClsiEditingTask,
                    jhObject.get(), 
                    jhcodabarClsiEditing.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCodabarMaxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCodabarMaxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCodabarMaxLengthTask, s_midgetCodabarMaxLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCodabarMaxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCodabarMaxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'codabarMaxLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'codabarMaxLength' must be set");
            return;
        }
        jholder< jint > jhcodabarMaxLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCodabarMaxLengthTask, s_midsetCodabarMaxLengthTask,
                    jhObject.get(), 
                    jhcodabarMaxLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCodabarMinLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCodabarMinLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCodabarMinLengthTask, s_midgetCodabarMinLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCodabarMinLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCodabarMinLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'codabarMinLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'codabarMinLength' must be set");
            return;
        }
        jholder< jint > jhcodabarMinLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCodabarMinLengthTask, s_midsetCodabarMinLengthTask,
                    jhObject.get(), 
                    jhcodabarMinLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCodabarNotisEditing(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCodabarNotisEditing";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCodabarNotisEditingTask, s_midgetCodabarNotisEditingTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCodabarNotisEditing(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCodabarNotisEditing";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'codabarNotisEditing' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'codabarNotisEditing' must be set");
            return;
        }
        jholder< jboolean > jhcodabarNotisEditing = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCodabarNotisEditingTask, s_midsetCodabarNotisEditingTask,
                    jhObject.get(), 
                    jhcodabarNotisEditing.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCodabarRedundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCodabarRedundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCodabarRedundancyTask, s_midgetCodabarRedundancyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCodabarRedundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCodabarRedundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'codabarRedundancy' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'codabarRedundancy' must be set");
            return;
        }
        jholder< jboolean > jhcodabarRedundancy = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCodabarRedundancyTask, s_midsetCodabarRedundancyTask,
                    jhObject.get(), 
                    jhcodabarRedundancy.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode11(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode11";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode11Task, s_midgetCode11Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode11(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode11";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code11' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code11' must be set");
            return;
        }
        jholder< jboolean > jhcode11 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode11Task, s_midsetCode11Task,
                    jhObject.get(), 
                    jhcode11.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode11checkDigitCount(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode11checkDigitCount";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode11checkDigitCountTask, s_midgetCode11checkDigitCountTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode11checkDigitCount(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode11checkDigitCount";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code11checkDigitCount' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code11checkDigitCount' must be set");
            return;
        }
        jholder< jstring > jhcode11checkDigitCount = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode11checkDigitCountTask, s_midsetCode11checkDigitCountTask,
                    jhObject.get(), 
                    jhcode11checkDigitCount.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode11maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode11maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode11maxLengthTask, s_midgetCode11maxLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode11maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode11maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code11maxLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code11maxLength' must be set");
            return;
        }
        jholder< jint > jhcode11maxLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode11maxLengthTask, s_midsetCode11maxLengthTask,
                    jhObject.get(), 
                    jhcode11maxLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode11minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode11minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode11minLengthTask, s_midgetCode11minLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode11minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode11minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code11minLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code11minLength' must be set");
            return;
        }
        jholder< jint > jhcode11minLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode11minLengthTask, s_midsetCode11minLengthTask,
                    jhObject.get(), 
                    jhcode11minLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode11redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode11redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode11redundancyTask, s_midgetCode11redundancyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode11redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode11redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code11redundancy' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code11redundancy' must be set");
            return;
        }
        jholder< jboolean > jhcode11redundancy = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode11redundancyTask, s_midsetCode11redundancyTask,
                    jhObject.get(), 
                    jhcode11redundancy.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode11reportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode11reportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode11reportCheckDigitTask, s_midgetCode11reportCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode11reportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode11reportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code11reportCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code11reportCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhcode11reportCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode11reportCheckDigitTask, s_midsetCode11reportCheckDigitTask,
                    jhObject.get(), 
                    jhcode11reportCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode128(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode128";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode128Task, s_midgetCode128Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode128(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode128";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code128' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code128' must be set");
            return;
        }
        jholder< jboolean > jhcode128 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode128Task, s_midsetCode128Task,
                    jhObject.get(), 
                    jhcode128.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode128checkIsBtTable(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode128checkIsBtTable";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode128checkIsBtTableTask, s_midgetCode128checkIsBtTableTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode128checkIsBtTable(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode128checkIsBtTable";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code128checkIsBtTable' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code128checkIsBtTable' must be set");
            return;
        }
        jholder< jboolean > jhcode128checkIsBtTable = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode128checkIsBtTableTask, s_midsetCode128checkIsBtTableTask,
                    jhObject.get(), 
                    jhcode128checkIsBtTable.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode128ean128(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode128ean128";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode128ean128Task, s_midgetCode128ean128Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode128ean128(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode128ean128";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code128ean128' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code128ean128' must be set");
            return;
        }
        jholder< jboolean > jhcode128ean128 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode128ean128Task, s_midsetCode128ean128Task,
                    jhObject.get(), 
                    jhcode128ean128.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode128isbt128(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode128isbt128";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode128isbt128Task, s_midgetCode128isbt128Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode128isbt128(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode128isbt128";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code128isbt128' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code128isbt128' must be set");
            return;
        }
        jholder< jboolean > jhcode128isbt128 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode128isbt128Task, s_midsetCode128isbt128Task,
                    jhObject.get(), 
                    jhcode128isbt128.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode128isbt128ConcatMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode128isbt128ConcatMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode128isbt128ConcatModeTask, s_midgetCode128isbt128ConcatModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode128isbt128ConcatMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode128isbt128ConcatMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code128isbt128ConcatMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code128isbt128ConcatMode' must be set");
            return;
        }
        jholder< jstring > jhcode128isbt128ConcatMode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode128isbt128ConcatModeTask, s_midsetCode128isbt128ConcatModeTask,
                    jhObject.get(), 
                    jhcode128isbt128ConcatMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode128maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode128maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode128maxLengthTask, s_midgetCode128maxLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode128maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode128maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code128maxLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code128maxLength' must be set");
            return;
        }
        jholder< jint > jhcode128maxLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode128maxLengthTask, s_midsetCode128maxLengthTask,
                    jhObject.get(), 
                    jhcode128maxLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode128minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode128minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode128minLengthTask, s_midgetCode128minLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode128minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode128minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code128minLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code128minLength' must be set");
            return;
        }
        jholder< jint > jhcode128minLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode128minLengthTask, s_midsetCode128minLengthTask,
                    jhObject.get(), 
                    jhcode128minLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode128other128(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode128other128";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode128other128Task, s_midgetCode128other128Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode128other128(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode128other128";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code128other128' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code128other128' must be set");
            return;
        }
        jholder< jboolean > jhcode128other128 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode128other128Task, s_midsetCode128other128Task,
                    jhObject.get(), 
                    jhcode128other128.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode128redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode128redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode128redundancyTask, s_midgetCode128redundancyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode128redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode128redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code128redundancy' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code128redundancy' must be set");
            return;
        }
        jholder< jboolean > jhcode128redundancy = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode128redundancyTask, s_midsetCode128redundancyTask,
                    jhObject.get(), 
                    jhcode128redundancy.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode128securityLevel(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode128securityLevel";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode128securityLevelTask, s_midgetCode128securityLevelTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode128securityLevel(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode128securityLevel";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code128securityLevel' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code128securityLevel' must be set");
            return;
        }
        jholder< jint > jhcode128securityLevel = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode128securityLevelTask, s_midsetCode128securityLevelTask,
                    jhObject.get(), 
                    jhcode128securityLevel.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCompositeAb(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCompositeAb";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCompositeAbTask, s_midgetCompositeAbTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCompositeAb(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCompositeAb";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'compositeAb' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'compositeAb' must be set");
            return;
        }
        jholder< jboolean > jhcompositeAb = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCompositeAbTask, s_midsetCompositeAbTask,
                    jhObject.get(), 
                    jhcompositeAb.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCompositeAbUccLinkMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCompositeAbUccLinkMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCompositeAbUccLinkModeTask, s_midgetCompositeAbUccLinkModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCompositeAbUccLinkMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCompositeAbUccLinkMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'compositeAbUccLinkMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'compositeAbUccLinkMode' must be set");
            return;
        }
        jholder< jstring > jhcompositeAbUccLinkMode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCompositeAbUccLinkModeTask, s_midsetCompositeAbUccLinkModeTask,
                    jhObject.get(), 
                    jhcompositeAbUccLinkMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCompositeAbUseUpcPreambleCheckDigitRules(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCompositeAbUseUpcPreambleCheckDigitRules";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCompositeAbUseUpcPreambleCheckDigitRulesTask, s_midgetCompositeAbUseUpcPreambleCheckDigitRulesTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCompositeAbUseUpcPreambleCheckDigitRules(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCompositeAbUseUpcPreambleCheckDigitRules";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'compositeAbUseUpcPreambleCheckDigitRules' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'compositeAbUseUpcPreambleCheckDigitRules' must be set");
            return;
        }
        jholder< jboolean > jhcompositeAbUseUpcPreambleCheckDigitRules = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCompositeAbUseUpcPreambleCheckDigitRulesTask, s_midsetCompositeAbUseUpcPreambleCheckDigitRulesTask,
                    jhObject.get(), 
                    jhcompositeAbUseUpcPreambleCheckDigitRules.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCompositeC(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCompositeC";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCompositeCTask, s_midgetCompositeCTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCompositeC(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCompositeC";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'compositeC' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'compositeC' must be set");
            return;
        }
        jholder< jboolean > jhcompositeC = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCompositeCTask, s_midsetCompositeCTask,
                    jhObject.get(), 
                    jhcompositeC.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode39(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode39";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode39Task, s_midgetCode39Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode39(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode39";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code39' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code39' must be set");
            return;
        }
        jholder< jboolean > jhcode39 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode39Task, s_midsetCode39Task,
                    jhObject.get(), 
                    jhcode39.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode39code32Prefix(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode39code32Prefix";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode39code32PrefixTask, s_midgetCode39code32PrefixTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode39code32Prefix(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode39code32Prefix";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code39code32Prefix' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code39code32Prefix' must be set");
            return;
        }
        jholder< jboolean > jhcode39code32Prefix = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode39code32PrefixTask, s_midsetCode39code32PrefixTask,
                    jhObject.get(), 
                    jhcode39code32Prefix.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode39convertToCode32(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode39convertToCode32";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode39convertToCode32Task, s_midgetCode39convertToCode32Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode39convertToCode32(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode39convertToCode32";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code39convertToCode32' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code39convertToCode32' must be set");
            return;
        }
        jholder< jboolean > jhcode39convertToCode32 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode39convertToCode32Task, s_midsetCode39convertToCode32Task,
                    jhObject.get(), 
                    jhcode39convertToCode32.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode39fullAscii(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode39fullAscii";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode39fullAsciiTask, s_midgetCode39fullAsciiTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode39fullAscii(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode39fullAscii";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code39fullAscii' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code39fullAscii' must be set");
            return;
        }
        jholder< jboolean > jhcode39fullAscii = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode39fullAsciiTask, s_midsetCode39fullAsciiTask,
                    jhObject.get(), 
                    jhcode39fullAscii.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode39maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode39maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode39maxLengthTask, s_midgetCode39maxLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode39maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode39maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code39maxLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code39maxLength' must be set");
            return;
        }
        jholder< jint > jhcode39maxLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode39maxLengthTask, s_midsetCode39maxLengthTask,
                    jhObject.get(), 
                    jhcode39maxLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode39minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode39minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode39minLengthTask, s_midgetCode39minLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode39minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode39minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code39minLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code39minLength' must be set");
            return;
        }
        jholder< jint > jhcode39minLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode39minLengthTask, s_midsetCode39minLengthTask,
                    jhObject.get(), 
                    jhcode39minLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode39redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode39redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode39redundancyTask, s_midgetCode39redundancyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode39redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode39redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code39redundancy' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code39redundancy' must be set");
            return;
        }
        jholder< jboolean > jhcode39redundancy = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode39redundancyTask, s_midsetCode39redundancyTask,
                    jhObject.get(), 
                    jhcode39redundancy.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode39reportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode39reportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode39reportCheckDigitTask, s_midgetCode39reportCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode39reportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode39reportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code39reportCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code39reportCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhcode39reportCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode39reportCheckDigitTask, s_midsetCode39reportCheckDigitTask,
                    jhObject.get(), 
                    jhcode39reportCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode39securityLevel(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode39securityLevel";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode39securityLevelTask, s_midgetCode39securityLevelTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode39securityLevel(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode39securityLevel";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code39securityLevel' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code39securityLevel' must be set");
            return;
        }
        jholder< jint > jhcode39securityLevel = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode39securityLevelTask, s_midsetCode39securityLevelTask,
                    jhObject.get(), 
                    jhcode39securityLevel.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode39verifyCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode39verifyCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode39verifyCheckDigitTask, s_midgetCode39verifyCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode39verifyCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode39verifyCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code39verifyCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code39verifyCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhcode39verifyCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode39verifyCheckDigitTask, s_midsetCode39verifyCheckDigitTask,
                    jhObject.get(), 
                    jhcode39verifyCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode93(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode93";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode93Task, s_midgetCode93Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode93(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode93";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code93' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code93' must be set");
            return;
        }
        jholder< jboolean > jhcode93 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode93Task, s_midsetCode93Task,
                    jhObject.get(), 
                    jhcode93.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode93maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode93maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode93maxLengthTask, s_midgetCode93maxLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode93maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode93maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code93maxLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code93maxLength' must be set");
            return;
        }
        jholder< jint > jhcode93maxLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode93maxLengthTask, s_midsetCode93maxLengthTask,
                    jhObject.get(), 
                    jhcode93maxLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode93minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode93minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode93minLengthTask, s_midgetCode93minLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode93minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode93minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code93minLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code93minLength' must be set");
            return;
        }
        jholder< jint > jhcode93minLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode93minLengthTask, s_midsetCode93minLengthTask,
                    jhObject.get(), 
                    jhcode93minLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCode93redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCode93redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCode93redundancyTask, s_midgetCode93redundancyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCode93redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCode93redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'code93redundancy' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'code93redundancy' must be set");
            return;
        }
        jholder< jboolean > jhcode93redundancy = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCode93redundancyTask, s_midsetCode93redundancyTask,
                    jhObject.get(), 
                    jhcode93redundancy.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getD2of5(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getD2of5";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetD2of5Task, s_midgetD2of5Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setD2of5(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setD2of5";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'd2of5' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'd2of5' must be set");
            return;
        }
        jholder< jboolean > jhd2of5 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetD2of5Task, s_midsetD2of5Task,
                    jhObject.get(), 
                    jhd2of5.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getD2of5maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getD2of5maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetD2of5maxLengthTask, s_midgetD2of5maxLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setD2of5maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setD2of5maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'd2of5maxLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'd2of5maxLength' must be set");
            return;
        }
        jholder< jint > jhd2of5maxLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetD2of5maxLengthTask, s_midsetD2of5maxLengthTask,
                    jhObject.get(), 
                    jhd2of5maxLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getD2of5minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getD2of5minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetD2of5minLengthTask, s_midgetD2of5minLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setD2of5minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setD2of5minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'd2of5minLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'd2of5minLength' must be set");
            return;
        }
        jholder< jint > jhd2of5minLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetD2of5minLengthTask, s_midsetD2of5minLengthTask,
                    jhObject.get(), 
                    jhd2of5minLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getD2of5redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getD2of5redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetD2of5redundancyTask, s_midgetD2of5redundancyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setD2of5redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setD2of5redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'd2of5redundancy' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'd2of5redundancy' must be set");
            return;
        }
        jholder< jboolean > jhd2of5redundancy = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetD2of5redundancyTask, s_midsetD2of5redundancyTask,
                    jhObject.get(), 
                    jhd2of5redundancy.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDatamatrix(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDatamatrix";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDatamatrixTask, s_midgetDatamatrixTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDatamatrix(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDatamatrix";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'datamatrix' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'datamatrix' must be set");
            return;
        }
        jholder< jboolean > jhdatamatrix = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDatamatrixTask, s_midsetDatamatrixTask,
                    jhObject.get(), 
                    jhdatamatrix.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getEan13(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getEan13";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetEan13Task, s_midgetEan13Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setEan13(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setEan13";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'ean13' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'ean13' must be set");
            return;
        }
        jholder< jboolean > jhean13 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetEan13Task, s_midsetEan13Task,
                    jhObject.get(), 
                    jhean13.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getEan8(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getEan8";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetEan8Task, s_midgetEan8Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setEan8(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setEan8";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'ean8' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'ean8' must be set");
            return;
        }
        jholder< jboolean > jhean8 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetEan8Task, s_midsetEan8Task,
                    jhObject.get(), 
                    jhean8.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getEan8convertToEan13(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getEan8convertToEan13";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetEan8convertToEan13Task, s_midgetEan8convertToEan13Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setEan8convertToEan13(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setEan8convertToEan13";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'ean8convertToEan13' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'ean8convertToEan13' must be set");
            return;
        }
        jholder< jboolean > jhean8convertToEan13 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetEan8convertToEan13Task, s_midsetEan8convertToEan13Task,
                    jhObject.get(), 
                    jhean8convertToEan13.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getI2of5(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getI2of5";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetI2of5Task, s_midgetI2of5Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setI2of5(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setI2of5";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'i2of5' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'i2of5' must be set");
            return;
        }
        jholder< jboolean > jhi2of5 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetI2of5Task, s_midsetI2of5Task,
                    jhObject.get(), 
                    jhi2of5.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getI2of5convertToEan13(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getI2of5convertToEan13";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetI2of5convertToEan13Task, s_midgetI2of5convertToEan13Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setI2of5convertToEan13(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setI2of5convertToEan13";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'i2of5convertToEan13' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'i2of5convertToEan13' must be set");
            return;
        }
        jholder< jboolean > jhi2of5convertToEan13 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetI2of5convertToEan13Task, s_midsetI2of5convertToEan13Task,
                    jhObject.get(), 
                    jhi2of5convertToEan13.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getI2of5maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getI2of5maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetI2of5maxLengthTask, s_midgetI2of5maxLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setI2of5maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setI2of5maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'i2of5maxLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'i2of5maxLength' must be set");
            return;
        }
        jholder< jint > jhi2of5maxLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetI2of5maxLengthTask, s_midsetI2of5maxLengthTask,
                    jhObject.get(), 
                    jhi2of5maxLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getI2of5minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getI2of5minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetI2of5minLengthTask, s_midgetI2of5minLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setI2of5minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setI2of5minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'i2of5minLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'i2of5minLength' must be set");
            return;
        }
        jholder< jint > jhi2of5minLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetI2of5minLengthTask, s_midsetI2of5minLengthTask,
                    jhObject.get(), 
                    jhi2of5minLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getI2of5redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getI2of5redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetI2of5redundancyTask, s_midgetI2of5redundancyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setI2of5redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setI2of5redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'i2of5redundancy' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'i2of5redundancy' must be set");
            return;
        }
        jholder< jboolean > jhi2of5redundancy = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetI2of5redundancyTask, s_midsetI2of5redundancyTask,
                    jhObject.get(), 
                    jhi2of5redundancy.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getI2of5reportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getI2of5reportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetI2of5reportCheckDigitTask, s_midgetI2of5reportCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setI2of5reportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setI2of5reportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'i2of5reportCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'i2of5reportCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhi2of5reportCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetI2of5reportCheckDigitTask, s_midsetI2of5reportCheckDigitTask,
                    jhObject.get(), 
                    jhi2of5reportCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getI2of5verifyCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getI2of5verifyCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetI2of5verifyCheckDigitTask, s_midgetI2of5verifyCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setI2of5verifyCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setI2of5verifyCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'i2of5verifyCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'i2of5verifyCheckDigit' must be set");
            return;
        }
        jholder< jstring > jhi2of5verifyCheckDigit = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetI2of5verifyCheckDigitTask, s_midsetI2of5verifyCheckDigitTask,
                    jhObject.get(), 
                    jhi2of5verifyCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getKorean3of5(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getKorean3of5";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetKorean3of5Task, s_midgetKorean3of5Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setKorean3of5(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setKorean3of5";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'korean3of5' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'korean3of5' must be set");
            return;
        }
        jholder< jboolean > jhkorean3of5 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetKorean3of5Task, s_midsetKorean3of5Task,
                    jhObject.get(), 
                    jhkorean3of5.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getKorean3of5redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getKorean3of5redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetKorean3of5redundancyTask, s_midgetKorean3of5redundancyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setKorean3of5redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setKorean3of5redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'korean3of5redundancy' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'korean3of5redundancy' must be set");
            return;
        }
        jholder< jboolean > jhkorean3of5redundancy = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetKorean3of5redundancyTask, s_midsetKorean3of5redundancyTask,
                    jhObject.get(), 
                    jhkorean3of5redundancy.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getKorean3of5maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getKorean3of5maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetKorean3of5maxLengthTask, s_midgetKorean3of5maxLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setKorean3of5maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setKorean3of5maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'korean3of5maxLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'korean3of5maxLength' must be set");
            return;
        }
        jholder< jint > jhkorean3of5maxLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetKorean3of5maxLengthTask, s_midsetKorean3of5maxLengthTask,
                    jhObject.get(), 
                    jhkorean3of5maxLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getKorean3of5minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getKorean3of5minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetKorean3of5minLengthTask, s_midgetKorean3of5minLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setKorean3of5minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setKorean3of5minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'korean3of5minLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'korean3of5minLength' must be set");
            return;
        }
        jholder< jint > jhkorean3of5minLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetKorean3of5minLengthTask, s_midsetKorean3of5minLengthTask,
                    jhObject.get(), 
                    jhkorean3of5minLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMacroPdf(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMacroPdf";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMacroPdfTask, s_midgetMacroPdfTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMacroPdf(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMacroPdf";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'macroPdf' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'macroPdf' must be set");
            return;
        }
        jholder< jboolean > jhmacroPdf = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMacroPdfTask, s_midsetMacroPdfTask,
                    jhObject.get(), 
                    jhmacroPdf.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMacroPdfBufferLabels(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMacroPdfBufferLabels";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMacroPdfBufferLabelsTask, s_midgetMacroPdfBufferLabelsTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMacroPdfBufferLabels(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMacroPdfBufferLabels";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'macroPdfBufferLabels' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'macroPdfBufferLabels' must be set");
            return;
        }
        jholder< jboolean > jhmacroPdfBufferLabels = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMacroPdfBufferLabelsTask, s_midsetMacroPdfBufferLabelsTask,
                    jhObject.get(), 
                    jhmacroPdfBufferLabels.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMacroPdfConvertToPdf417(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMacroPdfConvertToPdf417";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMacroPdfConvertToPdf417Task, s_midgetMacroPdfConvertToPdf417Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMacroPdfConvertToPdf417(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMacroPdfConvertToPdf417";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'macroPdfConvertToPdf417' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'macroPdfConvertToPdf417' must be set");
            return;
        }
        jholder< jboolean > jhmacroPdfConvertToPdf417 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMacroPdfConvertToPdf417Task, s_midsetMacroPdfConvertToPdf417Task,
                    jhObject.get(), 
                    jhmacroPdfConvertToPdf417.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMacroPdfExclusive(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMacroPdfExclusive";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMacroPdfExclusiveTask, s_midgetMacroPdfExclusiveTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMacroPdfExclusive(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMacroPdfExclusive";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'macroPdfExclusive' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'macroPdfExclusive' must be set");
            return;
        }
        jholder< jboolean > jhmacroPdfExclusive = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMacroPdfExclusiveTask, s_midsetMacroPdfExclusiveTask,
                    jhObject.get(), 
                    jhmacroPdfExclusive.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMacroMicroPdf(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMacroMicroPdf";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMacroMicroPdfTask, s_midgetMacroMicroPdfTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMacroMicroPdf(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMacroMicroPdf";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'macroMicroPdf' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'macroMicroPdf' must be set");
            return;
        }
        jholder< jboolean > jhmacroMicroPdf = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMacroMicroPdfTask, s_midsetMacroMicroPdfTask,
                    jhObject.get(), 
                    jhmacroMicroPdf.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMacroMicroPdfBufferLabels(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMacroMicroPdfBufferLabels";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMacroMicroPdfBufferLabelsTask, s_midgetMacroMicroPdfBufferLabelsTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMacroMicroPdfBufferLabels(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMacroMicroPdfBufferLabels";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'macroMicroPdfBufferLabels' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'macroMicroPdfBufferLabels' must be set");
            return;
        }
        jholder< jboolean > jhmacroMicroPdfBufferLabels = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMacroMicroPdfBufferLabelsTask, s_midsetMacroMicroPdfBufferLabelsTask,
                    jhObject.get(), 
                    jhmacroMicroPdfBufferLabels.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMacroMicroPdfConvertToMicroPdf(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMacroMicroPdfConvertToMicroPdf";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMacroMicroPdfConvertToMicroPdfTask, s_midgetMacroMicroPdfConvertToMicroPdfTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMacroMicroPdfConvertToMicroPdf(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMacroMicroPdfConvertToMicroPdf";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'macroMicroPdfConvertToMicroPdf' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'macroMicroPdfConvertToMicroPdf' must be set");
            return;
        }
        jholder< jboolean > jhmacroMicroPdfConvertToMicroPdf = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMacroMicroPdfConvertToMicroPdfTask, s_midsetMacroMicroPdfConvertToMicroPdfTask,
                    jhObject.get(), 
                    jhmacroMicroPdfConvertToMicroPdf.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMacroMicroPdfExclusive(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMacroMicroPdfExclusive";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMacroMicroPdfExclusiveTask, s_midgetMacroMicroPdfExclusiveTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMacroMicroPdfExclusive(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMacroMicroPdfExclusive";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'macroMicroPdfExclusive' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'macroMicroPdfExclusive' must be set");
            return;
        }
        jholder< jboolean > jhmacroMicroPdfExclusive = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMacroMicroPdfExclusiveTask, s_midsetMacroMicroPdfExclusiveTask,
                    jhObject.get(), 
                    jhmacroMicroPdfExclusive.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMacroMicroPdfReportAppendInfo(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMacroMicroPdfReportAppendInfo";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMacroMicroPdfReportAppendInfoTask, s_midgetMacroMicroPdfReportAppendInfoTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMacroMicroPdfReportAppendInfo(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMacroMicroPdfReportAppendInfo";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'macroMicroPdfReportAppendInfo' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'macroMicroPdfReportAppendInfo' must be set");
            return;
        }
        jholder< jboolean > jhmacroMicroPdfReportAppendInfo = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMacroMicroPdfReportAppendInfoTask, s_midsetMacroMicroPdfReportAppendInfoTask,
                    jhObject.get(), 
                    jhmacroMicroPdfReportAppendInfo.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMatrix2of5(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMatrix2of5";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMatrix2of5Task, s_midgetMatrix2of5Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMatrix2of5(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMatrix2of5";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'matrix2of5' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'matrix2of5' must be set");
            return;
        }
        jholder< jboolean > jhmatrix2of5 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMatrix2of5Task, s_midsetMatrix2of5Task,
                    jhObject.get(), 
                    jhmatrix2of5.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMatrix2of5maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMatrix2of5maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMatrix2of5maxLengthTask, s_midgetMatrix2of5maxLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMatrix2of5maxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMatrix2of5maxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'matrix2of5maxLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'matrix2of5maxLength' must be set");
            return;
        }
        jholder< jint > jhmatrix2of5maxLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMatrix2of5maxLengthTask, s_midsetMatrix2of5maxLengthTask,
                    jhObject.get(), 
                    jhmatrix2of5maxLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMatrix2of5minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMatrix2of5minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMatrix2of5minLengthTask, s_midgetMatrix2of5minLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMatrix2of5minLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMatrix2of5minLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'matrix2of5minLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'matrix2of5minLength' must be set");
            return;
        }
        jholder< jint > jhmatrix2of5minLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMatrix2of5minLengthTask, s_midsetMatrix2of5minLengthTask,
                    jhObject.get(), 
                    jhmatrix2of5minLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMatrix2of5reportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMatrix2of5reportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMatrix2of5reportCheckDigitTask, s_midgetMatrix2of5reportCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMatrix2of5reportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMatrix2of5reportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'matrix2of5reportCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'matrix2of5reportCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhmatrix2of5reportCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMatrix2of5reportCheckDigitTask, s_midsetMatrix2of5reportCheckDigitTask,
                    jhObject.get(), 
                    jhmatrix2of5reportCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMatrix2of5verifyCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMatrix2of5verifyCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMatrix2of5verifyCheckDigitTask, s_midgetMatrix2of5verifyCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMatrix2of5verifyCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMatrix2of5verifyCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'matrix2of5verifyCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'matrix2of5verifyCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhmatrix2of5verifyCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMatrix2of5verifyCheckDigitTask, s_midsetMatrix2of5verifyCheckDigitTask,
                    jhObject.get(), 
                    jhmatrix2of5verifyCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMaxiCode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMaxiCode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMaxiCodeTask, s_midgetMaxiCodeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMaxiCode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMaxiCode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'maxiCode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'maxiCode' must be set");
            return;
        }
        jholder< jboolean > jhmaxiCode = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMaxiCodeTask, s_midsetMaxiCodeTask,
                    jhObject.get(), 
                    jhmaxiCode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMicroPdf(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMicroPdf";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMicroPdfTask, s_midgetMicroPdfTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMicroPdf(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMicroPdf";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'microPdf' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'microPdf' must be set");
            return;
        }
        jholder< jboolean > jhmicroPdf = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMicroPdfTask, s_midsetMicroPdfTask,
                    jhObject.get(), 
                    jhmicroPdf.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMicroQr(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMicroQr";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMicroQrTask, s_midgetMicroQrTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMicroQr(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMicroQr";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'microQr' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'microQr' must be set");
            return;
        }
        jholder< jboolean > jhmicroQr = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMicroQrTask, s_midsetMicroQrTask,
                    jhObject.get(), 
                    jhmicroQr.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMsi(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMsi";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMsiTask, s_midgetMsiTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMsi(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMsi";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'msi' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'msi' must be set");
            return;
        }
        jholder< jboolean > jhmsi = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMsiTask, s_midsetMsiTask,
                    jhObject.get(), 
                    jhmsi.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMsiCheckDigits(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMsiCheckDigits";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMsiCheckDigitsTask, s_midgetMsiCheckDigitsTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMsiCheckDigits(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMsiCheckDigits";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'msiCheckDigits' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'msiCheckDigits' must be set");
            return;
        }
        jholder< jstring > jhmsiCheckDigits = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMsiCheckDigitsTask, s_midsetMsiCheckDigitsTask,
                    jhObject.get(), 
                    jhmsiCheckDigits.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMsiCheckDigitScheme(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMsiCheckDigitScheme";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMsiCheckDigitSchemeTask, s_midgetMsiCheckDigitSchemeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMsiCheckDigitScheme(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMsiCheckDigitScheme";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'msiCheckDigitScheme' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'msiCheckDigitScheme' must be set");
            return;
        }
        jholder< jstring > jhmsiCheckDigitScheme = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMsiCheckDigitSchemeTask, s_midsetMsiCheckDigitSchemeTask,
                    jhObject.get(), 
                    jhmsiCheckDigitScheme.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMsiMaxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMsiMaxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMsiMaxLengthTask, s_midgetMsiMaxLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMsiMaxLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMsiMaxLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'msiMaxLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'msiMaxLength' must be set");
            return;
        }
        jholder< jint > jhmsiMaxLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMsiMaxLengthTask, s_midsetMsiMaxLengthTask,
                    jhObject.get(), 
                    jhmsiMaxLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMsiMinLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMsiMinLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMsiMinLengthTask, s_midgetMsiMinLengthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMsiMinLength(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMsiMinLength";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'msiMinLength' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'msiMinLength' must be set");
            return;
        }
        jholder< jint > jhmsiMinLength = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMsiMinLengthTask, s_midsetMsiMinLengthTask,
                    jhObject.get(), 
                    jhmsiMinLength.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMsiRedundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMsiRedundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMsiRedundancyTask, s_midgetMsiRedundancyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMsiRedundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMsiRedundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'msiRedundancy' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'msiRedundancy' must be set");
            return;
        }
        jholder< jboolean > jhmsiRedundancy = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMsiRedundancyTask, s_midsetMsiRedundancyTask,
                    jhObject.get(), 
                    jhmsiRedundancy.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getMsiReportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getMsiReportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetMsiReportCheckDigitTask, s_midgetMsiReportCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setMsiReportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setMsiReportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'msiReportCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'msiReportCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhmsiReportCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetMsiReportCheckDigitTask, s_midsetMsiReportCheckDigitTask,
                    jhObject.get(), 
                    jhmsiReportCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getPdf417(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getPdf417";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetPdf417Task, s_midgetPdf417Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setPdf417(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setPdf417";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'pdf417' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'pdf417' must be set");
            return;
        }
        jholder< jboolean > jhpdf417 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetPdf417Task, s_midsetPdf417Task,
                    jhObject.get(), 
                    jhpdf417.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getSignature(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getSignature";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetSignatureTask, s_midgetSignatureTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setSignature(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setSignature";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'signature' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'signature' must be set");
            return;
        }
        jholder< jboolean > jhsignature = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetSignatureTask, s_midsetSignatureTask,
                    jhObject.get(), 
                    jhsignature.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getSignatureImageHeight(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getSignatureImageHeight";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetSignatureImageHeightTask, s_midgetSignatureImageHeightTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setSignatureImageHeight(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setSignatureImageHeight";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'signatureImageHeight' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'signatureImageHeight' must be set");
            return;
        }
        jholder< jint > jhsignatureImageHeight = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetSignatureImageHeightTask, s_midsetSignatureImageHeightTask,
                    jhObject.get(), 
                    jhsignatureImageHeight.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getSignatureImageWidth(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getSignatureImageWidth";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetSignatureImageWidthTask, s_midgetSignatureImageWidthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setSignatureImageWidth(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setSignatureImageWidth";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'signatureImageWidth' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'signatureImageWidth' must be set");
            return;
        }
        jholder< jint > jhsignatureImageWidth = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetSignatureImageWidthTask, s_midsetSignatureImageWidthTask,
                    jhObject.get(), 
                    jhsignatureImageWidth.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getSignatureImageQuality(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getSignatureImageQuality";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetSignatureImageQualityTask, s_midgetSignatureImageQualityTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setSignatureImageQuality(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setSignatureImageQuality";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'signatureImageQuality' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'signatureImageQuality' must be set");
            return;
        }
        jholder< jint > jhsignatureImageQuality = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetSignatureImageQualityTask, s_midsetSignatureImageQualityTask,
                    jhObject.get(), 
                    jhsignatureImageQuality.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getAusPostal(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getAusPostal";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetAusPostalTask, s_midgetAusPostalTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setAusPostal(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setAusPostal";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'ausPostal' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'ausPostal' must be set");
            return;
        }
        jholder< jboolean > jhausPostal = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetAusPostalTask, s_midsetAusPostalTask,
                    jhObject.get(), 
                    jhausPostal.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getCanPostal(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getCanPostal";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetCanPostalTask, s_midgetCanPostalTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setCanPostal(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setCanPostal";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'canPostal' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'canPostal' must be set");
            return;
        }
        jholder< jboolean > jhcanPostal = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetCanPostalTask, s_midsetCanPostalTask,
                    jhObject.get(), 
                    jhcanPostal.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getDutchPostal(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getDutchPostal";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetDutchPostalTask, s_midgetDutchPostalTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setDutchPostal(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setDutchPostal";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'dutchPostal' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'dutchPostal' must be set");
            return;
        }
        jholder< jboolean > jhdutchPostal = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetDutchPostalTask, s_midsetDutchPostalTask,
                    jhObject.get(), 
                    jhdutchPostal.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getJapPostal(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getJapPostal";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetJapPostalTask, s_midgetJapPostalTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setJapPostal(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setJapPostal";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'japPostal' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'japPostal' must be set");
            return;
        }
        jholder< jboolean > jhjapPostal = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetJapPostalTask, s_midsetJapPostalTask,
                    jhObject.get(), 
                    jhjapPostal.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUkPostal(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUkPostal";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUkPostalTask, s_midgetUkPostalTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUkPostal(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUkPostal";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'ukPostal' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'ukPostal' must be set");
            return;
        }
        jholder< jboolean > jhukPostal = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUkPostalTask, s_midsetUkPostalTask,
                    jhObject.get(), 
                    jhukPostal.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUkPostalReportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUkPostalReportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUkPostalReportCheckDigitTask, s_midgetUkPostalReportCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUkPostalReportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUkPostalReportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'ukPostalReportCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'ukPostalReportCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhukPostalReportCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUkPostalReportCheckDigitTask, s_midsetUkPostalReportCheckDigitTask,
                    jhObject.get(), 
                    jhukPostalReportCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUs4state(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUs4state";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUs4stateTask, s_midgetUs4stateTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUs4state(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUs4state";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'us4state' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'us4state' must be set");
            return;
        }
        jholder< jboolean > jhus4state = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUs4stateTask, s_midsetUs4stateTask,
                    jhObject.get(), 
                    jhus4state.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUs4stateFics(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUs4stateFics";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUs4stateFicsTask, s_midgetUs4stateFicsTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUs4stateFics(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUs4stateFics";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'us4stateFics' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'us4stateFics' must be set");
            return;
        }
        jholder< jboolean > jhus4stateFics = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUs4stateFicsTask, s_midsetUs4stateFicsTask,
                    jhObject.get(), 
                    jhus4stateFics.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUsPlanet(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUsPlanet";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUsPlanetTask, s_midgetUsPlanetTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUsPlanet(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUsPlanet";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'usPlanet' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'usPlanet' must be set");
            return;
        }
        jholder< jboolean > jhusPlanet = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUsPlanetTask, s_midsetUsPlanetTask,
                    jhObject.get(), 
                    jhusPlanet.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUsPlanetReportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUsPlanetReportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUsPlanetReportCheckDigitTask, s_midgetUsPlanetReportCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUsPlanetReportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUsPlanetReportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'usPlanetReportCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'usPlanetReportCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhusPlanetReportCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUsPlanetReportCheckDigitTask, s_midsetUsPlanetReportCheckDigitTask,
                    jhObject.get(), 
                    jhusPlanetReportCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUsPostNet(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUsPostNet";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUsPostNetTask, s_midgetUsPostNetTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUsPostNet(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUsPostNet";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'usPostNet' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'usPostNet' must be set");
            return;
        }
        jholder< jboolean > jhusPostNet = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUsPostNetTask, s_midsetUsPostNetTask,
                    jhObject.get(), 
                    jhusPostNet.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUsPostNetReportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUsPostNetReportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUsPostNetReportCheckDigitTask, s_midgetUsPostNetReportCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUsPostNetReportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUsPostNetReportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'usPostNetReportCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'usPostNetReportCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhusPostNetReportCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUsPostNetReportCheckDigitTask, s_midsetUsPostNetReportCheckDigitTask,
                    jhObject.get(), 
                    jhusPostNetReportCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getQrCode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getQrCode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetQrCodeTask, s_midgetQrCodeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setQrCode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setQrCode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'qrCode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'qrCode' must be set");
            return;
        }
        jholder< jboolean > jhqrCode = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetQrCodeTask, s_midsetQrCodeTask,
                    jhObject.get(), 
                    jhqrCode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getGs1dataBar(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getGs1dataBar";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetGs1dataBarTask, s_midgetGs1dataBarTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setGs1dataBar(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setGs1dataBar";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'gs1dataBar' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'gs1dataBar' must be set");
            return;
        }
        jholder< jboolean > jhgs1dataBar = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetGs1dataBarTask, s_midsetGs1dataBarTask,
                    jhObject.get(), 
                    jhgs1dataBar.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getGs1dataBarExpanded(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getGs1dataBarExpanded";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetGs1dataBarExpandedTask, s_midgetGs1dataBarExpandedTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setGs1dataBarExpanded(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setGs1dataBarExpanded";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'gs1dataBarExpanded' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'gs1dataBarExpanded' must be set");
            return;
        }
        jholder< jboolean > jhgs1dataBarExpanded = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetGs1dataBarExpandedTask, s_midsetGs1dataBarExpandedTask,
                    jhObject.get(), 
                    jhgs1dataBarExpanded.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getGs1dataBarLimited(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getGs1dataBarLimited";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetGs1dataBarLimitedTask, s_midgetGs1dataBarLimitedTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setGs1dataBarLimited(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setGs1dataBarLimited";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'gs1dataBarLimited' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'gs1dataBarLimited' must be set");
            return;
        }
        jholder< jboolean > jhgs1dataBarLimited = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetGs1dataBarLimitedTask, s_midsetGs1dataBarLimitedTask,
                    jhObject.get(), 
                    jhgs1dataBarLimited.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getTlc39(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getTlc39";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetTlc39Task, s_midgetTlc39Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setTlc39(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setTlc39";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'tlc39' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'tlc39' must be set");
            return;
        }
        jholder< jboolean > jhtlc39 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetTlc39Task, s_midsetTlc39Task,
                    jhObject.get(), 
                    jhtlc39.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getTrioptic39(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getTrioptic39";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetTrioptic39Task, s_midgetTrioptic39Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setTrioptic39(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setTrioptic39";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'trioptic39' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'trioptic39' must be set");
            return;
        }
        jholder< jboolean > jhtrioptic39 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetTrioptic39Task, s_midsetTrioptic39Task,
                    jhObject.get(), 
                    jhtrioptic39.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getTrioptic39Redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getTrioptic39Redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetTrioptic39RedundancyTask, s_midgetTrioptic39RedundancyTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setTrioptic39Redundancy(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setTrioptic39Redundancy";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'trioptic39Redundancy' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'trioptic39Redundancy' must be set");
            return;
        }
        jholder< jboolean > jhtrioptic39Redundancy = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetTrioptic39RedundancyTask, s_midsetTrioptic39RedundancyTask,
                    jhObject.get(), 
                    jhtrioptic39Redundancy.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcEanBookland(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcEanBookland";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcEanBooklandTask, s_midgetUpcEanBooklandTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcEanBookland(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcEanBookland";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcEanBookland' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcEanBookland' must be set");
            return;
        }
        jholder< jboolean > jhupcEanBookland = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcEanBooklandTask, s_midsetUpcEanBooklandTask,
                    jhObject.get(), 
                    jhupcEanBookland.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcEanBooklandFormat(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcEanBooklandFormat";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcEanBooklandFormatTask, s_midgetUpcEanBooklandFormatTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcEanBooklandFormat(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcEanBooklandFormat";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcEanBooklandFormat' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcEanBooklandFormat' must be set");
            return;
        }
        jholder< jstring > jhupcEanBooklandFormat = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcEanBooklandFormatTask, s_midsetUpcEanBooklandFormatTask,
                    jhObject.get(), 
                    jhupcEanBooklandFormat.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcEanConvertGs1dataBarToUpcEan(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcEanConvertGs1dataBarToUpcEan";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcEanConvertGs1dataBarToUpcEanTask, s_midgetUpcEanConvertGs1dataBarToUpcEanTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcEanConvertGs1dataBarToUpcEan(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcEanConvertGs1dataBarToUpcEan";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcEanConvertGs1dataBarToUpcEan' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcEanConvertGs1dataBarToUpcEan' must be set");
            return;
        }
        jholder< jboolean > jhupcEanConvertGs1dataBarToUpcEan = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcEanConvertGs1dataBarToUpcEanTask, s_midsetUpcEanConvertGs1dataBarToUpcEanTask,
                    jhObject.get(), 
                    jhupcEanConvertGs1dataBarToUpcEan.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcEanCoupon(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcEanCoupon";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcEanCouponTask, s_midgetUpcEanCouponTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcEanCoupon(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcEanCoupon";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcEanCoupon' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcEanCoupon' must be set");
            return;
        }
        jholder< jboolean > jhupcEanCoupon = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcEanCouponTask, s_midsetUpcEanCouponTask,
                    jhObject.get(), 
                    jhupcEanCoupon.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcEanLinearDecode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcEanLinearDecode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcEanLinearDecodeTask, s_midgetUpcEanLinearDecodeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcEanLinearDecode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcEanLinearDecode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcEanLinearDecode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcEanLinearDecode' must be set");
            return;
        }
        jholder< jboolean > jhupcEanLinearDecode = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcEanLinearDecodeTask, s_midsetUpcEanLinearDecodeTask,
                    jhObject.get(), 
                    jhupcEanLinearDecode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcEanRandomWeightCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcEanRandomWeightCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcEanRandomWeightCheckDigitTask, s_midgetUpcEanRandomWeightCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcEanRandomWeightCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcEanRandomWeightCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcEanRandomWeightCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcEanRandomWeightCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhupcEanRandomWeightCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcEanRandomWeightCheckDigitTask, s_midsetUpcEanRandomWeightCheckDigitTask,
                    jhObject.get(), 
                    jhupcEanRandomWeightCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcEanRetryCount(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcEanRetryCount";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcEanRetryCountTask, s_midgetUpcEanRetryCountTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcEanRetryCount(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcEanRetryCount";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcEanRetryCount' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcEanRetryCount' must be set");
            return;
        }
        jholder< jint > jhupcEanRetryCount = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcEanRetryCountTask, s_midsetUpcEanRetryCountTask,
                    jhObject.get(), 
                    jhupcEanRetryCount.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcEanSecurityLevel(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcEanSecurityLevel";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcEanSecurityLevelTask, s_midgetUpcEanSecurityLevelTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcEanSecurityLevel(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcEanSecurityLevel";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcEanSecurityLevel' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcEanSecurityLevel' must be set");
            return;
        }
        jholder< jint > jhupcEanSecurityLevel = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcEanSecurityLevelTask, s_midsetUpcEanSecurityLevelTask,
                    jhObject.get(), 
                    jhupcEanSecurityLevel.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcEanSupplemental2(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcEanSupplemental2";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcEanSupplemental2Task, s_midgetUpcEanSupplemental2Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcEanSupplemental2(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcEanSupplemental2";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcEanSupplemental2' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcEanSupplemental2' must be set");
            return;
        }
        jholder< jboolean > jhupcEanSupplemental2 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcEanSupplemental2Task, s_midsetUpcEanSupplemental2Task,
                    jhObject.get(), 
                    jhupcEanSupplemental2.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcEanSupplemental5(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcEanSupplemental5";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcEanSupplemental5Task, s_midgetUpcEanSupplemental5Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcEanSupplemental5(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcEanSupplemental5";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcEanSupplemental5' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcEanSupplemental5' must be set");
            return;
        }
        jholder< jboolean > jhupcEanSupplemental5 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcEanSupplemental5Task, s_midsetUpcEanSupplemental5Task,
                    jhObject.get(), 
                    jhupcEanSupplemental5.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcEanSupplementalMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcEanSupplementalMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcEanSupplementalModeTask, s_midgetUpcEanSupplementalModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcEanSupplementalMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcEanSupplementalMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcEanSupplementalMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcEanSupplementalMode' must be set");
            return;
        }
        jholder< jstring > jhupcEanSupplementalMode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcEanSupplementalModeTask, s_midsetUpcEanSupplementalModeTask,
                    jhObject.get(), 
                    jhupcEanSupplementalMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpca(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpca";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcaTask, s_midgetUpcaTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpca(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpca";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upca' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upca' must be set");
            return;
        }
        jholder< jboolean > jhupca = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcaTask, s_midsetUpcaTask,
                    jhObject.get(), 
                    jhupca.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcaPreamble(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcaPreamble";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcaPreambleTask, s_midgetUpcaPreambleTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcaPreamble(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcaPreamble";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcaPreamble' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcaPreamble' must be set");
            return;
        }
        jholder< jstring > jhupcaPreamble = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcaPreambleTask, s_midsetUpcaPreambleTask,
                    jhObject.get(), 
                    jhupcaPreamble.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpcaReportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpcaReportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpcaReportCheckDigitTask, s_midgetUpcaReportCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpcaReportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpcaReportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upcaReportCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upcaReportCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhupcaReportCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpcaReportCheckDigitTask, s_midsetUpcaReportCheckDigitTask,
                    jhObject.get(), 
                    jhupcaReportCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpce0(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpce0";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpce0Task, s_midgetUpce0Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpce0(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpce0";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upce0' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upce0' must be set");
            return;
        }
        jholder< jboolean > jhupce0 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpce0Task, s_midsetUpce0Task,
                    jhObject.get(), 
                    jhupce0.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpce0convertToUpca(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpce0convertToUpca";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpce0convertToUpcaTask, s_midgetUpce0convertToUpcaTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpce0convertToUpca(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpce0convertToUpca";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upce0convertToUpca' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upce0convertToUpca' must be set");
            return;
        }
        jholder< jboolean > jhupce0convertToUpca = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpce0convertToUpcaTask, s_midsetUpce0convertToUpcaTask,
                    jhObject.get(), 
                    jhupce0convertToUpca.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpce0preamble(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpce0preamble";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpce0preambleTask, s_midgetUpce0preambleTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpce0preamble(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpce0preamble";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upce0preamble' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upce0preamble' must be set");
            return;
        }
        jholder< jstring > jhupce0preamble = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpce0preambleTask, s_midsetUpce0preambleTask,
                    jhObject.get(), 
                    jhupce0preamble.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpce0reportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpce0reportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpce0reportCheckDigitTask, s_midgetUpce0reportCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpce0reportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpce0reportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upce0reportCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upce0reportCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhupce0reportCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpce0reportCheckDigitTask, s_midsetUpce0reportCheckDigitTask,
                    jhObject.get(), 
                    jhupce0reportCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpce1(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpce1";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpce1Task, s_midgetUpce1Task,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpce1(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpce1";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upce1' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upce1' must be set");
            return;
        }
        jholder< jboolean > jhupce1 = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpce1Task, s_midsetUpce1Task,
                    jhObject.get(), 
                    jhupce1.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpce1convertToUpca(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpce1convertToUpca";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpce1convertToUpcaTask, s_midgetUpce1convertToUpcaTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpce1convertToUpca(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpce1convertToUpca";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upce1convertToUpca' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upce1convertToUpca' must be set");
            return;
        }
        jholder< jboolean > jhupce1convertToUpca = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpce1convertToUpcaTask, s_midsetUpce1convertToUpcaTask,
                    jhObject.get(), 
                    jhupce1convertToUpca.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpce1preamble(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpce1preamble";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpce1preambleTask, s_midgetUpce1preambleTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpce1preamble(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpce1preamble";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upce1preamble' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upce1preamble' must be set");
            return;
        }
        jholder< jstring > jhupce1preamble = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpce1preambleTask, s_midsetUpce1preambleTask,
                    jhObject.get(), 
                    jhupce1preamble.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getUpce1reportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getUpce1reportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetUpce1reportCheckDigitTask, s_midgetUpce1reportCheckDigitTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setUpce1reportCheckDigit(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setUpce1reportCheckDigit";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'upce1reportCheckDigit' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'upce1reportCheckDigit' must be set");
            return;
        }
        jholder< jboolean > jhupce1reportCheckDigit = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetUpce1reportCheckDigitTask, s_midsetUpce1reportCheckDigitTask,
                    jhObject.get(), 
                    jhupce1reportCheckDigit.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getWebcode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getWebcode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetWebcodeTask, s_midgetWebcodeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setWebcode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setWebcode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'webcode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'webcode' must be set");
            return;
        }
        jholder< jboolean > jhwebcode = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetWebcodeTask, s_midsetWebcodeTask,
                    jhObject.get(), 
                    jhwebcode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getWebcodeDecodeGtSubtype(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getWebcodeDecodeGtSubtype";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetWebcodeDecodeGtSubtypeTask, s_midgetWebcodeDecodeGtSubtypeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setWebcodeDecodeGtSubtype(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setWebcodeDecodeGtSubtype";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'webcodeDecodeGtSubtype' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'webcodeDecodeGtSubtype' must be set");
            return;
        }
        jholder< jboolean > jhwebcodeDecodeGtSubtype = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetWebcodeDecodeGtSubtypeTask, s_midsetWebcodeDecodeGtSubtypeTask,
                    jhObject.get(), 
                    jhwebcodeDecodeGtSubtype.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmModelNumber(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmModelNumber";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmModelNumberTask, s_midgetRsmModelNumberTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmSerialNumber(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmSerialNumber";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmSerialNumberTask, s_midgetRsmSerialNumberTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmDateOfManufacture(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmDateOfManufacture";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmDateOfManufactureTask, s_midgetRsmDateOfManufactureTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmDateOfService(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmDateOfService";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmDateOfServiceTask, s_midgetRsmDateOfServiceTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBluetoothAddress(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBluetoothAddress";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBluetoothAddressTask, s_midgetRsmBluetoothAddressTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmFirmwareVersion(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmFirmwareVersion";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmFirmwareVersionTask, s_midgetRsmFirmwareVersionTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmDeviceClass(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmDeviceClass";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmDeviceClassTask, s_midgetRsmDeviceClassTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBatteryStatus(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBatteryStatus";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBatteryStatusTask, s_midgetRsmBatteryStatusTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBatteryCapacity(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBatteryCapacity";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBatteryCapacityTask, s_midgetRsmBatteryCapacityTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBatteryId(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBatteryId";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBatteryIdTask, s_midgetRsmBatteryIdTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBluetoothAuthentication(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBluetoothAuthentication";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBluetoothAuthenticationTask, s_midgetRsmBluetoothAuthenticationTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmBluetoothAuthentication(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmBluetoothAuthentication";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmBluetoothAuthentication' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmBluetoothAuthentication' must be set");
            return;
        }
        jholder< jboolean > jhrsmBluetoothAuthentication = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmBluetoothAuthenticationTask, s_midsetRsmBluetoothAuthenticationTask,
                    jhObject.get(), 
                    jhrsmBluetoothAuthentication.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBluetoothEncryption(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBluetoothEncryption";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBluetoothEncryptionTask, s_midgetRsmBluetoothEncryptionTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmBluetoothEncryption(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmBluetoothEncryption";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmBluetoothEncryption' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmBluetoothEncryption' must be set");
            return;
        }
        jholder< jboolean > jhrsmBluetoothEncryption = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmBluetoothEncryptionTask, s_midsetRsmBluetoothEncryptionTask,
                    jhObject.get(), 
                    jhrsmBluetoothEncryption.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBluetoothPinCode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBluetoothPinCode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBluetoothPinCodeTask, s_midgetRsmBluetoothPinCodeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmBluetoothPinCode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmBluetoothPinCode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmBluetoothPinCode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmBluetoothPinCode' must be set");
            return;
        }
        jholder< jstring > jhrsmBluetoothPinCode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmBluetoothPinCodeTask, s_midsetRsmBluetoothPinCodeTask,
                    jhObject.get(), 
                    jhrsmBluetoothPinCode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBluetoothPinCodeType(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBluetoothPinCodeType";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBluetoothPinCodeTypeTask, s_midgetRsmBluetoothPinCodeTypeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmBluetoothPinCodeType(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmBluetoothPinCodeType";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmBluetoothPinCodeType' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmBluetoothPinCodeType' must be set");
            return;
        }
        jholder< jstring > jhrsmBluetoothPinCodeType = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmBluetoothPinCodeTypeTask, s_midsetRsmBluetoothPinCodeTypeTask,
                    jhObject.get(), 
                    jhrsmBluetoothPinCodeType.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBluetoothReconnectionAttempts(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBluetoothReconnectionAttempts";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBluetoothReconnectionAttemptsTask, s_midgetRsmBluetoothReconnectionAttemptsTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmBluetoothReconnectionAttempts(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmBluetoothReconnectionAttempts";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmBluetoothReconnectionAttempts' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmBluetoothReconnectionAttempts' must be set");
            return;
        }
        jholder< jint > jhrsmBluetoothReconnectionAttempts = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmBluetoothReconnectionAttemptsTask, s_midsetRsmBluetoothReconnectionAttemptsTask,
                    jhObject.get(), 
                    jhrsmBluetoothReconnectionAttempts.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBluetoothBeepOnReconnectAttempt(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBluetoothBeepOnReconnectAttempt";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBluetoothBeepOnReconnectAttemptTask, s_midgetRsmBluetoothBeepOnReconnectAttemptTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmBluetoothBeepOnReconnectAttempt(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmBluetoothBeepOnReconnectAttempt";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmBluetoothBeepOnReconnectAttempt' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmBluetoothBeepOnReconnectAttempt' must be set");
            return;
        }
        jholder< jboolean > jhrsmBluetoothBeepOnReconnectAttempt = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmBluetoothBeepOnReconnectAttemptTask, s_midsetRsmBluetoothBeepOnReconnectAttemptTask,
                    jhObject.get(), 
                    jhrsmBluetoothBeepOnReconnectAttempt.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBluetoothHidAutoReconnect(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBluetoothHidAutoReconnect";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBluetoothHidAutoReconnectTask, s_midgetRsmBluetoothHidAutoReconnectTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmBluetoothHidAutoReconnect(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmBluetoothHidAutoReconnect";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmBluetoothHidAutoReconnect' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmBluetoothHidAutoReconnect' must be set");
            return;
        }
        jholder< jstring > jhrsmBluetoothHidAutoReconnect = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmBluetoothHidAutoReconnectTask, s_midsetRsmBluetoothHidAutoReconnectTask,
                    jhObject.get(), 
                    jhrsmBluetoothHidAutoReconnect.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBluetoothFriendlyName(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBluetoothFriendlyName";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBluetoothFriendlyNameTask, s_midgetRsmBluetoothFriendlyNameTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmBluetoothFriendlyName(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmBluetoothFriendlyName";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmBluetoothFriendlyName' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmBluetoothFriendlyName' must be set");
            return;
        }
        jholder< jstring > jhrsmBluetoothFriendlyName = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmBluetoothFriendlyNameTask, s_midsetRsmBluetoothFriendlyNameTask,
                    jhObject.get(), 
                    jhrsmBluetoothFriendlyName.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBluetoothInquiryMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBluetoothInquiryMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBluetoothInquiryModeTask, s_midgetRsmBluetoothInquiryModeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmBluetoothInquiryMode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmBluetoothInquiryMode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmBluetoothInquiryMode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmBluetoothInquiryMode' must be set");
            return;
        }
        jholder< jstring > jhrsmBluetoothInquiryMode = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmBluetoothInquiryModeTask, s_midsetRsmBluetoothInquiryModeTask,
                    jhObject.get(), 
                    jhrsmBluetoothInquiryMode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmBluetoothAutoReconnect(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmBluetoothAutoReconnect";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmBluetoothAutoReconnectTask, s_midgetRsmBluetoothAutoReconnectTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmBluetoothAutoReconnect(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmBluetoothAutoReconnect";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmBluetoothAutoReconnect' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmBluetoothAutoReconnect' must be set");
            return;
        }
        jholder< jstring > jhrsmBluetoothAutoReconnect = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmBluetoothAutoReconnectTask, s_midsetRsmBluetoothAutoReconnectTask,
                    jhObject.get(), 
                    jhrsmBluetoothAutoReconnect.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmForceSavePairingBarcode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmForceSavePairingBarcode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmForceSavePairingBarcodeTask, s_midgetRsmForceSavePairingBarcodeTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmForceSavePairingBarcode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmForceSavePairingBarcode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmForceSavePairingBarcode' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmForceSavePairingBarcode' must be set");
            return;
        }
        jholder< jboolean > jhrsmForceSavePairingBarcode = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmForceSavePairingBarcodeTask, s_midsetRsmForceSavePairingBarcodeTask,
                    jhObject.get(), 
                    jhrsmForceSavePairingBarcode.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmLowBatteryIndication(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmLowBatteryIndication";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmLowBatteryIndicationTask, s_midgetRsmLowBatteryIndicationTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmLowBatteryIndication(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmLowBatteryIndication";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmLowBatteryIndication' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmLowBatteryIndication' must be set");
            return;
        }
        jholder< jboolean > jhrsmLowBatteryIndication = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmLowBatteryIndicationTask, s_midsetRsmLowBatteryIndicationTask,
                    jhObject.get(), 
                    jhrsmLowBatteryIndication.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmLowBatteryIndicationCycle(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmLowBatteryIndicationCycle";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmLowBatteryIndicationCycleTask, s_midgetRsmLowBatteryIndicationCycleTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmLowBatteryIndicationCycle(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmLowBatteryIndicationCycle";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmLowBatteryIndicationCycle' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmLowBatteryIndicationCycle' must be set");
            return;
        }
        jholder< jint > jhrsmLowBatteryIndicationCycle = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmLowBatteryIndicationCycleTask, s_midsetRsmLowBatteryIndicationCycleTask,
                    jhObject.get(), 
                    jhrsmLowBatteryIndicationCycle.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmScanLineWidth(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmScanLineWidth";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmScanLineWidthTask, s_midgetRsmScanLineWidthTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmScanLineWidth(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmScanLineWidth";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmScanLineWidth' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmScanLineWidth' must be set");
            return;
        }
        jholder< jstring > jhrsmScanLineWidth = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmScanLineWidthTask, s_midsetRsmScanLineWidthTask,
                    jhObject.get(), 
                    jhrsmScanLineWidth.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmGoodScansDelay(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmGoodScansDelay";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmGoodScansDelayTask, s_midgetRsmGoodScansDelayTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmGoodScansDelay(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmGoodScansDelay";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmGoodScansDelay' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmGoodScansDelay' must be set");
            return;
        }
        jholder< jint > jhrsmGoodScansDelay = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmGoodScansDelayTask, s_midsetRsmGoodScansDelayTask,
                    jhObject.get(), 
                    jhrsmGoodScansDelay.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmDecodeFeedback(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmDecodeFeedback";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmDecodeFeedbackTask, s_midgetRsmDecodeFeedbackTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmDecodeFeedback(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmDecodeFeedback";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmDecodeFeedback' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmDecodeFeedback' must be set");
            return;
        }
        jholder< jboolean > jhrsmDecodeFeedback = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmDecodeFeedbackTask, s_midsetRsmDecodeFeedbackTask,
                    jhObject.get(), 
                    jhrsmDecodeFeedback.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmIgnoreCode128Usps(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmIgnoreCode128Usps";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmIgnoreCode128UspsTask, s_midgetRsmIgnoreCode128UspsTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmIgnoreCode128Usps(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmIgnoreCode128Usps";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmIgnoreCode128Usps' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmIgnoreCode128Usps' must be set");
            return;
        }
        jholder< jboolean > jhrsmIgnoreCode128Usps = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmIgnoreCode128UspsTask, s_midsetRsmIgnoreCode128UspsTask,
                    jhObject.get(), 
                    jhrsmIgnoreCode128Usps.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmScanTriggerWakeup(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmScanTriggerWakeup";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmScanTriggerWakeupTask, s_midgetRsmScanTriggerWakeupTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmScanTriggerWakeup(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmScanTriggerWakeup";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmScanTriggerWakeup' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmScanTriggerWakeup' must be set");
            return;
        }
        jholder< jboolean > jhrsmScanTriggerWakeup = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmScanTriggerWakeupTask, s_midsetRsmScanTriggerWakeupTask,
                    jhObject.get(), 
                    jhrsmScanTriggerWakeup.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmMems(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmMems";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmMemsTask, s_midgetRsmMemsTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmMems(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmMems";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmMems' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmMems' must be set");
            return;
        }
        jholder< jboolean > jhrsmMems = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmMemsTask, s_midsetRsmMemsTask,
                    jhObject.get(), 
                    jhrsmMems.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmProximityEnable(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmProximityEnable";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmProximityEnableTask, s_midgetRsmProximityEnableTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmProximityEnable(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmProximityEnable";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmProximityEnable' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmProximityEnable' must be set");
            return;
        }
        jholder< jboolean > jhrsmProximityEnable = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmProximityEnableTask, s_midsetRsmProximityEnableTask,
                    jhObject.get(), 
                    jhrsmProximityEnable.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmProximityContinuous(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmProximityContinuous";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmProximityContinuousTask, s_midgetRsmProximityContinuousTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmProximityContinuous(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmProximityContinuous";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmProximityContinuous' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmProximityContinuous' must be set");
            return;
        }
        jholder< jboolean > jhrsmProximityContinuous = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmProximityContinuousTask, s_midsetRsmProximityContinuousTask,
                    jhObject.get(), 
                    jhrsmProximityContinuous.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmProximityDistance(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmProximityDistance";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmProximityDistanceTask, s_midgetRsmProximityDistanceTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmProximityDistance(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmProximityDistance";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmProximityDistance' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmProximityDistance' must be set");
            return;
        }
        jholder< jstring > jhrsmProximityDistance = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmProximityDistanceTask, s_midsetRsmProximityDistanceTask,
                    jhObject.get(), 
                    jhrsmProximityDistance.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmPagingEnable(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmPagingEnable";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmPagingEnableTask, s_midgetRsmPagingEnableTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmPagingEnable(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmPagingEnable";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmPagingEnable' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmPagingEnable' must be set");
            return;
        }
        jholder< jboolean > jhrsmPagingEnable = 
            rho_cast< jboolean >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmPagingEnableTask, s_midsetRsmPagingEnableTask,
                    jhObject.get(), 
                    jhrsmPagingEnable.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getRsmPagingBeepSequence(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getRsmPagingBeepSequence";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetRsmPagingBeepSequenceTask, s_midgetRsmPagingBeepSequenceTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setRsmPagingBeepSequence(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setRsmPagingBeepSequence";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rsmPagingBeepSequence' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rsmPagingBeepSequence' must be set");
            return;
        }
        jholder< jint > jhrsmPagingBeepSequence = 
            rho_cast< jint >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetRsmPagingBeepSequenceTask, s_midsetRsmPagingBeepSequenceTask,
                    jhObject.get(), 
                    jhrsmPagingBeepSequence.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    static
    void enumerate(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "enumerate";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getSingleton(env); 

        jhobject jhTask = env->NewObject(s_clsenumerateTask, s_midenumerateTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void enable(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "enable";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jholder< jobject > jhpropertyMap = (argsAdapter.size() <= 0) ?
            0 : 
                convertToPropertyMap(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clsenableTask, s_midenableTask,
                    jhObject.get(), 
                    jhpropertyMap.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void registerBluetoothStatus(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "registerBluetoothStatus";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsregisterBluetoothStatusTask, s_midregisterBluetoothStatusTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void start(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "start";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsstartTask, s_midstartTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void stop(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "stop";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsstopTask, s_midstopTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void disable(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "disable";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsdisableTask, s_middisableTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void barcode_recognize(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "barcode_recognize";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'imageFilePath' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'imageFilePath' must be set");
            return;
        }
        jholder< jstring > jhimageFilePath = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clsbarcode_recognizeTask, s_midbarcode_recognizeTask,
                    jhObject.get(), 
                    jhimageFilePath.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getSupportedProperties(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getSupportedProperties";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetSupportedPropertiesTask, s_midgetSupportedPropertiesTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void take(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "take";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jholder< jobject > jhpropertyMap = (argsAdapter.size() <= 0) ?
            0 : 
                convertToPropertyMap(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clstakeTask, s_midtakeTask,
                    jhObject.get(), 
                    jhpropertyMap.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void take_barcode(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "take_barcode";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'rubyCallbackURL' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'rubyCallbackURL' must be set");
            return;
        }
        jholder< jstring > jhrubyCallbackURL = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jholder< jobject > jhpropertyMap = (argsAdapter.size() <= 1) ?
            0 : 
                convertToPropertyMap(env, argsAdapter[1]);

        jhobject jhTask = env->NewObject(s_clstake_barcodeTask, s_midtake_barcodeTask,
                    jhObject.get(), 
                    jhrubyCallbackURL.get(),
                    jhpropertyMap.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void commandRemoteScanner(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "commandRemoteScanner";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'command' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'command' must be set");
            return;
        }
        jholder< jstring > jhcommand = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clscommandRemoteScannerTask, s_midcommandRemoteScannerTask,
                    jhObject.get(), 
                    jhcommand.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getProperty(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getProperty";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'propertyName' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'propertyName' must be set");
            return;
        }
        jholder< jstring > jhpropertyName = 
            rho_cast< jstring >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clsgetPropertyTask, s_midgetPropertyTask,
                    jhObject.get(), 
                    jhpropertyName.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getProperties(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getProperties";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'arrayofNames' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'arrayofNames' must be set");
            return;
        }
        jholder< jobject > jharrayofNames = 
            rho_cast< jobject >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clsgetPropertiesTask, s_midgetPropertiesTask,
                    jhObject.get(), 
                    jharrayofNames.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void getAllProperties(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "getAllProperties";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        jhobject jhTask = env->NewObject(s_clsgetAllPropertiesTask, s_midgetAllPropertiesTask,
                    jhObject.get(), 
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setProperty(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setProperty";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'propertyName' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'propertyName' must be set");
            return;
        }
        jholder< jstring > jhpropertyName = 
            rho_cast< jstring >(env, argsAdapter[0]);

        if(argsAdapter.size() <= 1)
        {
            LOG(ERROR) + "Wrong number of arguments: 'propertyValue' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'propertyValue' must be set");
            return;
        }
        jholder< jstring > jhpropertyValue = 
            rho_cast< jstring >(env, argsAdapter[1]);

        jhobject jhTask = env->NewObject(s_clssetPropertyTask, s_midsetPropertyTask,
                    jhObject.get(), 
                    jhpropertyName.get(),
                    jhpropertyValue.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }

    void setProperties(const T& argsAdapter, MethodResultJni& result)
    {
        LOG(TRACE) + "setProperties";

        JNIEnv *env = jniInit();
        if (!env) {
            LOG(FATAL) + "JNI initialization failed";
            return;
        }

        jhobject jhObject = 
            getObject(env); 

        if(argsAdapter.size() <= 0)
        {
            LOG(ERROR) + "Wrong number of arguments: 'propertyMap' must be set ^^^";
            result.setArgError("Wrong number of arguments: 'propertyMap' must be set");
            return;
        }
        jholder< jobject > jhpropertyMap = 
            rho_cast< jobject >(env, argsAdapter[0]);

        jhobject jhTask = env->NewObject(s_clssetPropertiesTask, s_midsetPropertiesTask,
                    jhObject.get(), 
                    jhpropertyMap.get(),
                    static_cast<jobject>(result));

        run(env, jhTask.get(), result, rho::apiGenerator::NOT_FORCE_THREAD);
        if(env->ExceptionCheck() == JNI_TRUE)
        {
            rho::String message = rho::common::clearException(env);
            LOG(ERROR) + message;
            result.setError(message);
        }
    }


};


}
