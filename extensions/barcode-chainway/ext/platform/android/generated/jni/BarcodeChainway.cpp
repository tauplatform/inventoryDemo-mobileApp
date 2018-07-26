#include "BarcodeChainway.h"


namespace rho {

IMPLEMENT_LOGCLASS(CBarcodeChainwayBase, "BarcodeChainwayJNI");

//BarcodeChainwayFactorySingleton staff
const char* const CBarcodeChainwayBase::FACTORY_SINGLETON_CLASS = "com.rho.barcodechainway.BarcodeChainwayFactorySingleton";
jclass CBarcodeChainwayBase::s_clsFactorySingleton = 0;
jmethodID CBarcodeChainwayBase::s_midFactorySetInstance;
jmethodID CBarcodeChainwayBase::s_midFactoryGetInstance;

//BarcodeChainwayFactory staff
const char* const CBarcodeChainwayBase::IFACTORY_CLASS = "com.rho.barcodechainway.IBarcodeChainwayFactory";
jclass CBarcodeChainwayBase::s_clsIFactory = 0;
jmethodID CBarcodeChainwayBase::s_midGetApiSingleton;
jmethodID CBarcodeChainwayBase::s_midGetApiObject;

//BarcodeChainwaySingletonBase staff
const char* const CBarcodeChainwayBase::SINGLETON_BASE_CLASS = "com.rho.barcodechainway.BarcodeChainwaySingletonBase";
jclass CBarcodeChainwayBase::s_clsSingletonBase = 0;

//BarcodeChainwayBase staff
const char* const CBarcodeChainwayBase::OBJECT_BASE_CLASS = "com.rho.barcodechainway.BarcodeChainwayBase";
jclass CBarcodeChainwayBase::s_clsObjectBase = 0;


//IRhoApiDefaultId staff
const char* const CBarcodeChainwayBase::IDEFAULTID_CLASS = "com.rhomobile.rhodes.api.IRhoApiDefaultId";
jclass CBarcodeChainwayBase::s_clsIDefaultId = 0;
jmethodID CBarcodeChainwayBase::s_midGetDefaultID;
jmethodID CBarcodeChainwayBase::s_midSetDefaultID;


//Method tasks

const char* const CBarcodeChainwayBase::GETAUTOENTER_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getAutoEnterTask";

jclass CBarcodeChainwayBase::s_clsgetAutoEnterTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetAutoEnterTask;

const char* const CBarcodeChainwayBase::SETAUTOENTER_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setAutoEnterTask";

jclass CBarcodeChainwayBase::s_clssetAutoEnterTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetAutoEnterTask;

const char* const CBarcodeChainwayBase::GETAUTOTAB_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getAutoTabTask";

jclass CBarcodeChainwayBase::s_clsgetAutoTabTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetAutoTabTask;

const char* const CBarcodeChainwayBase::SETAUTOTAB_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setAutoTabTask";

jclass CBarcodeChainwayBase::s_clssetAutoTabTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetAutoTabTask;

const char* const CBarcodeChainwayBase::GETHAPTICFEEDBACK_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getHapticFeedbackTask";

jclass CBarcodeChainwayBase::s_clsgetHapticFeedbackTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetHapticFeedbackTask;

const char* const CBarcodeChainwayBase::SETHAPTICFEEDBACK_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setHapticFeedbackTask";

jclass CBarcodeChainwayBase::s_clssetHapticFeedbackTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetHapticFeedbackTask;

const char* const CBarcodeChainwayBase::GETLINEARSECURITYLEVEL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getLinearSecurityLevelTask";

jclass CBarcodeChainwayBase::s_clsgetLinearSecurityLevelTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetLinearSecurityLevelTask;

const char* const CBarcodeChainwayBase::SETLINEARSECURITYLEVEL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setLinearSecurityLevelTask";

jclass CBarcodeChainwayBase::s_clssetLinearSecurityLevelTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetLinearSecurityLevelTask;

const char* const CBarcodeChainwayBase::GETSCANTIMEOUT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getScanTimeoutTask";

jclass CBarcodeChainwayBase::s_clsgetScanTimeoutTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetScanTimeoutTask;

const char* const CBarcodeChainwayBase::SETSCANTIMEOUT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setScanTimeoutTask";

jclass CBarcodeChainwayBase::s_clssetScanTimeoutTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetScanTimeoutTask;

const char* const CBarcodeChainwayBase::GETRASTERMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRasterModeTask";

jclass CBarcodeChainwayBase::s_clsgetRasterModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRasterModeTask;

const char* const CBarcodeChainwayBase::SETRASTERMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRasterModeTask";

jclass CBarcodeChainwayBase::s_clssetRasterModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRasterModeTask;

const char* const CBarcodeChainwayBase::GETRASTERHEIGHT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRasterHeightTask";

jclass CBarcodeChainwayBase::s_clsgetRasterHeightTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRasterHeightTask;

const char* const CBarcodeChainwayBase::SETRASTERHEIGHT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRasterHeightTask";

jclass CBarcodeChainwayBase::s_clssetRasterHeightTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRasterHeightTask;

const char* const CBarcodeChainwayBase::GETAIMTYPE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getAimTypeTask";

jclass CBarcodeChainwayBase::s_clsgetAimTypeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetAimTypeTask;

const char* const CBarcodeChainwayBase::SETAIMTYPE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setAimTypeTask";

jclass CBarcodeChainwayBase::s_clssetAimTypeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetAimTypeTask;

const char* const CBarcodeChainwayBase::GETTIMEDAIMDURATION_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getTimedAimDurationTask";

jclass CBarcodeChainwayBase::s_clsgetTimedAimDurationTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetTimedAimDurationTask;

const char* const CBarcodeChainwayBase::SETTIMEDAIMDURATION_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setTimedAimDurationTask";

jclass CBarcodeChainwayBase::s_clssetTimedAimDurationTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetTimedAimDurationTask;

const char* const CBarcodeChainwayBase::GETSAMESYMBOLTIMEOUT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getSameSymbolTimeoutTask";

jclass CBarcodeChainwayBase::s_clsgetSameSymbolTimeoutTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetSameSymbolTimeoutTask;

const char* const CBarcodeChainwayBase::SETSAMESYMBOLTIMEOUT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setSameSymbolTimeoutTask";

jclass CBarcodeChainwayBase::s_clssetSameSymbolTimeoutTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetSameSymbolTimeoutTask;

const char* const CBarcodeChainwayBase::GETDIFFERENTSYMBOLTIMEOUT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDifferentSymbolTimeoutTask";

jclass CBarcodeChainwayBase::s_clsgetDifferentSymbolTimeoutTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDifferentSymbolTimeoutTask;

const char* const CBarcodeChainwayBase::SETDIFFERENTSYMBOLTIMEOUT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDifferentSymbolTimeoutTask";

jclass CBarcodeChainwayBase::s_clssetDifferentSymbolTimeoutTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDifferentSymbolTimeoutTask;

const char* const CBarcodeChainwayBase::GETAIMMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getAimModeTask";

jclass CBarcodeChainwayBase::s_clsgetAimModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetAimModeTask;

const char* const CBarcodeChainwayBase::SETAIMMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setAimModeTask";

jclass CBarcodeChainwayBase::s_clssetAimModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetAimModeTask;

const char* const CBarcodeChainwayBase::GETPICKLISTMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getPicklistModeTask";

jclass CBarcodeChainwayBase::s_clsgetPicklistModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetPicklistModeTask;

const char* const CBarcodeChainwayBase::SETPICKLISTMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setPicklistModeTask";

jclass CBarcodeChainwayBase::s_clssetPicklistModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetPicklistModeTask;

const char* const CBarcodeChainwayBase::GETVIEWFINDERMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getViewfinderModeTask";

jclass CBarcodeChainwayBase::s_clsgetViewfinderModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetViewfinderModeTask;

const char* const CBarcodeChainwayBase::SETVIEWFINDERMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setViewfinderModeTask";

jclass CBarcodeChainwayBase::s_clssetViewfinderModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetViewfinderModeTask;

const char* const CBarcodeChainwayBase::GETVIEWFINDERX_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getViewfinderXTask";

jclass CBarcodeChainwayBase::s_clsgetViewfinderXTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetViewfinderXTask;

const char* const CBarcodeChainwayBase::SETVIEWFINDERX_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setViewfinderXTask";

jclass CBarcodeChainwayBase::s_clssetViewfinderXTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetViewfinderXTask;

const char* const CBarcodeChainwayBase::GETVIEWFINDERY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getViewfinderYTask";

jclass CBarcodeChainwayBase::s_clsgetViewfinderYTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetViewfinderYTask;

const char* const CBarcodeChainwayBase::SETVIEWFINDERY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setViewfinderYTask";

jclass CBarcodeChainwayBase::s_clssetViewfinderYTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetViewfinderYTask;

const char* const CBarcodeChainwayBase::GETVIEWFINDERWIDTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getViewfinderWidthTask";

jclass CBarcodeChainwayBase::s_clsgetViewfinderWidthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetViewfinderWidthTask;

const char* const CBarcodeChainwayBase::SETVIEWFINDERWIDTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setViewfinderWidthTask";

jclass CBarcodeChainwayBase::s_clssetViewfinderWidthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetViewfinderWidthTask;

const char* const CBarcodeChainwayBase::GETVIEWFINDERHEIGHT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getViewfinderHeightTask";

jclass CBarcodeChainwayBase::s_clsgetViewfinderHeightTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetViewfinderHeightTask;

const char* const CBarcodeChainwayBase::SETVIEWFINDERHEIGHT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setViewfinderHeightTask";

jclass CBarcodeChainwayBase::s_clssetViewfinderHeightTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetViewfinderHeightTask;

const char* const CBarcodeChainwayBase::GETVIEWFINDERFEEDBACK_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getViewfinderFeedbackTask";

jclass CBarcodeChainwayBase::s_clsgetViewfinderFeedbackTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetViewfinderFeedbackTask;

const char* const CBarcodeChainwayBase::SETVIEWFINDERFEEDBACK_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setViewfinderFeedbackTask";

jclass CBarcodeChainwayBase::s_clssetViewfinderFeedbackTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetViewfinderFeedbackTask;

const char* const CBarcodeChainwayBase::GETVIEWFINDERFEEDBACKTIME_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getViewfinderFeedbackTimeTask";

jclass CBarcodeChainwayBase::s_clsgetViewfinderFeedbackTimeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetViewfinderFeedbackTimeTask;

const char* const CBarcodeChainwayBase::SETVIEWFINDERFEEDBACKTIME_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setViewfinderFeedbackTimeTask";

jclass CBarcodeChainwayBase::s_clssetViewfinderFeedbackTimeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetViewfinderFeedbackTimeTask;

const char* const CBarcodeChainwayBase::GETFOCUSMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getFocusModeTask";

jclass CBarcodeChainwayBase::s_clsgetFocusModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetFocusModeTask;

const char* const CBarcodeChainwayBase::SETFOCUSMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setFocusModeTask";

jclass CBarcodeChainwayBase::s_clssetFocusModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetFocusModeTask;

const char* const CBarcodeChainwayBase::GETILLUMINATIONMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getIlluminationModeTask";

jclass CBarcodeChainwayBase::s_clsgetIlluminationModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetIlluminationModeTask;

const char* const CBarcodeChainwayBase::SETILLUMINATIONMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setIlluminationModeTask";

jclass CBarcodeChainwayBase::s_clssetIlluminationModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetIlluminationModeTask;

const char* const CBarcodeChainwayBase::GETDPMMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDpmModeTask";

jclass CBarcodeChainwayBase::s_clsgetDpmModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDpmModeTask;

const char* const CBarcodeChainwayBase::SETDPMMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDpmModeTask";

jclass CBarcodeChainwayBase::s_clssetDpmModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDpmModeTask;

const char* const CBarcodeChainwayBase::GETINVERSE1DMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getInverse1dModeTask";

jclass CBarcodeChainwayBase::s_clsgetInverse1dModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetInverse1dModeTask;

const char* const CBarcodeChainwayBase::SETINVERSE1DMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setInverse1dModeTask";

jclass CBarcodeChainwayBase::s_clssetInverse1dModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetInverse1dModeTask;

const char* const CBarcodeChainwayBase::GETPOORQUALITY1DMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getPoorQuality1dModeTask";

jclass CBarcodeChainwayBase::s_clsgetPoorQuality1dModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetPoorQuality1dModeTask;

const char* const CBarcodeChainwayBase::SETPOORQUALITY1DMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setPoorQuality1dModeTask";

jclass CBarcodeChainwayBase::s_clssetPoorQuality1dModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetPoorQuality1dModeTask;

const char* const CBarcodeChainwayBase::GETBEAMWIDTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getBeamWidthTask";

jclass CBarcodeChainwayBase::s_clsgetBeamWidthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetBeamWidthTask;

const char* const CBarcodeChainwayBase::SETBEAMWIDTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setBeamWidthTask";

jclass CBarcodeChainwayBase::s_clssetBeamWidthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetBeamWidthTask;

const char* const CBarcodeChainwayBase::GETDBPMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDbpModeTask";

jclass CBarcodeChainwayBase::s_clsgetDbpModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDbpModeTask;

const char* const CBarcodeChainwayBase::SETDBPMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDbpModeTask";

jclass CBarcodeChainwayBase::s_clssetDbpModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDbpModeTask;

const char* const CBarcodeChainwayBase::GETKLASSEEINS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getKlasseEinsTask";

jclass CBarcodeChainwayBase::s_clsgetKlasseEinsTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetKlasseEinsTask;

const char* const CBarcodeChainwayBase::SETKLASSEEINS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setKlasseEinsTask";

jclass CBarcodeChainwayBase::s_clssetKlasseEinsTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetKlasseEinsTask;

const char* const CBarcodeChainwayBase::GETADAPTIVESCANNING_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getAdaptiveScanningTask";

jclass CBarcodeChainwayBase::s_clsgetAdaptiveScanningTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetAdaptiveScanningTask;

const char* const CBarcodeChainwayBase::SETADAPTIVESCANNING_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setAdaptiveScanningTask";

jclass CBarcodeChainwayBase::s_clssetAdaptiveScanningTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetAdaptiveScanningTask;

const char* const CBarcodeChainwayBase::GETBIDIRECTIONALREDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getBidirectionalRedundancyTask";

jclass CBarcodeChainwayBase::s_clsgetBidirectionalRedundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetBidirectionalRedundancyTask;

const char* const CBarcodeChainwayBase::SETBIDIRECTIONALREDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setBidirectionalRedundancyTask";

jclass CBarcodeChainwayBase::s_clssetBidirectionalRedundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetBidirectionalRedundancyTask;

const char* const CBarcodeChainwayBase::GETBARCODEDATAFORMAT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getBarcodeDataFormatTask";

jclass CBarcodeChainwayBase::s_clsgetBarcodeDataFormatTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetBarcodeDataFormatTask;

const char* const CBarcodeChainwayBase::SETBARCODEDATAFORMAT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setBarcodeDataFormatTask";

jclass CBarcodeChainwayBase::s_clssetBarcodeDataFormatTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetBarcodeDataFormatTask;

const char* const CBarcodeChainwayBase::GETDATABUFFERSIZE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDataBufferSizeTask";

jclass CBarcodeChainwayBase::s_clsgetDataBufferSizeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDataBufferSizeTask;

const char* const CBarcodeChainwayBase::SETDATABUFFERSIZE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDataBufferSizeTask";

jclass CBarcodeChainwayBase::s_clssetDataBufferSizeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDataBufferSizeTask;

const char* const CBarcodeChainwayBase::GETCONNECTIONIDLETIMEOUT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getConnectionIdleTimeoutTask";

jclass CBarcodeChainwayBase::s_clsgetConnectionIdleTimeoutTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetConnectionIdleTimeoutTask;

const char* const CBarcodeChainwayBase::SETCONNECTIONIDLETIMEOUT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setConnectionIdleTimeoutTask";

jclass CBarcodeChainwayBase::s_clssetConnectionIdleTimeoutTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetConnectionIdleTimeoutTask;

const char* const CBarcodeChainwayBase::GETDISCONNECTBTONDISABLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDisconnectBtOnDisableTask";

jclass CBarcodeChainwayBase::s_clsgetDisconnectBtOnDisableTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDisconnectBtOnDisableTask;

const char* const CBarcodeChainwayBase::SETDISCONNECTBTONDISABLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDisconnectBtOnDisableTask";

jclass CBarcodeChainwayBase::s_clssetDisconnectBtOnDisableTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDisconnectBtOnDisableTask;

const char* const CBarcodeChainwayBase::GETDISPLAYBTADDRESSBARCODEONENABLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDisplayBtAddressBarcodeOnEnableTask";

jclass CBarcodeChainwayBase::s_clsgetDisplayBtAddressBarcodeOnEnableTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDisplayBtAddressBarcodeOnEnableTask;

const char* const CBarcodeChainwayBase::SETDISPLAYBTADDRESSBARCODEONENABLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDisplayBtAddressBarcodeOnEnableTask";

jclass CBarcodeChainwayBase::s_clssetDisplayBtAddressBarcodeOnEnableTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDisplayBtAddressBarcodeOnEnableTask;

const char* const CBarcodeChainwayBase::GETENABLETIMEOUT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getEnableTimeoutTask";

jclass CBarcodeChainwayBase::s_clsgetEnableTimeoutTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetEnableTimeoutTask;

const char* const CBarcodeChainwayBase::SETENABLETIMEOUT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setEnableTimeoutTask";

jclass CBarcodeChainwayBase::s_clssetEnableTimeoutTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetEnableTimeoutTask;

const char* const CBarcodeChainwayBase::GETFRIENDLYNAME_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getFriendlyNameTask";

jclass CBarcodeChainwayBase::s_clsgetFriendlyNameTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetFriendlyNameTask;

const char* const CBarcodeChainwayBase::GETLCDMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getLcdModeTask";

jclass CBarcodeChainwayBase::s_clsgetLcdModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetLcdModeTask;

const char* const CBarcodeChainwayBase::SETLCDMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setLcdModeTask";

jclass CBarcodeChainwayBase::s_clssetLcdModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetLcdModeTask;

const char* const CBarcodeChainwayBase::GETLOWBATTERYSCAN_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getLowBatteryScanTask";

jclass CBarcodeChainwayBase::s_clsgetLowBatteryScanTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetLowBatteryScanTask;

const char* const CBarcodeChainwayBase::SETLOWBATTERYSCAN_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setLowBatteryScanTask";

jclass CBarcodeChainwayBase::s_clssetLowBatteryScanTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetLowBatteryScanTask;

const char* const CBarcodeChainwayBase::GETTRIGGERCONNECTED_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getTriggerConnectedTask";

jclass CBarcodeChainwayBase::s_clsgetTriggerConnectedTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetTriggerConnectedTask;

const char* const CBarcodeChainwayBase::SETTRIGGERCONNECTED_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setTriggerConnectedTask";

jclass CBarcodeChainwayBase::s_clssetTriggerConnectedTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetTriggerConnectedTask;

const char* const CBarcodeChainwayBase::GETDISABLESCANNERDURINGNAVIGATE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDisableScannerDuringNavigateTask";

jclass CBarcodeChainwayBase::s_clsgetDisableScannerDuringNavigateTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDisableScannerDuringNavigateTask;

const char* const CBarcodeChainwayBase::SETDISABLESCANNERDURINGNAVIGATE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDisableScannerDuringNavigateTask";

jclass CBarcodeChainwayBase::s_clssetDisableScannerDuringNavigateTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDisableScannerDuringNavigateTask;

const char* const CBarcodeChainwayBase::GETDECODEVOLUME_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDecodeVolumeTask";

jclass CBarcodeChainwayBase::s_clsgetDecodeVolumeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDecodeVolumeTask;

const char* const CBarcodeChainwayBase::SETDECODEVOLUME_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDecodeVolumeTask";

jclass CBarcodeChainwayBase::s_clssetDecodeVolumeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDecodeVolumeTask;

const char* const CBarcodeChainwayBase::GETDECODEDURATION_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDecodeDurationTask";

jclass CBarcodeChainwayBase::s_clsgetDecodeDurationTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDecodeDurationTask;

const char* const CBarcodeChainwayBase::SETDECODEDURATION_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDecodeDurationTask";

jclass CBarcodeChainwayBase::s_clssetDecodeDurationTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDecodeDurationTask;

const char* const CBarcodeChainwayBase::GETDECODEFREQUENCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDecodeFrequencyTask";

jclass CBarcodeChainwayBase::s_clsgetDecodeFrequencyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDecodeFrequencyTask;

const char* const CBarcodeChainwayBase::SETDECODEFREQUENCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDecodeFrequencyTask";

jclass CBarcodeChainwayBase::s_clssetDecodeFrequencyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDecodeFrequencyTask;

const char* const CBarcodeChainwayBase::GETINVALIDDECODEFREQUENCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getInvalidDecodeFrequencyTask";

jclass CBarcodeChainwayBase::s_clsgetInvalidDecodeFrequencyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetInvalidDecodeFrequencyTask;

const char* const CBarcodeChainwayBase::SETINVALIDDECODEFREQUENCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setInvalidDecodeFrequencyTask";

jclass CBarcodeChainwayBase::s_clssetInvalidDecodeFrequencyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetInvalidDecodeFrequencyTask;

const char* const CBarcodeChainwayBase::GETDECODESOUND_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDecodeSoundTask";

jclass CBarcodeChainwayBase::s_clsgetDecodeSoundTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDecodeSoundTask;

const char* const CBarcodeChainwayBase::SETDECODESOUND_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDecodeSoundTask";

jclass CBarcodeChainwayBase::s_clssetDecodeSoundTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDecodeSoundTask;

const char* const CBarcodeChainwayBase::GETINVALIDDECODESOUND_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getInvalidDecodeSoundTask";

jclass CBarcodeChainwayBase::s_clsgetInvalidDecodeSoundTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetInvalidDecodeSoundTask;

const char* const CBarcodeChainwayBase::SETINVALIDDECODESOUND_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setInvalidDecodeSoundTask";

jclass CBarcodeChainwayBase::s_clssetInvalidDecodeSoundTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetInvalidDecodeSoundTask;

const char* const CBarcodeChainwayBase::GETSCANNERTYPE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getScannerTypeTask";

jclass CBarcodeChainwayBase::s_clsgetScannerTypeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetScannerTypeTask;

const char* const CBarcodeChainwayBase::GETALLDECODERS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getAllDecodersTask";

jclass CBarcodeChainwayBase::s_clsgetAllDecodersTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetAllDecodersTask;

const char* const CBarcodeChainwayBase::SETALLDECODERS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setAllDecodersTask";

jclass CBarcodeChainwayBase::s_clssetAllDecodersTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetAllDecodersTask;

const char* const CBarcodeChainwayBase::GETAZTEC_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getAztecTask";

jclass CBarcodeChainwayBase::s_clsgetAztecTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetAztecTask;

const char* const CBarcodeChainwayBase::SETAZTEC_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setAztecTask";

jclass CBarcodeChainwayBase::s_clssetAztecTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetAztecTask;

const char* const CBarcodeChainwayBase::GETCHINESE2OF5_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getChinese2of5Task";

jclass CBarcodeChainwayBase::s_clsgetChinese2of5Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetChinese2of5Task;

const char* const CBarcodeChainwayBase::SETCHINESE2OF5_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setChinese2of5Task";

jclass CBarcodeChainwayBase::s_clssetChinese2of5Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetChinese2of5Task;

const char* const CBarcodeChainwayBase::GETCODABAR_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCodabarTask";

jclass CBarcodeChainwayBase::s_clsgetCodabarTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCodabarTask;

const char* const CBarcodeChainwayBase::SETCODABAR_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCodabarTask";

jclass CBarcodeChainwayBase::s_clssetCodabarTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCodabarTask;

const char* const CBarcodeChainwayBase::GETCODABARCLSIEDITING_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCodabarClsiEditingTask";

jclass CBarcodeChainwayBase::s_clsgetCodabarClsiEditingTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCodabarClsiEditingTask;

const char* const CBarcodeChainwayBase::SETCODABARCLSIEDITING_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCodabarClsiEditingTask";

jclass CBarcodeChainwayBase::s_clssetCodabarClsiEditingTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCodabarClsiEditingTask;

const char* const CBarcodeChainwayBase::GETCODABARMAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCodabarMaxLengthTask";

jclass CBarcodeChainwayBase::s_clsgetCodabarMaxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCodabarMaxLengthTask;

const char* const CBarcodeChainwayBase::SETCODABARMAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCodabarMaxLengthTask";

jclass CBarcodeChainwayBase::s_clssetCodabarMaxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCodabarMaxLengthTask;

const char* const CBarcodeChainwayBase::GETCODABARMINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCodabarMinLengthTask";

jclass CBarcodeChainwayBase::s_clsgetCodabarMinLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCodabarMinLengthTask;

const char* const CBarcodeChainwayBase::SETCODABARMINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCodabarMinLengthTask";

jclass CBarcodeChainwayBase::s_clssetCodabarMinLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCodabarMinLengthTask;

const char* const CBarcodeChainwayBase::GETCODABARNOTISEDITING_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCodabarNotisEditingTask";

jclass CBarcodeChainwayBase::s_clsgetCodabarNotisEditingTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCodabarNotisEditingTask;

const char* const CBarcodeChainwayBase::SETCODABARNOTISEDITING_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCodabarNotisEditingTask";

jclass CBarcodeChainwayBase::s_clssetCodabarNotisEditingTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCodabarNotisEditingTask;

const char* const CBarcodeChainwayBase::GETCODABARREDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCodabarRedundancyTask";

jclass CBarcodeChainwayBase::s_clsgetCodabarRedundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCodabarRedundancyTask;

const char* const CBarcodeChainwayBase::SETCODABARREDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCodabarRedundancyTask";

jclass CBarcodeChainwayBase::s_clssetCodabarRedundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCodabarRedundancyTask;

const char* const CBarcodeChainwayBase::GETCODE11_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode11Task";

jclass CBarcodeChainwayBase::s_clsgetCode11Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode11Task;

const char* const CBarcodeChainwayBase::SETCODE11_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode11Task";

jclass CBarcodeChainwayBase::s_clssetCode11Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode11Task;

const char* const CBarcodeChainwayBase::GETCODE11CHECKDIGITCOUNT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode11checkDigitCountTask";

jclass CBarcodeChainwayBase::s_clsgetCode11checkDigitCountTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode11checkDigitCountTask;

const char* const CBarcodeChainwayBase::SETCODE11CHECKDIGITCOUNT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode11checkDigitCountTask";

jclass CBarcodeChainwayBase::s_clssetCode11checkDigitCountTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode11checkDigitCountTask;

const char* const CBarcodeChainwayBase::GETCODE11MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode11maxLengthTask";

jclass CBarcodeChainwayBase::s_clsgetCode11maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode11maxLengthTask;

const char* const CBarcodeChainwayBase::SETCODE11MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode11maxLengthTask";

jclass CBarcodeChainwayBase::s_clssetCode11maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode11maxLengthTask;

const char* const CBarcodeChainwayBase::GETCODE11MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode11minLengthTask";

jclass CBarcodeChainwayBase::s_clsgetCode11minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode11minLengthTask;

const char* const CBarcodeChainwayBase::SETCODE11MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode11minLengthTask";

jclass CBarcodeChainwayBase::s_clssetCode11minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode11minLengthTask;

const char* const CBarcodeChainwayBase::GETCODE11REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode11redundancyTask";

jclass CBarcodeChainwayBase::s_clsgetCode11redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode11redundancyTask;

const char* const CBarcodeChainwayBase::SETCODE11REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode11redundancyTask";

jclass CBarcodeChainwayBase::s_clssetCode11redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode11redundancyTask;

const char* const CBarcodeChainwayBase::GETCODE11REPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode11reportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetCode11reportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode11reportCheckDigitTask;

const char* const CBarcodeChainwayBase::SETCODE11REPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode11reportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetCode11reportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode11reportCheckDigitTask;

const char* const CBarcodeChainwayBase::GETCODE128_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode128Task";

jclass CBarcodeChainwayBase::s_clsgetCode128Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode128Task;

const char* const CBarcodeChainwayBase::SETCODE128_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode128Task";

jclass CBarcodeChainwayBase::s_clssetCode128Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode128Task;

const char* const CBarcodeChainwayBase::GETCODE128CHECKISBTTABLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode128checkIsBtTableTask";

jclass CBarcodeChainwayBase::s_clsgetCode128checkIsBtTableTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode128checkIsBtTableTask;

const char* const CBarcodeChainwayBase::SETCODE128CHECKISBTTABLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode128checkIsBtTableTask";

jclass CBarcodeChainwayBase::s_clssetCode128checkIsBtTableTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode128checkIsBtTableTask;

const char* const CBarcodeChainwayBase::GETCODE128EAN128_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode128ean128Task";

jclass CBarcodeChainwayBase::s_clsgetCode128ean128Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode128ean128Task;

const char* const CBarcodeChainwayBase::SETCODE128EAN128_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode128ean128Task";

jclass CBarcodeChainwayBase::s_clssetCode128ean128Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode128ean128Task;

const char* const CBarcodeChainwayBase::GETCODE128ISBT128_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode128isbt128Task";

jclass CBarcodeChainwayBase::s_clsgetCode128isbt128Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode128isbt128Task;

const char* const CBarcodeChainwayBase::SETCODE128ISBT128_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode128isbt128Task";

jclass CBarcodeChainwayBase::s_clssetCode128isbt128Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode128isbt128Task;

const char* const CBarcodeChainwayBase::GETCODE128ISBT128CONCATMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode128isbt128ConcatModeTask";

jclass CBarcodeChainwayBase::s_clsgetCode128isbt128ConcatModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode128isbt128ConcatModeTask;

const char* const CBarcodeChainwayBase::SETCODE128ISBT128CONCATMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode128isbt128ConcatModeTask";

jclass CBarcodeChainwayBase::s_clssetCode128isbt128ConcatModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode128isbt128ConcatModeTask;

const char* const CBarcodeChainwayBase::GETCODE128MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode128maxLengthTask";

jclass CBarcodeChainwayBase::s_clsgetCode128maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode128maxLengthTask;

const char* const CBarcodeChainwayBase::SETCODE128MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode128maxLengthTask";

jclass CBarcodeChainwayBase::s_clssetCode128maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode128maxLengthTask;

const char* const CBarcodeChainwayBase::GETCODE128MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode128minLengthTask";

jclass CBarcodeChainwayBase::s_clsgetCode128minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode128minLengthTask;

const char* const CBarcodeChainwayBase::SETCODE128MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode128minLengthTask";

jclass CBarcodeChainwayBase::s_clssetCode128minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode128minLengthTask;

const char* const CBarcodeChainwayBase::GETCODE128OTHER128_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode128other128Task";

jclass CBarcodeChainwayBase::s_clsgetCode128other128Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode128other128Task;

const char* const CBarcodeChainwayBase::SETCODE128OTHER128_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode128other128Task";

jclass CBarcodeChainwayBase::s_clssetCode128other128Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode128other128Task;

const char* const CBarcodeChainwayBase::GETCODE128REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode128redundancyTask";

jclass CBarcodeChainwayBase::s_clsgetCode128redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode128redundancyTask;

const char* const CBarcodeChainwayBase::SETCODE128REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode128redundancyTask";

jclass CBarcodeChainwayBase::s_clssetCode128redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode128redundancyTask;

const char* const CBarcodeChainwayBase::GETCODE128SECURITYLEVEL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode128securityLevelTask";

jclass CBarcodeChainwayBase::s_clsgetCode128securityLevelTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode128securityLevelTask;

const char* const CBarcodeChainwayBase::SETCODE128SECURITYLEVEL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode128securityLevelTask";

jclass CBarcodeChainwayBase::s_clssetCode128securityLevelTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode128securityLevelTask;

const char* const CBarcodeChainwayBase::GETCOMPOSITEAB_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCompositeAbTask";

jclass CBarcodeChainwayBase::s_clsgetCompositeAbTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCompositeAbTask;

const char* const CBarcodeChainwayBase::SETCOMPOSITEAB_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCompositeAbTask";

jclass CBarcodeChainwayBase::s_clssetCompositeAbTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCompositeAbTask;

const char* const CBarcodeChainwayBase::GETCOMPOSITEABUCCLINKMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCompositeAbUccLinkModeTask";

jclass CBarcodeChainwayBase::s_clsgetCompositeAbUccLinkModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCompositeAbUccLinkModeTask;

const char* const CBarcodeChainwayBase::SETCOMPOSITEABUCCLINKMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCompositeAbUccLinkModeTask";

jclass CBarcodeChainwayBase::s_clssetCompositeAbUccLinkModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCompositeAbUccLinkModeTask;

const char* const CBarcodeChainwayBase::GETCOMPOSITEABUSEUPCPREAMBLECHECKDIGITRULES_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCompositeAbUseUpcPreambleCheckDigitRulesTask";

jclass CBarcodeChainwayBase::s_clsgetCompositeAbUseUpcPreambleCheckDigitRulesTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCompositeAbUseUpcPreambleCheckDigitRulesTask;

const char* const CBarcodeChainwayBase::SETCOMPOSITEABUSEUPCPREAMBLECHECKDIGITRULES_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCompositeAbUseUpcPreambleCheckDigitRulesTask";

jclass CBarcodeChainwayBase::s_clssetCompositeAbUseUpcPreambleCheckDigitRulesTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCompositeAbUseUpcPreambleCheckDigitRulesTask;

const char* const CBarcodeChainwayBase::GETCOMPOSITEC_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCompositeCTask";

jclass CBarcodeChainwayBase::s_clsgetCompositeCTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCompositeCTask;

const char* const CBarcodeChainwayBase::SETCOMPOSITEC_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCompositeCTask";

jclass CBarcodeChainwayBase::s_clssetCompositeCTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCompositeCTask;

const char* const CBarcodeChainwayBase::GETCODE39_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode39Task";

jclass CBarcodeChainwayBase::s_clsgetCode39Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode39Task;

const char* const CBarcodeChainwayBase::SETCODE39_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode39Task";

jclass CBarcodeChainwayBase::s_clssetCode39Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode39Task;

const char* const CBarcodeChainwayBase::GETCODE39CODE32PREFIX_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode39code32PrefixTask";

jclass CBarcodeChainwayBase::s_clsgetCode39code32PrefixTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode39code32PrefixTask;

const char* const CBarcodeChainwayBase::SETCODE39CODE32PREFIX_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode39code32PrefixTask";

jclass CBarcodeChainwayBase::s_clssetCode39code32PrefixTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode39code32PrefixTask;

const char* const CBarcodeChainwayBase::GETCODE39CONVERTTOCODE32_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode39convertToCode32Task";

jclass CBarcodeChainwayBase::s_clsgetCode39convertToCode32Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode39convertToCode32Task;

const char* const CBarcodeChainwayBase::SETCODE39CONVERTTOCODE32_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode39convertToCode32Task";

jclass CBarcodeChainwayBase::s_clssetCode39convertToCode32Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode39convertToCode32Task;

const char* const CBarcodeChainwayBase::GETCODE39FULLASCII_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode39fullAsciiTask";

jclass CBarcodeChainwayBase::s_clsgetCode39fullAsciiTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode39fullAsciiTask;

const char* const CBarcodeChainwayBase::SETCODE39FULLASCII_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode39fullAsciiTask";

jclass CBarcodeChainwayBase::s_clssetCode39fullAsciiTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode39fullAsciiTask;

const char* const CBarcodeChainwayBase::GETCODE39MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode39maxLengthTask";

jclass CBarcodeChainwayBase::s_clsgetCode39maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode39maxLengthTask;

const char* const CBarcodeChainwayBase::SETCODE39MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode39maxLengthTask";

jclass CBarcodeChainwayBase::s_clssetCode39maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode39maxLengthTask;

const char* const CBarcodeChainwayBase::GETCODE39MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode39minLengthTask";

jclass CBarcodeChainwayBase::s_clsgetCode39minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode39minLengthTask;

const char* const CBarcodeChainwayBase::SETCODE39MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode39minLengthTask";

jclass CBarcodeChainwayBase::s_clssetCode39minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode39minLengthTask;

const char* const CBarcodeChainwayBase::GETCODE39REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode39redundancyTask";

jclass CBarcodeChainwayBase::s_clsgetCode39redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode39redundancyTask;

const char* const CBarcodeChainwayBase::SETCODE39REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode39redundancyTask";

jclass CBarcodeChainwayBase::s_clssetCode39redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode39redundancyTask;

const char* const CBarcodeChainwayBase::GETCODE39REPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode39reportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetCode39reportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode39reportCheckDigitTask;

const char* const CBarcodeChainwayBase::SETCODE39REPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode39reportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetCode39reportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode39reportCheckDigitTask;

const char* const CBarcodeChainwayBase::GETCODE39SECURITYLEVEL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode39securityLevelTask";

jclass CBarcodeChainwayBase::s_clsgetCode39securityLevelTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode39securityLevelTask;

const char* const CBarcodeChainwayBase::SETCODE39SECURITYLEVEL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode39securityLevelTask";

jclass CBarcodeChainwayBase::s_clssetCode39securityLevelTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode39securityLevelTask;

const char* const CBarcodeChainwayBase::GETCODE39VERIFYCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode39verifyCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetCode39verifyCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode39verifyCheckDigitTask;

const char* const CBarcodeChainwayBase::SETCODE39VERIFYCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode39verifyCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetCode39verifyCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode39verifyCheckDigitTask;

const char* const CBarcodeChainwayBase::GETCODE93_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode93Task";

jclass CBarcodeChainwayBase::s_clsgetCode93Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode93Task;

const char* const CBarcodeChainwayBase::SETCODE93_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode93Task";

jclass CBarcodeChainwayBase::s_clssetCode93Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode93Task;

const char* const CBarcodeChainwayBase::GETCODE93MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode93maxLengthTask";

jclass CBarcodeChainwayBase::s_clsgetCode93maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode93maxLengthTask;

const char* const CBarcodeChainwayBase::SETCODE93MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode93maxLengthTask";

jclass CBarcodeChainwayBase::s_clssetCode93maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode93maxLengthTask;

const char* const CBarcodeChainwayBase::GETCODE93MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode93minLengthTask";

jclass CBarcodeChainwayBase::s_clsgetCode93minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode93minLengthTask;

const char* const CBarcodeChainwayBase::SETCODE93MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode93minLengthTask";

jclass CBarcodeChainwayBase::s_clssetCode93minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode93minLengthTask;

const char* const CBarcodeChainwayBase::GETCODE93REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCode93redundancyTask";

jclass CBarcodeChainwayBase::s_clsgetCode93redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCode93redundancyTask;

const char* const CBarcodeChainwayBase::SETCODE93REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCode93redundancyTask";

jclass CBarcodeChainwayBase::s_clssetCode93redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCode93redundancyTask;

const char* const CBarcodeChainwayBase::GETD2OF5_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getD2of5Task";

jclass CBarcodeChainwayBase::s_clsgetD2of5Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetD2of5Task;

const char* const CBarcodeChainwayBase::SETD2OF5_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setD2of5Task";

jclass CBarcodeChainwayBase::s_clssetD2of5Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetD2of5Task;

const char* const CBarcodeChainwayBase::GETD2OF5MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getD2of5maxLengthTask";

jclass CBarcodeChainwayBase::s_clsgetD2of5maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetD2of5maxLengthTask;

const char* const CBarcodeChainwayBase::SETD2OF5MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setD2of5maxLengthTask";

jclass CBarcodeChainwayBase::s_clssetD2of5maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetD2of5maxLengthTask;

const char* const CBarcodeChainwayBase::GETD2OF5MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getD2of5minLengthTask";

jclass CBarcodeChainwayBase::s_clsgetD2of5minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetD2of5minLengthTask;

const char* const CBarcodeChainwayBase::SETD2OF5MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setD2of5minLengthTask";

jclass CBarcodeChainwayBase::s_clssetD2of5minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetD2of5minLengthTask;

const char* const CBarcodeChainwayBase::GETD2OF5REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getD2of5redundancyTask";

jclass CBarcodeChainwayBase::s_clsgetD2of5redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetD2of5redundancyTask;

const char* const CBarcodeChainwayBase::SETD2OF5REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setD2of5redundancyTask";

jclass CBarcodeChainwayBase::s_clssetD2of5redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetD2of5redundancyTask;

const char* const CBarcodeChainwayBase::GETDATAMATRIX_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDatamatrixTask";

jclass CBarcodeChainwayBase::s_clsgetDatamatrixTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDatamatrixTask;

const char* const CBarcodeChainwayBase::SETDATAMATRIX_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDatamatrixTask";

jclass CBarcodeChainwayBase::s_clssetDatamatrixTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDatamatrixTask;

const char* const CBarcodeChainwayBase::GETEAN13_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getEan13Task";

jclass CBarcodeChainwayBase::s_clsgetEan13Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetEan13Task;

const char* const CBarcodeChainwayBase::SETEAN13_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setEan13Task";

jclass CBarcodeChainwayBase::s_clssetEan13Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetEan13Task;

const char* const CBarcodeChainwayBase::GETEAN8_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getEan8Task";

jclass CBarcodeChainwayBase::s_clsgetEan8Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetEan8Task;

const char* const CBarcodeChainwayBase::SETEAN8_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setEan8Task";

jclass CBarcodeChainwayBase::s_clssetEan8Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetEan8Task;

const char* const CBarcodeChainwayBase::GETEAN8CONVERTTOEAN13_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getEan8convertToEan13Task";

jclass CBarcodeChainwayBase::s_clsgetEan8convertToEan13Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetEan8convertToEan13Task;

const char* const CBarcodeChainwayBase::SETEAN8CONVERTTOEAN13_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setEan8convertToEan13Task";

jclass CBarcodeChainwayBase::s_clssetEan8convertToEan13Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetEan8convertToEan13Task;

const char* const CBarcodeChainwayBase::GETI2OF5_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getI2of5Task";

jclass CBarcodeChainwayBase::s_clsgetI2of5Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetI2of5Task;

const char* const CBarcodeChainwayBase::SETI2OF5_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setI2of5Task";

jclass CBarcodeChainwayBase::s_clssetI2of5Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetI2of5Task;

const char* const CBarcodeChainwayBase::GETI2OF5CONVERTTOEAN13_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getI2of5convertToEan13Task";

jclass CBarcodeChainwayBase::s_clsgetI2of5convertToEan13Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetI2of5convertToEan13Task;

const char* const CBarcodeChainwayBase::SETI2OF5CONVERTTOEAN13_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setI2of5convertToEan13Task";

jclass CBarcodeChainwayBase::s_clssetI2of5convertToEan13Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetI2of5convertToEan13Task;

const char* const CBarcodeChainwayBase::GETI2OF5MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getI2of5maxLengthTask";

jclass CBarcodeChainwayBase::s_clsgetI2of5maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetI2of5maxLengthTask;

const char* const CBarcodeChainwayBase::SETI2OF5MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setI2of5maxLengthTask";

jclass CBarcodeChainwayBase::s_clssetI2of5maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetI2of5maxLengthTask;

const char* const CBarcodeChainwayBase::GETI2OF5MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getI2of5minLengthTask";

jclass CBarcodeChainwayBase::s_clsgetI2of5minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetI2of5minLengthTask;

const char* const CBarcodeChainwayBase::SETI2OF5MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setI2of5minLengthTask";

jclass CBarcodeChainwayBase::s_clssetI2of5minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetI2of5minLengthTask;

const char* const CBarcodeChainwayBase::GETI2OF5REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getI2of5redundancyTask";

jclass CBarcodeChainwayBase::s_clsgetI2of5redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetI2of5redundancyTask;

const char* const CBarcodeChainwayBase::SETI2OF5REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setI2of5redundancyTask";

jclass CBarcodeChainwayBase::s_clssetI2of5redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetI2of5redundancyTask;

const char* const CBarcodeChainwayBase::GETI2OF5REPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getI2of5reportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetI2of5reportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetI2of5reportCheckDigitTask;

const char* const CBarcodeChainwayBase::SETI2OF5REPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setI2of5reportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetI2of5reportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetI2of5reportCheckDigitTask;

const char* const CBarcodeChainwayBase::GETI2OF5VERIFYCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getI2of5verifyCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetI2of5verifyCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetI2of5verifyCheckDigitTask;

const char* const CBarcodeChainwayBase::SETI2OF5VERIFYCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setI2of5verifyCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetI2of5verifyCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetI2of5verifyCheckDigitTask;

const char* const CBarcodeChainwayBase::GETKOREAN3OF5_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getKorean3of5Task";

jclass CBarcodeChainwayBase::s_clsgetKorean3of5Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetKorean3of5Task;

const char* const CBarcodeChainwayBase::SETKOREAN3OF5_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setKorean3of5Task";

jclass CBarcodeChainwayBase::s_clssetKorean3of5Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetKorean3of5Task;

const char* const CBarcodeChainwayBase::GETKOREAN3OF5REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getKorean3of5redundancyTask";

jclass CBarcodeChainwayBase::s_clsgetKorean3of5redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetKorean3of5redundancyTask;

const char* const CBarcodeChainwayBase::SETKOREAN3OF5REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setKorean3of5redundancyTask";

jclass CBarcodeChainwayBase::s_clssetKorean3of5redundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetKorean3of5redundancyTask;

const char* const CBarcodeChainwayBase::GETKOREAN3OF5MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getKorean3of5maxLengthTask";

jclass CBarcodeChainwayBase::s_clsgetKorean3of5maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetKorean3of5maxLengthTask;

const char* const CBarcodeChainwayBase::SETKOREAN3OF5MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setKorean3of5maxLengthTask";

jclass CBarcodeChainwayBase::s_clssetKorean3of5maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetKorean3of5maxLengthTask;

const char* const CBarcodeChainwayBase::GETKOREAN3OF5MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getKorean3of5minLengthTask";

jclass CBarcodeChainwayBase::s_clsgetKorean3of5minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetKorean3of5minLengthTask;

const char* const CBarcodeChainwayBase::SETKOREAN3OF5MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setKorean3of5minLengthTask";

jclass CBarcodeChainwayBase::s_clssetKorean3of5minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetKorean3of5minLengthTask;

const char* const CBarcodeChainwayBase::GETMACROPDF_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMacroPdfTask";

jclass CBarcodeChainwayBase::s_clsgetMacroPdfTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMacroPdfTask;

const char* const CBarcodeChainwayBase::SETMACROPDF_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMacroPdfTask";

jclass CBarcodeChainwayBase::s_clssetMacroPdfTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMacroPdfTask;

const char* const CBarcodeChainwayBase::GETMACROPDFBUFFERLABELS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMacroPdfBufferLabelsTask";

jclass CBarcodeChainwayBase::s_clsgetMacroPdfBufferLabelsTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMacroPdfBufferLabelsTask;

const char* const CBarcodeChainwayBase::SETMACROPDFBUFFERLABELS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMacroPdfBufferLabelsTask";

jclass CBarcodeChainwayBase::s_clssetMacroPdfBufferLabelsTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMacroPdfBufferLabelsTask;

const char* const CBarcodeChainwayBase::GETMACROPDFCONVERTTOPDF417_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMacroPdfConvertToPdf417Task";

jclass CBarcodeChainwayBase::s_clsgetMacroPdfConvertToPdf417Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetMacroPdfConvertToPdf417Task;

const char* const CBarcodeChainwayBase::SETMACROPDFCONVERTTOPDF417_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMacroPdfConvertToPdf417Task";

jclass CBarcodeChainwayBase::s_clssetMacroPdfConvertToPdf417Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetMacroPdfConvertToPdf417Task;

const char* const CBarcodeChainwayBase::GETMACROPDFEXCLUSIVE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMacroPdfExclusiveTask";

jclass CBarcodeChainwayBase::s_clsgetMacroPdfExclusiveTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMacroPdfExclusiveTask;

const char* const CBarcodeChainwayBase::SETMACROPDFEXCLUSIVE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMacroPdfExclusiveTask";

jclass CBarcodeChainwayBase::s_clssetMacroPdfExclusiveTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMacroPdfExclusiveTask;

const char* const CBarcodeChainwayBase::GETMACROMICROPDF_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMacroMicroPdfTask";

jclass CBarcodeChainwayBase::s_clsgetMacroMicroPdfTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMacroMicroPdfTask;

const char* const CBarcodeChainwayBase::SETMACROMICROPDF_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMacroMicroPdfTask";

jclass CBarcodeChainwayBase::s_clssetMacroMicroPdfTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMacroMicroPdfTask;

const char* const CBarcodeChainwayBase::GETMACROMICROPDFBUFFERLABELS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMacroMicroPdfBufferLabelsTask";

jclass CBarcodeChainwayBase::s_clsgetMacroMicroPdfBufferLabelsTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMacroMicroPdfBufferLabelsTask;

const char* const CBarcodeChainwayBase::SETMACROMICROPDFBUFFERLABELS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMacroMicroPdfBufferLabelsTask";

jclass CBarcodeChainwayBase::s_clssetMacroMicroPdfBufferLabelsTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMacroMicroPdfBufferLabelsTask;

const char* const CBarcodeChainwayBase::GETMACROMICROPDFCONVERTTOMICROPDF_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMacroMicroPdfConvertToMicroPdfTask";

jclass CBarcodeChainwayBase::s_clsgetMacroMicroPdfConvertToMicroPdfTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMacroMicroPdfConvertToMicroPdfTask;

const char* const CBarcodeChainwayBase::SETMACROMICROPDFCONVERTTOMICROPDF_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMacroMicroPdfConvertToMicroPdfTask";

jclass CBarcodeChainwayBase::s_clssetMacroMicroPdfConvertToMicroPdfTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMacroMicroPdfConvertToMicroPdfTask;

const char* const CBarcodeChainwayBase::GETMACROMICROPDFEXCLUSIVE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMacroMicroPdfExclusiveTask";

jclass CBarcodeChainwayBase::s_clsgetMacroMicroPdfExclusiveTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMacroMicroPdfExclusiveTask;

const char* const CBarcodeChainwayBase::SETMACROMICROPDFEXCLUSIVE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMacroMicroPdfExclusiveTask";

jclass CBarcodeChainwayBase::s_clssetMacroMicroPdfExclusiveTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMacroMicroPdfExclusiveTask;

const char* const CBarcodeChainwayBase::GETMACROMICROPDFREPORTAPPENDINFO_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMacroMicroPdfReportAppendInfoTask";

jclass CBarcodeChainwayBase::s_clsgetMacroMicroPdfReportAppendInfoTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMacroMicroPdfReportAppendInfoTask;

const char* const CBarcodeChainwayBase::SETMACROMICROPDFREPORTAPPENDINFO_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMacroMicroPdfReportAppendInfoTask";

jclass CBarcodeChainwayBase::s_clssetMacroMicroPdfReportAppendInfoTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMacroMicroPdfReportAppendInfoTask;

const char* const CBarcodeChainwayBase::GETMATRIX2OF5_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMatrix2of5Task";

jclass CBarcodeChainwayBase::s_clsgetMatrix2of5Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetMatrix2of5Task;

const char* const CBarcodeChainwayBase::SETMATRIX2OF5_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMatrix2of5Task";

jclass CBarcodeChainwayBase::s_clssetMatrix2of5Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetMatrix2of5Task;

const char* const CBarcodeChainwayBase::GETMATRIX2OF5MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMatrix2of5maxLengthTask";

jclass CBarcodeChainwayBase::s_clsgetMatrix2of5maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMatrix2of5maxLengthTask;

const char* const CBarcodeChainwayBase::SETMATRIX2OF5MAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMatrix2of5maxLengthTask";

jclass CBarcodeChainwayBase::s_clssetMatrix2of5maxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMatrix2of5maxLengthTask;

const char* const CBarcodeChainwayBase::GETMATRIX2OF5MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMatrix2of5minLengthTask";

jclass CBarcodeChainwayBase::s_clsgetMatrix2of5minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMatrix2of5minLengthTask;

const char* const CBarcodeChainwayBase::SETMATRIX2OF5MINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMatrix2of5minLengthTask";

jclass CBarcodeChainwayBase::s_clssetMatrix2of5minLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMatrix2of5minLengthTask;

const char* const CBarcodeChainwayBase::GETMATRIX2OF5REPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMatrix2of5reportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetMatrix2of5reportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMatrix2of5reportCheckDigitTask;

const char* const CBarcodeChainwayBase::SETMATRIX2OF5REPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMatrix2of5reportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetMatrix2of5reportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMatrix2of5reportCheckDigitTask;

const char* const CBarcodeChainwayBase::GETMATRIX2OF5VERIFYCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMatrix2of5verifyCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetMatrix2of5verifyCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMatrix2of5verifyCheckDigitTask;

const char* const CBarcodeChainwayBase::SETMATRIX2OF5VERIFYCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMatrix2of5verifyCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetMatrix2of5verifyCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMatrix2of5verifyCheckDigitTask;

const char* const CBarcodeChainwayBase::GETMAXICODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMaxiCodeTask";

jclass CBarcodeChainwayBase::s_clsgetMaxiCodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMaxiCodeTask;

const char* const CBarcodeChainwayBase::SETMAXICODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMaxiCodeTask";

jclass CBarcodeChainwayBase::s_clssetMaxiCodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMaxiCodeTask;

const char* const CBarcodeChainwayBase::GETMICROPDF_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMicroPdfTask";

jclass CBarcodeChainwayBase::s_clsgetMicroPdfTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMicroPdfTask;

const char* const CBarcodeChainwayBase::SETMICROPDF_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMicroPdfTask";

jclass CBarcodeChainwayBase::s_clssetMicroPdfTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMicroPdfTask;

const char* const CBarcodeChainwayBase::GETMICROQR_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMicroQrTask";

jclass CBarcodeChainwayBase::s_clsgetMicroQrTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMicroQrTask;

const char* const CBarcodeChainwayBase::SETMICROQR_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMicroQrTask";

jclass CBarcodeChainwayBase::s_clssetMicroQrTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMicroQrTask;

const char* const CBarcodeChainwayBase::GETMSI_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMsiTask";

jclass CBarcodeChainwayBase::s_clsgetMsiTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMsiTask;

const char* const CBarcodeChainwayBase::SETMSI_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMsiTask";

jclass CBarcodeChainwayBase::s_clssetMsiTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMsiTask;

const char* const CBarcodeChainwayBase::GETMSICHECKDIGITS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMsiCheckDigitsTask";

jclass CBarcodeChainwayBase::s_clsgetMsiCheckDigitsTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMsiCheckDigitsTask;

const char* const CBarcodeChainwayBase::SETMSICHECKDIGITS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMsiCheckDigitsTask";

jclass CBarcodeChainwayBase::s_clssetMsiCheckDigitsTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMsiCheckDigitsTask;

const char* const CBarcodeChainwayBase::GETMSICHECKDIGITSCHEME_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMsiCheckDigitSchemeTask";

jclass CBarcodeChainwayBase::s_clsgetMsiCheckDigitSchemeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMsiCheckDigitSchemeTask;

const char* const CBarcodeChainwayBase::SETMSICHECKDIGITSCHEME_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMsiCheckDigitSchemeTask";

jclass CBarcodeChainwayBase::s_clssetMsiCheckDigitSchemeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMsiCheckDigitSchemeTask;

const char* const CBarcodeChainwayBase::GETMSIMAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMsiMaxLengthTask";

jclass CBarcodeChainwayBase::s_clsgetMsiMaxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMsiMaxLengthTask;

const char* const CBarcodeChainwayBase::SETMSIMAXLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMsiMaxLengthTask";

jclass CBarcodeChainwayBase::s_clssetMsiMaxLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMsiMaxLengthTask;

const char* const CBarcodeChainwayBase::GETMSIMINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMsiMinLengthTask";

jclass CBarcodeChainwayBase::s_clsgetMsiMinLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMsiMinLengthTask;

const char* const CBarcodeChainwayBase::SETMSIMINLENGTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMsiMinLengthTask";

jclass CBarcodeChainwayBase::s_clssetMsiMinLengthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMsiMinLengthTask;

const char* const CBarcodeChainwayBase::GETMSIREDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMsiRedundancyTask";

jclass CBarcodeChainwayBase::s_clsgetMsiRedundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMsiRedundancyTask;

const char* const CBarcodeChainwayBase::SETMSIREDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMsiRedundancyTask";

jclass CBarcodeChainwayBase::s_clssetMsiRedundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMsiRedundancyTask;

const char* const CBarcodeChainwayBase::GETMSIREPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getMsiReportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetMsiReportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetMsiReportCheckDigitTask;

const char* const CBarcodeChainwayBase::SETMSIREPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setMsiReportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetMsiReportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetMsiReportCheckDigitTask;

const char* const CBarcodeChainwayBase::GETPDF417_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getPdf417Task";

jclass CBarcodeChainwayBase::s_clsgetPdf417Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetPdf417Task;

const char* const CBarcodeChainwayBase::SETPDF417_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setPdf417Task";

jclass CBarcodeChainwayBase::s_clssetPdf417Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetPdf417Task;

const char* const CBarcodeChainwayBase::GETSIGNATURE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getSignatureTask";

jclass CBarcodeChainwayBase::s_clsgetSignatureTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetSignatureTask;

const char* const CBarcodeChainwayBase::SETSIGNATURE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setSignatureTask";

jclass CBarcodeChainwayBase::s_clssetSignatureTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetSignatureTask;

const char* const CBarcodeChainwayBase::GETSIGNATUREIMAGEHEIGHT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getSignatureImageHeightTask";

jclass CBarcodeChainwayBase::s_clsgetSignatureImageHeightTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetSignatureImageHeightTask;

const char* const CBarcodeChainwayBase::SETSIGNATUREIMAGEHEIGHT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setSignatureImageHeightTask";

jclass CBarcodeChainwayBase::s_clssetSignatureImageHeightTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetSignatureImageHeightTask;

const char* const CBarcodeChainwayBase::GETSIGNATUREIMAGEWIDTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getSignatureImageWidthTask";

jclass CBarcodeChainwayBase::s_clsgetSignatureImageWidthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetSignatureImageWidthTask;

const char* const CBarcodeChainwayBase::SETSIGNATUREIMAGEWIDTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setSignatureImageWidthTask";

jclass CBarcodeChainwayBase::s_clssetSignatureImageWidthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetSignatureImageWidthTask;

const char* const CBarcodeChainwayBase::GETSIGNATUREIMAGEQUALITY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getSignatureImageQualityTask";

jclass CBarcodeChainwayBase::s_clsgetSignatureImageQualityTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetSignatureImageQualityTask;

const char* const CBarcodeChainwayBase::SETSIGNATUREIMAGEQUALITY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setSignatureImageQualityTask";

jclass CBarcodeChainwayBase::s_clssetSignatureImageQualityTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetSignatureImageQualityTask;

const char* const CBarcodeChainwayBase::GETAUSPOSTAL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getAusPostalTask";

jclass CBarcodeChainwayBase::s_clsgetAusPostalTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetAusPostalTask;

const char* const CBarcodeChainwayBase::SETAUSPOSTAL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setAusPostalTask";

jclass CBarcodeChainwayBase::s_clssetAusPostalTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetAusPostalTask;

const char* const CBarcodeChainwayBase::GETCANPOSTAL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getCanPostalTask";

jclass CBarcodeChainwayBase::s_clsgetCanPostalTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetCanPostalTask;

const char* const CBarcodeChainwayBase::SETCANPOSTAL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setCanPostalTask";

jclass CBarcodeChainwayBase::s_clssetCanPostalTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetCanPostalTask;

const char* const CBarcodeChainwayBase::GETDUTCHPOSTAL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getDutchPostalTask";

jclass CBarcodeChainwayBase::s_clsgetDutchPostalTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetDutchPostalTask;

const char* const CBarcodeChainwayBase::SETDUTCHPOSTAL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setDutchPostalTask";

jclass CBarcodeChainwayBase::s_clssetDutchPostalTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetDutchPostalTask;

const char* const CBarcodeChainwayBase::GETJAPPOSTAL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getJapPostalTask";

jclass CBarcodeChainwayBase::s_clsgetJapPostalTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetJapPostalTask;

const char* const CBarcodeChainwayBase::SETJAPPOSTAL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setJapPostalTask";

jclass CBarcodeChainwayBase::s_clssetJapPostalTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetJapPostalTask;

const char* const CBarcodeChainwayBase::GETUKPOSTAL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUkPostalTask";

jclass CBarcodeChainwayBase::s_clsgetUkPostalTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUkPostalTask;

const char* const CBarcodeChainwayBase::SETUKPOSTAL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUkPostalTask";

jclass CBarcodeChainwayBase::s_clssetUkPostalTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUkPostalTask;

const char* const CBarcodeChainwayBase::GETUKPOSTALREPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUkPostalReportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetUkPostalReportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUkPostalReportCheckDigitTask;

const char* const CBarcodeChainwayBase::SETUKPOSTALREPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUkPostalReportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetUkPostalReportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUkPostalReportCheckDigitTask;

const char* const CBarcodeChainwayBase::GETUS4STATE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUs4stateTask";

jclass CBarcodeChainwayBase::s_clsgetUs4stateTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUs4stateTask;

const char* const CBarcodeChainwayBase::SETUS4STATE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUs4stateTask";

jclass CBarcodeChainwayBase::s_clssetUs4stateTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUs4stateTask;

const char* const CBarcodeChainwayBase::GETUS4STATEFICS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUs4stateFicsTask";

jclass CBarcodeChainwayBase::s_clsgetUs4stateFicsTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUs4stateFicsTask;

const char* const CBarcodeChainwayBase::SETUS4STATEFICS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUs4stateFicsTask";

jclass CBarcodeChainwayBase::s_clssetUs4stateFicsTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUs4stateFicsTask;

const char* const CBarcodeChainwayBase::GETUSPLANET_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUsPlanetTask";

jclass CBarcodeChainwayBase::s_clsgetUsPlanetTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUsPlanetTask;

const char* const CBarcodeChainwayBase::SETUSPLANET_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUsPlanetTask";

jclass CBarcodeChainwayBase::s_clssetUsPlanetTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUsPlanetTask;

const char* const CBarcodeChainwayBase::GETUSPLANETREPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUsPlanetReportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetUsPlanetReportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUsPlanetReportCheckDigitTask;

const char* const CBarcodeChainwayBase::SETUSPLANETREPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUsPlanetReportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetUsPlanetReportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUsPlanetReportCheckDigitTask;

const char* const CBarcodeChainwayBase::GETUSPOSTNET_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUsPostNetTask";

jclass CBarcodeChainwayBase::s_clsgetUsPostNetTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUsPostNetTask;

const char* const CBarcodeChainwayBase::SETUSPOSTNET_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUsPostNetTask";

jclass CBarcodeChainwayBase::s_clssetUsPostNetTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUsPostNetTask;

const char* const CBarcodeChainwayBase::GETUSPOSTNETREPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUsPostNetReportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetUsPostNetReportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUsPostNetReportCheckDigitTask;

const char* const CBarcodeChainwayBase::SETUSPOSTNETREPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUsPostNetReportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetUsPostNetReportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUsPostNetReportCheckDigitTask;

const char* const CBarcodeChainwayBase::GETQRCODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getQrCodeTask";

jclass CBarcodeChainwayBase::s_clsgetQrCodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetQrCodeTask;

const char* const CBarcodeChainwayBase::SETQRCODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setQrCodeTask";

jclass CBarcodeChainwayBase::s_clssetQrCodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetQrCodeTask;

const char* const CBarcodeChainwayBase::GETGS1DATABAR_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getGs1dataBarTask";

jclass CBarcodeChainwayBase::s_clsgetGs1dataBarTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetGs1dataBarTask;

const char* const CBarcodeChainwayBase::SETGS1DATABAR_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setGs1dataBarTask";

jclass CBarcodeChainwayBase::s_clssetGs1dataBarTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetGs1dataBarTask;

const char* const CBarcodeChainwayBase::GETGS1DATABAREXPANDED_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getGs1dataBarExpandedTask";

jclass CBarcodeChainwayBase::s_clsgetGs1dataBarExpandedTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetGs1dataBarExpandedTask;

const char* const CBarcodeChainwayBase::SETGS1DATABAREXPANDED_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setGs1dataBarExpandedTask";

jclass CBarcodeChainwayBase::s_clssetGs1dataBarExpandedTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetGs1dataBarExpandedTask;

const char* const CBarcodeChainwayBase::GETGS1DATABARLIMITED_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getGs1dataBarLimitedTask";

jclass CBarcodeChainwayBase::s_clsgetGs1dataBarLimitedTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetGs1dataBarLimitedTask;

const char* const CBarcodeChainwayBase::SETGS1DATABARLIMITED_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setGs1dataBarLimitedTask";

jclass CBarcodeChainwayBase::s_clssetGs1dataBarLimitedTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetGs1dataBarLimitedTask;

const char* const CBarcodeChainwayBase::GETTLC39_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getTlc39Task";

jclass CBarcodeChainwayBase::s_clsgetTlc39Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetTlc39Task;

const char* const CBarcodeChainwayBase::SETTLC39_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setTlc39Task";

jclass CBarcodeChainwayBase::s_clssetTlc39Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetTlc39Task;

const char* const CBarcodeChainwayBase::GETTRIOPTIC39_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getTrioptic39Task";

jclass CBarcodeChainwayBase::s_clsgetTrioptic39Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetTrioptic39Task;

const char* const CBarcodeChainwayBase::SETTRIOPTIC39_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setTrioptic39Task";

jclass CBarcodeChainwayBase::s_clssetTrioptic39Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetTrioptic39Task;

const char* const CBarcodeChainwayBase::GETTRIOPTIC39REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getTrioptic39RedundancyTask";

jclass CBarcodeChainwayBase::s_clsgetTrioptic39RedundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetTrioptic39RedundancyTask;

const char* const CBarcodeChainwayBase::SETTRIOPTIC39REDUNDANCY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setTrioptic39RedundancyTask";

jclass CBarcodeChainwayBase::s_clssetTrioptic39RedundancyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetTrioptic39RedundancyTask;

const char* const CBarcodeChainwayBase::GETUPCEANBOOKLAND_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcEanBooklandTask";

jclass CBarcodeChainwayBase::s_clsgetUpcEanBooklandTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcEanBooklandTask;

const char* const CBarcodeChainwayBase::SETUPCEANBOOKLAND_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcEanBooklandTask";

jclass CBarcodeChainwayBase::s_clssetUpcEanBooklandTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcEanBooklandTask;

const char* const CBarcodeChainwayBase::GETUPCEANBOOKLANDFORMAT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcEanBooklandFormatTask";

jclass CBarcodeChainwayBase::s_clsgetUpcEanBooklandFormatTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcEanBooklandFormatTask;

const char* const CBarcodeChainwayBase::SETUPCEANBOOKLANDFORMAT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcEanBooklandFormatTask";

jclass CBarcodeChainwayBase::s_clssetUpcEanBooklandFormatTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcEanBooklandFormatTask;

const char* const CBarcodeChainwayBase::GETUPCEANCONVERTGS1DATABARTOUPCEAN_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcEanConvertGs1dataBarToUpcEanTask";

jclass CBarcodeChainwayBase::s_clsgetUpcEanConvertGs1dataBarToUpcEanTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcEanConvertGs1dataBarToUpcEanTask;

const char* const CBarcodeChainwayBase::SETUPCEANCONVERTGS1DATABARTOUPCEAN_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcEanConvertGs1dataBarToUpcEanTask";

jclass CBarcodeChainwayBase::s_clssetUpcEanConvertGs1dataBarToUpcEanTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcEanConvertGs1dataBarToUpcEanTask;

const char* const CBarcodeChainwayBase::GETUPCEANCOUPON_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcEanCouponTask";

jclass CBarcodeChainwayBase::s_clsgetUpcEanCouponTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcEanCouponTask;

const char* const CBarcodeChainwayBase::SETUPCEANCOUPON_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcEanCouponTask";

jclass CBarcodeChainwayBase::s_clssetUpcEanCouponTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcEanCouponTask;

const char* const CBarcodeChainwayBase::GETUPCEANLINEARDECODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcEanLinearDecodeTask";

jclass CBarcodeChainwayBase::s_clsgetUpcEanLinearDecodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcEanLinearDecodeTask;

const char* const CBarcodeChainwayBase::SETUPCEANLINEARDECODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcEanLinearDecodeTask";

jclass CBarcodeChainwayBase::s_clssetUpcEanLinearDecodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcEanLinearDecodeTask;

const char* const CBarcodeChainwayBase::GETUPCEANRANDOMWEIGHTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcEanRandomWeightCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetUpcEanRandomWeightCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcEanRandomWeightCheckDigitTask;

const char* const CBarcodeChainwayBase::SETUPCEANRANDOMWEIGHTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcEanRandomWeightCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetUpcEanRandomWeightCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcEanRandomWeightCheckDigitTask;

const char* const CBarcodeChainwayBase::GETUPCEANRETRYCOUNT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcEanRetryCountTask";

jclass CBarcodeChainwayBase::s_clsgetUpcEanRetryCountTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcEanRetryCountTask;

const char* const CBarcodeChainwayBase::SETUPCEANRETRYCOUNT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcEanRetryCountTask";

jclass CBarcodeChainwayBase::s_clssetUpcEanRetryCountTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcEanRetryCountTask;

const char* const CBarcodeChainwayBase::GETUPCEANSECURITYLEVEL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcEanSecurityLevelTask";

jclass CBarcodeChainwayBase::s_clsgetUpcEanSecurityLevelTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcEanSecurityLevelTask;

const char* const CBarcodeChainwayBase::SETUPCEANSECURITYLEVEL_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcEanSecurityLevelTask";

jclass CBarcodeChainwayBase::s_clssetUpcEanSecurityLevelTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcEanSecurityLevelTask;

const char* const CBarcodeChainwayBase::GETUPCEANSUPPLEMENTAL2_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcEanSupplemental2Task";

jclass CBarcodeChainwayBase::s_clsgetUpcEanSupplemental2Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcEanSupplemental2Task;

const char* const CBarcodeChainwayBase::SETUPCEANSUPPLEMENTAL2_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcEanSupplemental2Task";

jclass CBarcodeChainwayBase::s_clssetUpcEanSupplemental2Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcEanSupplemental2Task;

const char* const CBarcodeChainwayBase::GETUPCEANSUPPLEMENTAL5_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcEanSupplemental5Task";

jclass CBarcodeChainwayBase::s_clsgetUpcEanSupplemental5Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcEanSupplemental5Task;

const char* const CBarcodeChainwayBase::SETUPCEANSUPPLEMENTAL5_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcEanSupplemental5Task";

jclass CBarcodeChainwayBase::s_clssetUpcEanSupplemental5Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcEanSupplemental5Task;

const char* const CBarcodeChainwayBase::GETUPCEANSUPPLEMENTALMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcEanSupplementalModeTask";

jclass CBarcodeChainwayBase::s_clsgetUpcEanSupplementalModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcEanSupplementalModeTask;

const char* const CBarcodeChainwayBase::SETUPCEANSUPPLEMENTALMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcEanSupplementalModeTask";

jclass CBarcodeChainwayBase::s_clssetUpcEanSupplementalModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcEanSupplementalModeTask;

const char* const CBarcodeChainwayBase::GETUPCA_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcaTask";

jclass CBarcodeChainwayBase::s_clsgetUpcaTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcaTask;

const char* const CBarcodeChainwayBase::SETUPCA_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcaTask";

jclass CBarcodeChainwayBase::s_clssetUpcaTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcaTask;

const char* const CBarcodeChainwayBase::GETUPCAPREAMBLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcaPreambleTask";

jclass CBarcodeChainwayBase::s_clsgetUpcaPreambleTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcaPreambleTask;

const char* const CBarcodeChainwayBase::SETUPCAPREAMBLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcaPreambleTask";

jclass CBarcodeChainwayBase::s_clssetUpcaPreambleTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcaPreambleTask;

const char* const CBarcodeChainwayBase::GETUPCAREPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpcaReportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetUpcaReportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpcaReportCheckDigitTask;

const char* const CBarcodeChainwayBase::SETUPCAREPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpcaReportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetUpcaReportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpcaReportCheckDigitTask;

const char* const CBarcodeChainwayBase::GETUPCE0_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpce0Task";

jclass CBarcodeChainwayBase::s_clsgetUpce0Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpce0Task;

const char* const CBarcodeChainwayBase::SETUPCE0_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpce0Task";

jclass CBarcodeChainwayBase::s_clssetUpce0Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpce0Task;

const char* const CBarcodeChainwayBase::GETUPCE0CONVERTTOUPCA_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpce0convertToUpcaTask";

jclass CBarcodeChainwayBase::s_clsgetUpce0convertToUpcaTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpce0convertToUpcaTask;

const char* const CBarcodeChainwayBase::SETUPCE0CONVERTTOUPCA_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpce0convertToUpcaTask";

jclass CBarcodeChainwayBase::s_clssetUpce0convertToUpcaTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpce0convertToUpcaTask;

const char* const CBarcodeChainwayBase::GETUPCE0PREAMBLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpce0preambleTask";

jclass CBarcodeChainwayBase::s_clsgetUpce0preambleTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpce0preambleTask;

const char* const CBarcodeChainwayBase::SETUPCE0PREAMBLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpce0preambleTask";

jclass CBarcodeChainwayBase::s_clssetUpce0preambleTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpce0preambleTask;

const char* const CBarcodeChainwayBase::GETUPCE0REPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpce0reportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetUpce0reportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpce0reportCheckDigitTask;

const char* const CBarcodeChainwayBase::SETUPCE0REPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpce0reportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetUpce0reportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpce0reportCheckDigitTask;

const char* const CBarcodeChainwayBase::GETUPCE1_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpce1Task";

jclass CBarcodeChainwayBase::s_clsgetUpce1Task = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpce1Task;

const char* const CBarcodeChainwayBase::SETUPCE1_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpce1Task";

jclass CBarcodeChainwayBase::s_clssetUpce1Task = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpce1Task;

const char* const CBarcodeChainwayBase::GETUPCE1CONVERTTOUPCA_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpce1convertToUpcaTask";

jclass CBarcodeChainwayBase::s_clsgetUpce1convertToUpcaTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpce1convertToUpcaTask;

const char* const CBarcodeChainwayBase::SETUPCE1CONVERTTOUPCA_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpce1convertToUpcaTask";

jclass CBarcodeChainwayBase::s_clssetUpce1convertToUpcaTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpce1convertToUpcaTask;

const char* const CBarcodeChainwayBase::GETUPCE1PREAMBLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpce1preambleTask";

jclass CBarcodeChainwayBase::s_clsgetUpce1preambleTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpce1preambleTask;

const char* const CBarcodeChainwayBase::SETUPCE1PREAMBLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpce1preambleTask";

jclass CBarcodeChainwayBase::s_clssetUpce1preambleTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpce1preambleTask;

const char* const CBarcodeChainwayBase::GETUPCE1REPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getUpce1reportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clsgetUpce1reportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetUpce1reportCheckDigitTask;

const char* const CBarcodeChainwayBase::SETUPCE1REPORTCHECKDIGIT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setUpce1reportCheckDigitTask";

jclass CBarcodeChainwayBase::s_clssetUpce1reportCheckDigitTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetUpce1reportCheckDigitTask;

const char* const CBarcodeChainwayBase::GETWEBCODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getWebcodeTask";

jclass CBarcodeChainwayBase::s_clsgetWebcodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetWebcodeTask;

const char* const CBarcodeChainwayBase::SETWEBCODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setWebcodeTask";

jclass CBarcodeChainwayBase::s_clssetWebcodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetWebcodeTask;

const char* const CBarcodeChainwayBase::GETWEBCODEDECODEGTSUBTYPE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getWebcodeDecodeGtSubtypeTask";

jclass CBarcodeChainwayBase::s_clsgetWebcodeDecodeGtSubtypeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetWebcodeDecodeGtSubtypeTask;

const char* const CBarcodeChainwayBase::SETWEBCODEDECODEGTSUBTYPE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setWebcodeDecodeGtSubtypeTask";

jclass CBarcodeChainwayBase::s_clssetWebcodeDecodeGtSubtypeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetWebcodeDecodeGtSubtypeTask;

const char* const CBarcodeChainwayBase::GETRSMMODELNUMBER_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmModelNumberTask";

jclass CBarcodeChainwayBase::s_clsgetRsmModelNumberTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmModelNumberTask;

const char* const CBarcodeChainwayBase::GETRSMSERIALNUMBER_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmSerialNumberTask";

jclass CBarcodeChainwayBase::s_clsgetRsmSerialNumberTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmSerialNumberTask;

const char* const CBarcodeChainwayBase::GETRSMDATEOFMANUFACTURE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmDateOfManufactureTask";

jclass CBarcodeChainwayBase::s_clsgetRsmDateOfManufactureTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmDateOfManufactureTask;

const char* const CBarcodeChainwayBase::GETRSMDATEOFSERVICE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmDateOfServiceTask";

jclass CBarcodeChainwayBase::s_clsgetRsmDateOfServiceTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmDateOfServiceTask;

const char* const CBarcodeChainwayBase::GETRSMBLUETOOTHADDRESS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBluetoothAddressTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBluetoothAddressTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBluetoothAddressTask;

const char* const CBarcodeChainwayBase::GETRSMFIRMWAREVERSION_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmFirmwareVersionTask";

jclass CBarcodeChainwayBase::s_clsgetRsmFirmwareVersionTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmFirmwareVersionTask;

const char* const CBarcodeChainwayBase::GETRSMDEVICECLASS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmDeviceClassTask";

jclass CBarcodeChainwayBase::s_clsgetRsmDeviceClassTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmDeviceClassTask;

const char* const CBarcodeChainwayBase::GETRSMBATTERYSTATUS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBatteryStatusTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBatteryStatusTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBatteryStatusTask;

const char* const CBarcodeChainwayBase::GETRSMBATTERYCAPACITY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBatteryCapacityTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBatteryCapacityTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBatteryCapacityTask;

const char* const CBarcodeChainwayBase::GETRSMBATTERYID_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBatteryIdTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBatteryIdTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBatteryIdTask;

const char* const CBarcodeChainwayBase::GETRSMBLUETOOTHAUTHENTICATION_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBluetoothAuthenticationTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBluetoothAuthenticationTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBluetoothAuthenticationTask;

const char* const CBarcodeChainwayBase::SETRSMBLUETOOTHAUTHENTICATION_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmBluetoothAuthenticationTask";

jclass CBarcodeChainwayBase::s_clssetRsmBluetoothAuthenticationTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmBluetoothAuthenticationTask;

const char* const CBarcodeChainwayBase::GETRSMBLUETOOTHENCRYPTION_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBluetoothEncryptionTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBluetoothEncryptionTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBluetoothEncryptionTask;

const char* const CBarcodeChainwayBase::SETRSMBLUETOOTHENCRYPTION_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmBluetoothEncryptionTask";

jclass CBarcodeChainwayBase::s_clssetRsmBluetoothEncryptionTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmBluetoothEncryptionTask;

const char* const CBarcodeChainwayBase::GETRSMBLUETOOTHPINCODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBluetoothPinCodeTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBluetoothPinCodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBluetoothPinCodeTask;

const char* const CBarcodeChainwayBase::SETRSMBLUETOOTHPINCODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmBluetoothPinCodeTask";

jclass CBarcodeChainwayBase::s_clssetRsmBluetoothPinCodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmBluetoothPinCodeTask;

const char* const CBarcodeChainwayBase::GETRSMBLUETOOTHPINCODETYPE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBluetoothPinCodeTypeTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBluetoothPinCodeTypeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBluetoothPinCodeTypeTask;

const char* const CBarcodeChainwayBase::SETRSMBLUETOOTHPINCODETYPE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmBluetoothPinCodeTypeTask";

jclass CBarcodeChainwayBase::s_clssetRsmBluetoothPinCodeTypeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmBluetoothPinCodeTypeTask;

const char* const CBarcodeChainwayBase::GETRSMBLUETOOTHRECONNECTIONATTEMPTS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBluetoothReconnectionAttemptsTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBluetoothReconnectionAttemptsTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBluetoothReconnectionAttemptsTask;

const char* const CBarcodeChainwayBase::SETRSMBLUETOOTHRECONNECTIONATTEMPTS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmBluetoothReconnectionAttemptsTask";

jclass CBarcodeChainwayBase::s_clssetRsmBluetoothReconnectionAttemptsTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmBluetoothReconnectionAttemptsTask;

const char* const CBarcodeChainwayBase::GETRSMBLUETOOTHBEEPONRECONNECTATTEMPT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBluetoothBeepOnReconnectAttemptTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBluetoothBeepOnReconnectAttemptTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBluetoothBeepOnReconnectAttemptTask;

const char* const CBarcodeChainwayBase::SETRSMBLUETOOTHBEEPONRECONNECTATTEMPT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmBluetoothBeepOnReconnectAttemptTask";

jclass CBarcodeChainwayBase::s_clssetRsmBluetoothBeepOnReconnectAttemptTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmBluetoothBeepOnReconnectAttemptTask;

const char* const CBarcodeChainwayBase::GETRSMBLUETOOTHHIDAUTORECONNECT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBluetoothHidAutoReconnectTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBluetoothHidAutoReconnectTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBluetoothHidAutoReconnectTask;

const char* const CBarcodeChainwayBase::SETRSMBLUETOOTHHIDAUTORECONNECT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmBluetoothHidAutoReconnectTask";

jclass CBarcodeChainwayBase::s_clssetRsmBluetoothHidAutoReconnectTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmBluetoothHidAutoReconnectTask;

const char* const CBarcodeChainwayBase::GETRSMBLUETOOTHFRIENDLYNAME_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBluetoothFriendlyNameTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBluetoothFriendlyNameTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBluetoothFriendlyNameTask;

const char* const CBarcodeChainwayBase::SETRSMBLUETOOTHFRIENDLYNAME_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmBluetoothFriendlyNameTask";

jclass CBarcodeChainwayBase::s_clssetRsmBluetoothFriendlyNameTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmBluetoothFriendlyNameTask;

const char* const CBarcodeChainwayBase::GETRSMBLUETOOTHINQUIRYMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBluetoothInquiryModeTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBluetoothInquiryModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBluetoothInquiryModeTask;

const char* const CBarcodeChainwayBase::SETRSMBLUETOOTHINQUIRYMODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmBluetoothInquiryModeTask";

jclass CBarcodeChainwayBase::s_clssetRsmBluetoothInquiryModeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmBluetoothInquiryModeTask;

const char* const CBarcodeChainwayBase::GETRSMBLUETOOTHAUTORECONNECT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmBluetoothAutoReconnectTask";

jclass CBarcodeChainwayBase::s_clsgetRsmBluetoothAutoReconnectTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmBluetoothAutoReconnectTask;

const char* const CBarcodeChainwayBase::SETRSMBLUETOOTHAUTORECONNECT_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmBluetoothAutoReconnectTask";

jclass CBarcodeChainwayBase::s_clssetRsmBluetoothAutoReconnectTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmBluetoothAutoReconnectTask;

const char* const CBarcodeChainwayBase::GETRSMFORCESAVEPAIRINGBARCODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmForceSavePairingBarcodeTask";

jclass CBarcodeChainwayBase::s_clsgetRsmForceSavePairingBarcodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmForceSavePairingBarcodeTask;

const char* const CBarcodeChainwayBase::SETRSMFORCESAVEPAIRINGBARCODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmForceSavePairingBarcodeTask";

jclass CBarcodeChainwayBase::s_clssetRsmForceSavePairingBarcodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmForceSavePairingBarcodeTask;

const char* const CBarcodeChainwayBase::GETRSMLOWBATTERYINDICATION_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmLowBatteryIndicationTask";

jclass CBarcodeChainwayBase::s_clsgetRsmLowBatteryIndicationTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmLowBatteryIndicationTask;

const char* const CBarcodeChainwayBase::SETRSMLOWBATTERYINDICATION_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmLowBatteryIndicationTask";

jclass CBarcodeChainwayBase::s_clssetRsmLowBatteryIndicationTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmLowBatteryIndicationTask;

const char* const CBarcodeChainwayBase::GETRSMLOWBATTERYINDICATIONCYCLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmLowBatteryIndicationCycleTask";

jclass CBarcodeChainwayBase::s_clsgetRsmLowBatteryIndicationCycleTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmLowBatteryIndicationCycleTask;

const char* const CBarcodeChainwayBase::SETRSMLOWBATTERYINDICATIONCYCLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmLowBatteryIndicationCycleTask";

jclass CBarcodeChainwayBase::s_clssetRsmLowBatteryIndicationCycleTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmLowBatteryIndicationCycleTask;

const char* const CBarcodeChainwayBase::GETRSMSCANLINEWIDTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmScanLineWidthTask";

jclass CBarcodeChainwayBase::s_clsgetRsmScanLineWidthTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmScanLineWidthTask;

const char* const CBarcodeChainwayBase::SETRSMSCANLINEWIDTH_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmScanLineWidthTask";

jclass CBarcodeChainwayBase::s_clssetRsmScanLineWidthTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmScanLineWidthTask;

const char* const CBarcodeChainwayBase::GETRSMGOODSCANSDELAY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmGoodScansDelayTask";

jclass CBarcodeChainwayBase::s_clsgetRsmGoodScansDelayTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmGoodScansDelayTask;

const char* const CBarcodeChainwayBase::SETRSMGOODSCANSDELAY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmGoodScansDelayTask";

jclass CBarcodeChainwayBase::s_clssetRsmGoodScansDelayTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmGoodScansDelayTask;

const char* const CBarcodeChainwayBase::GETRSMDECODEFEEDBACK_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmDecodeFeedbackTask";

jclass CBarcodeChainwayBase::s_clsgetRsmDecodeFeedbackTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmDecodeFeedbackTask;

const char* const CBarcodeChainwayBase::SETRSMDECODEFEEDBACK_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmDecodeFeedbackTask";

jclass CBarcodeChainwayBase::s_clssetRsmDecodeFeedbackTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmDecodeFeedbackTask;

const char* const CBarcodeChainwayBase::GETRSMIGNORECODE128USPS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmIgnoreCode128UspsTask";

jclass CBarcodeChainwayBase::s_clsgetRsmIgnoreCode128UspsTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmIgnoreCode128UspsTask;

const char* const CBarcodeChainwayBase::SETRSMIGNORECODE128USPS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmIgnoreCode128UspsTask";

jclass CBarcodeChainwayBase::s_clssetRsmIgnoreCode128UspsTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmIgnoreCode128UspsTask;

const char* const CBarcodeChainwayBase::GETRSMSCANTRIGGERWAKEUP_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmScanTriggerWakeupTask";

jclass CBarcodeChainwayBase::s_clsgetRsmScanTriggerWakeupTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmScanTriggerWakeupTask;

const char* const CBarcodeChainwayBase::SETRSMSCANTRIGGERWAKEUP_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmScanTriggerWakeupTask";

jclass CBarcodeChainwayBase::s_clssetRsmScanTriggerWakeupTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmScanTriggerWakeupTask;

const char* const CBarcodeChainwayBase::GETRSMMEMS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmMemsTask";

jclass CBarcodeChainwayBase::s_clsgetRsmMemsTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmMemsTask;

const char* const CBarcodeChainwayBase::SETRSMMEMS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmMemsTask";

jclass CBarcodeChainwayBase::s_clssetRsmMemsTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmMemsTask;

const char* const CBarcodeChainwayBase::GETRSMPROXIMITYENABLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmProximityEnableTask";

jclass CBarcodeChainwayBase::s_clsgetRsmProximityEnableTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmProximityEnableTask;

const char* const CBarcodeChainwayBase::SETRSMPROXIMITYENABLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmProximityEnableTask";

jclass CBarcodeChainwayBase::s_clssetRsmProximityEnableTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmProximityEnableTask;

const char* const CBarcodeChainwayBase::GETRSMPROXIMITYCONTINUOUS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmProximityContinuousTask";

jclass CBarcodeChainwayBase::s_clsgetRsmProximityContinuousTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmProximityContinuousTask;

const char* const CBarcodeChainwayBase::SETRSMPROXIMITYCONTINUOUS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmProximityContinuousTask";

jclass CBarcodeChainwayBase::s_clssetRsmProximityContinuousTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmProximityContinuousTask;

const char* const CBarcodeChainwayBase::GETRSMPROXIMITYDISTANCE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmProximityDistanceTask";

jclass CBarcodeChainwayBase::s_clsgetRsmProximityDistanceTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmProximityDistanceTask;

const char* const CBarcodeChainwayBase::SETRSMPROXIMITYDISTANCE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmProximityDistanceTask";

jclass CBarcodeChainwayBase::s_clssetRsmProximityDistanceTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmProximityDistanceTask;

const char* const CBarcodeChainwayBase::GETRSMPAGINGENABLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmPagingEnableTask";

jclass CBarcodeChainwayBase::s_clsgetRsmPagingEnableTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmPagingEnableTask;

const char* const CBarcodeChainwayBase::SETRSMPAGINGENABLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmPagingEnableTask";

jclass CBarcodeChainwayBase::s_clssetRsmPagingEnableTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmPagingEnableTask;

const char* const CBarcodeChainwayBase::GETRSMPAGINGBEEPSEQUENCE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getRsmPagingBeepSequenceTask";

jclass CBarcodeChainwayBase::s_clsgetRsmPagingBeepSequenceTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetRsmPagingBeepSequenceTask;

const char* const CBarcodeChainwayBase::SETRSMPAGINGBEEPSEQUENCE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setRsmPagingBeepSequenceTask";

jclass CBarcodeChainwayBase::s_clssetRsmPagingBeepSequenceTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetRsmPagingBeepSequenceTask;

const char* const CBarcodeChainwayBase::ENUMERATE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwaySingletonBase$enumerateTask";

jclass CBarcodeChainwayBase::s_clsenumerateTask = 0;
jmethodID CBarcodeChainwayBase::s_midenumerateTask;

const char* const CBarcodeChainwayBase::ENABLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$enableTask";

jclass CBarcodeChainwayBase::s_clsenableTask = 0;
jmethodID CBarcodeChainwayBase::s_midenableTask;

const char* const CBarcodeChainwayBase::REGISTERBLUETOOTHSTATUS_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$registerBluetoothStatusTask";

jclass CBarcodeChainwayBase::s_clsregisterBluetoothStatusTask = 0;
jmethodID CBarcodeChainwayBase::s_midregisterBluetoothStatusTask;

const char* const CBarcodeChainwayBase::START_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$startTask";

jclass CBarcodeChainwayBase::s_clsstartTask = 0;
jmethodID CBarcodeChainwayBase::s_midstartTask;

const char* const CBarcodeChainwayBase::STOP_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$stopTask";

jclass CBarcodeChainwayBase::s_clsstopTask = 0;
jmethodID CBarcodeChainwayBase::s_midstopTask;

const char* const CBarcodeChainwayBase::DISABLE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$disableTask";

jclass CBarcodeChainwayBase::s_clsdisableTask = 0;
jmethodID CBarcodeChainwayBase::s_middisableTask;

const char* const CBarcodeChainwayBase::BARCODE_RECOGNIZE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$barcode_recognizeTask";

jclass CBarcodeChainwayBase::s_clsbarcode_recognizeTask = 0;
jmethodID CBarcodeChainwayBase::s_midbarcode_recognizeTask;

const char* const CBarcodeChainwayBase::GETSUPPORTEDPROPERTIES_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getSupportedPropertiesTask";

jclass CBarcodeChainwayBase::s_clsgetSupportedPropertiesTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetSupportedPropertiesTask;

const char* const CBarcodeChainwayBase::TAKE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$takeTask";

jclass CBarcodeChainwayBase::s_clstakeTask = 0;
jmethodID CBarcodeChainwayBase::s_midtakeTask;

const char* const CBarcodeChainwayBase::TAKE_BARCODE_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$take_barcodeTask";

jclass CBarcodeChainwayBase::s_clstake_barcodeTask = 0;
jmethodID CBarcodeChainwayBase::s_midtake_barcodeTask;

const char* const CBarcodeChainwayBase::COMMANDREMOTESCANNER_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$commandRemoteScannerTask";

jclass CBarcodeChainwayBase::s_clscommandRemoteScannerTask = 0;
jmethodID CBarcodeChainwayBase::s_midcommandRemoteScannerTask;

const char* const CBarcodeChainwayBase::GETPROPERTY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getPropertyTask";

jclass CBarcodeChainwayBase::s_clsgetPropertyTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetPropertyTask;

const char* const CBarcodeChainwayBase::GETPROPERTIES_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getPropertiesTask";

jclass CBarcodeChainwayBase::s_clsgetPropertiesTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetPropertiesTask;

const char* const CBarcodeChainwayBase::GETALLPROPERTIES_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$getAllPropertiesTask";

jclass CBarcodeChainwayBase::s_clsgetAllPropertiesTask = 0;
jmethodID CBarcodeChainwayBase::s_midgetAllPropertiesTask;

const char* const CBarcodeChainwayBase::SETPROPERTY_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setPropertyTask";

jclass CBarcodeChainwayBase::s_clssetPropertyTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetPropertyTask;

const char* const CBarcodeChainwayBase::SETPROPERTIES_TASK_CLASS = 
        "com.rho.barcodechainway.BarcodeChainwayBase$setPropertiesTask";

jclass CBarcodeChainwayBase::s_clssetPropertiesTask = 0;
jmethodID CBarcodeChainwayBase::s_midsetPropertiesTask;


//----------------------------------------------------------------------------------------------------------------------

JNIEnv* CBarcodeChainwayBase::jniInit()
{
    JNIEnv *env = jnienv();
    if(!env)
    {
        LOG(FATAL) + "JNI init failed: JNIEnv is null";
        return 0;
    }
    return jniInit(env);
}
//----------------------------------------------------------------------------------------------------------------------

JNIEnv* CBarcodeChainwayBase::jniInit(JNIEnv* env)
{
    static bool initialized = false;
    env = MethodExecutorJni::jniInit(env);
    if (!env) {
        LOG(FATAL) + "JNI init failed";
        return 0;
    }

    if(!initialized)
    {
        //init BarcodeChainwayFactorySingleton JNI
        s_clsFactorySingleton = loadClass(env, FACTORY_SINGLETON_CLASS);
        if (!s_clsFactorySingleton) return 0;

        s_midFactorySetInstance = env->GetStaticMethodID(s_clsFactorySingleton, "setInstance", "(Lcom/rho/barcodechainway/IBarcodeChainwayFactory;)V");
        if(!s_midFactorySetInstance)
        {
            LOG(FATAL) + "Failed to get method 'setInstance' for java class " + FACTORY_SINGLETON_CLASS;
            return NULL;
        }
        s_midFactoryGetInstance = env->GetStaticMethodID(s_clsFactorySingleton, "getInstance", "()Lcom/rho/barcodechainway/IBarcodeChainwayFactory;");
        if(!s_midFactoryGetInstance)
        {
            LOG(FATAL) + "Failed to get method 'getInstance' for java class " + FACTORY_SINGLETON_CLASS;
            return NULL;
        }

        //init IBarcodeChainwayFactory JNI
        s_clsIFactory = loadClass(env, IFACTORY_CLASS);
        if (!s_clsIFactory) return 0;
        s_midGetApiSingleton = env->GetMethodID(s_clsIFactory, "getApiSingleton", "()Lcom/rho/barcodechainway/IBarcodeChainwaySingleton;");
        if(!s_midGetApiSingleton)
        {
            LOG(FATAL) + "Failed to get method 'getApiSingleton' for java class " + IFACTORY_CLASS;
            return NULL;
        }
        s_midGetApiObject = env->GetMethodID(s_clsIFactory, "getApiObject", "(Ljava/lang/String;)Lcom/rho/barcodechainway/IBarcodeChainway;");
        if(!s_midGetApiObject)
        {
            LOG(FATAL) + "Failed to get method 'getApiObject' for java class " + IFACTORY_CLASS;
            return NULL;
        }

        s_clsSingletonBase = loadClass(env, SINGLETON_BASE_CLASS);
        if (!s_clsSingletonBase) return 0;
        s_clsObjectBase = loadClass(env, OBJECT_BASE_CLASS);
        if (!s_clsObjectBase) return 0;



        s_clsgetAutoEnterTask = loadClass(env, GETAUTOENTER_TASK_CLASS);
        if (!s_clsgetAutoEnterTask) return 0;
        s_midgetAutoEnterTask = env->GetMethodID(s_clsgetAutoEnterTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetAutoEnterTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETAUTOENTER_TASK_CLASS;
            return NULL;
        }

        s_clssetAutoEnterTask = loadClass(env, SETAUTOENTER_TASK_CLASS);
        if (!s_clssetAutoEnterTask) return 0;
        s_midsetAutoEnterTask = env->GetMethodID(s_clssetAutoEnterTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetAutoEnterTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETAUTOENTER_TASK_CLASS;
            return NULL;
        }

        s_clsgetAutoTabTask = loadClass(env, GETAUTOTAB_TASK_CLASS);
        if (!s_clsgetAutoTabTask) return 0;
        s_midgetAutoTabTask = env->GetMethodID(s_clsgetAutoTabTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetAutoTabTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETAUTOTAB_TASK_CLASS;
            return NULL;
        }

        s_clssetAutoTabTask = loadClass(env, SETAUTOTAB_TASK_CLASS);
        if (!s_clssetAutoTabTask) return 0;
        s_midsetAutoTabTask = env->GetMethodID(s_clssetAutoTabTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetAutoTabTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETAUTOTAB_TASK_CLASS;
            return NULL;
        }

        s_clsgetHapticFeedbackTask = loadClass(env, GETHAPTICFEEDBACK_TASK_CLASS);
        if (!s_clsgetHapticFeedbackTask) return 0;
        s_midgetHapticFeedbackTask = env->GetMethodID(s_clsgetHapticFeedbackTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetHapticFeedbackTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETHAPTICFEEDBACK_TASK_CLASS;
            return NULL;
        }

        s_clssetHapticFeedbackTask = loadClass(env, SETHAPTICFEEDBACK_TASK_CLASS);
        if (!s_clssetHapticFeedbackTask) return 0;
        s_midsetHapticFeedbackTask = env->GetMethodID(s_clssetHapticFeedbackTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetHapticFeedbackTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETHAPTICFEEDBACK_TASK_CLASS;
            return NULL;
        }

        s_clsgetLinearSecurityLevelTask = loadClass(env, GETLINEARSECURITYLEVEL_TASK_CLASS);
        if (!s_clsgetLinearSecurityLevelTask) return 0;
        s_midgetLinearSecurityLevelTask = env->GetMethodID(s_clsgetLinearSecurityLevelTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetLinearSecurityLevelTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETLINEARSECURITYLEVEL_TASK_CLASS;
            return NULL;
        }

        s_clssetLinearSecurityLevelTask = loadClass(env, SETLINEARSECURITYLEVEL_TASK_CLASS);
        if (!s_clssetLinearSecurityLevelTask) return 0;
        s_midsetLinearSecurityLevelTask = env->GetMethodID(s_clssetLinearSecurityLevelTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetLinearSecurityLevelTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETLINEARSECURITYLEVEL_TASK_CLASS;
            return NULL;
        }

        s_clsgetScanTimeoutTask = loadClass(env, GETSCANTIMEOUT_TASK_CLASS);
        if (!s_clsgetScanTimeoutTask) return 0;
        s_midgetScanTimeoutTask = env->GetMethodID(s_clsgetScanTimeoutTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetScanTimeoutTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETSCANTIMEOUT_TASK_CLASS;
            return NULL;
        }

        s_clssetScanTimeoutTask = loadClass(env, SETSCANTIMEOUT_TASK_CLASS);
        if (!s_clssetScanTimeoutTask) return 0;
        s_midsetScanTimeoutTask = env->GetMethodID(s_clssetScanTimeoutTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetScanTimeoutTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETSCANTIMEOUT_TASK_CLASS;
            return NULL;
        }

        s_clsgetRasterModeTask = loadClass(env, GETRASTERMODE_TASK_CLASS);
        if (!s_clsgetRasterModeTask) return 0;
        s_midgetRasterModeTask = env->GetMethodID(s_clsgetRasterModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRasterModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRASTERMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetRasterModeTask = loadClass(env, SETRASTERMODE_TASK_CLASS);
        if (!s_clssetRasterModeTask) return 0;
        s_midsetRasterModeTask = env->GetMethodID(s_clssetRasterModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRasterModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRASTERMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetRasterHeightTask = loadClass(env, GETRASTERHEIGHT_TASK_CLASS);
        if (!s_clsgetRasterHeightTask) return 0;
        s_midgetRasterHeightTask = env->GetMethodID(s_clsgetRasterHeightTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRasterHeightTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRASTERHEIGHT_TASK_CLASS;
            return NULL;
        }

        s_clssetRasterHeightTask = loadClass(env, SETRASTERHEIGHT_TASK_CLASS);
        if (!s_clssetRasterHeightTask) return 0;
        s_midsetRasterHeightTask = env->GetMethodID(s_clssetRasterHeightTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRasterHeightTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRASTERHEIGHT_TASK_CLASS;
            return NULL;
        }

        s_clsgetAimTypeTask = loadClass(env, GETAIMTYPE_TASK_CLASS);
        if (!s_clsgetAimTypeTask) return 0;
        s_midgetAimTypeTask = env->GetMethodID(s_clsgetAimTypeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetAimTypeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETAIMTYPE_TASK_CLASS;
            return NULL;
        }

        s_clssetAimTypeTask = loadClass(env, SETAIMTYPE_TASK_CLASS);
        if (!s_clssetAimTypeTask) return 0;
        s_midsetAimTypeTask = env->GetMethodID(s_clssetAimTypeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetAimTypeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETAIMTYPE_TASK_CLASS;
            return NULL;
        }

        s_clsgetTimedAimDurationTask = loadClass(env, GETTIMEDAIMDURATION_TASK_CLASS);
        if (!s_clsgetTimedAimDurationTask) return 0;
        s_midgetTimedAimDurationTask = env->GetMethodID(s_clsgetTimedAimDurationTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetTimedAimDurationTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETTIMEDAIMDURATION_TASK_CLASS;
            return NULL;
        }

        s_clssetTimedAimDurationTask = loadClass(env, SETTIMEDAIMDURATION_TASK_CLASS);
        if (!s_clssetTimedAimDurationTask) return 0;
        s_midsetTimedAimDurationTask = env->GetMethodID(s_clssetTimedAimDurationTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetTimedAimDurationTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETTIMEDAIMDURATION_TASK_CLASS;
            return NULL;
        }

        s_clsgetSameSymbolTimeoutTask = loadClass(env, GETSAMESYMBOLTIMEOUT_TASK_CLASS);
        if (!s_clsgetSameSymbolTimeoutTask) return 0;
        s_midgetSameSymbolTimeoutTask = env->GetMethodID(s_clsgetSameSymbolTimeoutTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetSameSymbolTimeoutTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETSAMESYMBOLTIMEOUT_TASK_CLASS;
            return NULL;
        }

        s_clssetSameSymbolTimeoutTask = loadClass(env, SETSAMESYMBOLTIMEOUT_TASK_CLASS);
        if (!s_clssetSameSymbolTimeoutTask) return 0;
        s_midsetSameSymbolTimeoutTask = env->GetMethodID(s_clssetSameSymbolTimeoutTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetSameSymbolTimeoutTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETSAMESYMBOLTIMEOUT_TASK_CLASS;
            return NULL;
        }

        s_clsgetDifferentSymbolTimeoutTask = loadClass(env, GETDIFFERENTSYMBOLTIMEOUT_TASK_CLASS);
        if (!s_clsgetDifferentSymbolTimeoutTask) return 0;
        s_midgetDifferentSymbolTimeoutTask = env->GetMethodID(s_clsgetDifferentSymbolTimeoutTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDifferentSymbolTimeoutTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDIFFERENTSYMBOLTIMEOUT_TASK_CLASS;
            return NULL;
        }

        s_clssetDifferentSymbolTimeoutTask = loadClass(env, SETDIFFERENTSYMBOLTIMEOUT_TASK_CLASS);
        if (!s_clssetDifferentSymbolTimeoutTask) return 0;
        s_midsetDifferentSymbolTimeoutTask = env->GetMethodID(s_clssetDifferentSymbolTimeoutTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDifferentSymbolTimeoutTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDIFFERENTSYMBOLTIMEOUT_TASK_CLASS;
            return NULL;
        }

        s_clsgetAimModeTask = loadClass(env, GETAIMMODE_TASK_CLASS);
        if (!s_clsgetAimModeTask) return 0;
        s_midgetAimModeTask = env->GetMethodID(s_clsgetAimModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetAimModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETAIMMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetAimModeTask = loadClass(env, SETAIMMODE_TASK_CLASS);
        if (!s_clssetAimModeTask) return 0;
        s_midsetAimModeTask = env->GetMethodID(s_clssetAimModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetAimModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETAIMMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetPicklistModeTask = loadClass(env, GETPICKLISTMODE_TASK_CLASS);
        if (!s_clsgetPicklistModeTask) return 0;
        s_midgetPicklistModeTask = env->GetMethodID(s_clsgetPicklistModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetPicklistModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETPICKLISTMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetPicklistModeTask = loadClass(env, SETPICKLISTMODE_TASK_CLASS);
        if (!s_clssetPicklistModeTask) return 0;
        s_midsetPicklistModeTask = env->GetMethodID(s_clssetPicklistModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetPicklistModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETPICKLISTMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetViewfinderModeTask = loadClass(env, GETVIEWFINDERMODE_TASK_CLASS);
        if (!s_clsgetViewfinderModeTask) return 0;
        s_midgetViewfinderModeTask = env->GetMethodID(s_clsgetViewfinderModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetViewfinderModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETVIEWFINDERMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetViewfinderModeTask = loadClass(env, SETVIEWFINDERMODE_TASK_CLASS);
        if (!s_clssetViewfinderModeTask) return 0;
        s_midsetViewfinderModeTask = env->GetMethodID(s_clssetViewfinderModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetViewfinderModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETVIEWFINDERMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetViewfinderXTask = loadClass(env, GETVIEWFINDERX_TASK_CLASS);
        if (!s_clsgetViewfinderXTask) return 0;
        s_midgetViewfinderXTask = env->GetMethodID(s_clsgetViewfinderXTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetViewfinderXTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETVIEWFINDERX_TASK_CLASS;
            return NULL;
        }

        s_clssetViewfinderXTask = loadClass(env, SETVIEWFINDERX_TASK_CLASS);
        if (!s_clssetViewfinderXTask) return 0;
        s_midsetViewfinderXTask = env->GetMethodID(s_clssetViewfinderXTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetViewfinderXTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETVIEWFINDERX_TASK_CLASS;
            return NULL;
        }

        s_clsgetViewfinderYTask = loadClass(env, GETVIEWFINDERY_TASK_CLASS);
        if (!s_clsgetViewfinderYTask) return 0;
        s_midgetViewfinderYTask = env->GetMethodID(s_clsgetViewfinderYTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetViewfinderYTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETVIEWFINDERY_TASK_CLASS;
            return NULL;
        }

        s_clssetViewfinderYTask = loadClass(env, SETVIEWFINDERY_TASK_CLASS);
        if (!s_clssetViewfinderYTask) return 0;
        s_midsetViewfinderYTask = env->GetMethodID(s_clssetViewfinderYTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetViewfinderYTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETVIEWFINDERY_TASK_CLASS;
            return NULL;
        }

        s_clsgetViewfinderWidthTask = loadClass(env, GETVIEWFINDERWIDTH_TASK_CLASS);
        if (!s_clsgetViewfinderWidthTask) return 0;
        s_midgetViewfinderWidthTask = env->GetMethodID(s_clsgetViewfinderWidthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetViewfinderWidthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETVIEWFINDERWIDTH_TASK_CLASS;
            return NULL;
        }

        s_clssetViewfinderWidthTask = loadClass(env, SETVIEWFINDERWIDTH_TASK_CLASS);
        if (!s_clssetViewfinderWidthTask) return 0;
        s_midsetViewfinderWidthTask = env->GetMethodID(s_clssetViewfinderWidthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetViewfinderWidthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETVIEWFINDERWIDTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetViewfinderHeightTask = loadClass(env, GETVIEWFINDERHEIGHT_TASK_CLASS);
        if (!s_clsgetViewfinderHeightTask) return 0;
        s_midgetViewfinderHeightTask = env->GetMethodID(s_clsgetViewfinderHeightTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetViewfinderHeightTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETVIEWFINDERHEIGHT_TASK_CLASS;
            return NULL;
        }

        s_clssetViewfinderHeightTask = loadClass(env, SETVIEWFINDERHEIGHT_TASK_CLASS);
        if (!s_clssetViewfinderHeightTask) return 0;
        s_midsetViewfinderHeightTask = env->GetMethodID(s_clssetViewfinderHeightTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetViewfinderHeightTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETVIEWFINDERHEIGHT_TASK_CLASS;
            return NULL;
        }

        s_clsgetViewfinderFeedbackTask = loadClass(env, GETVIEWFINDERFEEDBACK_TASK_CLASS);
        if (!s_clsgetViewfinderFeedbackTask) return 0;
        s_midgetViewfinderFeedbackTask = env->GetMethodID(s_clsgetViewfinderFeedbackTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetViewfinderFeedbackTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETVIEWFINDERFEEDBACK_TASK_CLASS;
            return NULL;
        }

        s_clssetViewfinderFeedbackTask = loadClass(env, SETVIEWFINDERFEEDBACK_TASK_CLASS);
        if (!s_clssetViewfinderFeedbackTask) return 0;
        s_midsetViewfinderFeedbackTask = env->GetMethodID(s_clssetViewfinderFeedbackTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetViewfinderFeedbackTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETVIEWFINDERFEEDBACK_TASK_CLASS;
            return NULL;
        }

        s_clsgetViewfinderFeedbackTimeTask = loadClass(env, GETVIEWFINDERFEEDBACKTIME_TASK_CLASS);
        if (!s_clsgetViewfinderFeedbackTimeTask) return 0;
        s_midgetViewfinderFeedbackTimeTask = env->GetMethodID(s_clsgetViewfinderFeedbackTimeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetViewfinderFeedbackTimeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETVIEWFINDERFEEDBACKTIME_TASK_CLASS;
            return NULL;
        }

        s_clssetViewfinderFeedbackTimeTask = loadClass(env, SETVIEWFINDERFEEDBACKTIME_TASK_CLASS);
        if (!s_clssetViewfinderFeedbackTimeTask) return 0;
        s_midsetViewfinderFeedbackTimeTask = env->GetMethodID(s_clssetViewfinderFeedbackTimeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetViewfinderFeedbackTimeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETVIEWFINDERFEEDBACKTIME_TASK_CLASS;
            return NULL;
        }

        s_clsgetFocusModeTask = loadClass(env, GETFOCUSMODE_TASK_CLASS);
        if (!s_clsgetFocusModeTask) return 0;
        s_midgetFocusModeTask = env->GetMethodID(s_clsgetFocusModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetFocusModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETFOCUSMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetFocusModeTask = loadClass(env, SETFOCUSMODE_TASK_CLASS);
        if (!s_clssetFocusModeTask) return 0;
        s_midsetFocusModeTask = env->GetMethodID(s_clssetFocusModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetFocusModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETFOCUSMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetIlluminationModeTask = loadClass(env, GETILLUMINATIONMODE_TASK_CLASS);
        if (!s_clsgetIlluminationModeTask) return 0;
        s_midgetIlluminationModeTask = env->GetMethodID(s_clsgetIlluminationModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetIlluminationModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETILLUMINATIONMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetIlluminationModeTask = loadClass(env, SETILLUMINATIONMODE_TASK_CLASS);
        if (!s_clssetIlluminationModeTask) return 0;
        s_midsetIlluminationModeTask = env->GetMethodID(s_clssetIlluminationModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetIlluminationModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETILLUMINATIONMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetDpmModeTask = loadClass(env, GETDPMMODE_TASK_CLASS);
        if (!s_clsgetDpmModeTask) return 0;
        s_midgetDpmModeTask = env->GetMethodID(s_clsgetDpmModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDpmModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDPMMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetDpmModeTask = loadClass(env, SETDPMMODE_TASK_CLASS);
        if (!s_clssetDpmModeTask) return 0;
        s_midsetDpmModeTask = env->GetMethodID(s_clssetDpmModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDpmModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDPMMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetInverse1dModeTask = loadClass(env, GETINVERSE1DMODE_TASK_CLASS);
        if (!s_clsgetInverse1dModeTask) return 0;
        s_midgetInverse1dModeTask = env->GetMethodID(s_clsgetInverse1dModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetInverse1dModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETINVERSE1DMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetInverse1dModeTask = loadClass(env, SETINVERSE1DMODE_TASK_CLASS);
        if (!s_clssetInverse1dModeTask) return 0;
        s_midsetInverse1dModeTask = env->GetMethodID(s_clssetInverse1dModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetInverse1dModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETINVERSE1DMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetPoorQuality1dModeTask = loadClass(env, GETPOORQUALITY1DMODE_TASK_CLASS);
        if (!s_clsgetPoorQuality1dModeTask) return 0;
        s_midgetPoorQuality1dModeTask = env->GetMethodID(s_clsgetPoorQuality1dModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetPoorQuality1dModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETPOORQUALITY1DMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetPoorQuality1dModeTask = loadClass(env, SETPOORQUALITY1DMODE_TASK_CLASS);
        if (!s_clssetPoorQuality1dModeTask) return 0;
        s_midsetPoorQuality1dModeTask = env->GetMethodID(s_clssetPoorQuality1dModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetPoorQuality1dModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETPOORQUALITY1DMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetBeamWidthTask = loadClass(env, GETBEAMWIDTH_TASK_CLASS);
        if (!s_clsgetBeamWidthTask) return 0;
        s_midgetBeamWidthTask = env->GetMethodID(s_clsgetBeamWidthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetBeamWidthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETBEAMWIDTH_TASK_CLASS;
            return NULL;
        }

        s_clssetBeamWidthTask = loadClass(env, SETBEAMWIDTH_TASK_CLASS);
        if (!s_clssetBeamWidthTask) return 0;
        s_midsetBeamWidthTask = env->GetMethodID(s_clssetBeamWidthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetBeamWidthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETBEAMWIDTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetDbpModeTask = loadClass(env, GETDBPMODE_TASK_CLASS);
        if (!s_clsgetDbpModeTask) return 0;
        s_midgetDbpModeTask = env->GetMethodID(s_clsgetDbpModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDbpModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDBPMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetDbpModeTask = loadClass(env, SETDBPMODE_TASK_CLASS);
        if (!s_clssetDbpModeTask) return 0;
        s_midsetDbpModeTask = env->GetMethodID(s_clssetDbpModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDbpModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDBPMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetKlasseEinsTask = loadClass(env, GETKLASSEEINS_TASK_CLASS);
        if (!s_clsgetKlasseEinsTask) return 0;
        s_midgetKlasseEinsTask = env->GetMethodID(s_clsgetKlasseEinsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetKlasseEinsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETKLASSEEINS_TASK_CLASS;
            return NULL;
        }

        s_clssetKlasseEinsTask = loadClass(env, SETKLASSEEINS_TASK_CLASS);
        if (!s_clssetKlasseEinsTask) return 0;
        s_midsetKlasseEinsTask = env->GetMethodID(s_clssetKlasseEinsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetKlasseEinsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETKLASSEEINS_TASK_CLASS;
            return NULL;
        }

        s_clsgetAdaptiveScanningTask = loadClass(env, GETADAPTIVESCANNING_TASK_CLASS);
        if (!s_clsgetAdaptiveScanningTask) return 0;
        s_midgetAdaptiveScanningTask = env->GetMethodID(s_clsgetAdaptiveScanningTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetAdaptiveScanningTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETADAPTIVESCANNING_TASK_CLASS;
            return NULL;
        }

        s_clssetAdaptiveScanningTask = loadClass(env, SETADAPTIVESCANNING_TASK_CLASS);
        if (!s_clssetAdaptiveScanningTask) return 0;
        s_midsetAdaptiveScanningTask = env->GetMethodID(s_clssetAdaptiveScanningTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetAdaptiveScanningTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETADAPTIVESCANNING_TASK_CLASS;
            return NULL;
        }

        s_clsgetBidirectionalRedundancyTask = loadClass(env, GETBIDIRECTIONALREDUNDANCY_TASK_CLASS);
        if (!s_clsgetBidirectionalRedundancyTask) return 0;
        s_midgetBidirectionalRedundancyTask = env->GetMethodID(s_clsgetBidirectionalRedundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetBidirectionalRedundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETBIDIRECTIONALREDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clssetBidirectionalRedundancyTask = loadClass(env, SETBIDIRECTIONALREDUNDANCY_TASK_CLASS);
        if (!s_clssetBidirectionalRedundancyTask) return 0;
        s_midsetBidirectionalRedundancyTask = env->GetMethodID(s_clssetBidirectionalRedundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetBidirectionalRedundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETBIDIRECTIONALREDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetBarcodeDataFormatTask = loadClass(env, GETBARCODEDATAFORMAT_TASK_CLASS);
        if (!s_clsgetBarcodeDataFormatTask) return 0;
        s_midgetBarcodeDataFormatTask = env->GetMethodID(s_clsgetBarcodeDataFormatTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetBarcodeDataFormatTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETBARCODEDATAFORMAT_TASK_CLASS;
            return NULL;
        }

        s_clssetBarcodeDataFormatTask = loadClass(env, SETBARCODEDATAFORMAT_TASK_CLASS);
        if (!s_clssetBarcodeDataFormatTask) return 0;
        s_midsetBarcodeDataFormatTask = env->GetMethodID(s_clssetBarcodeDataFormatTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetBarcodeDataFormatTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETBARCODEDATAFORMAT_TASK_CLASS;
            return NULL;
        }

        s_clsgetDataBufferSizeTask = loadClass(env, GETDATABUFFERSIZE_TASK_CLASS);
        if (!s_clsgetDataBufferSizeTask) return 0;
        s_midgetDataBufferSizeTask = env->GetMethodID(s_clsgetDataBufferSizeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDataBufferSizeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDATABUFFERSIZE_TASK_CLASS;
            return NULL;
        }

        s_clssetDataBufferSizeTask = loadClass(env, SETDATABUFFERSIZE_TASK_CLASS);
        if (!s_clssetDataBufferSizeTask) return 0;
        s_midsetDataBufferSizeTask = env->GetMethodID(s_clssetDataBufferSizeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDataBufferSizeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDATABUFFERSIZE_TASK_CLASS;
            return NULL;
        }

        s_clsgetConnectionIdleTimeoutTask = loadClass(env, GETCONNECTIONIDLETIMEOUT_TASK_CLASS);
        if (!s_clsgetConnectionIdleTimeoutTask) return 0;
        s_midgetConnectionIdleTimeoutTask = env->GetMethodID(s_clsgetConnectionIdleTimeoutTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetConnectionIdleTimeoutTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCONNECTIONIDLETIMEOUT_TASK_CLASS;
            return NULL;
        }

        s_clssetConnectionIdleTimeoutTask = loadClass(env, SETCONNECTIONIDLETIMEOUT_TASK_CLASS);
        if (!s_clssetConnectionIdleTimeoutTask) return 0;
        s_midsetConnectionIdleTimeoutTask = env->GetMethodID(s_clssetConnectionIdleTimeoutTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetConnectionIdleTimeoutTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCONNECTIONIDLETIMEOUT_TASK_CLASS;
            return NULL;
        }

        s_clsgetDisconnectBtOnDisableTask = loadClass(env, GETDISCONNECTBTONDISABLE_TASK_CLASS);
        if (!s_clsgetDisconnectBtOnDisableTask) return 0;
        s_midgetDisconnectBtOnDisableTask = env->GetMethodID(s_clsgetDisconnectBtOnDisableTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDisconnectBtOnDisableTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDISCONNECTBTONDISABLE_TASK_CLASS;
            return NULL;
        }

        s_clssetDisconnectBtOnDisableTask = loadClass(env, SETDISCONNECTBTONDISABLE_TASK_CLASS);
        if (!s_clssetDisconnectBtOnDisableTask) return 0;
        s_midsetDisconnectBtOnDisableTask = env->GetMethodID(s_clssetDisconnectBtOnDisableTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDisconnectBtOnDisableTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDISCONNECTBTONDISABLE_TASK_CLASS;
            return NULL;
        }

        s_clsgetDisplayBtAddressBarcodeOnEnableTask = loadClass(env, GETDISPLAYBTADDRESSBARCODEONENABLE_TASK_CLASS);
        if (!s_clsgetDisplayBtAddressBarcodeOnEnableTask) return 0;
        s_midgetDisplayBtAddressBarcodeOnEnableTask = env->GetMethodID(s_clsgetDisplayBtAddressBarcodeOnEnableTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDisplayBtAddressBarcodeOnEnableTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDISPLAYBTADDRESSBARCODEONENABLE_TASK_CLASS;
            return NULL;
        }

        s_clssetDisplayBtAddressBarcodeOnEnableTask = loadClass(env, SETDISPLAYBTADDRESSBARCODEONENABLE_TASK_CLASS);
        if (!s_clssetDisplayBtAddressBarcodeOnEnableTask) return 0;
        s_midsetDisplayBtAddressBarcodeOnEnableTask = env->GetMethodID(s_clssetDisplayBtAddressBarcodeOnEnableTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDisplayBtAddressBarcodeOnEnableTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDISPLAYBTADDRESSBARCODEONENABLE_TASK_CLASS;
            return NULL;
        }

        s_clsgetEnableTimeoutTask = loadClass(env, GETENABLETIMEOUT_TASK_CLASS);
        if (!s_clsgetEnableTimeoutTask) return 0;
        s_midgetEnableTimeoutTask = env->GetMethodID(s_clsgetEnableTimeoutTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetEnableTimeoutTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETENABLETIMEOUT_TASK_CLASS;
            return NULL;
        }

        s_clssetEnableTimeoutTask = loadClass(env, SETENABLETIMEOUT_TASK_CLASS);
        if (!s_clssetEnableTimeoutTask) return 0;
        s_midsetEnableTimeoutTask = env->GetMethodID(s_clssetEnableTimeoutTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetEnableTimeoutTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETENABLETIMEOUT_TASK_CLASS;
            return NULL;
        }

        s_clsgetFriendlyNameTask = loadClass(env, GETFRIENDLYNAME_TASK_CLASS);
        if (!s_clsgetFriendlyNameTask) return 0;
        s_midgetFriendlyNameTask = env->GetMethodID(s_clsgetFriendlyNameTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetFriendlyNameTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETFRIENDLYNAME_TASK_CLASS;
            return NULL;
        }

        s_clsgetLcdModeTask = loadClass(env, GETLCDMODE_TASK_CLASS);
        if (!s_clsgetLcdModeTask) return 0;
        s_midgetLcdModeTask = env->GetMethodID(s_clsgetLcdModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetLcdModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETLCDMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetLcdModeTask = loadClass(env, SETLCDMODE_TASK_CLASS);
        if (!s_clssetLcdModeTask) return 0;
        s_midsetLcdModeTask = env->GetMethodID(s_clssetLcdModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetLcdModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETLCDMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetLowBatteryScanTask = loadClass(env, GETLOWBATTERYSCAN_TASK_CLASS);
        if (!s_clsgetLowBatteryScanTask) return 0;
        s_midgetLowBatteryScanTask = env->GetMethodID(s_clsgetLowBatteryScanTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetLowBatteryScanTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETLOWBATTERYSCAN_TASK_CLASS;
            return NULL;
        }

        s_clssetLowBatteryScanTask = loadClass(env, SETLOWBATTERYSCAN_TASK_CLASS);
        if (!s_clssetLowBatteryScanTask) return 0;
        s_midsetLowBatteryScanTask = env->GetMethodID(s_clssetLowBatteryScanTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetLowBatteryScanTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETLOWBATTERYSCAN_TASK_CLASS;
            return NULL;
        }

        s_clsgetTriggerConnectedTask = loadClass(env, GETTRIGGERCONNECTED_TASK_CLASS);
        if (!s_clsgetTriggerConnectedTask) return 0;
        s_midgetTriggerConnectedTask = env->GetMethodID(s_clsgetTriggerConnectedTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetTriggerConnectedTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETTRIGGERCONNECTED_TASK_CLASS;
            return NULL;
        }

        s_clssetTriggerConnectedTask = loadClass(env, SETTRIGGERCONNECTED_TASK_CLASS);
        if (!s_clssetTriggerConnectedTask) return 0;
        s_midsetTriggerConnectedTask = env->GetMethodID(s_clssetTriggerConnectedTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetTriggerConnectedTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETTRIGGERCONNECTED_TASK_CLASS;
            return NULL;
        }

        s_clsgetDisableScannerDuringNavigateTask = loadClass(env, GETDISABLESCANNERDURINGNAVIGATE_TASK_CLASS);
        if (!s_clsgetDisableScannerDuringNavigateTask) return 0;
        s_midgetDisableScannerDuringNavigateTask = env->GetMethodID(s_clsgetDisableScannerDuringNavigateTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDisableScannerDuringNavigateTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDISABLESCANNERDURINGNAVIGATE_TASK_CLASS;
            return NULL;
        }

        s_clssetDisableScannerDuringNavigateTask = loadClass(env, SETDISABLESCANNERDURINGNAVIGATE_TASK_CLASS);
        if (!s_clssetDisableScannerDuringNavigateTask) return 0;
        s_midsetDisableScannerDuringNavigateTask = env->GetMethodID(s_clssetDisableScannerDuringNavigateTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDisableScannerDuringNavigateTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDISABLESCANNERDURINGNAVIGATE_TASK_CLASS;
            return NULL;
        }

        s_clsgetDecodeVolumeTask = loadClass(env, GETDECODEVOLUME_TASK_CLASS);
        if (!s_clsgetDecodeVolumeTask) return 0;
        s_midgetDecodeVolumeTask = env->GetMethodID(s_clsgetDecodeVolumeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDecodeVolumeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDECODEVOLUME_TASK_CLASS;
            return NULL;
        }

        s_clssetDecodeVolumeTask = loadClass(env, SETDECODEVOLUME_TASK_CLASS);
        if (!s_clssetDecodeVolumeTask) return 0;
        s_midsetDecodeVolumeTask = env->GetMethodID(s_clssetDecodeVolumeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDecodeVolumeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDECODEVOLUME_TASK_CLASS;
            return NULL;
        }

        s_clsgetDecodeDurationTask = loadClass(env, GETDECODEDURATION_TASK_CLASS);
        if (!s_clsgetDecodeDurationTask) return 0;
        s_midgetDecodeDurationTask = env->GetMethodID(s_clsgetDecodeDurationTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDecodeDurationTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDECODEDURATION_TASK_CLASS;
            return NULL;
        }

        s_clssetDecodeDurationTask = loadClass(env, SETDECODEDURATION_TASK_CLASS);
        if (!s_clssetDecodeDurationTask) return 0;
        s_midsetDecodeDurationTask = env->GetMethodID(s_clssetDecodeDurationTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDecodeDurationTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDECODEDURATION_TASK_CLASS;
            return NULL;
        }

        s_clsgetDecodeFrequencyTask = loadClass(env, GETDECODEFREQUENCY_TASK_CLASS);
        if (!s_clsgetDecodeFrequencyTask) return 0;
        s_midgetDecodeFrequencyTask = env->GetMethodID(s_clsgetDecodeFrequencyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDecodeFrequencyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDECODEFREQUENCY_TASK_CLASS;
            return NULL;
        }

        s_clssetDecodeFrequencyTask = loadClass(env, SETDECODEFREQUENCY_TASK_CLASS);
        if (!s_clssetDecodeFrequencyTask) return 0;
        s_midsetDecodeFrequencyTask = env->GetMethodID(s_clssetDecodeFrequencyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDecodeFrequencyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDECODEFREQUENCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetInvalidDecodeFrequencyTask = loadClass(env, GETINVALIDDECODEFREQUENCY_TASK_CLASS);
        if (!s_clsgetInvalidDecodeFrequencyTask) return 0;
        s_midgetInvalidDecodeFrequencyTask = env->GetMethodID(s_clsgetInvalidDecodeFrequencyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetInvalidDecodeFrequencyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETINVALIDDECODEFREQUENCY_TASK_CLASS;
            return NULL;
        }

        s_clssetInvalidDecodeFrequencyTask = loadClass(env, SETINVALIDDECODEFREQUENCY_TASK_CLASS);
        if (!s_clssetInvalidDecodeFrequencyTask) return 0;
        s_midsetInvalidDecodeFrequencyTask = env->GetMethodID(s_clssetInvalidDecodeFrequencyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetInvalidDecodeFrequencyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETINVALIDDECODEFREQUENCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetDecodeSoundTask = loadClass(env, GETDECODESOUND_TASK_CLASS);
        if (!s_clsgetDecodeSoundTask) return 0;
        s_midgetDecodeSoundTask = env->GetMethodID(s_clsgetDecodeSoundTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDecodeSoundTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDECODESOUND_TASK_CLASS;
            return NULL;
        }

        s_clssetDecodeSoundTask = loadClass(env, SETDECODESOUND_TASK_CLASS);
        if (!s_clssetDecodeSoundTask) return 0;
        s_midsetDecodeSoundTask = env->GetMethodID(s_clssetDecodeSoundTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDecodeSoundTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDECODESOUND_TASK_CLASS;
            return NULL;
        }

        s_clsgetInvalidDecodeSoundTask = loadClass(env, GETINVALIDDECODESOUND_TASK_CLASS);
        if (!s_clsgetInvalidDecodeSoundTask) return 0;
        s_midgetInvalidDecodeSoundTask = env->GetMethodID(s_clsgetInvalidDecodeSoundTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetInvalidDecodeSoundTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETINVALIDDECODESOUND_TASK_CLASS;
            return NULL;
        }

        s_clssetInvalidDecodeSoundTask = loadClass(env, SETINVALIDDECODESOUND_TASK_CLASS);
        if (!s_clssetInvalidDecodeSoundTask) return 0;
        s_midsetInvalidDecodeSoundTask = env->GetMethodID(s_clssetInvalidDecodeSoundTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetInvalidDecodeSoundTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETINVALIDDECODESOUND_TASK_CLASS;
            return NULL;
        }

        s_clsgetScannerTypeTask = loadClass(env, GETSCANNERTYPE_TASK_CLASS);
        if (!s_clsgetScannerTypeTask) return 0;
        s_midgetScannerTypeTask = env->GetMethodID(s_clsgetScannerTypeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetScannerTypeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETSCANNERTYPE_TASK_CLASS;
            return NULL;
        }

        s_clsgetAllDecodersTask = loadClass(env, GETALLDECODERS_TASK_CLASS);
        if (!s_clsgetAllDecodersTask) return 0;
        s_midgetAllDecodersTask = env->GetMethodID(s_clsgetAllDecodersTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetAllDecodersTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETALLDECODERS_TASK_CLASS;
            return NULL;
        }

        s_clssetAllDecodersTask = loadClass(env, SETALLDECODERS_TASK_CLASS);
        if (!s_clssetAllDecodersTask) return 0;
        s_midsetAllDecodersTask = env->GetMethodID(s_clssetAllDecodersTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetAllDecodersTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETALLDECODERS_TASK_CLASS;
            return NULL;
        }

        s_clsgetAztecTask = loadClass(env, GETAZTEC_TASK_CLASS);
        if (!s_clsgetAztecTask) return 0;
        s_midgetAztecTask = env->GetMethodID(s_clsgetAztecTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetAztecTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETAZTEC_TASK_CLASS;
            return NULL;
        }

        s_clssetAztecTask = loadClass(env, SETAZTEC_TASK_CLASS);
        if (!s_clssetAztecTask) return 0;
        s_midsetAztecTask = env->GetMethodID(s_clssetAztecTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetAztecTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETAZTEC_TASK_CLASS;
            return NULL;
        }

        s_clsgetChinese2of5Task = loadClass(env, GETCHINESE2OF5_TASK_CLASS);
        if (!s_clsgetChinese2of5Task) return 0;
        s_midgetChinese2of5Task = env->GetMethodID(s_clsgetChinese2of5Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetChinese2of5Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCHINESE2OF5_TASK_CLASS;
            return NULL;
        }

        s_clssetChinese2of5Task = loadClass(env, SETCHINESE2OF5_TASK_CLASS);
        if (!s_clssetChinese2of5Task) return 0;
        s_midsetChinese2of5Task = env->GetMethodID(s_clssetChinese2of5Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetChinese2of5Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCHINESE2OF5_TASK_CLASS;
            return NULL;
        }

        s_clsgetCodabarTask = loadClass(env, GETCODABAR_TASK_CLASS);
        if (!s_clsgetCodabarTask) return 0;
        s_midgetCodabarTask = env->GetMethodID(s_clsgetCodabarTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCodabarTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODABAR_TASK_CLASS;
            return NULL;
        }

        s_clssetCodabarTask = loadClass(env, SETCODABAR_TASK_CLASS);
        if (!s_clssetCodabarTask) return 0;
        s_midsetCodabarTask = env->GetMethodID(s_clssetCodabarTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCodabarTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODABAR_TASK_CLASS;
            return NULL;
        }

        s_clsgetCodabarClsiEditingTask = loadClass(env, GETCODABARCLSIEDITING_TASK_CLASS);
        if (!s_clsgetCodabarClsiEditingTask) return 0;
        s_midgetCodabarClsiEditingTask = env->GetMethodID(s_clsgetCodabarClsiEditingTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCodabarClsiEditingTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODABARCLSIEDITING_TASK_CLASS;
            return NULL;
        }

        s_clssetCodabarClsiEditingTask = loadClass(env, SETCODABARCLSIEDITING_TASK_CLASS);
        if (!s_clssetCodabarClsiEditingTask) return 0;
        s_midsetCodabarClsiEditingTask = env->GetMethodID(s_clssetCodabarClsiEditingTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCodabarClsiEditingTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODABARCLSIEDITING_TASK_CLASS;
            return NULL;
        }

        s_clsgetCodabarMaxLengthTask = loadClass(env, GETCODABARMAXLENGTH_TASK_CLASS);
        if (!s_clsgetCodabarMaxLengthTask) return 0;
        s_midgetCodabarMaxLengthTask = env->GetMethodID(s_clsgetCodabarMaxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCodabarMaxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODABARMAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetCodabarMaxLengthTask = loadClass(env, SETCODABARMAXLENGTH_TASK_CLASS);
        if (!s_clssetCodabarMaxLengthTask) return 0;
        s_midsetCodabarMaxLengthTask = env->GetMethodID(s_clssetCodabarMaxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCodabarMaxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODABARMAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetCodabarMinLengthTask = loadClass(env, GETCODABARMINLENGTH_TASK_CLASS);
        if (!s_clsgetCodabarMinLengthTask) return 0;
        s_midgetCodabarMinLengthTask = env->GetMethodID(s_clsgetCodabarMinLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCodabarMinLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODABARMINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetCodabarMinLengthTask = loadClass(env, SETCODABARMINLENGTH_TASK_CLASS);
        if (!s_clssetCodabarMinLengthTask) return 0;
        s_midsetCodabarMinLengthTask = env->GetMethodID(s_clssetCodabarMinLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCodabarMinLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODABARMINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetCodabarNotisEditingTask = loadClass(env, GETCODABARNOTISEDITING_TASK_CLASS);
        if (!s_clsgetCodabarNotisEditingTask) return 0;
        s_midgetCodabarNotisEditingTask = env->GetMethodID(s_clsgetCodabarNotisEditingTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCodabarNotisEditingTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODABARNOTISEDITING_TASK_CLASS;
            return NULL;
        }

        s_clssetCodabarNotisEditingTask = loadClass(env, SETCODABARNOTISEDITING_TASK_CLASS);
        if (!s_clssetCodabarNotisEditingTask) return 0;
        s_midsetCodabarNotisEditingTask = env->GetMethodID(s_clssetCodabarNotisEditingTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCodabarNotisEditingTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODABARNOTISEDITING_TASK_CLASS;
            return NULL;
        }

        s_clsgetCodabarRedundancyTask = loadClass(env, GETCODABARREDUNDANCY_TASK_CLASS);
        if (!s_clsgetCodabarRedundancyTask) return 0;
        s_midgetCodabarRedundancyTask = env->GetMethodID(s_clsgetCodabarRedundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCodabarRedundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODABARREDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clssetCodabarRedundancyTask = loadClass(env, SETCODABARREDUNDANCY_TASK_CLASS);
        if (!s_clssetCodabarRedundancyTask) return 0;
        s_midsetCodabarRedundancyTask = env->GetMethodID(s_clssetCodabarRedundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCodabarRedundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODABARREDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode11Task = loadClass(env, GETCODE11_TASK_CLASS);
        if (!s_clsgetCode11Task) return 0;
        s_midgetCode11Task = env->GetMethodID(s_clsgetCode11Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode11Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE11_TASK_CLASS;
            return NULL;
        }

        s_clssetCode11Task = loadClass(env, SETCODE11_TASK_CLASS);
        if (!s_clssetCode11Task) return 0;
        s_midsetCode11Task = env->GetMethodID(s_clssetCode11Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode11Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE11_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode11checkDigitCountTask = loadClass(env, GETCODE11CHECKDIGITCOUNT_TASK_CLASS);
        if (!s_clsgetCode11checkDigitCountTask) return 0;
        s_midgetCode11checkDigitCountTask = env->GetMethodID(s_clsgetCode11checkDigitCountTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode11checkDigitCountTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE11CHECKDIGITCOUNT_TASK_CLASS;
            return NULL;
        }

        s_clssetCode11checkDigitCountTask = loadClass(env, SETCODE11CHECKDIGITCOUNT_TASK_CLASS);
        if (!s_clssetCode11checkDigitCountTask) return 0;
        s_midsetCode11checkDigitCountTask = env->GetMethodID(s_clssetCode11checkDigitCountTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode11checkDigitCountTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE11CHECKDIGITCOUNT_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode11maxLengthTask = loadClass(env, GETCODE11MAXLENGTH_TASK_CLASS);
        if (!s_clsgetCode11maxLengthTask) return 0;
        s_midgetCode11maxLengthTask = env->GetMethodID(s_clsgetCode11maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode11maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE11MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetCode11maxLengthTask = loadClass(env, SETCODE11MAXLENGTH_TASK_CLASS);
        if (!s_clssetCode11maxLengthTask) return 0;
        s_midsetCode11maxLengthTask = env->GetMethodID(s_clssetCode11maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode11maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE11MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode11minLengthTask = loadClass(env, GETCODE11MINLENGTH_TASK_CLASS);
        if (!s_clsgetCode11minLengthTask) return 0;
        s_midgetCode11minLengthTask = env->GetMethodID(s_clsgetCode11minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode11minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE11MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetCode11minLengthTask = loadClass(env, SETCODE11MINLENGTH_TASK_CLASS);
        if (!s_clssetCode11minLengthTask) return 0;
        s_midsetCode11minLengthTask = env->GetMethodID(s_clssetCode11minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode11minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE11MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode11redundancyTask = loadClass(env, GETCODE11REDUNDANCY_TASK_CLASS);
        if (!s_clsgetCode11redundancyTask) return 0;
        s_midgetCode11redundancyTask = env->GetMethodID(s_clsgetCode11redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode11redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE11REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clssetCode11redundancyTask = loadClass(env, SETCODE11REDUNDANCY_TASK_CLASS);
        if (!s_clssetCode11redundancyTask) return 0;
        s_midsetCode11redundancyTask = env->GetMethodID(s_clssetCode11redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode11redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE11REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode11reportCheckDigitTask = loadClass(env, GETCODE11REPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetCode11reportCheckDigitTask) return 0;
        s_midgetCode11reportCheckDigitTask = env->GetMethodID(s_clsgetCode11reportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode11reportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE11REPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetCode11reportCheckDigitTask = loadClass(env, SETCODE11REPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clssetCode11reportCheckDigitTask) return 0;
        s_midsetCode11reportCheckDigitTask = env->GetMethodID(s_clssetCode11reportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode11reportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE11REPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode128Task = loadClass(env, GETCODE128_TASK_CLASS);
        if (!s_clsgetCode128Task) return 0;
        s_midgetCode128Task = env->GetMethodID(s_clsgetCode128Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode128Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE128_TASK_CLASS;
            return NULL;
        }

        s_clssetCode128Task = loadClass(env, SETCODE128_TASK_CLASS);
        if (!s_clssetCode128Task) return 0;
        s_midsetCode128Task = env->GetMethodID(s_clssetCode128Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode128Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE128_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode128checkIsBtTableTask = loadClass(env, GETCODE128CHECKISBTTABLE_TASK_CLASS);
        if (!s_clsgetCode128checkIsBtTableTask) return 0;
        s_midgetCode128checkIsBtTableTask = env->GetMethodID(s_clsgetCode128checkIsBtTableTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode128checkIsBtTableTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE128CHECKISBTTABLE_TASK_CLASS;
            return NULL;
        }

        s_clssetCode128checkIsBtTableTask = loadClass(env, SETCODE128CHECKISBTTABLE_TASK_CLASS);
        if (!s_clssetCode128checkIsBtTableTask) return 0;
        s_midsetCode128checkIsBtTableTask = env->GetMethodID(s_clssetCode128checkIsBtTableTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode128checkIsBtTableTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE128CHECKISBTTABLE_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode128ean128Task = loadClass(env, GETCODE128EAN128_TASK_CLASS);
        if (!s_clsgetCode128ean128Task) return 0;
        s_midgetCode128ean128Task = env->GetMethodID(s_clsgetCode128ean128Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode128ean128Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE128EAN128_TASK_CLASS;
            return NULL;
        }

        s_clssetCode128ean128Task = loadClass(env, SETCODE128EAN128_TASK_CLASS);
        if (!s_clssetCode128ean128Task) return 0;
        s_midsetCode128ean128Task = env->GetMethodID(s_clssetCode128ean128Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode128ean128Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE128EAN128_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode128isbt128Task = loadClass(env, GETCODE128ISBT128_TASK_CLASS);
        if (!s_clsgetCode128isbt128Task) return 0;
        s_midgetCode128isbt128Task = env->GetMethodID(s_clsgetCode128isbt128Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode128isbt128Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE128ISBT128_TASK_CLASS;
            return NULL;
        }

        s_clssetCode128isbt128Task = loadClass(env, SETCODE128ISBT128_TASK_CLASS);
        if (!s_clssetCode128isbt128Task) return 0;
        s_midsetCode128isbt128Task = env->GetMethodID(s_clssetCode128isbt128Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode128isbt128Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE128ISBT128_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode128isbt128ConcatModeTask = loadClass(env, GETCODE128ISBT128CONCATMODE_TASK_CLASS);
        if (!s_clsgetCode128isbt128ConcatModeTask) return 0;
        s_midgetCode128isbt128ConcatModeTask = env->GetMethodID(s_clsgetCode128isbt128ConcatModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode128isbt128ConcatModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE128ISBT128CONCATMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetCode128isbt128ConcatModeTask = loadClass(env, SETCODE128ISBT128CONCATMODE_TASK_CLASS);
        if (!s_clssetCode128isbt128ConcatModeTask) return 0;
        s_midsetCode128isbt128ConcatModeTask = env->GetMethodID(s_clssetCode128isbt128ConcatModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode128isbt128ConcatModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE128ISBT128CONCATMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode128maxLengthTask = loadClass(env, GETCODE128MAXLENGTH_TASK_CLASS);
        if (!s_clsgetCode128maxLengthTask) return 0;
        s_midgetCode128maxLengthTask = env->GetMethodID(s_clsgetCode128maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode128maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE128MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetCode128maxLengthTask = loadClass(env, SETCODE128MAXLENGTH_TASK_CLASS);
        if (!s_clssetCode128maxLengthTask) return 0;
        s_midsetCode128maxLengthTask = env->GetMethodID(s_clssetCode128maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode128maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE128MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode128minLengthTask = loadClass(env, GETCODE128MINLENGTH_TASK_CLASS);
        if (!s_clsgetCode128minLengthTask) return 0;
        s_midgetCode128minLengthTask = env->GetMethodID(s_clsgetCode128minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode128minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE128MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetCode128minLengthTask = loadClass(env, SETCODE128MINLENGTH_TASK_CLASS);
        if (!s_clssetCode128minLengthTask) return 0;
        s_midsetCode128minLengthTask = env->GetMethodID(s_clssetCode128minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode128minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE128MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode128other128Task = loadClass(env, GETCODE128OTHER128_TASK_CLASS);
        if (!s_clsgetCode128other128Task) return 0;
        s_midgetCode128other128Task = env->GetMethodID(s_clsgetCode128other128Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode128other128Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE128OTHER128_TASK_CLASS;
            return NULL;
        }

        s_clssetCode128other128Task = loadClass(env, SETCODE128OTHER128_TASK_CLASS);
        if (!s_clssetCode128other128Task) return 0;
        s_midsetCode128other128Task = env->GetMethodID(s_clssetCode128other128Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode128other128Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE128OTHER128_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode128redundancyTask = loadClass(env, GETCODE128REDUNDANCY_TASK_CLASS);
        if (!s_clsgetCode128redundancyTask) return 0;
        s_midgetCode128redundancyTask = env->GetMethodID(s_clsgetCode128redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode128redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE128REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clssetCode128redundancyTask = loadClass(env, SETCODE128REDUNDANCY_TASK_CLASS);
        if (!s_clssetCode128redundancyTask) return 0;
        s_midsetCode128redundancyTask = env->GetMethodID(s_clssetCode128redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode128redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE128REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode128securityLevelTask = loadClass(env, GETCODE128SECURITYLEVEL_TASK_CLASS);
        if (!s_clsgetCode128securityLevelTask) return 0;
        s_midgetCode128securityLevelTask = env->GetMethodID(s_clsgetCode128securityLevelTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode128securityLevelTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE128SECURITYLEVEL_TASK_CLASS;
            return NULL;
        }

        s_clssetCode128securityLevelTask = loadClass(env, SETCODE128SECURITYLEVEL_TASK_CLASS);
        if (!s_clssetCode128securityLevelTask) return 0;
        s_midsetCode128securityLevelTask = env->GetMethodID(s_clssetCode128securityLevelTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode128securityLevelTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE128SECURITYLEVEL_TASK_CLASS;
            return NULL;
        }

        s_clsgetCompositeAbTask = loadClass(env, GETCOMPOSITEAB_TASK_CLASS);
        if (!s_clsgetCompositeAbTask) return 0;
        s_midgetCompositeAbTask = env->GetMethodID(s_clsgetCompositeAbTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCompositeAbTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCOMPOSITEAB_TASK_CLASS;
            return NULL;
        }

        s_clssetCompositeAbTask = loadClass(env, SETCOMPOSITEAB_TASK_CLASS);
        if (!s_clssetCompositeAbTask) return 0;
        s_midsetCompositeAbTask = env->GetMethodID(s_clssetCompositeAbTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCompositeAbTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCOMPOSITEAB_TASK_CLASS;
            return NULL;
        }

        s_clsgetCompositeAbUccLinkModeTask = loadClass(env, GETCOMPOSITEABUCCLINKMODE_TASK_CLASS);
        if (!s_clsgetCompositeAbUccLinkModeTask) return 0;
        s_midgetCompositeAbUccLinkModeTask = env->GetMethodID(s_clsgetCompositeAbUccLinkModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCompositeAbUccLinkModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCOMPOSITEABUCCLINKMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetCompositeAbUccLinkModeTask = loadClass(env, SETCOMPOSITEABUCCLINKMODE_TASK_CLASS);
        if (!s_clssetCompositeAbUccLinkModeTask) return 0;
        s_midsetCompositeAbUccLinkModeTask = env->GetMethodID(s_clssetCompositeAbUccLinkModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCompositeAbUccLinkModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCOMPOSITEABUCCLINKMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetCompositeAbUseUpcPreambleCheckDigitRulesTask = loadClass(env, GETCOMPOSITEABUSEUPCPREAMBLECHECKDIGITRULES_TASK_CLASS);
        if (!s_clsgetCompositeAbUseUpcPreambleCheckDigitRulesTask) return 0;
        s_midgetCompositeAbUseUpcPreambleCheckDigitRulesTask = env->GetMethodID(s_clsgetCompositeAbUseUpcPreambleCheckDigitRulesTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCompositeAbUseUpcPreambleCheckDigitRulesTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCOMPOSITEABUSEUPCPREAMBLECHECKDIGITRULES_TASK_CLASS;
            return NULL;
        }

        s_clssetCompositeAbUseUpcPreambleCheckDigitRulesTask = loadClass(env, SETCOMPOSITEABUSEUPCPREAMBLECHECKDIGITRULES_TASK_CLASS);
        if (!s_clssetCompositeAbUseUpcPreambleCheckDigitRulesTask) return 0;
        s_midsetCompositeAbUseUpcPreambleCheckDigitRulesTask = env->GetMethodID(s_clssetCompositeAbUseUpcPreambleCheckDigitRulesTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCompositeAbUseUpcPreambleCheckDigitRulesTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCOMPOSITEABUSEUPCPREAMBLECHECKDIGITRULES_TASK_CLASS;
            return NULL;
        }

        s_clsgetCompositeCTask = loadClass(env, GETCOMPOSITEC_TASK_CLASS);
        if (!s_clsgetCompositeCTask) return 0;
        s_midgetCompositeCTask = env->GetMethodID(s_clsgetCompositeCTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCompositeCTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCOMPOSITEC_TASK_CLASS;
            return NULL;
        }

        s_clssetCompositeCTask = loadClass(env, SETCOMPOSITEC_TASK_CLASS);
        if (!s_clssetCompositeCTask) return 0;
        s_midsetCompositeCTask = env->GetMethodID(s_clssetCompositeCTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCompositeCTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCOMPOSITEC_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode39Task = loadClass(env, GETCODE39_TASK_CLASS);
        if (!s_clsgetCode39Task) return 0;
        s_midgetCode39Task = env->GetMethodID(s_clsgetCode39Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode39Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE39_TASK_CLASS;
            return NULL;
        }

        s_clssetCode39Task = loadClass(env, SETCODE39_TASK_CLASS);
        if (!s_clssetCode39Task) return 0;
        s_midsetCode39Task = env->GetMethodID(s_clssetCode39Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode39Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE39_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode39code32PrefixTask = loadClass(env, GETCODE39CODE32PREFIX_TASK_CLASS);
        if (!s_clsgetCode39code32PrefixTask) return 0;
        s_midgetCode39code32PrefixTask = env->GetMethodID(s_clsgetCode39code32PrefixTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode39code32PrefixTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE39CODE32PREFIX_TASK_CLASS;
            return NULL;
        }

        s_clssetCode39code32PrefixTask = loadClass(env, SETCODE39CODE32PREFIX_TASK_CLASS);
        if (!s_clssetCode39code32PrefixTask) return 0;
        s_midsetCode39code32PrefixTask = env->GetMethodID(s_clssetCode39code32PrefixTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode39code32PrefixTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE39CODE32PREFIX_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode39convertToCode32Task = loadClass(env, GETCODE39CONVERTTOCODE32_TASK_CLASS);
        if (!s_clsgetCode39convertToCode32Task) return 0;
        s_midgetCode39convertToCode32Task = env->GetMethodID(s_clsgetCode39convertToCode32Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode39convertToCode32Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE39CONVERTTOCODE32_TASK_CLASS;
            return NULL;
        }

        s_clssetCode39convertToCode32Task = loadClass(env, SETCODE39CONVERTTOCODE32_TASK_CLASS);
        if (!s_clssetCode39convertToCode32Task) return 0;
        s_midsetCode39convertToCode32Task = env->GetMethodID(s_clssetCode39convertToCode32Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode39convertToCode32Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE39CONVERTTOCODE32_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode39fullAsciiTask = loadClass(env, GETCODE39FULLASCII_TASK_CLASS);
        if (!s_clsgetCode39fullAsciiTask) return 0;
        s_midgetCode39fullAsciiTask = env->GetMethodID(s_clsgetCode39fullAsciiTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode39fullAsciiTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE39FULLASCII_TASK_CLASS;
            return NULL;
        }

        s_clssetCode39fullAsciiTask = loadClass(env, SETCODE39FULLASCII_TASK_CLASS);
        if (!s_clssetCode39fullAsciiTask) return 0;
        s_midsetCode39fullAsciiTask = env->GetMethodID(s_clssetCode39fullAsciiTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode39fullAsciiTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE39FULLASCII_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode39maxLengthTask = loadClass(env, GETCODE39MAXLENGTH_TASK_CLASS);
        if (!s_clsgetCode39maxLengthTask) return 0;
        s_midgetCode39maxLengthTask = env->GetMethodID(s_clsgetCode39maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode39maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE39MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetCode39maxLengthTask = loadClass(env, SETCODE39MAXLENGTH_TASK_CLASS);
        if (!s_clssetCode39maxLengthTask) return 0;
        s_midsetCode39maxLengthTask = env->GetMethodID(s_clssetCode39maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode39maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE39MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode39minLengthTask = loadClass(env, GETCODE39MINLENGTH_TASK_CLASS);
        if (!s_clsgetCode39minLengthTask) return 0;
        s_midgetCode39minLengthTask = env->GetMethodID(s_clsgetCode39minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode39minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE39MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetCode39minLengthTask = loadClass(env, SETCODE39MINLENGTH_TASK_CLASS);
        if (!s_clssetCode39minLengthTask) return 0;
        s_midsetCode39minLengthTask = env->GetMethodID(s_clssetCode39minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode39minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE39MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode39redundancyTask = loadClass(env, GETCODE39REDUNDANCY_TASK_CLASS);
        if (!s_clsgetCode39redundancyTask) return 0;
        s_midgetCode39redundancyTask = env->GetMethodID(s_clsgetCode39redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode39redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE39REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clssetCode39redundancyTask = loadClass(env, SETCODE39REDUNDANCY_TASK_CLASS);
        if (!s_clssetCode39redundancyTask) return 0;
        s_midsetCode39redundancyTask = env->GetMethodID(s_clssetCode39redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode39redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE39REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode39reportCheckDigitTask = loadClass(env, GETCODE39REPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetCode39reportCheckDigitTask) return 0;
        s_midgetCode39reportCheckDigitTask = env->GetMethodID(s_clsgetCode39reportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode39reportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE39REPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetCode39reportCheckDigitTask = loadClass(env, SETCODE39REPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clssetCode39reportCheckDigitTask) return 0;
        s_midsetCode39reportCheckDigitTask = env->GetMethodID(s_clssetCode39reportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode39reportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE39REPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode39securityLevelTask = loadClass(env, GETCODE39SECURITYLEVEL_TASK_CLASS);
        if (!s_clsgetCode39securityLevelTask) return 0;
        s_midgetCode39securityLevelTask = env->GetMethodID(s_clsgetCode39securityLevelTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode39securityLevelTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE39SECURITYLEVEL_TASK_CLASS;
            return NULL;
        }

        s_clssetCode39securityLevelTask = loadClass(env, SETCODE39SECURITYLEVEL_TASK_CLASS);
        if (!s_clssetCode39securityLevelTask) return 0;
        s_midsetCode39securityLevelTask = env->GetMethodID(s_clssetCode39securityLevelTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode39securityLevelTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE39SECURITYLEVEL_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode39verifyCheckDigitTask = loadClass(env, GETCODE39VERIFYCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetCode39verifyCheckDigitTask) return 0;
        s_midgetCode39verifyCheckDigitTask = env->GetMethodID(s_clsgetCode39verifyCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode39verifyCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE39VERIFYCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetCode39verifyCheckDigitTask = loadClass(env, SETCODE39VERIFYCHECKDIGIT_TASK_CLASS);
        if (!s_clssetCode39verifyCheckDigitTask) return 0;
        s_midsetCode39verifyCheckDigitTask = env->GetMethodID(s_clssetCode39verifyCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode39verifyCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE39VERIFYCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode93Task = loadClass(env, GETCODE93_TASK_CLASS);
        if (!s_clsgetCode93Task) return 0;
        s_midgetCode93Task = env->GetMethodID(s_clsgetCode93Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode93Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE93_TASK_CLASS;
            return NULL;
        }

        s_clssetCode93Task = loadClass(env, SETCODE93_TASK_CLASS);
        if (!s_clssetCode93Task) return 0;
        s_midsetCode93Task = env->GetMethodID(s_clssetCode93Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode93Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE93_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode93maxLengthTask = loadClass(env, GETCODE93MAXLENGTH_TASK_CLASS);
        if (!s_clsgetCode93maxLengthTask) return 0;
        s_midgetCode93maxLengthTask = env->GetMethodID(s_clsgetCode93maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode93maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE93MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetCode93maxLengthTask = loadClass(env, SETCODE93MAXLENGTH_TASK_CLASS);
        if (!s_clssetCode93maxLengthTask) return 0;
        s_midsetCode93maxLengthTask = env->GetMethodID(s_clssetCode93maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode93maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE93MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode93minLengthTask = loadClass(env, GETCODE93MINLENGTH_TASK_CLASS);
        if (!s_clsgetCode93minLengthTask) return 0;
        s_midgetCode93minLengthTask = env->GetMethodID(s_clsgetCode93minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode93minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE93MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetCode93minLengthTask = loadClass(env, SETCODE93MINLENGTH_TASK_CLASS);
        if (!s_clssetCode93minLengthTask) return 0;
        s_midsetCode93minLengthTask = env->GetMethodID(s_clssetCode93minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode93minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE93MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetCode93redundancyTask = loadClass(env, GETCODE93REDUNDANCY_TASK_CLASS);
        if (!s_clsgetCode93redundancyTask) return 0;
        s_midgetCode93redundancyTask = env->GetMethodID(s_clsgetCode93redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCode93redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCODE93REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clssetCode93redundancyTask = loadClass(env, SETCODE93REDUNDANCY_TASK_CLASS);
        if (!s_clssetCode93redundancyTask) return 0;
        s_midsetCode93redundancyTask = env->GetMethodID(s_clssetCode93redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCode93redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCODE93REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetD2of5Task = loadClass(env, GETD2OF5_TASK_CLASS);
        if (!s_clsgetD2of5Task) return 0;
        s_midgetD2of5Task = env->GetMethodID(s_clsgetD2of5Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetD2of5Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETD2OF5_TASK_CLASS;
            return NULL;
        }

        s_clssetD2of5Task = loadClass(env, SETD2OF5_TASK_CLASS);
        if (!s_clssetD2of5Task) return 0;
        s_midsetD2of5Task = env->GetMethodID(s_clssetD2of5Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetD2of5Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETD2OF5_TASK_CLASS;
            return NULL;
        }

        s_clsgetD2of5maxLengthTask = loadClass(env, GETD2OF5MAXLENGTH_TASK_CLASS);
        if (!s_clsgetD2of5maxLengthTask) return 0;
        s_midgetD2of5maxLengthTask = env->GetMethodID(s_clsgetD2of5maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetD2of5maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETD2OF5MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetD2of5maxLengthTask = loadClass(env, SETD2OF5MAXLENGTH_TASK_CLASS);
        if (!s_clssetD2of5maxLengthTask) return 0;
        s_midsetD2of5maxLengthTask = env->GetMethodID(s_clssetD2of5maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetD2of5maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETD2OF5MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetD2of5minLengthTask = loadClass(env, GETD2OF5MINLENGTH_TASK_CLASS);
        if (!s_clsgetD2of5minLengthTask) return 0;
        s_midgetD2of5minLengthTask = env->GetMethodID(s_clsgetD2of5minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetD2of5minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETD2OF5MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetD2of5minLengthTask = loadClass(env, SETD2OF5MINLENGTH_TASK_CLASS);
        if (!s_clssetD2of5minLengthTask) return 0;
        s_midsetD2of5minLengthTask = env->GetMethodID(s_clssetD2of5minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetD2of5minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETD2OF5MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetD2of5redundancyTask = loadClass(env, GETD2OF5REDUNDANCY_TASK_CLASS);
        if (!s_clsgetD2of5redundancyTask) return 0;
        s_midgetD2of5redundancyTask = env->GetMethodID(s_clsgetD2of5redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetD2of5redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETD2OF5REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clssetD2of5redundancyTask = loadClass(env, SETD2OF5REDUNDANCY_TASK_CLASS);
        if (!s_clssetD2of5redundancyTask) return 0;
        s_midsetD2of5redundancyTask = env->GetMethodID(s_clssetD2of5redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetD2of5redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETD2OF5REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetDatamatrixTask = loadClass(env, GETDATAMATRIX_TASK_CLASS);
        if (!s_clsgetDatamatrixTask) return 0;
        s_midgetDatamatrixTask = env->GetMethodID(s_clsgetDatamatrixTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDatamatrixTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDATAMATRIX_TASK_CLASS;
            return NULL;
        }

        s_clssetDatamatrixTask = loadClass(env, SETDATAMATRIX_TASK_CLASS);
        if (!s_clssetDatamatrixTask) return 0;
        s_midsetDatamatrixTask = env->GetMethodID(s_clssetDatamatrixTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDatamatrixTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDATAMATRIX_TASK_CLASS;
            return NULL;
        }

        s_clsgetEan13Task = loadClass(env, GETEAN13_TASK_CLASS);
        if (!s_clsgetEan13Task) return 0;
        s_midgetEan13Task = env->GetMethodID(s_clsgetEan13Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetEan13Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETEAN13_TASK_CLASS;
            return NULL;
        }

        s_clssetEan13Task = loadClass(env, SETEAN13_TASK_CLASS);
        if (!s_clssetEan13Task) return 0;
        s_midsetEan13Task = env->GetMethodID(s_clssetEan13Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetEan13Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETEAN13_TASK_CLASS;
            return NULL;
        }

        s_clsgetEan8Task = loadClass(env, GETEAN8_TASK_CLASS);
        if (!s_clsgetEan8Task) return 0;
        s_midgetEan8Task = env->GetMethodID(s_clsgetEan8Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetEan8Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETEAN8_TASK_CLASS;
            return NULL;
        }

        s_clssetEan8Task = loadClass(env, SETEAN8_TASK_CLASS);
        if (!s_clssetEan8Task) return 0;
        s_midsetEan8Task = env->GetMethodID(s_clssetEan8Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetEan8Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETEAN8_TASK_CLASS;
            return NULL;
        }

        s_clsgetEan8convertToEan13Task = loadClass(env, GETEAN8CONVERTTOEAN13_TASK_CLASS);
        if (!s_clsgetEan8convertToEan13Task) return 0;
        s_midgetEan8convertToEan13Task = env->GetMethodID(s_clsgetEan8convertToEan13Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetEan8convertToEan13Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETEAN8CONVERTTOEAN13_TASK_CLASS;
            return NULL;
        }

        s_clssetEan8convertToEan13Task = loadClass(env, SETEAN8CONVERTTOEAN13_TASK_CLASS);
        if (!s_clssetEan8convertToEan13Task) return 0;
        s_midsetEan8convertToEan13Task = env->GetMethodID(s_clssetEan8convertToEan13Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetEan8convertToEan13Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETEAN8CONVERTTOEAN13_TASK_CLASS;
            return NULL;
        }

        s_clsgetI2of5Task = loadClass(env, GETI2OF5_TASK_CLASS);
        if (!s_clsgetI2of5Task) return 0;
        s_midgetI2of5Task = env->GetMethodID(s_clsgetI2of5Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetI2of5Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETI2OF5_TASK_CLASS;
            return NULL;
        }

        s_clssetI2of5Task = loadClass(env, SETI2OF5_TASK_CLASS);
        if (!s_clssetI2of5Task) return 0;
        s_midsetI2of5Task = env->GetMethodID(s_clssetI2of5Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetI2of5Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETI2OF5_TASK_CLASS;
            return NULL;
        }

        s_clsgetI2of5convertToEan13Task = loadClass(env, GETI2OF5CONVERTTOEAN13_TASK_CLASS);
        if (!s_clsgetI2of5convertToEan13Task) return 0;
        s_midgetI2of5convertToEan13Task = env->GetMethodID(s_clsgetI2of5convertToEan13Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetI2of5convertToEan13Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETI2OF5CONVERTTOEAN13_TASK_CLASS;
            return NULL;
        }

        s_clssetI2of5convertToEan13Task = loadClass(env, SETI2OF5CONVERTTOEAN13_TASK_CLASS);
        if (!s_clssetI2of5convertToEan13Task) return 0;
        s_midsetI2of5convertToEan13Task = env->GetMethodID(s_clssetI2of5convertToEan13Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetI2of5convertToEan13Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETI2OF5CONVERTTOEAN13_TASK_CLASS;
            return NULL;
        }

        s_clsgetI2of5maxLengthTask = loadClass(env, GETI2OF5MAXLENGTH_TASK_CLASS);
        if (!s_clsgetI2of5maxLengthTask) return 0;
        s_midgetI2of5maxLengthTask = env->GetMethodID(s_clsgetI2of5maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetI2of5maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETI2OF5MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetI2of5maxLengthTask = loadClass(env, SETI2OF5MAXLENGTH_TASK_CLASS);
        if (!s_clssetI2of5maxLengthTask) return 0;
        s_midsetI2of5maxLengthTask = env->GetMethodID(s_clssetI2of5maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetI2of5maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETI2OF5MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetI2of5minLengthTask = loadClass(env, GETI2OF5MINLENGTH_TASK_CLASS);
        if (!s_clsgetI2of5minLengthTask) return 0;
        s_midgetI2of5minLengthTask = env->GetMethodID(s_clsgetI2of5minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetI2of5minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETI2OF5MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetI2of5minLengthTask = loadClass(env, SETI2OF5MINLENGTH_TASK_CLASS);
        if (!s_clssetI2of5minLengthTask) return 0;
        s_midsetI2of5minLengthTask = env->GetMethodID(s_clssetI2of5minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetI2of5minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETI2OF5MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetI2of5redundancyTask = loadClass(env, GETI2OF5REDUNDANCY_TASK_CLASS);
        if (!s_clsgetI2of5redundancyTask) return 0;
        s_midgetI2of5redundancyTask = env->GetMethodID(s_clsgetI2of5redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetI2of5redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETI2OF5REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clssetI2of5redundancyTask = loadClass(env, SETI2OF5REDUNDANCY_TASK_CLASS);
        if (!s_clssetI2of5redundancyTask) return 0;
        s_midsetI2of5redundancyTask = env->GetMethodID(s_clssetI2of5redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetI2of5redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETI2OF5REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetI2of5reportCheckDigitTask = loadClass(env, GETI2OF5REPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetI2of5reportCheckDigitTask) return 0;
        s_midgetI2of5reportCheckDigitTask = env->GetMethodID(s_clsgetI2of5reportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetI2of5reportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETI2OF5REPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetI2of5reportCheckDigitTask = loadClass(env, SETI2OF5REPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clssetI2of5reportCheckDigitTask) return 0;
        s_midsetI2of5reportCheckDigitTask = env->GetMethodID(s_clssetI2of5reportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetI2of5reportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETI2OF5REPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetI2of5verifyCheckDigitTask = loadClass(env, GETI2OF5VERIFYCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetI2of5verifyCheckDigitTask) return 0;
        s_midgetI2of5verifyCheckDigitTask = env->GetMethodID(s_clsgetI2of5verifyCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetI2of5verifyCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETI2OF5VERIFYCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetI2of5verifyCheckDigitTask = loadClass(env, SETI2OF5VERIFYCHECKDIGIT_TASK_CLASS);
        if (!s_clssetI2of5verifyCheckDigitTask) return 0;
        s_midsetI2of5verifyCheckDigitTask = env->GetMethodID(s_clssetI2of5verifyCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetI2of5verifyCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETI2OF5VERIFYCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetKorean3of5Task = loadClass(env, GETKOREAN3OF5_TASK_CLASS);
        if (!s_clsgetKorean3of5Task) return 0;
        s_midgetKorean3of5Task = env->GetMethodID(s_clsgetKorean3of5Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetKorean3of5Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETKOREAN3OF5_TASK_CLASS;
            return NULL;
        }

        s_clssetKorean3of5Task = loadClass(env, SETKOREAN3OF5_TASK_CLASS);
        if (!s_clssetKorean3of5Task) return 0;
        s_midsetKorean3of5Task = env->GetMethodID(s_clssetKorean3of5Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetKorean3of5Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETKOREAN3OF5_TASK_CLASS;
            return NULL;
        }

        s_clsgetKorean3of5redundancyTask = loadClass(env, GETKOREAN3OF5REDUNDANCY_TASK_CLASS);
        if (!s_clsgetKorean3of5redundancyTask) return 0;
        s_midgetKorean3of5redundancyTask = env->GetMethodID(s_clsgetKorean3of5redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetKorean3of5redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETKOREAN3OF5REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clssetKorean3of5redundancyTask = loadClass(env, SETKOREAN3OF5REDUNDANCY_TASK_CLASS);
        if (!s_clssetKorean3of5redundancyTask) return 0;
        s_midsetKorean3of5redundancyTask = env->GetMethodID(s_clssetKorean3of5redundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetKorean3of5redundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETKOREAN3OF5REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetKorean3of5maxLengthTask = loadClass(env, GETKOREAN3OF5MAXLENGTH_TASK_CLASS);
        if (!s_clsgetKorean3of5maxLengthTask) return 0;
        s_midgetKorean3of5maxLengthTask = env->GetMethodID(s_clsgetKorean3of5maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetKorean3of5maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETKOREAN3OF5MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetKorean3of5maxLengthTask = loadClass(env, SETKOREAN3OF5MAXLENGTH_TASK_CLASS);
        if (!s_clssetKorean3of5maxLengthTask) return 0;
        s_midsetKorean3of5maxLengthTask = env->GetMethodID(s_clssetKorean3of5maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetKorean3of5maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETKOREAN3OF5MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetKorean3of5minLengthTask = loadClass(env, GETKOREAN3OF5MINLENGTH_TASK_CLASS);
        if (!s_clsgetKorean3of5minLengthTask) return 0;
        s_midgetKorean3of5minLengthTask = env->GetMethodID(s_clsgetKorean3of5minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetKorean3of5minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETKOREAN3OF5MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetKorean3of5minLengthTask = loadClass(env, SETKOREAN3OF5MINLENGTH_TASK_CLASS);
        if (!s_clssetKorean3of5minLengthTask) return 0;
        s_midsetKorean3of5minLengthTask = env->GetMethodID(s_clssetKorean3of5minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetKorean3of5minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETKOREAN3OF5MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetMacroPdfTask = loadClass(env, GETMACROPDF_TASK_CLASS);
        if (!s_clsgetMacroPdfTask) return 0;
        s_midgetMacroPdfTask = env->GetMethodID(s_clsgetMacroPdfTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMacroPdfTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMACROPDF_TASK_CLASS;
            return NULL;
        }

        s_clssetMacroPdfTask = loadClass(env, SETMACROPDF_TASK_CLASS);
        if (!s_clssetMacroPdfTask) return 0;
        s_midsetMacroPdfTask = env->GetMethodID(s_clssetMacroPdfTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMacroPdfTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMACROPDF_TASK_CLASS;
            return NULL;
        }

        s_clsgetMacroPdfBufferLabelsTask = loadClass(env, GETMACROPDFBUFFERLABELS_TASK_CLASS);
        if (!s_clsgetMacroPdfBufferLabelsTask) return 0;
        s_midgetMacroPdfBufferLabelsTask = env->GetMethodID(s_clsgetMacroPdfBufferLabelsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMacroPdfBufferLabelsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMACROPDFBUFFERLABELS_TASK_CLASS;
            return NULL;
        }

        s_clssetMacroPdfBufferLabelsTask = loadClass(env, SETMACROPDFBUFFERLABELS_TASK_CLASS);
        if (!s_clssetMacroPdfBufferLabelsTask) return 0;
        s_midsetMacroPdfBufferLabelsTask = env->GetMethodID(s_clssetMacroPdfBufferLabelsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMacroPdfBufferLabelsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMACROPDFBUFFERLABELS_TASK_CLASS;
            return NULL;
        }

        s_clsgetMacroPdfConvertToPdf417Task = loadClass(env, GETMACROPDFCONVERTTOPDF417_TASK_CLASS);
        if (!s_clsgetMacroPdfConvertToPdf417Task) return 0;
        s_midgetMacroPdfConvertToPdf417Task = env->GetMethodID(s_clsgetMacroPdfConvertToPdf417Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMacroPdfConvertToPdf417Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMACROPDFCONVERTTOPDF417_TASK_CLASS;
            return NULL;
        }

        s_clssetMacroPdfConvertToPdf417Task = loadClass(env, SETMACROPDFCONVERTTOPDF417_TASK_CLASS);
        if (!s_clssetMacroPdfConvertToPdf417Task) return 0;
        s_midsetMacroPdfConvertToPdf417Task = env->GetMethodID(s_clssetMacroPdfConvertToPdf417Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMacroPdfConvertToPdf417Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMACROPDFCONVERTTOPDF417_TASK_CLASS;
            return NULL;
        }

        s_clsgetMacroPdfExclusiveTask = loadClass(env, GETMACROPDFEXCLUSIVE_TASK_CLASS);
        if (!s_clsgetMacroPdfExclusiveTask) return 0;
        s_midgetMacroPdfExclusiveTask = env->GetMethodID(s_clsgetMacroPdfExclusiveTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMacroPdfExclusiveTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMACROPDFEXCLUSIVE_TASK_CLASS;
            return NULL;
        }

        s_clssetMacroPdfExclusiveTask = loadClass(env, SETMACROPDFEXCLUSIVE_TASK_CLASS);
        if (!s_clssetMacroPdfExclusiveTask) return 0;
        s_midsetMacroPdfExclusiveTask = env->GetMethodID(s_clssetMacroPdfExclusiveTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMacroPdfExclusiveTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMACROPDFEXCLUSIVE_TASK_CLASS;
            return NULL;
        }

        s_clsgetMacroMicroPdfTask = loadClass(env, GETMACROMICROPDF_TASK_CLASS);
        if (!s_clsgetMacroMicroPdfTask) return 0;
        s_midgetMacroMicroPdfTask = env->GetMethodID(s_clsgetMacroMicroPdfTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMacroMicroPdfTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMACROMICROPDF_TASK_CLASS;
            return NULL;
        }

        s_clssetMacroMicroPdfTask = loadClass(env, SETMACROMICROPDF_TASK_CLASS);
        if (!s_clssetMacroMicroPdfTask) return 0;
        s_midsetMacroMicroPdfTask = env->GetMethodID(s_clssetMacroMicroPdfTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMacroMicroPdfTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMACROMICROPDF_TASK_CLASS;
            return NULL;
        }

        s_clsgetMacroMicroPdfBufferLabelsTask = loadClass(env, GETMACROMICROPDFBUFFERLABELS_TASK_CLASS);
        if (!s_clsgetMacroMicroPdfBufferLabelsTask) return 0;
        s_midgetMacroMicroPdfBufferLabelsTask = env->GetMethodID(s_clsgetMacroMicroPdfBufferLabelsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMacroMicroPdfBufferLabelsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMACROMICROPDFBUFFERLABELS_TASK_CLASS;
            return NULL;
        }

        s_clssetMacroMicroPdfBufferLabelsTask = loadClass(env, SETMACROMICROPDFBUFFERLABELS_TASK_CLASS);
        if (!s_clssetMacroMicroPdfBufferLabelsTask) return 0;
        s_midsetMacroMicroPdfBufferLabelsTask = env->GetMethodID(s_clssetMacroMicroPdfBufferLabelsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMacroMicroPdfBufferLabelsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMACROMICROPDFBUFFERLABELS_TASK_CLASS;
            return NULL;
        }

        s_clsgetMacroMicroPdfConvertToMicroPdfTask = loadClass(env, GETMACROMICROPDFCONVERTTOMICROPDF_TASK_CLASS);
        if (!s_clsgetMacroMicroPdfConvertToMicroPdfTask) return 0;
        s_midgetMacroMicroPdfConvertToMicroPdfTask = env->GetMethodID(s_clsgetMacroMicroPdfConvertToMicroPdfTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMacroMicroPdfConvertToMicroPdfTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMACROMICROPDFCONVERTTOMICROPDF_TASK_CLASS;
            return NULL;
        }

        s_clssetMacroMicroPdfConvertToMicroPdfTask = loadClass(env, SETMACROMICROPDFCONVERTTOMICROPDF_TASK_CLASS);
        if (!s_clssetMacroMicroPdfConvertToMicroPdfTask) return 0;
        s_midsetMacroMicroPdfConvertToMicroPdfTask = env->GetMethodID(s_clssetMacroMicroPdfConvertToMicroPdfTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMacroMicroPdfConvertToMicroPdfTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMACROMICROPDFCONVERTTOMICROPDF_TASK_CLASS;
            return NULL;
        }

        s_clsgetMacroMicroPdfExclusiveTask = loadClass(env, GETMACROMICROPDFEXCLUSIVE_TASK_CLASS);
        if (!s_clsgetMacroMicroPdfExclusiveTask) return 0;
        s_midgetMacroMicroPdfExclusiveTask = env->GetMethodID(s_clsgetMacroMicroPdfExclusiveTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMacroMicroPdfExclusiveTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMACROMICROPDFEXCLUSIVE_TASK_CLASS;
            return NULL;
        }

        s_clssetMacroMicroPdfExclusiveTask = loadClass(env, SETMACROMICROPDFEXCLUSIVE_TASK_CLASS);
        if (!s_clssetMacroMicroPdfExclusiveTask) return 0;
        s_midsetMacroMicroPdfExclusiveTask = env->GetMethodID(s_clssetMacroMicroPdfExclusiveTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMacroMicroPdfExclusiveTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMACROMICROPDFEXCLUSIVE_TASK_CLASS;
            return NULL;
        }

        s_clsgetMacroMicroPdfReportAppendInfoTask = loadClass(env, GETMACROMICROPDFREPORTAPPENDINFO_TASK_CLASS);
        if (!s_clsgetMacroMicroPdfReportAppendInfoTask) return 0;
        s_midgetMacroMicroPdfReportAppendInfoTask = env->GetMethodID(s_clsgetMacroMicroPdfReportAppendInfoTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMacroMicroPdfReportAppendInfoTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMACROMICROPDFREPORTAPPENDINFO_TASK_CLASS;
            return NULL;
        }

        s_clssetMacroMicroPdfReportAppendInfoTask = loadClass(env, SETMACROMICROPDFREPORTAPPENDINFO_TASK_CLASS);
        if (!s_clssetMacroMicroPdfReportAppendInfoTask) return 0;
        s_midsetMacroMicroPdfReportAppendInfoTask = env->GetMethodID(s_clssetMacroMicroPdfReportAppendInfoTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMacroMicroPdfReportAppendInfoTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMACROMICROPDFREPORTAPPENDINFO_TASK_CLASS;
            return NULL;
        }

        s_clsgetMatrix2of5Task = loadClass(env, GETMATRIX2OF5_TASK_CLASS);
        if (!s_clsgetMatrix2of5Task) return 0;
        s_midgetMatrix2of5Task = env->GetMethodID(s_clsgetMatrix2of5Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMatrix2of5Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMATRIX2OF5_TASK_CLASS;
            return NULL;
        }

        s_clssetMatrix2of5Task = loadClass(env, SETMATRIX2OF5_TASK_CLASS);
        if (!s_clssetMatrix2of5Task) return 0;
        s_midsetMatrix2of5Task = env->GetMethodID(s_clssetMatrix2of5Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMatrix2of5Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMATRIX2OF5_TASK_CLASS;
            return NULL;
        }

        s_clsgetMatrix2of5maxLengthTask = loadClass(env, GETMATRIX2OF5MAXLENGTH_TASK_CLASS);
        if (!s_clsgetMatrix2of5maxLengthTask) return 0;
        s_midgetMatrix2of5maxLengthTask = env->GetMethodID(s_clsgetMatrix2of5maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMatrix2of5maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMATRIX2OF5MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetMatrix2of5maxLengthTask = loadClass(env, SETMATRIX2OF5MAXLENGTH_TASK_CLASS);
        if (!s_clssetMatrix2of5maxLengthTask) return 0;
        s_midsetMatrix2of5maxLengthTask = env->GetMethodID(s_clssetMatrix2of5maxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMatrix2of5maxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMATRIX2OF5MAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetMatrix2of5minLengthTask = loadClass(env, GETMATRIX2OF5MINLENGTH_TASK_CLASS);
        if (!s_clsgetMatrix2of5minLengthTask) return 0;
        s_midgetMatrix2of5minLengthTask = env->GetMethodID(s_clsgetMatrix2of5minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMatrix2of5minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMATRIX2OF5MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetMatrix2of5minLengthTask = loadClass(env, SETMATRIX2OF5MINLENGTH_TASK_CLASS);
        if (!s_clssetMatrix2of5minLengthTask) return 0;
        s_midsetMatrix2of5minLengthTask = env->GetMethodID(s_clssetMatrix2of5minLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMatrix2of5minLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMATRIX2OF5MINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetMatrix2of5reportCheckDigitTask = loadClass(env, GETMATRIX2OF5REPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetMatrix2of5reportCheckDigitTask) return 0;
        s_midgetMatrix2of5reportCheckDigitTask = env->GetMethodID(s_clsgetMatrix2of5reportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMatrix2of5reportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMATRIX2OF5REPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetMatrix2of5reportCheckDigitTask = loadClass(env, SETMATRIX2OF5REPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clssetMatrix2of5reportCheckDigitTask) return 0;
        s_midsetMatrix2of5reportCheckDigitTask = env->GetMethodID(s_clssetMatrix2of5reportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMatrix2of5reportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMATRIX2OF5REPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetMatrix2of5verifyCheckDigitTask = loadClass(env, GETMATRIX2OF5VERIFYCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetMatrix2of5verifyCheckDigitTask) return 0;
        s_midgetMatrix2of5verifyCheckDigitTask = env->GetMethodID(s_clsgetMatrix2of5verifyCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMatrix2of5verifyCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMATRIX2OF5VERIFYCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetMatrix2of5verifyCheckDigitTask = loadClass(env, SETMATRIX2OF5VERIFYCHECKDIGIT_TASK_CLASS);
        if (!s_clssetMatrix2of5verifyCheckDigitTask) return 0;
        s_midsetMatrix2of5verifyCheckDigitTask = env->GetMethodID(s_clssetMatrix2of5verifyCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMatrix2of5verifyCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMATRIX2OF5VERIFYCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetMaxiCodeTask = loadClass(env, GETMAXICODE_TASK_CLASS);
        if (!s_clsgetMaxiCodeTask) return 0;
        s_midgetMaxiCodeTask = env->GetMethodID(s_clsgetMaxiCodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMaxiCodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMAXICODE_TASK_CLASS;
            return NULL;
        }

        s_clssetMaxiCodeTask = loadClass(env, SETMAXICODE_TASK_CLASS);
        if (!s_clssetMaxiCodeTask) return 0;
        s_midsetMaxiCodeTask = env->GetMethodID(s_clssetMaxiCodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMaxiCodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMAXICODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetMicroPdfTask = loadClass(env, GETMICROPDF_TASK_CLASS);
        if (!s_clsgetMicroPdfTask) return 0;
        s_midgetMicroPdfTask = env->GetMethodID(s_clsgetMicroPdfTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMicroPdfTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMICROPDF_TASK_CLASS;
            return NULL;
        }

        s_clssetMicroPdfTask = loadClass(env, SETMICROPDF_TASK_CLASS);
        if (!s_clssetMicroPdfTask) return 0;
        s_midsetMicroPdfTask = env->GetMethodID(s_clssetMicroPdfTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMicroPdfTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMICROPDF_TASK_CLASS;
            return NULL;
        }

        s_clsgetMicroQrTask = loadClass(env, GETMICROQR_TASK_CLASS);
        if (!s_clsgetMicroQrTask) return 0;
        s_midgetMicroQrTask = env->GetMethodID(s_clsgetMicroQrTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMicroQrTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMICROQR_TASK_CLASS;
            return NULL;
        }

        s_clssetMicroQrTask = loadClass(env, SETMICROQR_TASK_CLASS);
        if (!s_clssetMicroQrTask) return 0;
        s_midsetMicroQrTask = env->GetMethodID(s_clssetMicroQrTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMicroQrTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMICROQR_TASK_CLASS;
            return NULL;
        }

        s_clsgetMsiTask = loadClass(env, GETMSI_TASK_CLASS);
        if (!s_clsgetMsiTask) return 0;
        s_midgetMsiTask = env->GetMethodID(s_clsgetMsiTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMsiTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMSI_TASK_CLASS;
            return NULL;
        }

        s_clssetMsiTask = loadClass(env, SETMSI_TASK_CLASS);
        if (!s_clssetMsiTask) return 0;
        s_midsetMsiTask = env->GetMethodID(s_clssetMsiTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMsiTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMSI_TASK_CLASS;
            return NULL;
        }

        s_clsgetMsiCheckDigitsTask = loadClass(env, GETMSICHECKDIGITS_TASK_CLASS);
        if (!s_clsgetMsiCheckDigitsTask) return 0;
        s_midgetMsiCheckDigitsTask = env->GetMethodID(s_clsgetMsiCheckDigitsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMsiCheckDigitsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMSICHECKDIGITS_TASK_CLASS;
            return NULL;
        }

        s_clssetMsiCheckDigitsTask = loadClass(env, SETMSICHECKDIGITS_TASK_CLASS);
        if (!s_clssetMsiCheckDigitsTask) return 0;
        s_midsetMsiCheckDigitsTask = env->GetMethodID(s_clssetMsiCheckDigitsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMsiCheckDigitsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMSICHECKDIGITS_TASK_CLASS;
            return NULL;
        }

        s_clsgetMsiCheckDigitSchemeTask = loadClass(env, GETMSICHECKDIGITSCHEME_TASK_CLASS);
        if (!s_clsgetMsiCheckDigitSchemeTask) return 0;
        s_midgetMsiCheckDigitSchemeTask = env->GetMethodID(s_clsgetMsiCheckDigitSchemeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMsiCheckDigitSchemeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMSICHECKDIGITSCHEME_TASK_CLASS;
            return NULL;
        }

        s_clssetMsiCheckDigitSchemeTask = loadClass(env, SETMSICHECKDIGITSCHEME_TASK_CLASS);
        if (!s_clssetMsiCheckDigitSchemeTask) return 0;
        s_midsetMsiCheckDigitSchemeTask = env->GetMethodID(s_clssetMsiCheckDigitSchemeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMsiCheckDigitSchemeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMSICHECKDIGITSCHEME_TASK_CLASS;
            return NULL;
        }

        s_clsgetMsiMaxLengthTask = loadClass(env, GETMSIMAXLENGTH_TASK_CLASS);
        if (!s_clsgetMsiMaxLengthTask) return 0;
        s_midgetMsiMaxLengthTask = env->GetMethodID(s_clsgetMsiMaxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMsiMaxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMSIMAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetMsiMaxLengthTask = loadClass(env, SETMSIMAXLENGTH_TASK_CLASS);
        if (!s_clssetMsiMaxLengthTask) return 0;
        s_midsetMsiMaxLengthTask = env->GetMethodID(s_clssetMsiMaxLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMsiMaxLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMSIMAXLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetMsiMinLengthTask = loadClass(env, GETMSIMINLENGTH_TASK_CLASS);
        if (!s_clsgetMsiMinLengthTask) return 0;
        s_midgetMsiMinLengthTask = env->GetMethodID(s_clsgetMsiMinLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMsiMinLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMSIMINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clssetMsiMinLengthTask = loadClass(env, SETMSIMINLENGTH_TASK_CLASS);
        if (!s_clssetMsiMinLengthTask) return 0;
        s_midsetMsiMinLengthTask = env->GetMethodID(s_clssetMsiMinLengthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMsiMinLengthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMSIMINLENGTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetMsiRedundancyTask = loadClass(env, GETMSIREDUNDANCY_TASK_CLASS);
        if (!s_clsgetMsiRedundancyTask) return 0;
        s_midgetMsiRedundancyTask = env->GetMethodID(s_clsgetMsiRedundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMsiRedundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMSIREDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clssetMsiRedundancyTask = loadClass(env, SETMSIREDUNDANCY_TASK_CLASS);
        if (!s_clssetMsiRedundancyTask) return 0;
        s_midsetMsiRedundancyTask = env->GetMethodID(s_clssetMsiRedundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMsiRedundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMSIREDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetMsiReportCheckDigitTask = loadClass(env, GETMSIREPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetMsiReportCheckDigitTask) return 0;
        s_midgetMsiReportCheckDigitTask = env->GetMethodID(s_clsgetMsiReportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetMsiReportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETMSIREPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetMsiReportCheckDigitTask = loadClass(env, SETMSIREPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clssetMsiReportCheckDigitTask) return 0;
        s_midsetMsiReportCheckDigitTask = env->GetMethodID(s_clssetMsiReportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetMsiReportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETMSIREPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetPdf417Task = loadClass(env, GETPDF417_TASK_CLASS);
        if (!s_clsgetPdf417Task) return 0;
        s_midgetPdf417Task = env->GetMethodID(s_clsgetPdf417Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetPdf417Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETPDF417_TASK_CLASS;
            return NULL;
        }

        s_clssetPdf417Task = loadClass(env, SETPDF417_TASK_CLASS);
        if (!s_clssetPdf417Task) return 0;
        s_midsetPdf417Task = env->GetMethodID(s_clssetPdf417Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetPdf417Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETPDF417_TASK_CLASS;
            return NULL;
        }

        s_clsgetSignatureTask = loadClass(env, GETSIGNATURE_TASK_CLASS);
        if (!s_clsgetSignatureTask) return 0;
        s_midgetSignatureTask = env->GetMethodID(s_clsgetSignatureTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetSignatureTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETSIGNATURE_TASK_CLASS;
            return NULL;
        }

        s_clssetSignatureTask = loadClass(env, SETSIGNATURE_TASK_CLASS);
        if (!s_clssetSignatureTask) return 0;
        s_midsetSignatureTask = env->GetMethodID(s_clssetSignatureTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetSignatureTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETSIGNATURE_TASK_CLASS;
            return NULL;
        }

        s_clsgetSignatureImageHeightTask = loadClass(env, GETSIGNATUREIMAGEHEIGHT_TASK_CLASS);
        if (!s_clsgetSignatureImageHeightTask) return 0;
        s_midgetSignatureImageHeightTask = env->GetMethodID(s_clsgetSignatureImageHeightTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetSignatureImageHeightTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETSIGNATUREIMAGEHEIGHT_TASK_CLASS;
            return NULL;
        }

        s_clssetSignatureImageHeightTask = loadClass(env, SETSIGNATUREIMAGEHEIGHT_TASK_CLASS);
        if (!s_clssetSignatureImageHeightTask) return 0;
        s_midsetSignatureImageHeightTask = env->GetMethodID(s_clssetSignatureImageHeightTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetSignatureImageHeightTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETSIGNATUREIMAGEHEIGHT_TASK_CLASS;
            return NULL;
        }

        s_clsgetSignatureImageWidthTask = loadClass(env, GETSIGNATUREIMAGEWIDTH_TASK_CLASS);
        if (!s_clsgetSignatureImageWidthTask) return 0;
        s_midgetSignatureImageWidthTask = env->GetMethodID(s_clsgetSignatureImageWidthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetSignatureImageWidthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETSIGNATUREIMAGEWIDTH_TASK_CLASS;
            return NULL;
        }

        s_clssetSignatureImageWidthTask = loadClass(env, SETSIGNATUREIMAGEWIDTH_TASK_CLASS);
        if (!s_clssetSignatureImageWidthTask) return 0;
        s_midsetSignatureImageWidthTask = env->GetMethodID(s_clssetSignatureImageWidthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetSignatureImageWidthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETSIGNATUREIMAGEWIDTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetSignatureImageQualityTask = loadClass(env, GETSIGNATUREIMAGEQUALITY_TASK_CLASS);
        if (!s_clsgetSignatureImageQualityTask) return 0;
        s_midgetSignatureImageQualityTask = env->GetMethodID(s_clsgetSignatureImageQualityTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetSignatureImageQualityTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETSIGNATUREIMAGEQUALITY_TASK_CLASS;
            return NULL;
        }

        s_clssetSignatureImageQualityTask = loadClass(env, SETSIGNATUREIMAGEQUALITY_TASK_CLASS);
        if (!s_clssetSignatureImageQualityTask) return 0;
        s_midsetSignatureImageQualityTask = env->GetMethodID(s_clssetSignatureImageQualityTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetSignatureImageQualityTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETSIGNATUREIMAGEQUALITY_TASK_CLASS;
            return NULL;
        }

        s_clsgetAusPostalTask = loadClass(env, GETAUSPOSTAL_TASK_CLASS);
        if (!s_clsgetAusPostalTask) return 0;
        s_midgetAusPostalTask = env->GetMethodID(s_clsgetAusPostalTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetAusPostalTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETAUSPOSTAL_TASK_CLASS;
            return NULL;
        }

        s_clssetAusPostalTask = loadClass(env, SETAUSPOSTAL_TASK_CLASS);
        if (!s_clssetAusPostalTask) return 0;
        s_midsetAusPostalTask = env->GetMethodID(s_clssetAusPostalTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetAusPostalTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETAUSPOSTAL_TASK_CLASS;
            return NULL;
        }

        s_clsgetCanPostalTask = loadClass(env, GETCANPOSTAL_TASK_CLASS);
        if (!s_clsgetCanPostalTask) return 0;
        s_midgetCanPostalTask = env->GetMethodID(s_clsgetCanPostalTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetCanPostalTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETCANPOSTAL_TASK_CLASS;
            return NULL;
        }

        s_clssetCanPostalTask = loadClass(env, SETCANPOSTAL_TASK_CLASS);
        if (!s_clssetCanPostalTask) return 0;
        s_midsetCanPostalTask = env->GetMethodID(s_clssetCanPostalTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetCanPostalTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETCANPOSTAL_TASK_CLASS;
            return NULL;
        }

        s_clsgetDutchPostalTask = loadClass(env, GETDUTCHPOSTAL_TASK_CLASS);
        if (!s_clsgetDutchPostalTask) return 0;
        s_midgetDutchPostalTask = env->GetMethodID(s_clsgetDutchPostalTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetDutchPostalTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETDUTCHPOSTAL_TASK_CLASS;
            return NULL;
        }

        s_clssetDutchPostalTask = loadClass(env, SETDUTCHPOSTAL_TASK_CLASS);
        if (!s_clssetDutchPostalTask) return 0;
        s_midsetDutchPostalTask = env->GetMethodID(s_clssetDutchPostalTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetDutchPostalTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETDUTCHPOSTAL_TASK_CLASS;
            return NULL;
        }

        s_clsgetJapPostalTask = loadClass(env, GETJAPPOSTAL_TASK_CLASS);
        if (!s_clsgetJapPostalTask) return 0;
        s_midgetJapPostalTask = env->GetMethodID(s_clsgetJapPostalTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetJapPostalTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETJAPPOSTAL_TASK_CLASS;
            return NULL;
        }

        s_clssetJapPostalTask = loadClass(env, SETJAPPOSTAL_TASK_CLASS);
        if (!s_clssetJapPostalTask) return 0;
        s_midsetJapPostalTask = env->GetMethodID(s_clssetJapPostalTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetJapPostalTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETJAPPOSTAL_TASK_CLASS;
            return NULL;
        }

        s_clsgetUkPostalTask = loadClass(env, GETUKPOSTAL_TASK_CLASS);
        if (!s_clsgetUkPostalTask) return 0;
        s_midgetUkPostalTask = env->GetMethodID(s_clsgetUkPostalTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUkPostalTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUKPOSTAL_TASK_CLASS;
            return NULL;
        }

        s_clssetUkPostalTask = loadClass(env, SETUKPOSTAL_TASK_CLASS);
        if (!s_clssetUkPostalTask) return 0;
        s_midsetUkPostalTask = env->GetMethodID(s_clssetUkPostalTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUkPostalTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUKPOSTAL_TASK_CLASS;
            return NULL;
        }

        s_clsgetUkPostalReportCheckDigitTask = loadClass(env, GETUKPOSTALREPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetUkPostalReportCheckDigitTask) return 0;
        s_midgetUkPostalReportCheckDigitTask = env->GetMethodID(s_clsgetUkPostalReportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUkPostalReportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUKPOSTALREPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetUkPostalReportCheckDigitTask = loadClass(env, SETUKPOSTALREPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clssetUkPostalReportCheckDigitTask) return 0;
        s_midsetUkPostalReportCheckDigitTask = env->GetMethodID(s_clssetUkPostalReportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUkPostalReportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUKPOSTALREPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetUs4stateTask = loadClass(env, GETUS4STATE_TASK_CLASS);
        if (!s_clsgetUs4stateTask) return 0;
        s_midgetUs4stateTask = env->GetMethodID(s_clsgetUs4stateTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUs4stateTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUS4STATE_TASK_CLASS;
            return NULL;
        }

        s_clssetUs4stateTask = loadClass(env, SETUS4STATE_TASK_CLASS);
        if (!s_clssetUs4stateTask) return 0;
        s_midsetUs4stateTask = env->GetMethodID(s_clssetUs4stateTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUs4stateTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUS4STATE_TASK_CLASS;
            return NULL;
        }

        s_clsgetUs4stateFicsTask = loadClass(env, GETUS4STATEFICS_TASK_CLASS);
        if (!s_clsgetUs4stateFicsTask) return 0;
        s_midgetUs4stateFicsTask = env->GetMethodID(s_clsgetUs4stateFicsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUs4stateFicsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUS4STATEFICS_TASK_CLASS;
            return NULL;
        }

        s_clssetUs4stateFicsTask = loadClass(env, SETUS4STATEFICS_TASK_CLASS);
        if (!s_clssetUs4stateFicsTask) return 0;
        s_midsetUs4stateFicsTask = env->GetMethodID(s_clssetUs4stateFicsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUs4stateFicsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUS4STATEFICS_TASK_CLASS;
            return NULL;
        }

        s_clsgetUsPlanetTask = loadClass(env, GETUSPLANET_TASK_CLASS);
        if (!s_clsgetUsPlanetTask) return 0;
        s_midgetUsPlanetTask = env->GetMethodID(s_clsgetUsPlanetTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUsPlanetTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUSPLANET_TASK_CLASS;
            return NULL;
        }

        s_clssetUsPlanetTask = loadClass(env, SETUSPLANET_TASK_CLASS);
        if (!s_clssetUsPlanetTask) return 0;
        s_midsetUsPlanetTask = env->GetMethodID(s_clssetUsPlanetTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUsPlanetTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUSPLANET_TASK_CLASS;
            return NULL;
        }

        s_clsgetUsPlanetReportCheckDigitTask = loadClass(env, GETUSPLANETREPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetUsPlanetReportCheckDigitTask) return 0;
        s_midgetUsPlanetReportCheckDigitTask = env->GetMethodID(s_clsgetUsPlanetReportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUsPlanetReportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUSPLANETREPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetUsPlanetReportCheckDigitTask = loadClass(env, SETUSPLANETREPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clssetUsPlanetReportCheckDigitTask) return 0;
        s_midsetUsPlanetReportCheckDigitTask = env->GetMethodID(s_clssetUsPlanetReportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUsPlanetReportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUSPLANETREPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetUsPostNetTask = loadClass(env, GETUSPOSTNET_TASK_CLASS);
        if (!s_clsgetUsPostNetTask) return 0;
        s_midgetUsPostNetTask = env->GetMethodID(s_clsgetUsPostNetTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUsPostNetTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUSPOSTNET_TASK_CLASS;
            return NULL;
        }

        s_clssetUsPostNetTask = loadClass(env, SETUSPOSTNET_TASK_CLASS);
        if (!s_clssetUsPostNetTask) return 0;
        s_midsetUsPostNetTask = env->GetMethodID(s_clssetUsPostNetTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUsPostNetTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUSPOSTNET_TASK_CLASS;
            return NULL;
        }

        s_clsgetUsPostNetReportCheckDigitTask = loadClass(env, GETUSPOSTNETREPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetUsPostNetReportCheckDigitTask) return 0;
        s_midgetUsPostNetReportCheckDigitTask = env->GetMethodID(s_clsgetUsPostNetReportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUsPostNetReportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUSPOSTNETREPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetUsPostNetReportCheckDigitTask = loadClass(env, SETUSPOSTNETREPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clssetUsPostNetReportCheckDigitTask) return 0;
        s_midsetUsPostNetReportCheckDigitTask = env->GetMethodID(s_clssetUsPostNetReportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUsPostNetReportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUSPOSTNETREPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetQrCodeTask = loadClass(env, GETQRCODE_TASK_CLASS);
        if (!s_clsgetQrCodeTask) return 0;
        s_midgetQrCodeTask = env->GetMethodID(s_clsgetQrCodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetQrCodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETQRCODE_TASK_CLASS;
            return NULL;
        }

        s_clssetQrCodeTask = loadClass(env, SETQRCODE_TASK_CLASS);
        if (!s_clssetQrCodeTask) return 0;
        s_midsetQrCodeTask = env->GetMethodID(s_clssetQrCodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetQrCodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETQRCODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetGs1dataBarTask = loadClass(env, GETGS1DATABAR_TASK_CLASS);
        if (!s_clsgetGs1dataBarTask) return 0;
        s_midgetGs1dataBarTask = env->GetMethodID(s_clsgetGs1dataBarTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetGs1dataBarTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETGS1DATABAR_TASK_CLASS;
            return NULL;
        }

        s_clssetGs1dataBarTask = loadClass(env, SETGS1DATABAR_TASK_CLASS);
        if (!s_clssetGs1dataBarTask) return 0;
        s_midsetGs1dataBarTask = env->GetMethodID(s_clssetGs1dataBarTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetGs1dataBarTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETGS1DATABAR_TASK_CLASS;
            return NULL;
        }

        s_clsgetGs1dataBarExpandedTask = loadClass(env, GETGS1DATABAREXPANDED_TASK_CLASS);
        if (!s_clsgetGs1dataBarExpandedTask) return 0;
        s_midgetGs1dataBarExpandedTask = env->GetMethodID(s_clsgetGs1dataBarExpandedTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetGs1dataBarExpandedTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETGS1DATABAREXPANDED_TASK_CLASS;
            return NULL;
        }

        s_clssetGs1dataBarExpandedTask = loadClass(env, SETGS1DATABAREXPANDED_TASK_CLASS);
        if (!s_clssetGs1dataBarExpandedTask) return 0;
        s_midsetGs1dataBarExpandedTask = env->GetMethodID(s_clssetGs1dataBarExpandedTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetGs1dataBarExpandedTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETGS1DATABAREXPANDED_TASK_CLASS;
            return NULL;
        }

        s_clsgetGs1dataBarLimitedTask = loadClass(env, GETGS1DATABARLIMITED_TASK_CLASS);
        if (!s_clsgetGs1dataBarLimitedTask) return 0;
        s_midgetGs1dataBarLimitedTask = env->GetMethodID(s_clsgetGs1dataBarLimitedTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetGs1dataBarLimitedTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETGS1DATABARLIMITED_TASK_CLASS;
            return NULL;
        }

        s_clssetGs1dataBarLimitedTask = loadClass(env, SETGS1DATABARLIMITED_TASK_CLASS);
        if (!s_clssetGs1dataBarLimitedTask) return 0;
        s_midsetGs1dataBarLimitedTask = env->GetMethodID(s_clssetGs1dataBarLimitedTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetGs1dataBarLimitedTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETGS1DATABARLIMITED_TASK_CLASS;
            return NULL;
        }

        s_clsgetTlc39Task = loadClass(env, GETTLC39_TASK_CLASS);
        if (!s_clsgetTlc39Task) return 0;
        s_midgetTlc39Task = env->GetMethodID(s_clsgetTlc39Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetTlc39Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETTLC39_TASK_CLASS;
            return NULL;
        }

        s_clssetTlc39Task = loadClass(env, SETTLC39_TASK_CLASS);
        if (!s_clssetTlc39Task) return 0;
        s_midsetTlc39Task = env->GetMethodID(s_clssetTlc39Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetTlc39Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETTLC39_TASK_CLASS;
            return NULL;
        }

        s_clsgetTrioptic39Task = loadClass(env, GETTRIOPTIC39_TASK_CLASS);
        if (!s_clsgetTrioptic39Task) return 0;
        s_midgetTrioptic39Task = env->GetMethodID(s_clsgetTrioptic39Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetTrioptic39Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETTRIOPTIC39_TASK_CLASS;
            return NULL;
        }

        s_clssetTrioptic39Task = loadClass(env, SETTRIOPTIC39_TASK_CLASS);
        if (!s_clssetTrioptic39Task) return 0;
        s_midsetTrioptic39Task = env->GetMethodID(s_clssetTrioptic39Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetTrioptic39Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETTRIOPTIC39_TASK_CLASS;
            return NULL;
        }

        s_clsgetTrioptic39RedundancyTask = loadClass(env, GETTRIOPTIC39REDUNDANCY_TASK_CLASS);
        if (!s_clsgetTrioptic39RedundancyTask) return 0;
        s_midgetTrioptic39RedundancyTask = env->GetMethodID(s_clsgetTrioptic39RedundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetTrioptic39RedundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETTRIOPTIC39REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clssetTrioptic39RedundancyTask = loadClass(env, SETTRIOPTIC39REDUNDANCY_TASK_CLASS);
        if (!s_clssetTrioptic39RedundancyTask) return 0;
        s_midsetTrioptic39RedundancyTask = env->GetMethodID(s_clssetTrioptic39RedundancyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetTrioptic39RedundancyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETTRIOPTIC39REDUNDANCY_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcEanBooklandTask = loadClass(env, GETUPCEANBOOKLAND_TASK_CLASS);
        if (!s_clsgetUpcEanBooklandTask) return 0;
        s_midgetUpcEanBooklandTask = env->GetMethodID(s_clsgetUpcEanBooklandTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcEanBooklandTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCEANBOOKLAND_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcEanBooklandTask = loadClass(env, SETUPCEANBOOKLAND_TASK_CLASS);
        if (!s_clssetUpcEanBooklandTask) return 0;
        s_midsetUpcEanBooklandTask = env->GetMethodID(s_clssetUpcEanBooklandTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcEanBooklandTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCEANBOOKLAND_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcEanBooklandFormatTask = loadClass(env, GETUPCEANBOOKLANDFORMAT_TASK_CLASS);
        if (!s_clsgetUpcEanBooklandFormatTask) return 0;
        s_midgetUpcEanBooklandFormatTask = env->GetMethodID(s_clsgetUpcEanBooklandFormatTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcEanBooklandFormatTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCEANBOOKLANDFORMAT_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcEanBooklandFormatTask = loadClass(env, SETUPCEANBOOKLANDFORMAT_TASK_CLASS);
        if (!s_clssetUpcEanBooklandFormatTask) return 0;
        s_midsetUpcEanBooklandFormatTask = env->GetMethodID(s_clssetUpcEanBooklandFormatTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcEanBooklandFormatTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCEANBOOKLANDFORMAT_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcEanConvertGs1dataBarToUpcEanTask = loadClass(env, GETUPCEANCONVERTGS1DATABARTOUPCEAN_TASK_CLASS);
        if (!s_clsgetUpcEanConvertGs1dataBarToUpcEanTask) return 0;
        s_midgetUpcEanConvertGs1dataBarToUpcEanTask = env->GetMethodID(s_clsgetUpcEanConvertGs1dataBarToUpcEanTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcEanConvertGs1dataBarToUpcEanTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCEANCONVERTGS1DATABARTOUPCEAN_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcEanConvertGs1dataBarToUpcEanTask = loadClass(env, SETUPCEANCONVERTGS1DATABARTOUPCEAN_TASK_CLASS);
        if (!s_clssetUpcEanConvertGs1dataBarToUpcEanTask) return 0;
        s_midsetUpcEanConvertGs1dataBarToUpcEanTask = env->GetMethodID(s_clssetUpcEanConvertGs1dataBarToUpcEanTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcEanConvertGs1dataBarToUpcEanTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCEANCONVERTGS1DATABARTOUPCEAN_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcEanCouponTask = loadClass(env, GETUPCEANCOUPON_TASK_CLASS);
        if (!s_clsgetUpcEanCouponTask) return 0;
        s_midgetUpcEanCouponTask = env->GetMethodID(s_clsgetUpcEanCouponTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcEanCouponTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCEANCOUPON_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcEanCouponTask = loadClass(env, SETUPCEANCOUPON_TASK_CLASS);
        if (!s_clssetUpcEanCouponTask) return 0;
        s_midsetUpcEanCouponTask = env->GetMethodID(s_clssetUpcEanCouponTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcEanCouponTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCEANCOUPON_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcEanLinearDecodeTask = loadClass(env, GETUPCEANLINEARDECODE_TASK_CLASS);
        if (!s_clsgetUpcEanLinearDecodeTask) return 0;
        s_midgetUpcEanLinearDecodeTask = env->GetMethodID(s_clsgetUpcEanLinearDecodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcEanLinearDecodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCEANLINEARDECODE_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcEanLinearDecodeTask = loadClass(env, SETUPCEANLINEARDECODE_TASK_CLASS);
        if (!s_clssetUpcEanLinearDecodeTask) return 0;
        s_midsetUpcEanLinearDecodeTask = env->GetMethodID(s_clssetUpcEanLinearDecodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcEanLinearDecodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCEANLINEARDECODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcEanRandomWeightCheckDigitTask = loadClass(env, GETUPCEANRANDOMWEIGHTCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetUpcEanRandomWeightCheckDigitTask) return 0;
        s_midgetUpcEanRandomWeightCheckDigitTask = env->GetMethodID(s_clsgetUpcEanRandomWeightCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcEanRandomWeightCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCEANRANDOMWEIGHTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcEanRandomWeightCheckDigitTask = loadClass(env, SETUPCEANRANDOMWEIGHTCHECKDIGIT_TASK_CLASS);
        if (!s_clssetUpcEanRandomWeightCheckDigitTask) return 0;
        s_midsetUpcEanRandomWeightCheckDigitTask = env->GetMethodID(s_clssetUpcEanRandomWeightCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcEanRandomWeightCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCEANRANDOMWEIGHTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcEanRetryCountTask = loadClass(env, GETUPCEANRETRYCOUNT_TASK_CLASS);
        if (!s_clsgetUpcEanRetryCountTask) return 0;
        s_midgetUpcEanRetryCountTask = env->GetMethodID(s_clsgetUpcEanRetryCountTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcEanRetryCountTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCEANRETRYCOUNT_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcEanRetryCountTask = loadClass(env, SETUPCEANRETRYCOUNT_TASK_CLASS);
        if (!s_clssetUpcEanRetryCountTask) return 0;
        s_midsetUpcEanRetryCountTask = env->GetMethodID(s_clssetUpcEanRetryCountTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcEanRetryCountTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCEANRETRYCOUNT_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcEanSecurityLevelTask = loadClass(env, GETUPCEANSECURITYLEVEL_TASK_CLASS);
        if (!s_clsgetUpcEanSecurityLevelTask) return 0;
        s_midgetUpcEanSecurityLevelTask = env->GetMethodID(s_clsgetUpcEanSecurityLevelTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcEanSecurityLevelTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCEANSECURITYLEVEL_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcEanSecurityLevelTask = loadClass(env, SETUPCEANSECURITYLEVEL_TASK_CLASS);
        if (!s_clssetUpcEanSecurityLevelTask) return 0;
        s_midsetUpcEanSecurityLevelTask = env->GetMethodID(s_clssetUpcEanSecurityLevelTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcEanSecurityLevelTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCEANSECURITYLEVEL_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcEanSupplemental2Task = loadClass(env, GETUPCEANSUPPLEMENTAL2_TASK_CLASS);
        if (!s_clsgetUpcEanSupplemental2Task) return 0;
        s_midgetUpcEanSupplemental2Task = env->GetMethodID(s_clsgetUpcEanSupplemental2Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcEanSupplemental2Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCEANSUPPLEMENTAL2_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcEanSupplemental2Task = loadClass(env, SETUPCEANSUPPLEMENTAL2_TASK_CLASS);
        if (!s_clssetUpcEanSupplemental2Task) return 0;
        s_midsetUpcEanSupplemental2Task = env->GetMethodID(s_clssetUpcEanSupplemental2Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcEanSupplemental2Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCEANSUPPLEMENTAL2_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcEanSupplemental5Task = loadClass(env, GETUPCEANSUPPLEMENTAL5_TASK_CLASS);
        if (!s_clsgetUpcEanSupplemental5Task) return 0;
        s_midgetUpcEanSupplemental5Task = env->GetMethodID(s_clsgetUpcEanSupplemental5Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcEanSupplemental5Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCEANSUPPLEMENTAL5_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcEanSupplemental5Task = loadClass(env, SETUPCEANSUPPLEMENTAL5_TASK_CLASS);
        if (!s_clssetUpcEanSupplemental5Task) return 0;
        s_midsetUpcEanSupplemental5Task = env->GetMethodID(s_clssetUpcEanSupplemental5Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcEanSupplemental5Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCEANSUPPLEMENTAL5_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcEanSupplementalModeTask = loadClass(env, GETUPCEANSUPPLEMENTALMODE_TASK_CLASS);
        if (!s_clsgetUpcEanSupplementalModeTask) return 0;
        s_midgetUpcEanSupplementalModeTask = env->GetMethodID(s_clsgetUpcEanSupplementalModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcEanSupplementalModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCEANSUPPLEMENTALMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcEanSupplementalModeTask = loadClass(env, SETUPCEANSUPPLEMENTALMODE_TASK_CLASS);
        if (!s_clssetUpcEanSupplementalModeTask) return 0;
        s_midsetUpcEanSupplementalModeTask = env->GetMethodID(s_clssetUpcEanSupplementalModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcEanSupplementalModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCEANSUPPLEMENTALMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcaTask = loadClass(env, GETUPCA_TASK_CLASS);
        if (!s_clsgetUpcaTask) return 0;
        s_midgetUpcaTask = env->GetMethodID(s_clsgetUpcaTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcaTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCA_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcaTask = loadClass(env, SETUPCA_TASK_CLASS);
        if (!s_clssetUpcaTask) return 0;
        s_midsetUpcaTask = env->GetMethodID(s_clssetUpcaTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcaTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCA_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcaPreambleTask = loadClass(env, GETUPCAPREAMBLE_TASK_CLASS);
        if (!s_clsgetUpcaPreambleTask) return 0;
        s_midgetUpcaPreambleTask = env->GetMethodID(s_clsgetUpcaPreambleTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcaPreambleTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCAPREAMBLE_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcaPreambleTask = loadClass(env, SETUPCAPREAMBLE_TASK_CLASS);
        if (!s_clssetUpcaPreambleTask) return 0;
        s_midsetUpcaPreambleTask = env->GetMethodID(s_clssetUpcaPreambleTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcaPreambleTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCAPREAMBLE_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpcaReportCheckDigitTask = loadClass(env, GETUPCAREPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetUpcaReportCheckDigitTask) return 0;
        s_midgetUpcaReportCheckDigitTask = env->GetMethodID(s_clsgetUpcaReportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpcaReportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCAREPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetUpcaReportCheckDigitTask = loadClass(env, SETUPCAREPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clssetUpcaReportCheckDigitTask) return 0;
        s_midsetUpcaReportCheckDigitTask = env->GetMethodID(s_clssetUpcaReportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpcaReportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCAREPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpce0Task = loadClass(env, GETUPCE0_TASK_CLASS);
        if (!s_clsgetUpce0Task) return 0;
        s_midgetUpce0Task = env->GetMethodID(s_clsgetUpce0Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpce0Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCE0_TASK_CLASS;
            return NULL;
        }

        s_clssetUpce0Task = loadClass(env, SETUPCE0_TASK_CLASS);
        if (!s_clssetUpce0Task) return 0;
        s_midsetUpce0Task = env->GetMethodID(s_clssetUpce0Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpce0Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCE0_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpce0convertToUpcaTask = loadClass(env, GETUPCE0CONVERTTOUPCA_TASK_CLASS);
        if (!s_clsgetUpce0convertToUpcaTask) return 0;
        s_midgetUpce0convertToUpcaTask = env->GetMethodID(s_clsgetUpce0convertToUpcaTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpce0convertToUpcaTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCE0CONVERTTOUPCA_TASK_CLASS;
            return NULL;
        }

        s_clssetUpce0convertToUpcaTask = loadClass(env, SETUPCE0CONVERTTOUPCA_TASK_CLASS);
        if (!s_clssetUpce0convertToUpcaTask) return 0;
        s_midsetUpce0convertToUpcaTask = env->GetMethodID(s_clssetUpce0convertToUpcaTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpce0convertToUpcaTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCE0CONVERTTOUPCA_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpce0preambleTask = loadClass(env, GETUPCE0PREAMBLE_TASK_CLASS);
        if (!s_clsgetUpce0preambleTask) return 0;
        s_midgetUpce0preambleTask = env->GetMethodID(s_clsgetUpce0preambleTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpce0preambleTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCE0PREAMBLE_TASK_CLASS;
            return NULL;
        }

        s_clssetUpce0preambleTask = loadClass(env, SETUPCE0PREAMBLE_TASK_CLASS);
        if (!s_clssetUpce0preambleTask) return 0;
        s_midsetUpce0preambleTask = env->GetMethodID(s_clssetUpce0preambleTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpce0preambleTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCE0PREAMBLE_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpce0reportCheckDigitTask = loadClass(env, GETUPCE0REPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetUpce0reportCheckDigitTask) return 0;
        s_midgetUpce0reportCheckDigitTask = env->GetMethodID(s_clsgetUpce0reportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpce0reportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCE0REPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetUpce0reportCheckDigitTask = loadClass(env, SETUPCE0REPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clssetUpce0reportCheckDigitTask) return 0;
        s_midsetUpce0reportCheckDigitTask = env->GetMethodID(s_clssetUpce0reportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpce0reportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCE0REPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpce1Task = loadClass(env, GETUPCE1_TASK_CLASS);
        if (!s_clsgetUpce1Task) return 0;
        s_midgetUpce1Task = env->GetMethodID(s_clsgetUpce1Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpce1Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCE1_TASK_CLASS;
            return NULL;
        }

        s_clssetUpce1Task = loadClass(env, SETUPCE1_TASK_CLASS);
        if (!s_clssetUpce1Task) return 0;
        s_midsetUpce1Task = env->GetMethodID(s_clssetUpce1Task, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpce1Task)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCE1_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpce1convertToUpcaTask = loadClass(env, GETUPCE1CONVERTTOUPCA_TASK_CLASS);
        if (!s_clsgetUpce1convertToUpcaTask) return 0;
        s_midgetUpce1convertToUpcaTask = env->GetMethodID(s_clsgetUpce1convertToUpcaTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpce1convertToUpcaTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCE1CONVERTTOUPCA_TASK_CLASS;
            return NULL;
        }

        s_clssetUpce1convertToUpcaTask = loadClass(env, SETUPCE1CONVERTTOUPCA_TASK_CLASS);
        if (!s_clssetUpce1convertToUpcaTask) return 0;
        s_midsetUpce1convertToUpcaTask = env->GetMethodID(s_clssetUpce1convertToUpcaTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpce1convertToUpcaTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCE1CONVERTTOUPCA_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpce1preambleTask = loadClass(env, GETUPCE1PREAMBLE_TASK_CLASS);
        if (!s_clsgetUpce1preambleTask) return 0;
        s_midgetUpce1preambleTask = env->GetMethodID(s_clsgetUpce1preambleTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpce1preambleTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCE1PREAMBLE_TASK_CLASS;
            return NULL;
        }

        s_clssetUpce1preambleTask = loadClass(env, SETUPCE1PREAMBLE_TASK_CLASS);
        if (!s_clssetUpce1preambleTask) return 0;
        s_midsetUpce1preambleTask = env->GetMethodID(s_clssetUpce1preambleTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpce1preambleTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCE1PREAMBLE_TASK_CLASS;
            return NULL;
        }

        s_clsgetUpce1reportCheckDigitTask = loadClass(env, GETUPCE1REPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clsgetUpce1reportCheckDigitTask) return 0;
        s_midgetUpce1reportCheckDigitTask = env->GetMethodID(s_clsgetUpce1reportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetUpce1reportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETUPCE1REPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clssetUpce1reportCheckDigitTask = loadClass(env, SETUPCE1REPORTCHECKDIGIT_TASK_CLASS);
        if (!s_clssetUpce1reportCheckDigitTask) return 0;
        s_midsetUpce1reportCheckDigitTask = env->GetMethodID(s_clssetUpce1reportCheckDigitTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetUpce1reportCheckDigitTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETUPCE1REPORTCHECKDIGIT_TASK_CLASS;
            return NULL;
        }

        s_clsgetWebcodeTask = loadClass(env, GETWEBCODE_TASK_CLASS);
        if (!s_clsgetWebcodeTask) return 0;
        s_midgetWebcodeTask = env->GetMethodID(s_clsgetWebcodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetWebcodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETWEBCODE_TASK_CLASS;
            return NULL;
        }

        s_clssetWebcodeTask = loadClass(env, SETWEBCODE_TASK_CLASS);
        if (!s_clssetWebcodeTask) return 0;
        s_midsetWebcodeTask = env->GetMethodID(s_clssetWebcodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetWebcodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETWEBCODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetWebcodeDecodeGtSubtypeTask = loadClass(env, GETWEBCODEDECODEGTSUBTYPE_TASK_CLASS);
        if (!s_clsgetWebcodeDecodeGtSubtypeTask) return 0;
        s_midgetWebcodeDecodeGtSubtypeTask = env->GetMethodID(s_clsgetWebcodeDecodeGtSubtypeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetWebcodeDecodeGtSubtypeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETWEBCODEDECODEGTSUBTYPE_TASK_CLASS;
            return NULL;
        }

        s_clssetWebcodeDecodeGtSubtypeTask = loadClass(env, SETWEBCODEDECODEGTSUBTYPE_TASK_CLASS);
        if (!s_clssetWebcodeDecodeGtSubtypeTask) return 0;
        s_midsetWebcodeDecodeGtSubtypeTask = env->GetMethodID(s_clssetWebcodeDecodeGtSubtypeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetWebcodeDecodeGtSubtypeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETWEBCODEDECODEGTSUBTYPE_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmModelNumberTask = loadClass(env, GETRSMMODELNUMBER_TASK_CLASS);
        if (!s_clsgetRsmModelNumberTask) return 0;
        s_midgetRsmModelNumberTask = env->GetMethodID(s_clsgetRsmModelNumberTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmModelNumberTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMMODELNUMBER_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmSerialNumberTask = loadClass(env, GETRSMSERIALNUMBER_TASK_CLASS);
        if (!s_clsgetRsmSerialNumberTask) return 0;
        s_midgetRsmSerialNumberTask = env->GetMethodID(s_clsgetRsmSerialNumberTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmSerialNumberTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMSERIALNUMBER_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmDateOfManufactureTask = loadClass(env, GETRSMDATEOFMANUFACTURE_TASK_CLASS);
        if (!s_clsgetRsmDateOfManufactureTask) return 0;
        s_midgetRsmDateOfManufactureTask = env->GetMethodID(s_clsgetRsmDateOfManufactureTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmDateOfManufactureTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMDATEOFMANUFACTURE_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmDateOfServiceTask = loadClass(env, GETRSMDATEOFSERVICE_TASK_CLASS);
        if (!s_clsgetRsmDateOfServiceTask) return 0;
        s_midgetRsmDateOfServiceTask = env->GetMethodID(s_clsgetRsmDateOfServiceTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmDateOfServiceTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMDATEOFSERVICE_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBluetoothAddressTask = loadClass(env, GETRSMBLUETOOTHADDRESS_TASK_CLASS);
        if (!s_clsgetRsmBluetoothAddressTask) return 0;
        s_midgetRsmBluetoothAddressTask = env->GetMethodID(s_clsgetRsmBluetoothAddressTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBluetoothAddressTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBLUETOOTHADDRESS_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmFirmwareVersionTask = loadClass(env, GETRSMFIRMWAREVERSION_TASK_CLASS);
        if (!s_clsgetRsmFirmwareVersionTask) return 0;
        s_midgetRsmFirmwareVersionTask = env->GetMethodID(s_clsgetRsmFirmwareVersionTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmFirmwareVersionTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMFIRMWAREVERSION_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmDeviceClassTask = loadClass(env, GETRSMDEVICECLASS_TASK_CLASS);
        if (!s_clsgetRsmDeviceClassTask) return 0;
        s_midgetRsmDeviceClassTask = env->GetMethodID(s_clsgetRsmDeviceClassTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmDeviceClassTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMDEVICECLASS_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBatteryStatusTask = loadClass(env, GETRSMBATTERYSTATUS_TASK_CLASS);
        if (!s_clsgetRsmBatteryStatusTask) return 0;
        s_midgetRsmBatteryStatusTask = env->GetMethodID(s_clsgetRsmBatteryStatusTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBatteryStatusTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBATTERYSTATUS_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBatteryCapacityTask = loadClass(env, GETRSMBATTERYCAPACITY_TASK_CLASS);
        if (!s_clsgetRsmBatteryCapacityTask) return 0;
        s_midgetRsmBatteryCapacityTask = env->GetMethodID(s_clsgetRsmBatteryCapacityTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBatteryCapacityTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBATTERYCAPACITY_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBatteryIdTask = loadClass(env, GETRSMBATTERYID_TASK_CLASS);
        if (!s_clsgetRsmBatteryIdTask) return 0;
        s_midgetRsmBatteryIdTask = env->GetMethodID(s_clsgetRsmBatteryIdTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBatteryIdTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBATTERYID_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBluetoothAuthenticationTask = loadClass(env, GETRSMBLUETOOTHAUTHENTICATION_TASK_CLASS);
        if (!s_clsgetRsmBluetoothAuthenticationTask) return 0;
        s_midgetRsmBluetoothAuthenticationTask = env->GetMethodID(s_clsgetRsmBluetoothAuthenticationTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBluetoothAuthenticationTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBLUETOOTHAUTHENTICATION_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmBluetoothAuthenticationTask = loadClass(env, SETRSMBLUETOOTHAUTHENTICATION_TASK_CLASS);
        if (!s_clssetRsmBluetoothAuthenticationTask) return 0;
        s_midsetRsmBluetoothAuthenticationTask = env->GetMethodID(s_clssetRsmBluetoothAuthenticationTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmBluetoothAuthenticationTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMBLUETOOTHAUTHENTICATION_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBluetoothEncryptionTask = loadClass(env, GETRSMBLUETOOTHENCRYPTION_TASK_CLASS);
        if (!s_clsgetRsmBluetoothEncryptionTask) return 0;
        s_midgetRsmBluetoothEncryptionTask = env->GetMethodID(s_clsgetRsmBluetoothEncryptionTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBluetoothEncryptionTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBLUETOOTHENCRYPTION_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmBluetoothEncryptionTask = loadClass(env, SETRSMBLUETOOTHENCRYPTION_TASK_CLASS);
        if (!s_clssetRsmBluetoothEncryptionTask) return 0;
        s_midsetRsmBluetoothEncryptionTask = env->GetMethodID(s_clssetRsmBluetoothEncryptionTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmBluetoothEncryptionTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMBLUETOOTHENCRYPTION_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBluetoothPinCodeTask = loadClass(env, GETRSMBLUETOOTHPINCODE_TASK_CLASS);
        if (!s_clsgetRsmBluetoothPinCodeTask) return 0;
        s_midgetRsmBluetoothPinCodeTask = env->GetMethodID(s_clsgetRsmBluetoothPinCodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBluetoothPinCodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBLUETOOTHPINCODE_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmBluetoothPinCodeTask = loadClass(env, SETRSMBLUETOOTHPINCODE_TASK_CLASS);
        if (!s_clssetRsmBluetoothPinCodeTask) return 0;
        s_midsetRsmBluetoothPinCodeTask = env->GetMethodID(s_clssetRsmBluetoothPinCodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmBluetoothPinCodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMBLUETOOTHPINCODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBluetoothPinCodeTypeTask = loadClass(env, GETRSMBLUETOOTHPINCODETYPE_TASK_CLASS);
        if (!s_clsgetRsmBluetoothPinCodeTypeTask) return 0;
        s_midgetRsmBluetoothPinCodeTypeTask = env->GetMethodID(s_clsgetRsmBluetoothPinCodeTypeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBluetoothPinCodeTypeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBLUETOOTHPINCODETYPE_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmBluetoothPinCodeTypeTask = loadClass(env, SETRSMBLUETOOTHPINCODETYPE_TASK_CLASS);
        if (!s_clssetRsmBluetoothPinCodeTypeTask) return 0;
        s_midsetRsmBluetoothPinCodeTypeTask = env->GetMethodID(s_clssetRsmBluetoothPinCodeTypeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmBluetoothPinCodeTypeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMBLUETOOTHPINCODETYPE_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBluetoothReconnectionAttemptsTask = loadClass(env, GETRSMBLUETOOTHRECONNECTIONATTEMPTS_TASK_CLASS);
        if (!s_clsgetRsmBluetoothReconnectionAttemptsTask) return 0;
        s_midgetRsmBluetoothReconnectionAttemptsTask = env->GetMethodID(s_clsgetRsmBluetoothReconnectionAttemptsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBluetoothReconnectionAttemptsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBLUETOOTHRECONNECTIONATTEMPTS_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmBluetoothReconnectionAttemptsTask = loadClass(env, SETRSMBLUETOOTHRECONNECTIONATTEMPTS_TASK_CLASS);
        if (!s_clssetRsmBluetoothReconnectionAttemptsTask) return 0;
        s_midsetRsmBluetoothReconnectionAttemptsTask = env->GetMethodID(s_clssetRsmBluetoothReconnectionAttemptsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmBluetoothReconnectionAttemptsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMBLUETOOTHRECONNECTIONATTEMPTS_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBluetoothBeepOnReconnectAttemptTask = loadClass(env, GETRSMBLUETOOTHBEEPONRECONNECTATTEMPT_TASK_CLASS);
        if (!s_clsgetRsmBluetoothBeepOnReconnectAttemptTask) return 0;
        s_midgetRsmBluetoothBeepOnReconnectAttemptTask = env->GetMethodID(s_clsgetRsmBluetoothBeepOnReconnectAttemptTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBluetoothBeepOnReconnectAttemptTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBLUETOOTHBEEPONRECONNECTATTEMPT_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmBluetoothBeepOnReconnectAttemptTask = loadClass(env, SETRSMBLUETOOTHBEEPONRECONNECTATTEMPT_TASK_CLASS);
        if (!s_clssetRsmBluetoothBeepOnReconnectAttemptTask) return 0;
        s_midsetRsmBluetoothBeepOnReconnectAttemptTask = env->GetMethodID(s_clssetRsmBluetoothBeepOnReconnectAttemptTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmBluetoothBeepOnReconnectAttemptTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMBLUETOOTHBEEPONRECONNECTATTEMPT_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBluetoothHidAutoReconnectTask = loadClass(env, GETRSMBLUETOOTHHIDAUTORECONNECT_TASK_CLASS);
        if (!s_clsgetRsmBluetoothHidAutoReconnectTask) return 0;
        s_midgetRsmBluetoothHidAutoReconnectTask = env->GetMethodID(s_clsgetRsmBluetoothHidAutoReconnectTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBluetoothHidAutoReconnectTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBLUETOOTHHIDAUTORECONNECT_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmBluetoothHidAutoReconnectTask = loadClass(env, SETRSMBLUETOOTHHIDAUTORECONNECT_TASK_CLASS);
        if (!s_clssetRsmBluetoothHidAutoReconnectTask) return 0;
        s_midsetRsmBluetoothHidAutoReconnectTask = env->GetMethodID(s_clssetRsmBluetoothHidAutoReconnectTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmBluetoothHidAutoReconnectTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMBLUETOOTHHIDAUTORECONNECT_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBluetoothFriendlyNameTask = loadClass(env, GETRSMBLUETOOTHFRIENDLYNAME_TASK_CLASS);
        if (!s_clsgetRsmBluetoothFriendlyNameTask) return 0;
        s_midgetRsmBluetoothFriendlyNameTask = env->GetMethodID(s_clsgetRsmBluetoothFriendlyNameTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBluetoothFriendlyNameTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBLUETOOTHFRIENDLYNAME_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmBluetoothFriendlyNameTask = loadClass(env, SETRSMBLUETOOTHFRIENDLYNAME_TASK_CLASS);
        if (!s_clssetRsmBluetoothFriendlyNameTask) return 0;
        s_midsetRsmBluetoothFriendlyNameTask = env->GetMethodID(s_clssetRsmBluetoothFriendlyNameTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmBluetoothFriendlyNameTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMBLUETOOTHFRIENDLYNAME_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBluetoothInquiryModeTask = loadClass(env, GETRSMBLUETOOTHINQUIRYMODE_TASK_CLASS);
        if (!s_clsgetRsmBluetoothInquiryModeTask) return 0;
        s_midgetRsmBluetoothInquiryModeTask = env->GetMethodID(s_clsgetRsmBluetoothInquiryModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBluetoothInquiryModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBLUETOOTHINQUIRYMODE_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmBluetoothInquiryModeTask = loadClass(env, SETRSMBLUETOOTHINQUIRYMODE_TASK_CLASS);
        if (!s_clssetRsmBluetoothInquiryModeTask) return 0;
        s_midsetRsmBluetoothInquiryModeTask = env->GetMethodID(s_clssetRsmBluetoothInquiryModeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmBluetoothInquiryModeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMBLUETOOTHINQUIRYMODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmBluetoothAutoReconnectTask = loadClass(env, GETRSMBLUETOOTHAUTORECONNECT_TASK_CLASS);
        if (!s_clsgetRsmBluetoothAutoReconnectTask) return 0;
        s_midgetRsmBluetoothAutoReconnectTask = env->GetMethodID(s_clsgetRsmBluetoothAutoReconnectTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmBluetoothAutoReconnectTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMBLUETOOTHAUTORECONNECT_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmBluetoothAutoReconnectTask = loadClass(env, SETRSMBLUETOOTHAUTORECONNECT_TASK_CLASS);
        if (!s_clssetRsmBluetoothAutoReconnectTask) return 0;
        s_midsetRsmBluetoothAutoReconnectTask = env->GetMethodID(s_clssetRsmBluetoothAutoReconnectTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmBluetoothAutoReconnectTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMBLUETOOTHAUTORECONNECT_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmForceSavePairingBarcodeTask = loadClass(env, GETRSMFORCESAVEPAIRINGBARCODE_TASK_CLASS);
        if (!s_clsgetRsmForceSavePairingBarcodeTask) return 0;
        s_midgetRsmForceSavePairingBarcodeTask = env->GetMethodID(s_clsgetRsmForceSavePairingBarcodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmForceSavePairingBarcodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMFORCESAVEPAIRINGBARCODE_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmForceSavePairingBarcodeTask = loadClass(env, SETRSMFORCESAVEPAIRINGBARCODE_TASK_CLASS);
        if (!s_clssetRsmForceSavePairingBarcodeTask) return 0;
        s_midsetRsmForceSavePairingBarcodeTask = env->GetMethodID(s_clssetRsmForceSavePairingBarcodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmForceSavePairingBarcodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMFORCESAVEPAIRINGBARCODE_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmLowBatteryIndicationTask = loadClass(env, GETRSMLOWBATTERYINDICATION_TASK_CLASS);
        if (!s_clsgetRsmLowBatteryIndicationTask) return 0;
        s_midgetRsmLowBatteryIndicationTask = env->GetMethodID(s_clsgetRsmLowBatteryIndicationTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmLowBatteryIndicationTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMLOWBATTERYINDICATION_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmLowBatteryIndicationTask = loadClass(env, SETRSMLOWBATTERYINDICATION_TASK_CLASS);
        if (!s_clssetRsmLowBatteryIndicationTask) return 0;
        s_midsetRsmLowBatteryIndicationTask = env->GetMethodID(s_clssetRsmLowBatteryIndicationTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmLowBatteryIndicationTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMLOWBATTERYINDICATION_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmLowBatteryIndicationCycleTask = loadClass(env, GETRSMLOWBATTERYINDICATIONCYCLE_TASK_CLASS);
        if (!s_clsgetRsmLowBatteryIndicationCycleTask) return 0;
        s_midgetRsmLowBatteryIndicationCycleTask = env->GetMethodID(s_clsgetRsmLowBatteryIndicationCycleTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmLowBatteryIndicationCycleTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMLOWBATTERYINDICATIONCYCLE_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmLowBatteryIndicationCycleTask = loadClass(env, SETRSMLOWBATTERYINDICATIONCYCLE_TASK_CLASS);
        if (!s_clssetRsmLowBatteryIndicationCycleTask) return 0;
        s_midsetRsmLowBatteryIndicationCycleTask = env->GetMethodID(s_clssetRsmLowBatteryIndicationCycleTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmLowBatteryIndicationCycleTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMLOWBATTERYINDICATIONCYCLE_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmScanLineWidthTask = loadClass(env, GETRSMSCANLINEWIDTH_TASK_CLASS);
        if (!s_clsgetRsmScanLineWidthTask) return 0;
        s_midgetRsmScanLineWidthTask = env->GetMethodID(s_clsgetRsmScanLineWidthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmScanLineWidthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMSCANLINEWIDTH_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmScanLineWidthTask = loadClass(env, SETRSMSCANLINEWIDTH_TASK_CLASS);
        if (!s_clssetRsmScanLineWidthTask) return 0;
        s_midsetRsmScanLineWidthTask = env->GetMethodID(s_clssetRsmScanLineWidthTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmScanLineWidthTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMSCANLINEWIDTH_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmGoodScansDelayTask = loadClass(env, GETRSMGOODSCANSDELAY_TASK_CLASS);
        if (!s_clsgetRsmGoodScansDelayTask) return 0;
        s_midgetRsmGoodScansDelayTask = env->GetMethodID(s_clsgetRsmGoodScansDelayTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmGoodScansDelayTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMGOODSCANSDELAY_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmGoodScansDelayTask = loadClass(env, SETRSMGOODSCANSDELAY_TASK_CLASS);
        if (!s_clssetRsmGoodScansDelayTask) return 0;
        s_midsetRsmGoodScansDelayTask = env->GetMethodID(s_clssetRsmGoodScansDelayTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmGoodScansDelayTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMGOODSCANSDELAY_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmDecodeFeedbackTask = loadClass(env, GETRSMDECODEFEEDBACK_TASK_CLASS);
        if (!s_clsgetRsmDecodeFeedbackTask) return 0;
        s_midgetRsmDecodeFeedbackTask = env->GetMethodID(s_clsgetRsmDecodeFeedbackTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmDecodeFeedbackTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMDECODEFEEDBACK_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmDecodeFeedbackTask = loadClass(env, SETRSMDECODEFEEDBACK_TASK_CLASS);
        if (!s_clssetRsmDecodeFeedbackTask) return 0;
        s_midsetRsmDecodeFeedbackTask = env->GetMethodID(s_clssetRsmDecodeFeedbackTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmDecodeFeedbackTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMDECODEFEEDBACK_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmIgnoreCode128UspsTask = loadClass(env, GETRSMIGNORECODE128USPS_TASK_CLASS);
        if (!s_clsgetRsmIgnoreCode128UspsTask) return 0;
        s_midgetRsmIgnoreCode128UspsTask = env->GetMethodID(s_clsgetRsmIgnoreCode128UspsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmIgnoreCode128UspsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMIGNORECODE128USPS_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmIgnoreCode128UspsTask = loadClass(env, SETRSMIGNORECODE128USPS_TASK_CLASS);
        if (!s_clssetRsmIgnoreCode128UspsTask) return 0;
        s_midsetRsmIgnoreCode128UspsTask = env->GetMethodID(s_clssetRsmIgnoreCode128UspsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmIgnoreCode128UspsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMIGNORECODE128USPS_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmScanTriggerWakeupTask = loadClass(env, GETRSMSCANTRIGGERWAKEUP_TASK_CLASS);
        if (!s_clsgetRsmScanTriggerWakeupTask) return 0;
        s_midgetRsmScanTriggerWakeupTask = env->GetMethodID(s_clsgetRsmScanTriggerWakeupTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmScanTriggerWakeupTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMSCANTRIGGERWAKEUP_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmScanTriggerWakeupTask = loadClass(env, SETRSMSCANTRIGGERWAKEUP_TASK_CLASS);
        if (!s_clssetRsmScanTriggerWakeupTask) return 0;
        s_midsetRsmScanTriggerWakeupTask = env->GetMethodID(s_clssetRsmScanTriggerWakeupTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmScanTriggerWakeupTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMSCANTRIGGERWAKEUP_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmMemsTask = loadClass(env, GETRSMMEMS_TASK_CLASS);
        if (!s_clsgetRsmMemsTask) return 0;
        s_midgetRsmMemsTask = env->GetMethodID(s_clsgetRsmMemsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmMemsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMMEMS_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmMemsTask = loadClass(env, SETRSMMEMS_TASK_CLASS);
        if (!s_clssetRsmMemsTask) return 0;
        s_midsetRsmMemsTask = env->GetMethodID(s_clssetRsmMemsTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmMemsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMMEMS_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmProximityEnableTask = loadClass(env, GETRSMPROXIMITYENABLE_TASK_CLASS);
        if (!s_clsgetRsmProximityEnableTask) return 0;
        s_midgetRsmProximityEnableTask = env->GetMethodID(s_clsgetRsmProximityEnableTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmProximityEnableTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMPROXIMITYENABLE_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmProximityEnableTask = loadClass(env, SETRSMPROXIMITYENABLE_TASK_CLASS);
        if (!s_clssetRsmProximityEnableTask) return 0;
        s_midsetRsmProximityEnableTask = env->GetMethodID(s_clssetRsmProximityEnableTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmProximityEnableTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMPROXIMITYENABLE_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmProximityContinuousTask = loadClass(env, GETRSMPROXIMITYCONTINUOUS_TASK_CLASS);
        if (!s_clsgetRsmProximityContinuousTask) return 0;
        s_midgetRsmProximityContinuousTask = env->GetMethodID(s_clsgetRsmProximityContinuousTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmProximityContinuousTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMPROXIMITYCONTINUOUS_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmProximityContinuousTask = loadClass(env, SETRSMPROXIMITYCONTINUOUS_TASK_CLASS);
        if (!s_clssetRsmProximityContinuousTask) return 0;
        s_midsetRsmProximityContinuousTask = env->GetMethodID(s_clssetRsmProximityContinuousTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmProximityContinuousTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMPROXIMITYCONTINUOUS_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmProximityDistanceTask = loadClass(env, GETRSMPROXIMITYDISTANCE_TASK_CLASS);
        if (!s_clsgetRsmProximityDistanceTask) return 0;
        s_midgetRsmProximityDistanceTask = env->GetMethodID(s_clsgetRsmProximityDistanceTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmProximityDistanceTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMPROXIMITYDISTANCE_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmProximityDistanceTask = loadClass(env, SETRSMPROXIMITYDISTANCE_TASK_CLASS);
        if (!s_clssetRsmProximityDistanceTask) return 0;
        s_midsetRsmProximityDistanceTask = env->GetMethodID(s_clssetRsmProximityDistanceTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmProximityDistanceTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMPROXIMITYDISTANCE_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmPagingEnableTask = loadClass(env, GETRSMPAGINGENABLE_TASK_CLASS);
        if (!s_clsgetRsmPagingEnableTask) return 0;
        s_midgetRsmPagingEnableTask = env->GetMethodID(s_clsgetRsmPagingEnableTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmPagingEnableTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMPAGINGENABLE_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmPagingEnableTask = loadClass(env, SETRSMPAGINGENABLE_TASK_CLASS);
        if (!s_clssetRsmPagingEnableTask) return 0;
        s_midsetRsmPagingEnableTask = env->GetMethodID(s_clssetRsmPagingEnableTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ZLcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmPagingEnableTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMPAGINGENABLE_TASK_CLASS;
            return NULL;
        }

        s_clsgetRsmPagingBeepSequenceTask = loadClass(env, GETRSMPAGINGBEEPSEQUENCE_TASK_CLASS);
        if (!s_clsgetRsmPagingBeepSequenceTask) return 0;
        s_midgetRsmPagingBeepSequenceTask = env->GetMethodID(s_clsgetRsmPagingBeepSequenceTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetRsmPagingBeepSequenceTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETRSMPAGINGBEEPSEQUENCE_TASK_CLASS;
            return NULL;
        }

        s_clssetRsmPagingBeepSequenceTask = loadClass(env, SETRSMPAGINGBEEPSEQUENCE_TASK_CLASS);
        if (!s_clssetRsmPagingBeepSequenceTask) return 0;
        s_midsetRsmPagingBeepSequenceTask = env->GetMethodID(s_clssetRsmPagingBeepSequenceTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;ILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetRsmPagingBeepSequenceTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETRSMPAGINGBEEPSEQUENCE_TASK_CLASS;
            return NULL;
        }

        s_clsenumerateTask = loadClass(env, ENUMERATE_TASK_CLASS);
        if (!s_clsenumerateTask) return 0;
        s_midenumerateTask = env->GetMethodID(s_clsenumerateTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainwaySingleton;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midenumerateTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + ENUMERATE_TASK_CLASS;
            return NULL;
        }

        s_clsenableTask = loadClass(env, ENABLE_TASK_CLASS);
        if (!s_clsenableTask) return 0;
        s_midenableTask = env->GetMethodID(s_clsenableTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/util/Map;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midenableTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + ENABLE_TASK_CLASS;
            return NULL;
        }

        s_clsregisterBluetoothStatusTask = loadClass(env, REGISTERBLUETOOTHSTATUS_TASK_CLASS);
        if (!s_clsregisterBluetoothStatusTask) return 0;
        s_midregisterBluetoothStatusTask = env->GetMethodID(s_clsregisterBluetoothStatusTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midregisterBluetoothStatusTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + REGISTERBLUETOOTHSTATUS_TASK_CLASS;
            return NULL;
        }

        s_clsstartTask = loadClass(env, START_TASK_CLASS);
        if (!s_clsstartTask) return 0;
        s_midstartTask = env->GetMethodID(s_clsstartTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midstartTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + START_TASK_CLASS;
            return NULL;
        }

        s_clsstopTask = loadClass(env, STOP_TASK_CLASS);
        if (!s_clsstopTask) return 0;
        s_midstopTask = env->GetMethodID(s_clsstopTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midstopTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + STOP_TASK_CLASS;
            return NULL;
        }

        s_clsdisableTask = loadClass(env, DISABLE_TASK_CLASS);
        if (!s_clsdisableTask) return 0;
        s_middisableTask = env->GetMethodID(s_clsdisableTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_middisableTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + DISABLE_TASK_CLASS;
            return NULL;
        }

        s_clsbarcode_recognizeTask = loadClass(env, BARCODE_RECOGNIZE_TASK_CLASS);
        if (!s_clsbarcode_recognizeTask) return 0;
        s_midbarcode_recognizeTask = env->GetMethodID(s_clsbarcode_recognizeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midbarcode_recognizeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + BARCODE_RECOGNIZE_TASK_CLASS;
            return NULL;
        }

        s_clsgetSupportedPropertiesTask = loadClass(env, GETSUPPORTEDPROPERTIES_TASK_CLASS);
        if (!s_clsgetSupportedPropertiesTask) return 0;
        s_midgetSupportedPropertiesTask = env->GetMethodID(s_clsgetSupportedPropertiesTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetSupportedPropertiesTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETSUPPORTEDPROPERTIES_TASK_CLASS;
            return NULL;
        }

        s_clstakeTask = loadClass(env, TAKE_TASK_CLASS);
        if (!s_clstakeTask) return 0;
        s_midtakeTask = env->GetMethodID(s_clstakeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/util/Map;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midtakeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + TAKE_TASK_CLASS;
            return NULL;
        }

        s_clstake_barcodeTask = loadClass(env, TAKE_BARCODE_TASK_CLASS);
        if (!s_clstake_barcodeTask) return 0;
        s_midtake_barcodeTask = env->GetMethodID(s_clstake_barcodeTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Ljava/util/Map;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midtake_barcodeTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + TAKE_BARCODE_TASK_CLASS;
            return NULL;
        }

        s_clscommandRemoteScannerTask = loadClass(env, COMMANDREMOTESCANNER_TASK_CLASS);
        if (!s_clscommandRemoteScannerTask) return 0;
        s_midcommandRemoteScannerTask = env->GetMethodID(s_clscommandRemoteScannerTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midcommandRemoteScannerTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + COMMANDREMOTESCANNER_TASK_CLASS;
            return NULL;
        }

        s_clsgetPropertyTask = loadClass(env, GETPROPERTY_TASK_CLASS);
        if (!s_clsgetPropertyTask) return 0;
        s_midgetPropertyTask = env->GetMethodID(s_clsgetPropertyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetPropertyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETPROPERTY_TASK_CLASS;
            return NULL;
        }

        s_clsgetPropertiesTask = loadClass(env, GETPROPERTIES_TASK_CLASS);
        if (!s_clsgetPropertiesTask) return 0;
        s_midgetPropertiesTask = env->GetMethodID(s_clsgetPropertiesTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/util/List;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetPropertiesTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETPROPERTIES_TASK_CLASS;
            return NULL;
        }

        s_clsgetAllPropertiesTask = loadClass(env, GETALLPROPERTIES_TASK_CLASS);
        if (!s_clsgetAllPropertiesTask) return 0;
        s_midgetAllPropertiesTask = env->GetMethodID(s_clsgetAllPropertiesTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetAllPropertiesTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETALLPROPERTIES_TASK_CLASS;
            return NULL;
        }

        s_clssetPropertyTask = loadClass(env, SETPROPERTY_TASK_CLASS);
        if (!s_clssetPropertyTask) return 0;
        s_midsetPropertyTask = env->GetMethodID(s_clssetPropertyTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/lang/String;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetPropertyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETPROPERTY_TASK_CLASS;
            return NULL;
        }

        s_clssetPropertiesTask = loadClass(env, SETPROPERTIES_TASK_CLASS);
        if (!s_clssetPropertiesTask) return 0;
        s_midsetPropertiesTask = env->GetMethodID(s_clssetPropertiesTask, "<init>",
                        "(Lcom/rho/barcodechainway/IBarcodeChainway;Ljava/util/Map;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetPropertiesTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETPROPERTIES_TASK_CLASS;
            return NULL;
        }


        s_clsIDefaultId = loadClass(env, IDEFAULTID_CLASS);
        if (!s_clsIDefaultId) return 0;
        s_midGetDefaultID = env->GetMethodID(s_clsIDefaultId, "getDefaultID", "()Ljava/lang/String;");
        if(!s_midGetDefaultID)
        {
            LOG(FATAL) + "Failed to get method 'getDefaultID' for java class " + IDEFAULTID_CLASS;
            return NULL;
        }
        s_midSetDefaultID = env->GetMethodID(s_clsIDefaultId, "setDefaultID", "(Ljava/lang/String;)V");
        if(!s_midSetDefaultID)
        {
            LOG(FATAL) + "Failed to get method 'setDefaultID' for java class " + IDEFAULTID_CLASS;
            return NULL;
        }


        initialized = true;
        LOG(TRACE) + "CBarcodeChainway JNI init succeeded";
    }
    return env;
}
//----------------------------------------------------------------------------------------------------------------------

void CBarcodeChainwayBase::setJavaFactory(JNIEnv* env, jobject jFactory)
{
    LOG(TRACE) + "setJavaFactory";

    env = jniInit(env);
    if (!env) {
        LOG(FATAL) + "JNI initialization failed";
        return;
    }

    env->CallStaticVoidMethod(s_clsFactorySingleton, s_midFactorySetInstance, jFactory);

    LOG(TRACE) + "setJavaFactory succeeded";
}
//----------------------------------------------------------------------------------------------------------------------

rho::String CBarcodeChainwayBase::getDefaultID()
{
    LOG(TRACE) + "getDefaultID";

    JNIEnv *env = jniInit();
    if (!env) {
        LOG(FATAL) + "JNI initialization failed";
        return rho::String();
    }

    jhobject jhSingleton = getSingleton(env);
    jhstring res = static_cast<jstring>(env->CallObjectMethod(jhSingleton.get(), s_midGetDefaultID));
    return rho_cast<rho::String>(env, res);
}
//----------------------------------------------------------------------------------------------------------------------

void CBarcodeChainwayBase::setDefaultID(const rho::String& id)
{
    LOG(TRACE) + "setDefaultID: " + id;

    JNIEnv *env = jniInit();
    if (!env) {
        LOG(FATAL) + "JNI initialization failed";
        return;
    }

    jhobject instance = getSingleton(env);
    jhstring jhId = rho_cast<jstring>(env, id);
    env->CallVoidMethod(instance.get(), s_midSetDefaultID, jhId.get());
}
//----------------------------------------------------------------------------------------------------------------------

jobject CBarcodeChainwayBase::getFactory(JNIEnv* env)
{
    jobject res = env->CallStaticObjectMethod(s_clsFactorySingleton, s_midFactoryGetInstance);
    return res;
}
//----------------------------------------------------------------------------------------------------------------------

jobject CBarcodeChainwayBase::getSingleton(JNIEnv* env)
{
    jhobject jhFactory = getFactory(env);
    jobject res = env->CallObjectMethod(jhFactory.get(), s_midGetApiSingleton);
    return res;
}
//----------------------------------------------------------------------------------------------------------------------

jobject CBarcodeChainwayBase::getObject(JNIEnv* env)
{
    jhstring jhId = rho_cast<jstring>(env, m_id);
    jhobject jhFactory = getFactory(env);
    jobject res = env->CallObjectMethod(jhFactory.get(), s_midGetApiObject, jhId.get());
    return res;
}
//----------------------------------------------------------------------------------------------------------------------


}
