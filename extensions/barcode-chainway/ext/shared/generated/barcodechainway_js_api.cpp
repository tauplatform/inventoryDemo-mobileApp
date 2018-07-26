#include "api_generator/js_helpers.h"
#include "api_generator/Api.h"

#include "logging/RhoLog.h"
#undef DEFAULT_LOGCATEGORY
#define DEFAULT_LOGCATEGORY "BarcodeChainway"




rho::String js_BarcodeChainway_getAutoEnter(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getAutoEnter(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setAutoEnter(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setAutoEnter(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getAutoTab(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getAutoTab(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setAutoTab(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setAutoTab(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getHapticFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getHapticFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setHapticFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setHapticFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getLinearSecurityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getLinearSecurityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setLinearSecurityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setLinearSecurityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getScanTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getScanTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setScanTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setScanTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRasterMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRasterMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRasterMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRasterMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRasterHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRasterHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRasterHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRasterHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getAimType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getAimType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setAimType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setAimType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getTimedAimDuration(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getTimedAimDuration(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setTimedAimDuration(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setTimedAimDuration(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getSameSymbolTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getSameSymbolTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setSameSymbolTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setSameSymbolTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDifferentSymbolTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDifferentSymbolTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDifferentSymbolTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDifferentSymbolTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getAimMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getAimMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setAimMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setAimMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getPicklistMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getPicklistMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setPicklistMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setPicklistMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getViewfinderMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getViewfinderMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setViewfinderMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setViewfinderMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getViewfinderX(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getViewfinderX(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setViewfinderX(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setViewfinderX(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getViewfinderY(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getViewfinderY(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setViewfinderY(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setViewfinderY(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getViewfinderWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getViewfinderWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setViewfinderWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setViewfinderWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getViewfinderHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getViewfinderHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setViewfinderHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setViewfinderHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getViewfinderFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getViewfinderFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setViewfinderFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setViewfinderFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getViewfinderFeedbackTime(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getViewfinderFeedbackTime(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setViewfinderFeedbackTime(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setViewfinderFeedbackTime(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getFocusMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getFocusMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setFocusMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setFocusMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getIlluminationMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getIlluminationMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setIlluminationMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setIlluminationMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDpmMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDpmMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDpmMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDpmMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getInverse1dMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getInverse1dMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setInverse1dMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setInverse1dMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getPoorQuality1dMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getPoorQuality1dMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setPoorQuality1dMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setPoorQuality1dMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getBeamWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getBeamWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setBeamWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setBeamWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDbpMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDbpMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDbpMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDbpMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getKlasseEins(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getKlasseEins(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setKlasseEins(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setKlasseEins(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getAdaptiveScanning(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getAdaptiveScanning(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setAdaptiveScanning(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setAdaptiveScanning(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getBidirectionalRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getBidirectionalRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setBidirectionalRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setBidirectionalRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getBarcodeDataFormat(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getBarcodeDataFormat(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setBarcodeDataFormat(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setBarcodeDataFormat(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDataBufferSize(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDataBufferSize(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDataBufferSize(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDataBufferSize(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getConnectionIdleTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getConnectionIdleTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setConnectionIdleTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setConnectionIdleTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDisconnectBtOnDisable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDisconnectBtOnDisable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDisconnectBtOnDisable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDisconnectBtOnDisable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDisplayBtAddressBarcodeOnEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDisplayBtAddressBarcodeOnEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDisplayBtAddressBarcodeOnEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDisplayBtAddressBarcodeOnEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getEnableTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getEnableTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setEnableTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setEnableTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getFriendlyName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getFriendlyName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getLcdMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getLcdMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setLcdMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setLcdMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getLowBatteryScan(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getLowBatteryScan(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setLowBatteryScan(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setLowBatteryScan(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getTriggerConnected(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getTriggerConnected(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setTriggerConnected(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setTriggerConnected(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDisableScannerDuringNavigate(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDisableScannerDuringNavigate(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDisableScannerDuringNavigate(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDisableScannerDuringNavigate(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDecodeVolume(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDecodeVolume(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDecodeVolume(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDecodeVolume(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDecodeDuration(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDecodeDuration(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDecodeDuration(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDecodeDuration(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDecodeFrequency(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDecodeFrequency(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDecodeFrequency(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDecodeFrequency(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getInvalidDecodeFrequency(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getInvalidDecodeFrequency(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setInvalidDecodeFrequency(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setInvalidDecodeFrequency(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDecodeSound(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDecodeSound(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDecodeSound(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDecodeSound(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getInvalidDecodeSound(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getInvalidDecodeSound(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setInvalidDecodeSound(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setInvalidDecodeSound(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getScannerType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getScannerType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getAllDecoders(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getAllDecoders(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setAllDecoders(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setAllDecoders(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getAztec(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getAztec(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setAztec(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setAztec(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getChinese2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getChinese2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setChinese2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setChinese2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCodabar(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCodabar(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCodabar(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCodabar(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCodabarClsiEditing(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCodabarClsiEditing(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCodabarClsiEditing(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCodabarClsiEditing(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCodabarMaxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCodabarMaxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCodabarMaxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCodabarMaxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCodabarMinLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCodabarMinLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCodabarMinLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCodabarMinLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCodabarNotisEditing(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCodabarNotisEditing(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCodabarNotisEditing(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCodabarNotisEditing(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCodabarRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCodabarRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCodabarRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCodabarRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode11(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode11(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode11(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode11(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode11checkDigitCount(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode11checkDigitCount(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode11checkDigitCount(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode11checkDigitCount(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode11maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode11maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode11maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode11maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode11minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode11minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode11minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode11minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode11redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode11redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode11redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode11redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode11reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode11reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode11reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode11reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode128checkIsBtTable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode128checkIsBtTable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode128checkIsBtTable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode128checkIsBtTable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode128ean128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode128ean128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode128ean128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode128ean128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode128isbt128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode128isbt128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode128isbt128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode128isbt128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode128isbt128ConcatMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode128isbt128ConcatMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode128isbt128ConcatMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode128isbt128ConcatMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode128maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode128maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode128maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode128maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode128minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode128minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode128minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode128minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode128other128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode128other128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode128other128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode128other128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode128redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode128redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode128redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode128redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode128securityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode128securityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode128securityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode128securityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCompositeAb(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCompositeAb(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCompositeAb(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCompositeAb(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCompositeAbUccLinkMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCompositeAbUccLinkMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCompositeAbUccLinkMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCompositeAbUccLinkMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCompositeAbUseUpcPreambleCheckDigitRules(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCompositeAbUseUpcPreambleCheckDigitRules(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCompositeAbUseUpcPreambleCheckDigitRules(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCompositeAbUseUpcPreambleCheckDigitRules(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCompositeC(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCompositeC(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCompositeC(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCompositeC(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode39code32Prefix(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode39code32Prefix(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode39code32Prefix(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode39code32Prefix(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode39convertToCode32(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode39convertToCode32(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode39convertToCode32(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode39convertToCode32(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode39fullAscii(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode39fullAscii(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode39fullAscii(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode39fullAscii(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode39maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode39maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode39maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode39maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode39minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode39minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode39minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode39minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode39redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode39redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode39redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode39redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode39reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode39reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode39reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode39reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode39securityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode39securityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode39securityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode39securityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode39verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode39verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode39verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode39verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode93(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode93(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode93(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode93(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode93maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode93maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode93maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode93maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode93minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode93minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode93minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode93minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCode93redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCode93redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCode93redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCode93redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getD2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getD2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setD2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setD2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getD2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getD2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setD2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setD2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getD2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getD2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setD2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setD2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getD2of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getD2of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setD2of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setD2of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDatamatrix(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDatamatrix(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDatamatrix(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDatamatrix(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getEan8(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getEan8(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setEan8(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setEan8(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getEan8convertToEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getEan8convertToEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setEan8convertToEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setEan8convertToEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getI2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getI2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setI2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setI2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getI2of5convertToEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getI2of5convertToEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setI2of5convertToEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setI2of5convertToEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getI2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getI2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setI2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setI2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getI2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getI2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setI2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setI2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getI2of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getI2of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setI2of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setI2of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getI2of5reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getI2of5reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setI2of5reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setI2of5reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getI2of5verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getI2of5verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setI2of5verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setI2of5verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getKorean3of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getKorean3of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setKorean3of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setKorean3of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getKorean3of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getKorean3of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setKorean3of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setKorean3of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getKorean3of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getKorean3of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setKorean3of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setKorean3of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getKorean3of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getKorean3of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setKorean3of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setKorean3of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMacroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMacroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMacroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMacroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMacroPdfBufferLabels(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMacroPdfBufferLabels(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMacroPdfBufferLabels(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMacroPdfBufferLabels(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMacroPdfConvertToPdf417(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMacroPdfConvertToPdf417(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMacroPdfConvertToPdf417(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMacroPdfConvertToPdf417(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMacroPdfExclusive(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMacroPdfExclusive(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMacroPdfExclusive(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMacroPdfExclusive(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMacroMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMacroMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMacroMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMacroMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMacroMicroPdfBufferLabels(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMacroMicroPdfBufferLabels(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMacroMicroPdfBufferLabels(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMacroMicroPdfBufferLabels(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMacroMicroPdfConvertToMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMacroMicroPdfConvertToMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMacroMicroPdfConvertToMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMacroMicroPdfConvertToMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMacroMicroPdfExclusive(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMacroMicroPdfExclusive(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMacroMicroPdfExclusive(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMacroMicroPdfExclusive(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMacroMicroPdfReportAppendInfo(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMacroMicroPdfReportAppendInfo(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMacroMicroPdfReportAppendInfo(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMacroMicroPdfReportAppendInfo(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMatrix2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMatrix2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMatrix2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMatrix2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMatrix2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMatrix2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMatrix2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMatrix2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMatrix2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMatrix2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMatrix2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMatrix2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMatrix2of5reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMatrix2of5reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMatrix2of5reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMatrix2of5reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMatrix2of5verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMatrix2of5verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMatrix2of5verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMatrix2of5verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMaxiCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMaxiCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMaxiCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMaxiCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMicroQr(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMicroQr(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMicroQr(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMicroQr(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMsi(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMsi(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMsi(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMsi(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMsiCheckDigits(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMsiCheckDigits(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMsiCheckDigits(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMsiCheckDigits(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMsiCheckDigitScheme(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMsiCheckDigitScheme(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMsiCheckDigitScheme(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMsiCheckDigitScheme(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMsiMaxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMsiMaxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMsiMaxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMsiMaxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMsiMinLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMsiMinLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMsiMinLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMsiMinLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMsiRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMsiRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMsiRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMsiRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getMsiReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getMsiReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setMsiReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setMsiReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getPdf417(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getPdf417(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setPdf417(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setPdf417(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getSignature(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getSignature(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setSignature(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setSignature(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getSignatureImageHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getSignatureImageHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setSignatureImageHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setSignatureImageHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getSignatureImageWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getSignatureImageWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setSignatureImageWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setSignatureImageWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getSignatureImageQuality(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getSignatureImageQuality(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setSignatureImageQuality(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setSignatureImageQuality(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getAusPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getAusPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setAusPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setAusPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getCanPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getCanPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setCanPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setCanPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getDutchPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getDutchPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setDutchPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setDutchPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getJapPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getJapPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setJapPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setJapPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUkPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUkPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUkPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUkPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUkPostalReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUkPostalReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUkPostalReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUkPostalReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUs4state(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUs4state(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUs4state(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUs4state(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUs4stateFics(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUs4stateFics(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUs4stateFics(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUs4stateFics(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUsPlanet(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUsPlanet(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUsPlanet(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUsPlanet(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUsPlanetReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUsPlanetReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUsPlanetReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUsPlanetReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUsPostNet(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUsPostNet(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUsPostNet(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUsPostNet(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUsPostNetReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUsPostNetReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUsPostNetReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUsPostNetReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getQrCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getQrCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setQrCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setQrCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getGs1dataBar(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getGs1dataBar(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setGs1dataBar(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setGs1dataBar(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getGs1dataBarExpanded(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getGs1dataBarExpanded(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setGs1dataBarExpanded(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setGs1dataBarExpanded(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getGs1dataBarLimited(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getGs1dataBarLimited(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setGs1dataBarLimited(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setGs1dataBarLimited(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getTlc39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getTlc39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setTlc39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setTlc39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getTrioptic39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getTrioptic39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setTrioptic39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setTrioptic39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getTrioptic39Redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getTrioptic39Redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setTrioptic39Redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setTrioptic39Redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcEanBookland(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcEanBookland(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcEanBookland(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcEanBookland(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcEanBooklandFormat(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcEanBooklandFormat(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcEanBooklandFormat(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcEanBooklandFormat(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcEanConvertGs1dataBarToUpcEan(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcEanConvertGs1dataBarToUpcEan(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcEanConvertGs1dataBarToUpcEan(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcEanConvertGs1dataBarToUpcEan(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcEanCoupon(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcEanCoupon(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcEanCoupon(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcEanCoupon(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcEanLinearDecode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcEanLinearDecode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcEanLinearDecode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcEanLinearDecode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcEanRandomWeightCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcEanRandomWeightCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcEanRandomWeightCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcEanRandomWeightCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcEanRetryCount(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcEanRetryCount(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcEanRetryCount(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcEanRetryCount(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcEanSecurityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcEanSecurityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcEanSecurityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcEanSecurityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcEanSupplemental2(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcEanSupplemental2(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcEanSupplemental2(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcEanSupplemental2(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcEanSupplemental5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcEanSupplemental5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcEanSupplemental5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcEanSupplemental5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcEanSupplementalMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcEanSupplementalMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcEanSupplementalMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcEanSupplementalMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcaPreamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcaPreamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcaPreamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcaPreamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpcaReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpcaReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpcaReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpcaReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpce0(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpce0(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpce0(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpce0(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpce0convertToUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpce0convertToUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpce0convertToUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpce0convertToUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpce0preamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpce0preamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpce0preamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpce0preamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpce0reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpce0reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpce0reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpce0reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpce1(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpce1(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpce1(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpce1(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpce1convertToUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpce1convertToUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpce1convertToUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpce1convertToUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpce1preamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpce1preamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpce1preamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpce1preamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getUpce1reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getUpce1reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setUpce1reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setUpce1reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getWebcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getWebcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setWebcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setWebcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getWebcodeDecodeGtSubtype(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getWebcodeDecodeGtSubtype(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setWebcodeDecodeGtSubtype(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setWebcodeDecodeGtSubtype(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmModelNumber(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmModelNumber(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmSerialNumber(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmSerialNumber(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmDateOfManufacture(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmDateOfManufacture(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmDateOfService(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmDateOfService(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBluetoothAddress(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBluetoothAddress(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmFirmwareVersion(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmFirmwareVersion(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmDeviceClass(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmDeviceClass(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBatteryStatus(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBatteryStatus(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBatteryCapacity(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBatteryCapacity(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBatteryId(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBatteryId(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBluetoothAuthentication(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBluetoothAuthentication(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmBluetoothAuthentication(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmBluetoothAuthentication(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBluetoothEncryption(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBluetoothEncryption(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmBluetoothEncryption(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmBluetoothEncryption(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBluetoothPinCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBluetoothPinCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmBluetoothPinCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmBluetoothPinCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBluetoothPinCodeType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBluetoothPinCodeType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmBluetoothPinCodeType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmBluetoothPinCodeType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBluetoothReconnectionAttempts(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBluetoothReconnectionAttempts(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmBluetoothReconnectionAttempts(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmBluetoothReconnectionAttempts(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBluetoothBeepOnReconnectAttempt(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBluetoothBeepOnReconnectAttempt(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmBluetoothBeepOnReconnectAttempt(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmBluetoothBeepOnReconnectAttempt(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBluetoothHidAutoReconnect(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBluetoothHidAutoReconnect(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmBluetoothHidAutoReconnect(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmBluetoothHidAutoReconnect(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBluetoothFriendlyName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBluetoothFriendlyName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmBluetoothFriendlyName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmBluetoothFriendlyName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBluetoothInquiryMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBluetoothInquiryMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmBluetoothInquiryMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmBluetoothInquiryMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmBluetoothAutoReconnect(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmBluetoothAutoReconnect(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmBluetoothAutoReconnect(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmBluetoothAutoReconnect(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmForceSavePairingBarcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmForceSavePairingBarcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmForceSavePairingBarcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmForceSavePairingBarcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmLowBatteryIndication(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmLowBatteryIndication(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmLowBatteryIndication(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmLowBatteryIndication(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmLowBatteryIndicationCycle(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmLowBatteryIndicationCycle(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmLowBatteryIndicationCycle(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmLowBatteryIndicationCycle(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmScanLineWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmScanLineWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmScanLineWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmScanLineWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmGoodScansDelay(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmGoodScansDelay(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmGoodScansDelay(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmGoodScansDelay(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmDecodeFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmDecodeFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmDecodeFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmDecodeFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmIgnoreCode128Usps(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmIgnoreCode128Usps(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmIgnoreCode128Usps(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmIgnoreCode128Usps(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmScanTriggerWakeup(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmScanTriggerWakeup(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmScanTriggerWakeup(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmScanTriggerWakeup(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmMems(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmMems(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmMems(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmMems(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmProximityEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmProximityEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmProximityEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmProximityEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmProximityContinuous(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmProximityContinuous(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmProximityContinuous(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmProximityContinuous(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmProximityDistance(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmProximityDistance(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmProximityDistance(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmProximityDistance(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmPagingEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmPagingEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmPagingEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmPagingEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getRsmPagingBeepSequence(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getRsmPagingBeepSequence(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setRsmPagingBeepSequence(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setRsmPagingBeepSequence(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_s_BarcodeChainway_enumerate(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_enable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_enable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_registerBluetoothStatus(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_registerBluetoothStatus(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_start(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_start(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_stop(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_stop(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_disable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_disable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_barcode_recognize(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_barcode_recognize(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getSupportedProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getSupportedProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_take(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_take(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_take_barcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_take_barcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_commandRemoteScanner(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_commandRemoteScanner(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_getAllProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_getAllProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_BarcodeChainway_setProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_def_setProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);



rho::String js_s_BarcodeChainway_getDefaultID(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_getDefault(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_BarcodeChainway_setDefaultID(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);



namespace {
  using namespace rho::apiGenerator;
  class BarcodeChainwayDispatcher : public ApiHandler<Func_JS>
  {
  public:
    BarcodeChainwayDispatcher() : ApiHandler("Rho:BarcodeChainway") {}
    virtual ~BarcodeChainwayDispatcher() {}
    virtual void initialize();
  };
  
  void BarcodeChainwayDispatcher::initialize()
  {
    ApiHandler<Func_JS>::initialize();
    
    RAWTRACE("Initializing Rho:BarcodeChainway API...");


    defineInstanceMethod("autoEnter", js_BarcodeChainway_getAutoEnter);
    //  should define static method !     defineStaticMethod("def_autoEnter", js_s_BarcodeChainway_def_getAutoEnter);;


    defineInstanceMethod("autoEnter=", js_BarcodeChainway_setAutoEnter);
    //  should define static method !     defineStaticMethod("def_autoEnter=", js_s_BarcodeChainway_def_setAutoEnter);;


    defineInstanceMethod("autoTab", js_BarcodeChainway_getAutoTab);
    //  should define static method !     defineStaticMethod("def_autoTab", js_s_BarcodeChainway_def_getAutoTab);;


    defineInstanceMethod("autoTab=", js_BarcodeChainway_setAutoTab);
    //  should define static method !     defineStaticMethod("def_autoTab=", js_s_BarcodeChainway_def_setAutoTab);;


    defineInstanceMethod("hapticFeedback", js_BarcodeChainway_getHapticFeedback);
    //  should define static method !     defineStaticMethod("def_hapticFeedback", js_s_BarcodeChainway_def_getHapticFeedback);;


    defineInstanceMethod("hapticFeedback=", js_BarcodeChainway_setHapticFeedback);
    //  should define static method !     defineStaticMethod("def_hapticFeedback=", js_s_BarcodeChainway_def_setHapticFeedback);;


    defineInstanceMethod("linearSecurityLevel", js_BarcodeChainway_getLinearSecurityLevel);
    //  should define static method !     defineStaticMethod("def_linearSecurityLevel", js_s_BarcodeChainway_def_getLinearSecurityLevel);;


    defineInstanceMethod("linearSecurityLevel=", js_BarcodeChainway_setLinearSecurityLevel);
    //  should define static method !     defineStaticMethod("def_linearSecurityLevel=", js_s_BarcodeChainway_def_setLinearSecurityLevel);;


    defineInstanceMethod("scanTimeout", js_BarcodeChainway_getScanTimeout);
    //  should define static method !     defineStaticMethod("def_scanTimeout", js_s_BarcodeChainway_def_getScanTimeout);;


    defineInstanceMethod("scanTimeout=", js_BarcodeChainway_setScanTimeout);
    //  should define static method !     defineStaticMethod("def_scanTimeout=", js_s_BarcodeChainway_def_setScanTimeout);;


    defineInstanceMethod("rasterMode", js_BarcodeChainway_getRasterMode);
    //  should define static method !     defineStaticMethod("def_rasterMode", js_s_BarcodeChainway_def_getRasterMode);;


    defineInstanceMethod("rasterMode=", js_BarcodeChainway_setRasterMode);
    //  should define static method !     defineStaticMethod("def_rasterMode=", js_s_BarcodeChainway_def_setRasterMode);;


    defineInstanceMethod("rasterHeight", js_BarcodeChainway_getRasterHeight);
    //  should define static method !     defineStaticMethod("def_rasterHeight", js_s_BarcodeChainway_def_getRasterHeight);;


    defineInstanceMethod("rasterHeight=", js_BarcodeChainway_setRasterHeight);
    //  should define static method !     defineStaticMethod("def_rasterHeight=", js_s_BarcodeChainway_def_setRasterHeight);;


    defineInstanceMethod("aimType", js_BarcodeChainway_getAimType);
    //  should define static method !     defineStaticMethod("def_aimType", js_s_BarcodeChainway_def_getAimType);;


    defineInstanceMethod("aimType=", js_BarcodeChainway_setAimType);
    //  should define static method !     defineStaticMethod("def_aimType=", js_s_BarcodeChainway_def_setAimType);;


    defineInstanceMethod("timedAimDuration", js_BarcodeChainway_getTimedAimDuration);
    //  should define static method !     defineStaticMethod("def_timedAimDuration", js_s_BarcodeChainway_def_getTimedAimDuration);;


    defineInstanceMethod("timedAimDuration=", js_BarcodeChainway_setTimedAimDuration);
    //  should define static method !     defineStaticMethod("def_timedAimDuration=", js_s_BarcodeChainway_def_setTimedAimDuration);;


    defineInstanceMethod("sameSymbolTimeout", js_BarcodeChainway_getSameSymbolTimeout);
    //  should define static method !     defineStaticMethod("def_sameSymbolTimeout", js_s_BarcodeChainway_def_getSameSymbolTimeout);;


    defineInstanceMethod("sameSymbolTimeout=", js_BarcodeChainway_setSameSymbolTimeout);
    //  should define static method !     defineStaticMethod("def_sameSymbolTimeout=", js_s_BarcodeChainway_def_setSameSymbolTimeout);;


    defineInstanceMethod("differentSymbolTimeout", js_BarcodeChainway_getDifferentSymbolTimeout);
    //  should define static method !     defineStaticMethod("def_differentSymbolTimeout", js_s_BarcodeChainway_def_getDifferentSymbolTimeout);;


    defineInstanceMethod("differentSymbolTimeout=", js_BarcodeChainway_setDifferentSymbolTimeout);
    //  should define static method !     defineStaticMethod("def_differentSymbolTimeout=", js_s_BarcodeChainway_def_setDifferentSymbolTimeout);;


    defineInstanceMethod("aimMode", js_BarcodeChainway_getAimMode);
    //  should define static method !     defineStaticMethod("def_aimMode", js_s_BarcodeChainway_def_getAimMode);;


    defineInstanceMethod("aimMode=", js_BarcodeChainway_setAimMode);
    //  should define static method !     defineStaticMethod("def_aimMode=", js_s_BarcodeChainway_def_setAimMode);;


    defineInstanceMethod("picklistMode", js_BarcodeChainway_getPicklistMode);
    //  should define static method !     defineStaticMethod("def_picklistMode", js_s_BarcodeChainway_def_getPicklistMode);;


    defineInstanceMethod("picklistMode=", js_BarcodeChainway_setPicklistMode);
    //  should define static method !     defineStaticMethod("def_picklistMode=", js_s_BarcodeChainway_def_setPicklistMode);;


    defineInstanceMethod("viewfinderMode", js_BarcodeChainway_getViewfinderMode);
    //  should define static method !     defineStaticMethod("def_viewfinderMode", js_s_BarcodeChainway_def_getViewfinderMode);;


    defineInstanceMethod("viewfinderMode=", js_BarcodeChainway_setViewfinderMode);
    //  should define static method !     defineStaticMethod("def_viewfinderMode=", js_s_BarcodeChainway_def_setViewfinderMode);;


    defineInstanceMethod("viewfinderX", js_BarcodeChainway_getViewfinderX);
    //  should define static method !     defineStaticMethod("def_viewfinderX", js_s_BarcodeChainway_def_getViewfinderX);;


    defineInstanceMethod("viewfinderX=", js_BarcodeChainway_setViewfinderX);
    //  should define static method !     defineStaticMethod("def_viewfinderX=", js_s_BarcodeChainway_def_setViewfinderX);;


    defineInstanceMethod("viewfinderY", js_BarcodeChainway_getViewfinderY);
    //  should define static method !     defineStaticMethod("def_viewfinderY", js_s_BarcodeChainway_def_getViewfinderY);;


    defineInstanceMethod("viewfinderY=", js_BarcodeChainway_setViewfinderY);
    //  should define static method !     defineStaticMethod("def_viewfinderY=", js_s_BarcodeChainway_def_setViewfinderY);;


    defineInstanceMethod("viewfinderWidth", js_BarcodeChainway_getViewfinderWidth);
    //  should define static method !     defineStaticMethod("def_viewfinderWidth", js_s_BarcodeChainway_def_getViewfinderWidth);;


    defineInstanceMethod("viewfinderWidth=", js_BarcodeChainway_setViewfinderWidth);
    //  should define static method !     defineStaticMethod("def_viewfinderWidth=", js_s_BarcodeChainway_def_setViewfinderWidth);;


    defineInstanceMethod("viewfinderHeight", js_BarcodeChainway_getViewfinderHeight);
    //  should define static method !     defineStaticMethod("def_viewfinderHeight", js_s_BarcodeChainway_def_getViewfinderHeight);;


    defineInstanceMethod("viewfinderHeight=", js_BarcodeChainway_setViewfinderHeight);
    //  should define static method !     defineStaticMethod("def_viewfinderHeight=", js_s_BarcodeChainway_def_setViewfinderHeight);;


    defineInstanceMethod("viewfinderFeedback", js_BarcodeChainway_getViewfinderFeedback);
    //  should define static method !     defineStaticMethod("def_viewfinderFeedback", js_s_BarcodeChainway_def_getViewfinderFeedback);;


    defineInstanceMethod("viewfinderFeedback=", js_BarcodeChainway_setViewfinderFeedback);
    //  should define static method !     defineStaticMethod("def_viewfinderFeedback=", js_s_BarcodeChainway_def_setViewfinderFeedback);;


    defineInstanceMethod("viewfinderFeedbackTime", js_BarcodeChainway_getViewfinderFeedbackTime);
    //  should define static method !     defineStaticMethod("def_viewfinderFeedbackTime", js_s_BarcodeChainway_def_getViewfinderFeedbackTime);;


    defineInstanceMethod("viewfinderFeedbackTime=", js_BarcodeChainway_setViewfinderFeedbackTime);
    //  should define static method !     defineStaticMethod("def_viewfinderFeedbackTime=", js_s_BarcodeChainway_def_setViewfinderFeedbackTime);;


    defineInstanceMethod("focusMode", js_BarcodeChainway_getFocusMode);
    //  should define static method !     defineStaticMethod("def_focusMode", js_s_BarcodeChainway_def_getFocusMode);;


    defineInstanceMethod("focusMode=", js_BarcodeChainway_setFocusMode);
    //  should define static method !     defineStaticMethod("def_focusMode=", js_s_BarcodeChainway_def_setFocusMode);;


    defineInstanceMethod("illuminationMode", js_BarcodeChainway_getIlluminationMode);
    //  should define static method !     defineStaticMethod("def_illuminationMode", js_s_BarcodeChainway_def_getIlluminationMode);;


    defineInstanceMethod("illuminationMode=", js_BarcodeChainway_setIlluminationMode);
    //  should define static method !     defineStaticMethod("def_illuminationMode=", js_s_BarcodeChainway_def_setIlluminationMode);;


    defineInstanceMethod("dpmMode", js_BarcodeChainway_getDpmMode);
    //  should define static method !     defineStaticMethod("def_dpmMode", js_s_BarcodeChainway_def_getDpmMode);;


    defineInstanceMethod("dpmMode=", js_BarcodeChainway_setDpmMode);
    //  should define static method !     defineStaticMethod("def_dpmMode=", js_s_BarcodeChainway_def_setDpmMode);;


    defineInstanceMethod("inverse1dMode", js_BarcodeChainway_getInverse1dMode);
    //  should define static method !     defineStaticMethod("def_inverse1dMode", js_s_BarcodeChainway_def_getInverse1dMode);;


    defineInstanceMethod("inverse1dMode=", js_BarcodeChainway_setInverse1dMode);
    //  should define static method !     defineStaticMethod("def_inverse1dMode=", js_s_BarcodeChainway_def_setInverse1dMode);;


    defineInstanceMethod("poorQuality1dMode", js_BarcodeChainway_getPoorQuality1dMode);
    //  should define static method !     defineStaticMethod("def_poorQuality1dMode", js_s_BarcodeChainway_def_getPoorQuality1dMode);;


    defineInstanceMethod("poorQuality1dMode=", js_BarcodeChainway_setPoorQuality1dMode);
    //  should define static method !     defineStaticMethod("def_poorQuality1dMode=", js_s_BarcodeChainway_def_setPoorQuality1dMode);;


    defineInstanceMethod("beamWidth", js_BarcodeChainway_getBeamWidth);
    //  should define static method !     defineStaticMethod("def_beamWidth", js_s_BarcodeChainway_def_getBeamWidth);;


    defineInstanceMethod("beamWidth=", js_BarcodeChainway_setBeamWidth);
    //  should define static method !     defineStaticMethod("def_beamWidth=", js_s_BarcodeChainway_def_setBeamWidth);;


    defineInstanceMethod("dbpMode", js_BarcodeChainway_getDbpMode);
    //  should define static method !     defineStaticMethod("def_dbpMode", js_s_BarcodeChainway_def_getDbpMode);;


    defineInstanceMethod("dbpMode=", js_BarcodeChainway_setDbpMode);
    //  should define static method !     defineStaticMethod("def_dbpMode=", js_s_BarcodeChainway_def_setDbpMode);;


    defineInstanceMethod("klasseEins", js_BarcodeChainway_getKlasseEins);
    //  should define static method !     defineStaticMethod("def_klasseEins", js_s_BarcodeChainway_def_getKlasseEins);;


    defineInstanceMethod("klasseEins=", js_BarcodeChainway_setKlasseEins);
    //  should define static method !     defineStaticMethod("def_klasseEins=", js_s_BarcodeChainway_def_setKlasseEins);;


    defineInstanceMethod("adaptiveScanning", js_BarcodeChainway_getAdaptiveScanning);
    //  should define static method !     defineStaticMethod("def_adaptiveScanning", js_s_BarcodeChainway_def_getAdaptiveScanning);;


    defineInstanceMethod("adaptiveScanning=", js_BarcodeChainway_setAdaptiveScanning);
    //  should define static method !     defineStaticMethod("def_adaptiveScanning=", js_s_BarcodeChainway_def_setAdaptiveScanning);;


    defineInstanceMethod("bidirectionalRedundancy", js_BarcodeChainway_getBidirectionalRedundancy);
    //  should define static method !     defineStaticMethod("def_bidirectionalRedundancy", js_s_BarcodeChainway_def_getBidirectionalRedundancy);;


    defineInstanceMethod("bidirectionalRedundancy=", js_BarcodeChainway_setBidirectionalRedundancy);
    //  should define static method !     defineStaticMethod("def_bidirectionalRedundancy=", js_s_BarcodeChainway_def_setBidirectionalRedundancy);;


    defineInstanceMethod("barcodeDataFormat", js_BarcodeChainway_getBarcodeDataFormat);
    //  should define static method !     defineStaticMethod("def_barcodeDataFormat", js_s_BarcodeChainway_def_getBarcodeDataFormat);;


    defineInstanceMethod("barcodeDataFormat=", js_BarcodeChainway_setBarcodeDataFormat);
    //  should define static method !     defineStaticMethod("def_barcodeDataFormat=", js_s_BarcodeChainway_def_setBarcodeDataFormat);;


    defineInstanceMethod("dataBufferSize", js_BarcodeChainway_getDataBufferSize);
    //  should define static method !     defineStaticMethod("def_dataBufferSize", js_s_BarcodeChainway_def_getDataBufferSize);;


    defineInstanceMethod("dataBufferSize=", js_BarcodeChainway_setDataBufferSize);
    //  should define static method !     defineStaticMethod("def_dataBufferSize=", js_s_BarcodeChainway_def_setDataBufferSize);;


    defineInstanceMethod("connectionIdleTimeout", js_BarcodeChainway_getConnectionIdleTimeout);
    //  should define static method !     defineStaticMethod("def_connectionIdleTimeout", js_s_BarcodeChainway_def_getConnectionIdleTimeout);;


    defineInstanceMethod("connectionIdleTimeout=", js_BarcodeChainway_setConnectionIdleTimeout);
    //  should define static method !     defineStaticMethod("def_connectionIdleTimeout=", js_s_BarcodeChainway_def_setConnectionIdleTimeout);;


    defineInstanceMethod("disconnectBtOnDisable", js_BarcodeChainway_getDisconnectBtOnDisable);
    //  should define static method !     defineStaticMethod("def_disconnectBtOnDisable", js_s_BarcodeChainway_def_getDisconnectBtOnDisable);;


    defineInstanceMethod("disconnectBtOnDisable=", js_BarcodeChainway_setDisconnectBtOnDisable);
    //  should define static method !     defineStaticMethod("def_disconnectBtOnDisable=", js_s_BarcodeChainway_def_setDisconnectBtOnDisable);;


    defineInstanceMethod("displayBtAddressBarcodeOnEnable", js_BarcodeChainway_getDisplayBtAddressBarcodeOnEnable);
    //  should define static method !     defineStaticMethod("def_displayBtAddressBarcodeOnEnable", js_s_BarcodeChainway_def_getDisplayBtAddressBarcodeOnEnable);;


    defineInstanceMethod("displayBtAddressBarcodeOnEnable=", js_BarcodeChainway_setDisplayBtAddressBarcodeOnEnable);
    //  should define static method !     defineStaticMethod("def_displayBtAddressBarcodeOnEnable=", js_s_BarcodeChainway_def_setDisplayBtAddressBarcodeOnEnable);;


    defineInstanceMethod("enableTimeout", js_BarcodeChainway_getEnableTimeout);
    //  should define static method !     defineStaticMethod("def_enableTimeout", js_s_BarcodeChainway_def_getEnableTimeout);;


    defineInstanceMethod("enableTimeout=", js_BarcodeChainway_setEnableTimeout);
    //  should define static method !     defineStaticMethod("def_enableTimeout=", js_s_BarcodeChainway_def_setEnableTimeout);;


    defineInstanceMethod("friendlyName", js_BarcodeChainway_getFriendlyName);
    //  should define static method !     defineStaticMethod("def_friendlyName", js_s_BarcodeChainway_def_getFriendlyName);;


    defineInstanceMethod("lcdMode", js_BarcodeChainway_getLcdMode);
    //  should define static method !     defineStaticMethod("def_lcdMode", js_s_BarcodeChainway_def_getLcdMode);;


    defineInstanceMethod("lcdMode=", js_BarcodeChainway_setLcdMode);
    //  should define static method !     defineStaticMethod("def_lcdMode=", js_s_BarcodeChainway_def_setLcdMode);;


    defineInstanceMethod("lowBatteryScan", js_BarcodeChainway_getLowBatteryScan);
    //  should define static method !     defineStaticMethod("def_lowBatteryScan", js_s_BarcodeChainway_def_getLowBatteryScan);;


    defineInstanceMethod("lowBatteryScan=", js_BarcodeChainway_setLowBatteryScan);
    //  should define static method !     defineStaticMethod("def_lowBatteryScan=", js_s_BarcodeChainway_def_setLowBatteryScan);;


    defineInstanceMethod("triggerConnected", js_BarcodeChainway_getTriggerConnected);
    //  should define static method !     defineStaticMethod("def_triggerConnected", js_s_BarcodeChainway_def_getTriggerConnected);;


    defineInstanceMethod("triggerConnected=", js_BarcodeChainway_setTriggerConnected);
    //  should define static method !     defineStaticMethod("def_triggerConnected=", js_s_BarcodeChainway_def_setTriggerConnected);;


    defineInstanceMethod("disableScannerDuringNavigate", js_BarcodeChainway_getDisableScannerDuringNavigate);
    //  should define static method !     defineStaticMethod("def_disableScannerDuringNavigate", js_s_BarcodeChainway_def_getDisableScannerDuringNavigate);;


    defineInstanceMethod("disableScannerDuringNavigate=", js_BarcodeChainway_setDisableScannerDuringNavigate);
    //  should define static method !     defineStaticMethod("def_disableScannerDuringNavigate=", js_s_BarcodeChainway_def_setDisableScannerDuringNavigate);;


    defineInstanceMethod("decodeVolume", js_BarcodeChainway_getDecodeVolume);
    //  should define static method !     defineStaticMethod("def_decodeVolume", js_s_BarcodeChainway_def_getDecodeVolume);;


    defineInstanceMethod("decodeVolume=", js_BarcodeChainway_setDecodeVolume);
    //  should define static method !     defineStaticMethod("def_decodeVolume=", js_s_BarcodeChainway_def_setDecodeVolume);;


    defineInstanceMethod("decodeDuration", js_BarcodeChainway_getDecodeDuration);
    //  should define static method !     defineStaticMethod("def_decodeDuration", js_s_BarcodeChainway_def_getDecodeDuration);;


    defineInstanceMethod("decodeDuration=", js_BarcodeChainway_setDecodeDuration);
    //  should define static method !     defineStaticMethod("def_decodeDuration=", js_s_BarcodeChainway_def_setDecodeDuration);;


    defineInstanceMethod("decodeFrequency", js_BarcodeChainway_getDecodeFrequency);
    //  should define static method !     defineStaticMethod("def_decodeFrequency", js_s_BarcodeChainway_def_getDecodeFrequency);;


    defineInstanceMethod("decodeFrequency=", js_BarcodeChainway_setDecodeFrequency);
    //  should define static method !     defineStaticMethod("def_decodeFrequency=", js_s_BarcodeChainway_def_setDecodeFrequency);;


    defineInstanceMethod("invalidDecodeFrequency", js_BarcodeChainway_getInvalidDecodeFrequency);
    //  should define static method !     defineStaticMethod("def_invalidDecodeFrequency", js_s_BarcodeChainway_def_getInvalidDecodeFrequency);;


    defineInstanceMethod("invalidDecodeFrequency=", js_BarcodeChainway_setInvalidDecodeFrequency);
    //  should define static method !     defineStaticMethod("def_invalidDecodeFrequency=", js_s_BarcodeChainway_def_setInvalidDecodeFrequency);;


    defineInstanceMethod("decodeSound", js_BarcodeChainway_getDecodeSound);
    //  should define static method !     defineStaticMethod("def_decodeSound", js_s_BarcodeChainway_def_getDecodeSound);;


    defineInstanceMethod("decodeSound=", js_BarcodeChainway_setDecodeSound);
    //  should define static method !     defineStaticMethod("def_decodeSound=", js_s_BarcodeChainway_def_setDecodeSound);;


    defineInstanceMethod("invalidDecodeSound", js_BarcodeChainway_getInvalidDecodeSound);
    //  should define static method !     defineStaticMethod("def_invalidDecodeSound", js_s_BarcodeChainway_def_getInvalidDecodeSound);;


    defineInstanceMethod("invalidDecodeSound=", js_BarcodeChainway_setInvalidDecodeSound);
    //  should define static method !     defineStaticMethod("def_invalidDecodeSound=", js_s_BarcodeChainway_def_setInvalidDecodeSound);;


    defineInstanceMethod("scannerType", js_BarcodeChainway_getScannerType);
    //  should define static method !     defineStaticMethod("def_scannerType", js_s_BarcodeChainway_def_getScannerType);;


    defineInstanceMethod("allDecoders", js_BarcodeChainway_getAllDecoders);
    //  should define static method !     defineStaticMethod("def_allDecoders", js_s_BarcodeChainway_def_getAllDecoders);;


    defineInstanceMethod("allDecoders=", js_BarcodeChainway_setAllDecoders);
    //  should define static method !     defineStaticMethod("def_allDecoders=", js_s_BarcodeChainway_def_setAllDecoders);;


    defineInstanceMethod("aztec", js_BarcodeChainway_getAztec);
    //  should define static method !     defineStaticMethod("def_aztec", js_s_BarcodeChainway_def_getAztec);;


    defineInstanceMethod("aztec=", js_BarcodeChainway_setAztec);
    //  should define static method !     defineStaticMethod("def_aztec=", js_s_BarcodeChainway_def_setAztec);;


    defineInstanceMethod("chinese2of5", js_BarcodeChainway_getChinese2of5);
    //  should define static method !     defineStaticMethod("def_chinese2of5", js_s_BarcodeChainway_def_getChinese2of5);;


    defineInstanceMethod("chinese2of5=", js_BarcodeChainway_setChinese2of5);
    //  should define static method !     defineStaticMethod("def_chinese2of5=", js_s_BarcodeChainway_def_setChinese2of5);;


    defineInstanceMethod("codabar", js_BarcodeChainway_getCodabar);
    //  should define static method !     defineStaticMethod("def_codabar", js_s_BarcodeChainway_def_getCodabar);;


    defineInstanceMethod("codabar=", js_BarcodeChainway_setCodabar);
    //  should define static method !     defineStaticMethod("def_codabar=", js_s_BarcodeChainway_def_setCodabar);;


    defineInstanceMethod("codabarClsiEditing", js_BarcodeChainway_getCodabarClsiEditing);
    //  should define static method !     defineStaticMethod("def_codabarClsiEditing", js_s_BarcodeChainway_def_getCodabarClsiEditing);;


    defineInstanceMethod("codabarClsiEditing=", js_BarcodeChainway_setCodabarClsiEditing);
    //  should define static method !     defineStaticMethod("def_codabarClsiEditing=", js_s_BarcodeChainway_def_setCodabarClsiEditing);;


    defineInstanceMethod("codabarMaxLength", js_BarcodeChainway_getCodabarMaxLength);
    //  should define static method !     defineStaticMethod("def_codabarMaxLength", js_s_BarcodeChainway_def_getCodabarMaxLength);;


    defineInstanceMethod("codabarMaxLength=", js_BarcodeChainway_setCodabarMaxLength);
    //  should define static method !     defineStaticMethod("def_codabarMaxLength=", js_s_BarcodeChainway_def_setCodabarMaxLength);;


    defineInstanceMethod("codabarMinLength", js_BarcodeChainway_getCodabarMinLength);
    //  should define static method !     defineStaticMethod("def_codabarMinLength", js_s_BarcodeChainway_def_getCodabarMinLength);;


    defineInstanceMethod("codabarMinLength=", js_BarcodeChainway_setCodabarMinLength);
    //  should define static method !     defineStaticMethod("def_codabarMinLength=", js_s_BarcodeChainway_def_setCodabarMinLength);;


    defineInstanceMethod("codabarNotisEditing", js_BarcodeChainway_getCodabarNotisEditing);
    //  should define static method !     defineStaticMethod("def_codabarNotisEditing", js_s_BarcodeChainway_def_getCodabarNotisEditing);;


    defineInstanceMethod("codabarNotisEditing=", js_BarcodeChainway_setCodabarNotisEditing);
    //  should define static method !     defineStaticMethod("def_codabarNotisEditing=", js_s_BarcodeChainway_def_setCodabarNotisEditing);;


    defineInstanceMethod("codabarRedundancy", js_BarcodeChainway_getCodabarRedundancy);
    //  should define static method !     defineStaticMethod("def_codabarRedundancy", js_s_BarcodeChainway_def_getCodabarRedundancy);;


    defineInstanceMethod("codabarRedundancy=", js_BarcodeChainway_setCodabarRedundancy);
    //  should define static method !     defineStaticMethod("def_codabarRedundancy=", js_s_BarcodeChainway_def_setCodabarRedundancy);;


    defineInstanceMethod("code11", js_BarcodeChainway_getCode11);
    //  should define static method !     defineStaticMethod("def_code11", js_s_BarcodeChainway_def_getCode11);;


    defineInstanceMethod("code11=", js_BarcodeChainway_setCode11);
    //  should define static method !     defineStaticMethod("def_code11=", js_s_BarcodeChainway_def_setCode11);;


    defineInstanceMethod("code11checkDigitCount", js_BarcodeChainway_getCode11checkDigitCount);
    //  should define static method !     defineStaticMethod("def_code11checkDigitCount", js_s_BarcodeChainway_def_getCode11checkDigitCount);;


    defineInstanceMethod("code11checkDigitCount=", js_BarcodeChainway_setCode11checkDigitCount);
    //  should define static method !     defineStaticMethod("def_code11checkDigitCount=", js_s_BarcodeChainway_def_setCode11checkDigitCount);;


    defineInstanceMethod("code11maxLength", js_BarcodeChainway_getCode11maxLength);
    //  should define static method !     defineStaticMethod("def_code11maxLength", js_s_BarcodeChainway_def_getCode11maxLength);;


    defineInstanceMethod("code11maxLength=", js_BarcodeChainway_setCode11maxLength);
    //  should define static method !     defineStaticMethod("def_code11maxLength=", js_s_BarcodeChainway_def_setCode11maxLength);;


    defineInstanceMethod("code11minLength", js_BarcodeChainway_getCode11minLength);
    //  should define static method !     defineStaticMethod("def_code11minLength", js_s_BarcodeChainway_def_getCode11minLength);;


    defineInstanceMethod("code11minLength=", js_BarcodeChainway_setCode11minLength);
    //  should define static method !     defineStaticMethod("def_code11minLength=", js_s_BarcodeChainway_def_setCode11minLength);;


    defineInstanceMethod("code11redundancy", js_BarcodeChainway_getCode11redundancy);
    //  should define static method !     defineStaticMethod("def_code11redundancy", js_s_BarcodeChainway_def_getCode11redundancy);;


    defineInstanceMethod("code11redundancy=", js_BarcodeChainway_setCode11redundancy);
    //  should define static method !     defineStaticMethod("def_code11redundancy=", js_s_BarcodeChainway_def_setCode11redundancy);;


    defineInstanceMethod("code11reportCheckDigit", js_BarcodeChainway_getCode11reportCheckDigit);
    //  should define static method !     defineStaticMethod("def_code11reportCheckDigit", js_s_BarcodeChainway_def_getCode11reportCheckDigit);;


    defineInstanceMethod("code11reportCheckDigit=", js_BarcodeChainway_setCode11reportCheckDigit);
    //  should define static method !     defineStaticMethod("def_code11reportCheckDigit=", js_s_BarcodeChainway_def_setCode11reportCheckDigit);;


    defineInstanceMethod("code128", js_BarcodeChainway_getCode128);
    //  should define static method !     defineStaticMethod("def_code128", js_s_BarcodeChainway_def_getCode128);;


    defineInstanceMethod("code128=", js_BarcodeChainway_setCode128);
    //  should define static method !     defineStaticMethod("def_code128=", js_s_BarcodeChainway_def_setCode128);;


    defineInstanceMethod("code128checkIsBtTable", js_BarcodeChainway_getCode128checkIsBtTable);
    //  should define static method !     defineStaticMethod("def_code128checkIsBtTable", js_s_BarcodeChainway_def_getCode128checkIsBtTable);;


    defineInstanceMethod("code128checkIsBtTable=", js_BarcodeChainway_setCode128checkIsBtTable);
    //  should define static method !     defineStaticMethod("def_code128checkIsBtTable=", js_s_BarcodeChainway_def_setCode128checkIsBtTable);;


    defineInstanceMethod("code128ean128", js_BarcodeChainway_getCode128ean128);
    //  should define static method !     defineStaticMethod("def_code128ean128", js_s_BarcodeChainway_def_getCode128ean128);;


    defineInstanceMethod("code128ean128=", js_BarcodeChainway_setCode128ean128);
    //  should define static method !     defineStaticMethod("def_code128ean128=", js_s_BarcodeChainway_def_setCode128ean128);;


    defineInstanceMethod("code128isbt128", js_BarcodeChainway_getCode128isbt128);
    //  should define static method !     defineStaticMethod("def_code128isbt128", js_s_BarcodeChainway_def_getCode128isbt128);;


    defineInstanceMethod("code128isbt128=", js_BarcodeChainway_setCode128isbt128);
    //  should define static method !     defineStaticMethod("def_code128isbt128=", js_s_BarcodeChainway_def_setCode128isbt128);;


    defineInstanceMethod("code128isbt128ConcatMode", js_BarcodeChainway_getCode128isbt128ConcatMode);
    //  should define static method !     defineStaticMethod("def_code128isbt128ConcatMode", js_s_BarcodeChainway_def_getCode128isbt128ConcatMode);;


    defineInstanceMethod("code128isbt128ConcatMode=", js_BarcodeChainway_setCode128isbt128ConcatMode);
    //  should define static method !     defineStaticMethod("def_code128isbt128ConcatMode=", js_s_BarcodeChainway_def_setCode128isbt128ConcatMode);;


    defineInstanceMethod("code128maxLength", js_BarcodeChainway_getCode128maxLength);
    //  should define static method !     defineStaticMethod("def_code128maxLength", js_s_BarcodeChainway_def_getCode128maxLength);;


    defineInstanceMethod("code128maxLength=", js_BarcodeChainway_setCode128maxLength);
    //  should define static method !     defineStaticMethod("def_code128maxLength=", js_s_BarcodeChainway_def_setCode128maxLength);;


    defineInstanceMethod("code128minLength", js_BarcodeChainway_getCode128minLength);
    //  should define static method !     defineStaticMethod("def_code128minLength", js_s_BarcodeChainway_def_getCode128minLength);;


    defineInstanceMethod("code128minLength=", js_BarcodeChainway_setCode128minLength);
    //  should define static method !     defineStaticMethod("def_code128minLength=", js_s_BarcodeChainway_def_setCode128minLength);;


    defineInstanceMethod("code128other128", js_BarcodeChainway_getCode128other128);
    //  should define static method !     defineStaticMethod("def_code128other128", js_s_BarcodeChainway_def_getCode128other128);;


    defineInstanceMethod("code128other128=", js_BarcodeChainway_setCode128other128);
    //  should define static method !     defineStaticMethod("def_code128other128=", js_s_BarcodeChainway_def_setCode128other128);;


    defineInstanceMethod("code128redundancy", js_BarcodeChainway_getCode128redundancy);
    //  should define static method !     defineStaticMethod("def_code128redundancy", js_s_BarcodeChainway_def_getCode128redundancy);;


    defineInstanceMethod("code128redundancy=", js_BarcodeChainway_setCode128redundancy);
    //  should define static method !     defineStaticMethod("def_code128redundancy=", js_s_BarcodeChainway_def_setCode128redundancy);;


    defineInstanceMethod("code128securityLevel", js_BarcodeChainway_getCode128securityLevel);
    //  should define static method !     defineStaticMethod("def_code128securityLevel", js_s_BarcodeChainway_def_getCode128securityLevel);;


    defineInstanceMethod("code128securityLevel=", js_BarcodeChainway_setCode128securityLevel);
    //  should define static method !     defineStaticMethod("def_code128securityLevel=", js_s_BarcodeChainway_def_setCode128securityLevel);;


    defineInstanceMethod("compositeAb", js_BarcodeChainway_getCompositeAb);
    //  should define static method !     defineStaticMethod("def_compositeAb", js_s_BarcodeChainway_def_getCompositeAb);;


    defineInstanceMethod("compositeAb=", js_BarcodeChainway_setCompositeAb);
    //  should define static method !     defineStaticMethod("def_compositeAb=", js_s_BarcodeChainway_def_setCompositeAb);;


    defineInstanceMethod("compositeAbUccLinkMode", js_BarcodeChainway_getCompositeAbUccLinkMode);
    //  should define static method !     defineStaticMethod("def_compositeAbUccLinkMode", js_s_BarcodeChainway_def_getCompositeAbUccLinkMode);;


    defineInstanceMethod("compositeAbUccLinkMode=", js_BarcodeChainway_setCompositeAbUccLinkMode);
    //  should define static method !     defineStaticMethod("def_compositeAbUccLinkMode=", js_s_BarcodeChainway_def_setCompositeAbUccLinkMode);;


    defineInstanceMethod("compositeAbUseUpcPreambleCheckDigitRules", js_BarcodeChainway_getCompositeAbUseUpcPreambleCheckDigitRules);
    //  should define static method !     defineStaticMethod("def_compositeAbUseUpcPreambleCheckDigitRules", js_s_BarcodeChainway_def_getCompositeAbUseUpcPreambleCheckDigitRules);;


    defineInstanceMethod("compositeAbUseUpcPreambleCheckDigitRules=", js_BarcodeChainway_setCompositeAbUseUpcPreambleCheckDigitRules);
    //  should define static method !     defineStaticMethod("def_compositeAbUseUpcPreambleCheckDigitRules=", js_s_BarcodeChainway_def_setCompositeAbUseUpcPreambleCheckDigitRules);;


    defineInstanceMethod("compositeC", js_BarcodeChainway_getCompositeC);
    //  should define static method !     defineStaticMethod("def_compositeC", js_s_BarcodeChainway_def_getCompositeC);;


    defineInstanceMethod("compositeC=", js_BarcodeChainway_setCompositeC);
    //  should define static method !     defineStaticMethod("def_compositeC=", js_s_BarcodeChainway_def_setCompositeC);;


    defineInstanceMethod("code39", js_BarcodeChainway_getCode39);
    //  should define static method !     defineStaticMethod("def_code39", js_s_BarcodeChainway_def_getCode39);;


    defineInstanceMethod("code39=", js_BarcodeChainway_setCode39);
    //  should define static method !     defineStaticMethod("def_code39=", js_s_BarcodeChainway_def_setCode39);;


    defineInstanceMethod("code39code32Prefix", js_BarcodeChainway_getCode39code32Prefix);
    //  should define static method !     defineStaticMethod("def_code39code32Prefix", js_s_BarcodeChainway_def_getCode39code32Prefix);;


    defineInstanceMethod("code39code32Prefix=", js_BarcodeChainway_setCode39code32Prefix);
    //  should define static method !     defineStaticMethod("def_code39code32Prefix=", js_s_BarcodeChainway_def_setCode39code32Prefix);;


    defineInstanceMethod("code39convertToCode32", js_BarcodeChainway_getCode39convertToCode32);
    //  should define static method !     defineStaticMethod("def_code39convertToCode32", js_s_BarcodeChainway_def_getCode39convertToCode32);;


    defineInstanceMethod("code39convertToCode32=", js_BarcodeChainway_setCode39convertToCode32);
    //  should define static method !     defineStaticMethod("def_code39convertToCode32=", js_s_BarcodeChainway_def_setCode39convertToCode32);;


    defineInstanceMethod("code39fullAscii", js_BarcodeChainway_getCode39fullAscii);
    //  should define static method !     defineStaticMethod("def_code39fullAscii", js_s_BarcodeChainway_def_getCode39fullAscii);;


    defineInstanceMethod("code39fullAscii=", js_BarcodeChainway_setCode39fullAscii);
    //  should define static method !     defineStaticMethod("def_code39fullAscii=", js_s_BarcodeChainway_def_setCode39fullAscii);;


    defineInstanceMethod("code39maxLength", js_BarcodeChainway_getCode39maxLength);
    //  should define static method !     defineStaticMethod("def_code39maxLength", js_s_BarcodeChainway_def_getCode39maxLength);;


    defineInstanceMethod("code39maxLength=", js_BarcodeChainway_setCode39maxLength);
    //  should define static method !     defineStaticMethod("def_code39maxLength=", js_s_BarcodeChainway_def_setCode39maxLength);;


    defineInstanceMethod("code39minLength", js_BarcodeChainway_getCode39minLength);
    //  should define static method !     defineStaticMethod("def_code39minLength", js_s_BarcodeChainway_def_getCode39minLength);;


    defineInstanceMethod("code39minLength=", js_BarcodeChainway_setCode39minLength);
    //  should define static method !     defineStaticMethod("def_code39minLength=", js_s_BarcodeChainway_def_setCode39minLength);;


    defineInstanceMethod("code39redundancy", js_BarcodeChainway_getCode39redundancy);
    //  should define static method !     defineStaticMethod("def_code39redundancy", js_s_BarcodeChainway_def_getCode39redundancy);;


    defineInstanceMethod("code39redundancy=", js_BarcodeChainway_setCode39redundancy);
    //  should define static method !     defineStaticMethod("def_code39redundancy=", js_s_BarcodeChainway_def_setCode39redundancy);;


    defineInstanceMethod("code39reportCheckDigit", js_BarcodeChainway_getCode39reportCheckDigit);
    //  should define static method !     defineStaticMethod("def_code39reportCheckDigit", js_s_BarcodeChainway_def_getCode39reportCheckDigit);;


    defineInstanceMethod("code39reportCheckDigit=", js_BarcodeChainway_setCode39reportCheckDigit);
    //  should define static method !     defineStaticMethod("def_code39reportCheckDigit=", js_s_BarcodeChainway_def_setCode39reportCheckDigit);;


    defineInstanceMethod("code39securityLevel", js_BarcodeChainway_getCode39securityLevel);
    //  should define static method !     defineStaticMethod("def_code39securityLevel", js_s_BarcodeChainway_def_getCode39securityLevel);;


    defineInstanceMethod("code39securityLevel=", js_BarcodeChainway_setCode39securityLevel);
    //  should define static method !     defineStaticMethod("def_code39securityLevel=", js_s_BarcodeChainway_def_setCode39securityLevel);;


    defineInstanceMethod("code39verifyCheckDigit", js_BarcodeChainway_getCode39verifyCheckDigit);
    //  should define static method !     defineStaticMethod("def_code39verifyCheckDigit", js_s_BarcodeChainway_def_getCode39verifyCheckDigit);;


    defineInstanceMethod("code39verifyCheckDigit=", js_BarcodeChainway_setCode39verifyCheckDigit);
    //  should define static method !     defineStaticMethod("def_code39verifyCheckDigit=", js_s_BarcodeChainway_def_setCode39verifyCheckDigit);;


    defineInstanceMethod("code93", js_BarcodeChainway_getCode93);
    //  should define static method !     defineStaticMethod("def_code93", js_s_BarcodeChainway_def_getCode93);;


    defineInstanceMethod("code93=", js_BarcodeChainway_setCode93);
    //  should define static method !     defineStaticMethod("def_code93=", js_s_BarcodeChainway_def_setCode93);;


    defineInstanceMethod("code93maxLength", js_BarcodeChainway_getCode93maxLength);
    //  should define static method !     defineStaticMethod("def_code93maxLength", js_s_BarcodeChainway_def_getCode93maxLength);;


    defineInstanceMethod("code93maxLength=", js_BarcodeChainway_setCode93maxLength);
    //  should define static method !     defineStaticMethod("def_code93maxLength=", js_s_BarcodeChainway_def_setCode93maxLength);;


    defineInstanceMethod("code93minLength", js_BarcodeChainway_getCode93minLength);
    //  should define static method !     defineStaticMethod("def_code93minLength", js_s_BarcodeChainway_def_getCode93minLength);;


    defineInstanceMethod("code93minLength=", js_BarcodeChainway_setCode93minLength);
    //  should define static method !     defineStaticMethod("def_code93minLength=", js_s_BarcodeChainway_def_setCode93minLength);;


    defineInstanceMethod("code93redundancy", js_BarcodeChainway_getCode93redundancy);
    //  should define static method !     defineStaticMethod("def_code93redundancy", js_s_BarcodeChainway_def_getCode93redundancy);;


    defineInstanceMethod("code93redundancy=", js_BarcodeChainway_setCode93redundancy);
    //  should define static method !     defineStaticMethod("def_code93redundancy=", js_s_BarcodeChainway_def_setCode93redundancy);;


    defineInstanceMethod("d2of5", js_BarcodeChainway_getD2of5);
    //  should define static method !     defineStaticMethod("def_d2of5", js_s_BarcodeChainway_def_getD2of5);;


    defineInstanceMethod("d2of5=", js_BarcodeChainway_setD2of5);
    //  should define static method !     defineStaticMethod("def_d2of5=", js_s_BarcodeChainway_def_setD2of5);;


    defineInstanceMethod("d2of5maxLength", js_BarcodeChainway_getD2of5maxLength);
    //  should define static method !     defineStaticMethod("def_d2of5maxLength", js_s_BarcodeChainway_def_getD2of5maxLength);;


    defineInstanceMethod("d2of5maxLength=", js_BarcodeChainway_setD2of5maxLength);
    //  should define static method !     defineStaticMethod("def_d2of5maxLength=", js_s_BarcodeChainway_def_setD2of5maxLength);;


    defineInstanceMethod("d2of5minLength", js_BarcodeChainway_getD2of5minLength);
    //  should define static method !     defineStaticMethod("def_d2of5minLength", js_s_BarcodeChainway_def_getD2of5minLength);;


    defineInstanceMethod("d2of5minLength=", js_BarcodeChainway_setD2of5minLength);
    //  should define static method !     defineStaticMethod("def_d2of5minLength=", js_s_BarcodeChainway_def_setD2of5minLength);;


    defineInstanceMethod("d2of5redundancy", js_BarcodeChainway_getD2of5redundancy);
    //  should define static method !     defineStaticMethod("def_d2of5redundancy", js_s_BarcodeChainway_def_getD2of5redundancy);;


    defineInstanceMethod("d2of5redundancy=", js_BarcodeChainway_setD2of5redundancy);
    //  should define static method !     defineStaticMethod("def_d2of5redundancy=", js_s_BarcodeChainway_def_setD2of5redundancy);;


    defineInstanceMethod("datamatrix", js_BarcodeChainway_getDatamatrix);
    //  should define static method !     defineStaticMethod("def_datamatrix", js_s_BarcodeChainway_def_getDatamatrix);;


    defineInstanceMethod("datamatrix=", js_BarcodeChainway_setDatamatrix);
    //  should define static method !     defineStaticMethod("def_datamatrix=", js_s_BarcodeChainway_def_setDatamatrix);;


    defineInstanceMethod("ean13", js_BarcodeChainway_getEan13);
    //  should define static method !     defineStaticMethod("def_ean13", js_s_BarcodeChainway_def_getEan13);;


    defineInstanceMethod("ean13=", js_BarcodeChainway_setEan13);
    //  should define static method !     defineStaticMethod("def_ean13=", js_s_BarcodeChainway_def_setEan13);;


    defineInstanceMethod("ean8", js_BarcodeChainway_getEan8);
    //  should define static method !     defineStaticMethod("def_ean8", js_s_BarcodeChainway_def_getEan8);;


    defineInstanceMethod("ean8=", js_BarcodeChainway_setEan8);
    //  should define static method !     defineStaticMethod("def_ean8=", js_s_BarcodeChainway_def_setEan8);;


    defineInstanceMethod("ean8convertToEan13", js_BarcodeChainway_getEan8convertToEan13);
    //  should define static method !     defineStaticMethod("def_ean8convertToEan13", js_s_BarcodeChainway_def_getEan8convertToEan13);;


    defineInstanceMethod("ean8convertToEan13=", js_BarcodeChainway_setEan8convertToEan13);
    //  should define static method !     defineStaticMethod("def_ean8convertToEan13=", js_s_BarcodeChainway_def_setEan8convertToEan13);;


    defineInstanceMethod("i2of5", js_BarcodeChainway_getI2of5);
    //  should define static method !     defineStaticMethod("def_i2of5", js_s_BarcodeChainway_def_getI2of5);;


    defineInstanceMethod("i2of5=", js_BarcodeChainway_setI2of5);
    //  should define static method !     defineStaticMethod("def_i2of5=", js_s_BarcodeChainway_def_setI2of5);;


    defineInstanceMethod("i2of5convertToEan13", js_BarcodeChainway_getI2of5convertToEan13);
    //  should define static method !     defineStaticMethod("def_i2of5convertToEan13", js_s_BarcodeChainway_def_getI2of5convertToEan13);;


    defineInstanceMethod("i2of5convertToEan13=", js_BarcodeChainway_setI2of5convertToEan13);
    //  should define static method !     defineStaticMethod("def_i2of5convertToEan13=", js_s_BarcodeChainway_def_setI2of5convertToEan13);;


    defineInstanceMethod("i2of5maxLength", js_BarcodeChainway_getI2of5maxLength);
    //  should define static method !     defineStaticMethod("def_i2of5maxLength", js_s_BarcodeChainway_def_getI2of5maxLength);;


    defineInstanceMethod("i2of5maxLength=", js_BarcodeChainway_setI2of5maxLength);
    //  should define static method !     defineStaticMethod("def_i2of5maxLength=", js_s_BarcodeChainway_def_setI2of5maxLength);;


    defineInstanceMethod("i2of5minLength", js_BarcodeChainway_getI2of5minLength);
    //  should define static method !     defineStaticMethod("def_i2of5minLength", js_s_BarcodeChainway_def_getI2of5minLength);;


    defineInstanceMethod("i2of5minLength=", js_BarcodeChainway_setI2of5minLength);
    //  should define static method !     defineStaticMethod("def_i2of5minLength=", js_s_BarcodeChainway_def_setI2of5minLength);;


    defineInstanceMethod("i2of5redundancy", js_BarcodeChainway_getI2of5redundancy);
    //  should define static method !     defineStaticMethod("def_i2of5redundancy", js_s_BarcodeChainway_def_getI2of5redundancy);;


    defineInstanceMethod("i2of5redundancy=", js_BarcodeChainway_setI2of5redundancy);
    //  should define static method !     defineStaticMethod("def_i2of5redundancy=", js_s_BarcodeChainway_def_setI2of5redundancy);;


    defineInstanceMethod("i2of5reportCheckDigit", js_BarcodeChainway_getI2of5reportCheckDigit);
    //  should define static method !     defineStaticMethod("def_i2of5reportCheckDigit", js_s_BarcodeChainway_def_getI2of5reportCheckDigit);;


    defineInstanceMethod("i2of5reportCheckDigit=", js_BarcodeChainway_setI2of5reportCheckDigit);
    //  should define static method !     defineStaticMethod("def_i2of5reportCheckDigit=", js_s_BarcodeChainway_def_setI2of5reportCheckDigit);;


    defineInstanceMethod("i2of5verifyCheckDigit", js_BarcodeChainway_getI2of5verifyCheckDigit);
    //  should define static method !     defineStaticMethod("def_i2of5verifyCheckDigit", js_s_BarcodeChainway_def_getI2of5verifyCheckDigit);;


    defineInstanceMethod("i2of5verifyCheckDigit=", js_BarcodeChainway_setI2of5verifyCheckDigit);
    //  should define static method !     defineStaticMethod("def_i2of5verifyCheckDigit=", js_s_BarcodeChainway_def_setI2of5verifyCheckDigit);;


    defineInstanceMethod("korean3of5", js_BarcodeChainway_getKorean3of5);
    //  should define static method !     defineStaticMethod("def_korean3of5", js_s_BarcodeChainway_def_getKorean3of5);;


    defineInstanceMethod("korean3of5=", js_BarcodeChainway_setKorean3of5);
    //  should define static method !     defineStaticMethod("def_korean3of5=", js_s_BarcodeChainway_def_setKorean3of5);;


    defineInstanceMethod("korean3of5redundancy", js_BarcodeChainway_getKorean3of5redundancy);
    //  should define static method !     defineStaticMethod("def_korean3of5redundancy", js_s_BarcodeChainway_def_getKorean3of5redundancy);;


    defineInstanceMethod("korean3of5redundancy=", js_BarcodeChainway_setKorean3of5redundancy);
    //  should define static method !     defineStaticMethod("def_korean3of5redundancy=", js_s_BarcodeChainway_def_setKorean3of5redundancy);;


    defineInstanceMethod("korean3of5maxLength", js_BarcodeChainway_getKorean3of5maxLength);
    //  should define static method !     defineStaticMethod("def_korean3of5maxLength", js_s_BarcodeChainway_def_getKorean3of5maxLength);;


    defineInstanceMethod("korean3of5maxLength=", js_BarcodeChainway_setKorean3of5maxLength);
    //  should define static method !     defineStaticMethod("def_korean3of5maxLength=", js_s_BarcodeChainway_def_setKorean3of5maxLength);;


    defineInstanceMethod("korean3of5minLength", js_BarcodeChainway_getKorean3of5minLength);
    //  should define static method !     defineStaticMethod("def_korean3of5minLength", js_s_BarcodeChainway_def_getKorean3of5minLength);;


    defineInstanceMethod("korean3of5minLength=", js_BarcodeChainway_setKorean3of5minLength);
    //  should define static method !     defineStaticMethod("def_korean3of5minLength=", js_s_BarcodeChainway_def_setKorean3of5minLength);;


    defineInstanceMethod("macroPdf", js_BarcodeChainway_getMacroPdf);
    //  should define static method !     defineStaticMethod("def_macroPdf", js_s_BarcodeChainway_def_getMacroPdf);;


    defineInstanceMethod("macroPdf=", js_BarcodeChainway_setMacroPdf);
    //  should define static method !     defineStaticMethod("def_macroPdf=", js_s_BarcodeChainway_def_setMacroPdf);;


    defineInstanceMethod("macroPdfBufferLabels", js_BarcodeChainway_getMacroPdfBufferLabels);
    //  should define static method !     defineStaticMethod("def_macroPdfBufferLabels", js_s_BarcodeChainway_def_getMacroPdfBufferLabels);;


    defineInstanceMethod("macroPdfBufferLabels=", js_BarcodeChainway_setMacroPdfBufferLabels);
    //  should define static method !     defineStaticMethod("def_macroPdfBufferLabels=", js_s_BarcodeChainway_def_setMacroPdfBufferLabels);;


    defineInstanceMethod("macroPdfConvertToPdf417", js_BarcodeChainway_getMacroPdfConvertToPdf417);
    //  should define static method !     defineStaticMethod("def_macroPdfConvertToPdf417", js_s_BarcodeChainway_def_getMacroPdfConvertToPdf417);;


    defineInstanceMethod("macroPdfConvertToPdf417=", js_BarcodeChainway_setMacroPdfConvertToPdf417);
    //  should define static method !     defineStaticMethod("def_macroPdfConvertToPdf417=", js_s_BarcodeChainway_def_setMacroPdfConvertToPdf417);;


    defineInstanceMethod("macroPdfExclusive", js_BarcodeChainway_getMacroPdfExclusive);
    //  should define static method !     defineStaticMethod("def_macroPdfExclusive", js_s_BarcodeChainway_def_getMacroPdfExclusive);;


    defineInstanceMethod("macroPdfExclusive=", js_BarcodeChainway_setMacroPdfExclusive);
    //  should define static method !     defineStaticMethod("def_macroPdfExclusive=", js_s_BarcodeChainway_def_setMacroPdfExclusive);;


    defineInstanceMethod("macroMicroPdf", js_BarcodeChainway_getMacroMicroPdf);
    //  should define static method !     defineStaticMethod("def_macroMicroPdf", js_s_BarcodeChainway_def_getMacroMicroPdf);;


    defineInstanceMethod("macroMicroPdf=", js_BarcodeChainway_setMacroMicroPdf);
    //  should define static method !     defineStaticMethod("def_macroMicroPdf=", js_s_BarcodeChainway_def_setMacroMicroPdf);;


    defineInstanceMethod("macroMicroPdfBufferLabels", js_BarcodeChainway_getMacroMicroPdfBufferLabels);
    //  should define static method !     defineStaticMethod("def_macroMicroPdfBufferLabels", js_s_BarcodeChainway_def_getMacroMicroPdfBufferLabels);;


    defineInstanceMethod("macroMicroPdfBufferLabels=", js_BarcodeChainway_setMacroMicroPdfBufferLabels);
    //  should define static method !     defineStaticMethod("def_macroMicroPdfBufferLabels=", js_s_BarcodeChainway_def_setMacroMicroPdfBufferLabels);;


    defineInstanceMethod("macroMicroPdfConvertToMicroPdf", js_BarcodeChainway_getMacroMicroPdfConvertToMicroPdf);
    //  should define static method !     defineStaticMethod("def_macroMicroPdfConvertToMicroPdf", js_s_BarcodeChainway_def_getMacroMicroPdfConvertToMicroPdf);;


    defineInstanceMethod("macroMicroPdfConvertToMicroPdf=", js_BarcodeChainway_setMacroMicroPdfConvertToMicroPdf);
    //  should define static method !     defineStaticMethod("def_macroMicroPdfConvertToMicroPdf=", js_s_BarcodeChainway_def_setMacroMicroPdfConvertToMicroPdf);;


    defineInstanceMethod("macroMicroPdfExclusive", js_BarcodeChainway_getMacroMicroPdfExclusive);
    //  should define static method !     defineStaticMethod("def_macroMicroPdfExclusive", js_s_BarcodeChainway_def_getMacroMicroPdfExclusive);;


    defineInstanceMethod("macroMicroPdfExclusive=", js_BarcodeChainway_setMacroMicroPdfExclusive);
    //  should define static method !     defineStaticMethod("def_macroMicroPdfExclusive=", js_s_BarcodeChainway_def_setMacroMicroPdfExclusive);;


    defineInstanceMethod("macroMicroPdfReportAppendInfo", js_BarcodeChainway_getMacroMicroPdfReportAppendInfo);
    //  should define static method !     defineStaticMethod("def_macroMicroPdfReportAppendInfo", js_s_BarcodeChainway_def_getMacroMicroPdfReportAppendInfo);;


    defineInstanceMethod("macroMicroPdfReportAppendInfo=", js_BarcodeChainway_setMacroMicroPdfReportAppendInfo);
    //  should define static method !     defineStaticMethod("def_macroMicroPdfReportAppendInfo=", js_s_BarcodeChainway_def_setMacroMicroPdfReportAppendInfo);;


    defineInstanceMethod("matrix2of5", js_BarcodeChainway_getMatrix2of5);
    //  should define static method !     defineStaticMethod("def_matrix2of5", js_s_BarcodeChainway_def_getMatrix2of5);;


    defineInstanceMethod("matrix2of5=", js_BarcodeChainway_setMatrix2of5);
    //  should define static method !     defineStaticMethod("def_matrix2of5=", js_s_BarcodeChainway_def_setMatrix2of5);;


    defineInstanceMethod("matrix2of5maxLength", js_BarcodeChainway_getMatrix2of5maxLength);
    //  should define static method !     defineStaticMethod("def_matrix2of5maxLength", js_s_BarcodeChainway_def_getMatrix2of5maxLength);;


    defineInstanceMethod("matrix2of5maxLength=", js_BarcodeChainway_setMatrix2of5maxLength);
    //  should define static method !     defineStaticMethod("def_matrix2of5maxLength=", js_s_BarcodeChainway_def_setMatrix2of5maxLength);;


    defineInstanceMethod("matrix2of5minLength", js_BarcodeChainway_getMatrix2of5minLength);
    //  should define static method !     defineStaticMethod("def_matrix2of5minLength", js_s_BarcodeChainway_def_getMatrix2of5minLength);;


    defineInstanceMethod("matrix2of5minLength=", js_BarcodeChainway_setMatrix2of5minLength);
    //  should define static method !     defineStaticMethod("def_matrix2of5minLength=", js_s_BarcodeChainway_def_setMatrix2of5minLength);;


    defineInstanceMethod("matrix2of5reportCheckDigit", js_BarcodeChainway_getMatrix2of5reportCheckDigit);
    //  should define static method !     defineStaticMethod("def_matrix2of5reportCheckDigit", js_s_BarcodeChainway_def_getMatrix2of5reportCheckDigit);;


    defineInstanceMethod("matrix2of5reportCheckDigit=", js_BarcodeChainway_setMatrix2of5reportCheckDigit);
    //  should define static method !     defineStaticMethod("def_matrix2of5reportCheckDigit=", js_s_BarcodeChainway_def_setMatrix2of5reportCheckDigit);;


    defineInstanceMethod("matrix2of5verifyCheckDigit", js_BarcodeChainway_getMatrix2of5verifyCheckDigit);
    //  should define static method !     defineStaticMethod("def_matrix2of5verifyCheckDigit", js_s_BarcodeChainway_def_getMatrix2of5verifyCheckDigit);;


    defineInstanceMethod("matrix2of5verifyCheckDigit=", js_BarcodeChainway_setMatrix2of5verifyCheckDigit);
    //  should define static method !     defineStaticMethod("def_matrix2of5verifyCheckDigit=", js_s_BarcodeChainway_def_setMatrix2of5verifyCheckDigit);;


    defineInstanceMethod("maxiCode", js_BarcodeChainway_getMaxiCode);
    //  should define static method !     defineStaticMethod("def_maxiCode", js_s_BarcodeChainway_def_getMaxiCode);;


    defineInstanceMethod("maxiCode=", js_BarcodeChainway_setMaxiCode);
    //  should define static method !     defineStaticMethod("def_maxiCode=", js_s_BarcodeChainway_def_setMaxiCode);;


    defineInstanceMethod("microPdf", js_BarcodeChainway_getMicroPdf);
    //  should define static method !     defineStaticMethod("def_microPdf", js_s_BarcodeChainway_def_getMicroPdf);;


    defineInstanceMethod("microPdf=", js_BarcodeChainway_setMicroPdf);
    //  should define static method !     defineStaticMethod("def_microPdf=", js_s_BarcodeChainway_def_setMicroPdf);;


    defineInstanceMethod("microQr", js_BarcodeChainway_getMicroQr);
    //  should define static method !     defineStaticMethod("def_microQr", js_s_BarcodeChainway_def_getMicroQr);;


    defineInstanceMethod("microQr=", js_BarcodeChainway_setMicroQr);
    //  should define static method !     defineStaticMethod("def_microQr=", js_s_BarcodeChainway_def_setMicroQr);;


    defineInstanceMethod("msi", js_BarcodeChainway_getMsi);
    //  should define static method !     defineStaticMethod("def_msi", js_s_BarcodeChainway_def_getMsi);;


    defineInstanceMethod("msi=", js_BarcodeChainway_setMsi);
    //  should define static method !     defineStaticMethod("def_msi=", js_s_BarcodeChainway_def_setMsi);;


    defineInstanceMethod("msiCheckDigits", js_BarcodeChainway_getMsiCheckDigits);
    //  should define static method !     defineStaticMethod("def_msiCheckDigits", js_s_BarcodeChainway_def_getMsiCheckDigits);;


    defineInstanceMethod("msiCheckDigits=", js_BarcodeChainway_setMsiCheckDigits);
    //  should define static method !     defineStaticMethod("def_msiCheckDigits=", js_s_BarcodeChainway_def_setMsiCheckDigits);;


    defineInstanceMethod("msiCheckDigitScheme", js_BarcodeChainway_getMsiCheckDigitScheme);
    //  should define static method !     defineStaticMethod("def_msiCheckDigitScheme", js_s_BarcodeChainway_def_getMsiCheckDigitScheme);;


    defineInstanceMethod("msiCheckDigitScheme=", js_BarcodeChainway_setMsiCheckDigitScheme);
    //  should define static method !     defineStaticMethod("def_msiCheckDigitScheme=", js_s_BarcodeChainway_def_setMsiCheckDigitScheme);;


    defineInstanceMethod("msiMaxLength", js_BarcodeChainway_getMsiMaxLength);
    //  should define static method !     defineStaticMethod("def_msiMaxLength", js_s_BarcodeChainway_def_getMsiMaxLength);;


    defineInstanceMethod("msiMaxLength=", js_BarcodeChainway_setMsiMaxLength);
    //  should define static method !     defineStaticMethod("def_msiMaxLength=", js_s_BarcodeChainway_def_setMsiMaxLength);;


    defineInstanceMethod("msiMinLength", js_BarcodeChainway_getMsiMinLength);
    //  should define static method !     defineStaticMethod("def_msiMinLength", js_s_BarcodeChainway_def_getMsiMinLength);;


    defineInstanceMethod("msiMinLength=", js_BarcodeChainway_setMsiMinLength);
    //  should define static method !     defineStaticMethod("def_msiMinLength=", js_s_BarcodeChainway_def_setMsiMinLength);;


    defineInstanceMethod("msiRedundancy", js_BarcodeChainway_getMsiRedundancy);
    //  should define static method !     defineStaticMethod("def_msiRedundancy", js_s_BarcodeChainway_def_getMsiRedundancy);;


    defineInstanceMethod("msiRedundancy=", js_BarcodeChainway_setMsiRedundancy);
    //  should define static method !     defineStaticMethod("def_msiRedundancy=", js_s_BarcodeChainway_def_setMsiRedundancy);;


    defineInstanceMethod("msiReportCheckDigit", js_BarcodeChainway_getMsiReportCheckDigit);
    //  should define static method !     defineStaticMethod("def_msiReportCheckDigit", js_s_BarcodeChainway_def_getMsiReportCheckDigit);;


    defineInstanceMethod("msiReportCheckDigit=", js_BarcodeChainway_setMsiReportCheckDigit);
    //  should define static method !     defineStaticMethod("def_msiReportCheckDigit=", js_s_BarcodeChainway_def_setMsiReportCheckDigit);;


    defineInstanceMethod("pdf417", js_BarcodeChainway_getPdf417);
    //  should define static method !     defineStaticMethod("def_pdf417", js_s_BarcodeChainway_def_getPdf417);;


    defineInstanceMethod("pdf417=", js_BarcodeChainway_setPdf417);
    //  should define static method !     defineStaticMethod("def_pdf417=", js_s_BarcodeChainway_def_setPdf417);;


    defineInstanceMethod("signature", js_BarcodeChainway_getSignature);
    //  should define static method !     defineStaticMethod("def_signature", js_s_BarcodeChainway_def_getSignature);;


    defineInstanceMethod("signature=", js_BarcodeChainway_setSignature);
    //  should define static method !     defineStaticMethod("def_signature=", js_s_BarcodeChainway_def_setSignature);;


    defineInstanceMethod("signatureImageHeight", js_BarcodeChainway_getSignatureImageHeight);
    //  should define static method !     defineStaticMethod("def_signatureImageHeight", js_s_BarcodeChainway_def_getSignatureImageHeight);;


    defineInstanceMethod("signatureImageHeight=", js_BarcodeChainway_setSignatureImageHeight);
    //  should define static method !     defineStaticMethod("def_signatureImageHeight=", js_s_BarcodeChainway_def_setSignatureImageHeight);;


    defineInstanceMethod("signatureImageWidth", js_BarcodeChainway_getSignatureImageWidth);
    //  should define static method !     defineStaticMethod("def_signatureImageWidth", js_s_BarcodeChainway_def_getSignatureImageWidth);;


    defineInstanceMethod("signatureImageWidth=", js_BarcodeChainway_setSignatureImageWidth);
    //  should define static method !     defineStaticMethod("def_signatureImageWidth=", js_s_BarcodeChainway_def_setSignatureImageWidth);;


    defineInstanceMethod("signatureImageQuality", js_BarcodeChainway_getSignatureImageQuality);
    //  should define static method !     defineStaticMethod("def_signatureImageQuality", js_s_BarcodeChainway_def_getSignatureImageQuality);;


    defineInstanceMethod("signatureImageQuality=", js_BarcodeChainway_setSignatureImageQuality);
    //  should define static method !     defineStaticMethod("def_signatureImageQuality=", js_s_BarcodeChainway_def_setSignatureImageQuality);;


    defineInstanceMethod("ausPostal", js_BarcodeChainway_getAusPostal);
    //  should define static method !     defineStaticMethod("def_ausPostal", js_s_BarcodeChainway_def_getAusPostal);;


    defineInstanceMethod("ausPostal=", js_BarcodeChainway_setAusPostal);
    //  should define static method !     defineStaticMethod("def_ausPostal=", js_s_BarcodeChainway_def_setAusPostal);;


    defineInstanceMethod("canPostal", js_BarcodeChainway_getCanPostal);
    //  should define static method !     defineStaticMethod("def_canPostal", js_s_BarcodeChainway_def_getCanPostal);;


    defineInstanceMethod("canPostal=", js_BarcodeChainway_setCanPostal);
    //  should define static method !     defineStaticMethod("def_canPostal=", js_s_BarcodeChainway_def_setCanPostal);;


    defineInstanceMethod("dutchPostal", js_BarcodeChainway_getDutchPostal);
    //  should define static method !     defineStaticMethod("def_dutchPostal", js_s_BarcodeChainway_def_getDutchPostal);;


    defineInstanceMethod("dutchPostal=", js_BarcodeChainway_setDutchPostal);
    //  should define static method !     defineStaticMethod("def_dutchPostal=", js_s_BarcodeChainway_def_setDutchPostal);;


    defineInstanceMethod("japPostal", js_BarcodeChainway_getJapPostal);
    //  should define static method !     defineStaticMethod("def_japPostal", js_s_BarcodeChainway_def_getJapPostal);;


    defineInstanceMethod("japPostal=", js_BarcodeChainway_setJapPostal);
    //  should define static method !     defineStaticMethod("def_japPostal=", js_s_BarcodeChainway_def_setJapPostal);;


    defineInstanceMethod("ukPostal", js_BarcodeChainway_getUkPostal);
    //  should define static method !     defineStaticMethod("def_ukPostal", js_s_BarcodeChainway_def_getUkPostal);;


    defineInstanceMethod("ukPostal=", js_BarcodeChainway_setUkPostal);
    //  should define static method !     defineStaticMethod("def_ukPostal=", js_s_BarcodeChainway_def_setUkPostal);;


    defineInstanceMethod("ukPostalReportCheckDigit", js_BarcodeChainway_getUkPostalReportCheckDigit);
    //  should define static method !     defineStaticMethod("def_ukPostalReportCheckDigit", js_s_BarcodeChainway_def_getUkPostalReportCheckDigit);;


    defineInstanceMethod("ukPostalReportCheckDigit=", js_BarcodeChainway_setUkPostalReportCheckDigit);
    //  should define static method !     defineStaticMethod("def_ukPostalReportCheckDigit=", js_s_BarcodeChainway_def_setUkPostalReportCheckDigit);;


    defineInstanceMethod("us4state", js_BarcodeChainway_getUs4state);
    //  should define static method !     defineStaticMethod("def_us4state", js_s_BarcodeChainway_def_getUs4state);;


    defineInstanceMethod("us4state=", js_BarcodeChainway_setUs4state);
    //  should define static method !     defineStaticMethod("def_us4state=", js_s_BarcodeChainway_def_setUs4state);;


    defineInstanceMethod("us4stateFics", js_BarcodeChainway_getUs4stateFics);
    //  should define static method !     defineStaticMethod("def_us4stateFics", js_s_BarcodeChainway_def_getUs4stateFics);;


    defineInstanceMethod("us4stateFics=", js_BarcodeChainway_setUs4stateFics);
    //  should define static method !     defineStaticMethod("def_us4stateFics=", js_s_BarcodeChainway_def_setUs4stateFics);;


    defineInstanceMethod("usPlanet", js_BarcodeChainway_getUsPlanet);
    //  should define static method !     defineStaticMethod("def_usPlanet", js_s_BarcodeChainway_def_getUsPlanet);;


    defineInstanceMethod("usPlanet=", js_BarcodeChainway_setUsPlanet);
    //  should define static method !     defineStaticMethod("def_usPlanet=", js_s_BarcodeChainway_def_setUsPlanet);;


    defineInstanceMethod("usPlanetReportCheckDigit", js_BarcodeChainway_getUsPlanetReportCheckDigit);
    //  should define static method !     defineStaticMethod("def_usPlanetReportCheckDigit", js_s_BarcodeChainway_def_getUsPlanetReportCheckDigit);;


    defineInstanceMethod("usPlanetReportCheckDigit=", js_BarcodeChainway_setUsPlanetReportCheckDigit);
    //  should define static method !     defineStaticMethod("def_usPlanetReportCheckDigit=", js_s_BarcodeChainway_def_setUsPlanetReportCheckDigit);;


    defineInstanceMethod("usPostNet", js_BarcodeChainway_getUsPostNet);
    //  should define static method !     defineStaticMethod("def_usPostNet", js_s_BarcodeChainway_def_getUsPostNet);;


    defineInstanceMethod("usPostNet=", js_BarcodeChainway_setUsPostNet);
    //  should define static method !     defineStaticMethod("def_usPostNet=", js_s_BarcodeChainway_def_setUsPostNet);;


    defineInstanceMethod("usPostNetReportCheckDigit", js_BarcodeChainway_getUsPostNetReportCheckDigit);
    //  should define static method !     defineStaticMethod("def_usPostNetReportCheckDigit", js_s_BarcodeChainway_def_getUsPostNetReportCheckDigit);;


    defineInstanceMethod("usPostNetReportCheckDigit=", js_BarcodeChainway_setUsPostNetReportCheckDigit);
    //  should define static method !     defineStaticMethod("def_usPostNetReportCheckDigit=", js_s_BarcodeChainway_def_setUsPostNetReportCheckDigit);;


    defineInstanceMethod("qrCode", js_BarcodeChainway_getQrCode);
    //  should define static method !     defineStaticMethod("def_qrCode", js_s_BarcodeChainway_def_getQrCode);;


    defineInstanceMethod("qrCode=", js_BarcodeChainway_setQrCode);
    //  should define static method !     defineStaticMethod("def_qrCode=", js_s_BarcodeChainway_def_setQrCode);;


    defineInstanceMethod("gs1dataBar", js_BarcodeChainway_getGs1dataBar);
    //  should define static method !     defineStaticMethod("def_gs1dataBar", js_s_BarcodeChainway_def_getGs1dataBar);;


    defineInstanceMethod("gs1dataBar=", js_BarcodeChainway_setGs1dataBar);
    //  should define static method !     defineStaticMethod("def_gs1dataBar=", js_s_BarcodeChainway_def_setGs1dataBar);;


    defineInstanceMethod("gs1dataBarExpanded", js_BarcodeChainway_getGs1dataBarExpanded);
    //  should define static method !     defineStaticMethod("def_gs1dataBarExpanded", js_s_BarcodeChainway_def_getGs1dataBarExpanded);;


    defineInstanceMethod("gs1dataBarExpanded=", js_BarcodeChainway_setGs1dataBarExpanded);
    //  should define static method !     defineStaticMethod("def_gs1dataBarExpanded=", js_s_BarcodeChainway_def_setGs1dataBarExpanded);;


    defineInstanceMethod("gs1dataBarLimited", js_BarcodeChainway_getGs1dataBarLimited);
    //  should define static method !     defineStaticMethod("def_gs1dataBarLimited", js_s_BarcodeChainway_def_getGs1dataBarLimited);;


    defineInstanceMethod("gs1dataBarLimited=", js_BarcodeChainway_setGs1dataBarLimited);
    //  should define static method !     defineStaticMethod("def_gs1dataBarLimited=", js_s_BarcodeChainway_def_setGs1dataBarLimited);;


    defineInstanceMethod("tlc39", js_BarcodeChainway_getTlc39);
    //  should define static method !     defineStaticMethod("def_tlc39", js_s_BarcodeChainway_def_getTlc39);;


    defineInstanceMethod("tlc39=", js_BarcodeChainway_setTlc39);
    //  should define static method !     defineStaticMethod("def_tlc39=", js_s_BarcodeChainway_def_setTlc39);;


    defineInstanceMethod("trioptic39", js_BarcodeChainway_getTrioptic39);
    //  should define static method !     defineStaticMethod("def_trioptic39", js_s_BarcodeChainway_def_getTrioptic39);;


    defineInstanceMethod("trioptic39=", js_BarcodeChainway_setTrioptic39);
    //  should define static method !     defineStaticMethod("def_trioptic39=", js_s_BarcodeChainway_def_setTrioptic39);;


    defineInstanceMethod("trioptic39Redundancy", js_BarcodeChainway_getTrioptic39Redundancy);
    //  should define static method !     defineStaticMethod("def_trioptic39Redundancy", js_s_BarcodeChainway_def_getTrioptic39Redundancy);;


    defineInstanceMethod("trioptic39Redundancy=", js_BarcodeChainway_setTrioptic39Redundancy);
    //  should define static method !     defineStaticMethod("def_trioptic39Redundancy=", js_s_BarcodeChainway_def_setTrioptic39Redundancy);;


    defineInstanceMethod("upcEanBookland", js_BarcodeChainway_getUpcEanBookland);
    //  should define static method !     defineStaticMethod("def_upcEanBookland", js_s_BarcodeChainway_def_getUpcEanBookland);;


    defineInstanceMethod("upcEanBookland=", js_BarcodeChainway_setUpcEanBookland);
    //  should define static method !     defineStaticMethod("def_upcEanBookland=", js_s_BarcodeChainway_def_setUpcEanBookland);;


    defineInstanceMethod("upcEanBooklandFormat", js_BarcodeChainway_getUpcEanBooklandFormat);
    //  should define static method !     defineStaticMethod("def_upcEanBooklandFormat", js_s_BarcodeChainway_def_getUpcEanBooklandFormat);;


    defineInstanceMethod("upcEanBooklandFormat=", js_BarcodeChainway_setUpcEanBooklandFormat);
    //  should define static method !     defineStaticMethod("def_upcEanBooklandFormat=", js_s_BarcodeChainway_def_setUpcEanBooklandFormat);;


    defineInstanceMethod("upcEanConvertGs1dataBarToUpcEan", js_BarcodeChainway_getUpcEanConvertGs1dataBarToUpcEan);
    //  should define static method !     defineStaticMethod("def_upcEanConvertGs1dataBarToUpcEan", js_s_BarcodeChainway_def_getUpcEanConvertGs1dataBarToUpcEan);;


    defineInstanceMethod("upcEanConvertGs1dataBarToUpcEan=", js_BarcodeChainway_setUpcEanConvertGs1dataBarToUpcEan);
    //  should define static method !     defineStaticMethod("def_upcEanConvertGs1dataBarToUpcEan=", js_s_BarcodeChainway_def_setUpcEanConvertGs1dataBarToUpcEan);;


    defineInstanceMethod("upcEanCoupon", js_BarcodeChainway_getUpcEanCoupon);
    //  should define static method !     defineStaticMethod("def_upcEanCoupon", js_s_BarcodeChainway_def_getUpcEanCoupon);;


    defineInstanceMethod("upcEanCoupon=", js_BarcodeChainway_setUpcEanCoupon);
    //  should define static method !     defineStaticMethod("def_upcEanCoupon=", js_s_BarcodeChainway_def_setUpcEanCoupon);;


    defineInstanceMethod("upcEanLinearDecode", js_BarcodeChainway_getUpcEanLinearDecode);
    //  should define static method !     defineStaticMethod("def_upcEanLinearDecode", js_s_BarcodeChainway_def_getUpcEanLinearDecode);;


    defineInstanceMethod("upcEanLinearDecode=", js_BarcodeChainway_setUpcEanLinearDecode);
    //  should define static method !     defineStaticMethod("def_upcEanLinearDecode=", js_s_BarcodeChainway_def_setUpcEanLinearDecode);;


    defineInstanceMethod("upcEanRandomWeightCheckDigit", js_BarcodeChainway_getUpcEanRandomWeightCheckDigit);
    //  should define static method !     defineStaticMethod("def_upcEanRandomWeightCheckDigit", js_s_BarcodeChainway_def_getUpcEanRandomWeightCheckDigit);;


    defineInstanceMethod("upcEanRandomWeightCheckDigit=", js_BarcodeChainway_setUpcEanRandomWeightCheckDigit);
    //  should define static method !     defineStaticMethod("def_upcEanRandomWeightCheckDigit=", js_s_BarcodeChainway_def_setUpcEanRandomWeightCheckDigit);;


    defineInstanceMethod("upcEanRetryCount", js_BarcodeChainway_getUpcEanRetryCount);
    //  should define static method !     defineStaticMethod("def_upcEanRetryCount", js_s_BarcodeChainway_def_getUpcEanRetryCount);;


    defineInstanceMethod("upcEanRetryCount=", js_BarcodeChainway_setUpcEanRetryCount);
    //  should define static method !     defineStaticMethod("def_upcEanRetryCount=", js_s_BarcodeChainway_def_setUpcEanRetryCount);;


    defineInstanceMethod("upcEanSecurityLevel", js_BarcodeChainway_getUpcEanSecurityLevel);
    //  should define static method !     defineStaticMethod("def_upcEanSecurityLevel", js_s_BarcodeChainway_def_getUpcEanSecurityLevel);;


    defineInstanceMethod("upcEanSecurityLevel=", js_BarcodeChainway_setUpcEanSecurityLevel);
    //  should define static method !     defineStaticMethod("def_upcEanSecurityLevel=", js_s_BarcodeChainway_def_setUpcEanSecurityLevel);;


    defineInstanceMethod("upcEanSupplemental2", js_BarcodeChainway_getUpcEanSupplemental2);
    //  should define static method !     defineStaticMethod("def_upcEanSupplemental2", js_s_BarcodeChainway_def_getUpcEanSupplemental2);;


    defineInstanceMethod("upcEanSupplemental2=", js_BarcodeChainway_setUpcEanSupplemental2);
    //  should define static method !     defineStaticMethod("def_upcEanSupplemental2=", js_s_BarcodeChainway_def_setUpcEanSupplemental2);;


    defineInstanceMethod("upcEanSupplemental5", js_BarcodeChainway_getUpcEanSupplemental5);
    //  should define static method !     defineStaticMethod("def_upcEanSupplemental5", js_s_BarcodeChainway_def_getUpcEanSupplemental5);;


    defineInstanceMethod("upcEanSupplemental5=", js_BarcodeChainway_setUpcEanSupplemental5);
    //  should define static method !     defineStaticMethod("def_upcEanSupplemental5=", js_s_BarcodeChainway_def_setUpcEanSupplemental5);;


    defineInstanceMethod("upcEanSupplementalMode", js_BarcodeChainway_getUpcEanSupplementalMode);
    //  should define static method !     defineStaticMethod("def_upcEanSupplementalMode", js_s_BarcodeChainway_def_getUpcEanSupplementalMode);;


    defineInstanceMethod("upcEanSupplementalMode=", js_BarcodeChainway_setUpcEanSupplementalMode);
    //  should define static method !     defineStaticMethod("def_upcEanSupplementalMode=", js_s_BarcodeChainway_def_setUpcEanSupplementalMode);;


    defineInstanceMethod("upca", js_BarcodeChainway_getUpca);
    //  should define static method !     defineStaticMethod("def_upca", js_s_BarcodeChainway_def_getUpca);;


    defineInstanceMethod("upca=", js_BarcodeChainway_setUpca);
    //  should define static method !     defineStaticMethod("def_upca=", js_s_BarcodeChainway_def_setUpca);;


    defineInstanceMethod("upcaPreamble", js_BarcodeChainway_getUpcaPreamble);
    //  should define static method !     defineStaticMethod("def_upcaPreamble", js_s_BarcodeChainway_def_getUpcaPreamble);;


    defineInstanceMethod("upcaPreamble=", js_BarcodeChainway_setUpcaPreamble);
    //  should define static method !     defineStaticMethod("def_upcaPreamble=", js_s_BarcodeChainway_def_setUpcaPreamble);;


    defineInstanceMethod("upcaReportCheckDigit", js_BarcodeChainway_getUpcaReportCheckDigit);
    //  should define static method !     defineStaticMethod("def_upcaReportCheckDigit", js_s_BarcodeChainway_def_getUpcaReportCheckDigit);;


    defineInstanceMethod("upcaReportCheckDigit=", js_BarcodeChainway_setUpcaReportCheckDigit);
    //  should define static method !     defineStaticMethod("def_upcaReportCheckDigit=", js_s_BarcodeChainway_def_setUpcaReportCheckDigit);;


    defineInstanceMethod("upce0", js_BarcodeChainway_getUpce0);
    //  should define static method !     defineStaticMethod("def_upce0", js_s_BarcodeChainway_def_getUpce0);;


    defineInstanceMethod("upce0=", js_BarcodeChainway_setUpce0);
    //  should define static method !     defineStaticMethod("def_upce0=", js_s_BarcodeChainway_def_setUpce0);;


    defineInstanceMethod("upce0convertToUpca", js_BarcodeChainway_getUpce0convertToUpca);
    //  should define static method !     defineStaticMethod("def_upce0convertToUpca", js_s_BarcodeChainway_def_getUpce0convertToUpca);;


    defineInstanceMethod("upce0convertToUpca=", js_BarcodeChainway_setUpce0convertToUpca);
    //  should define static method !     defineStaticMethod("def_upce0convertToUpca=", js_s_BarcodeChainway_def_setUpce0convertToUpca);;


    defineInstanceMethod("upce0preamble", js_BarcodeChainway_getUpce0preamble);
    //  should define static method !     defineStaticMethod("def_upce0preamble", js_s_BarcodeChainway_def_getUpce0preamble);;


    defineInstanceMethod("upce0preamble=", js_BarcodeChainway_setUpce0preamble);
    //  should define static method !     defineStaticMethod("def_upce0preamble=", js_s_BarcodeChainway_def_setUpce0preamble);;


    defineInstanceMethod("upce0reportCheckDigit", js_BarcodeChainway_getUpce0reportCheckDigit);
    //  should define static method !     defineStaticMethod("def_upce0reportCheckDigit", js_s_BarcodeChainway_def_getUpce0reportCheckDigit);;


    defineInstanceMethod("upce0reportCheckDigit=", js_BarcodeChainway_setUpce0reportCheckDigit);
    //  should define static method !     defineStaticMethod("def_upce0reportCheckDigit=", js_s_BarcodeChainway_def_setUpce0reportCheckDigit);;


    defineInstanceMethod("upce1", js_BarcodeChainway_getUpce1);
    //  should define static method !     defineStaticMethod("def_upce1", js_s_BarcodeChainway_def_getUpce1);;


    defineInstanceMethod("upce1=", js_BarcodeChainway_setUpce1);
    //  should define static method !     defineStaticMethod("def_upce1=", js_s_BarcodeChainway_def_setUpce1);;


    defineInstanceMethod("upce1convertToUpca", js_BarcodeChainway_getUpce1convertToUpca);
    //  should define static method !     defineStaticMethod("def_upce1convertToUpca", js_s_BarcodeChainway_def_getUpce1convertToUpca);;


    defineInstanceMethod("upce1convertToUpca=", js_BarcodeChainway_setUpce1convertToUpca);
    //  should define static method !     defineStaticMethod("def_upce1convertToUpca=", js_s_BarcodeChainway_def_setUpce1convertToUpca);;


    defineInstanceMethod("upce1preamble", js_BarcodeChainway_getUpce1preamble);
    //  should define static method !     defineStaticMethod("def_upce1preamble", js_s_BarcodeChainway_def_getUpce1preamble);;


    defineInstanceMethod("upce1preamble=", js_BarcodeChainway_setUpce1preamble);
    //  should define static method !     defineStaticMethod("def_upce1preamble=", js_s_BarcodeChainway_def_setUpce1preamble);;


    defineInstanceMethod("upce1reportCheckDigit", js_BarcodeChainway_getUpce1reportCheckDigit);
    //  should define static method !     defineStaticMethod("def_upce1reportCheckDigit", js_s_BarcodeChainway_def_getUpce1reportCheckDigit);;


    defineInstanceMethod("upce1reportCheckDigit=", js_BarcodeChainway_setUpce1reportCheckDigit);
    //  should define static method !     defineStaticMethod("def_upce1reportCheckDigit=", js_s_BarcodeChainway_def_setUpce1reportCheckDigit);;


    defineInstanceMethod("webcode", js_BarcodeChainway_getWebcode);
    //  should define static method !     defineStaticMethod("def_webcode", js_s_BarcodeChainway_def_getWebcode);;


    defineInstanceMethod("webcode=", js_BarcodeChainway_setWebcode);
    //  should define static method !     defineStaticMethod("def_webcode=", js_s_BarcodeChainway_def_setWebcode);;


    defineInstanceMethod("webcodeDecodeGtSubtype", js_BarcodeChainway_getWebcodeDecodeGtSubtype);
    //  should define static method !     defineStaticMethod("def_webcodeDecodeGtSubtype", js_s_BarcodeChainway_def_getWebcodeDecodeGtSubtype);;


    defineInstanceMethod("webcodeDecodeGtSubtype=", js_BarcodeChainway_setWebcodeDecodeGtSubtype);
    //  should define static method !     defineStaticMethod("def_webcodeDecodeGtSubtype=", js_s_BarcodeChainway_def_setWebcodeDecodeGtSubtype);;


    defineInstanceMethod("rsmModelNumber", js_BarcodeChainway_getRsmModelNumber);
    //  should define static method !     defineStaticMethod("def_rsmModelNumber", js_s_BarcodeChainway_def_getRsmModelNumber);;


    defineInstanceMethod("rsmSerialNumber", js_BarcodeChainway_getRsmSerialNumber);
    //  should define static method !     defineStaticMethod("def_rsmSerialNumber", js_s_BarcodeChainway_def_getRsmSerialNumber);;


    defineInstanceMethod("rsmDateOfManufacture", js_BarcodeChainway_getRsmDateOfManufacture);
    //  should define static method !     defineStaticMethod("def_rsmDateOfManufacture", js_s_BarcodeChainway_def_getRsmDateOfManufacture);;


    defineInstanceMethod("rsmDateOfService", js_BarcodeChainway_getRsmDateOfService);
    //  should define static method !     defineStaticMethod("def_rsmDateOfService", js_s_BarcodeChainway_def_getRsmDateOfService);;


    defineInstanceMethod("rsmBluetoothAddress", js_BarcodeChainway_getRsmBluetoothAddress);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothAddress", js_s_BarcodeChainway_def_getRsmBluetoothAddress);;


    defineInstanceMethod("rsmFirmwareVersion", js_BarcodeChainway_getRsmFirmwareVersion);
    //  should define static method !     defineStaticMethod("def_rsmFirmwareVersion", js_s_BarcodeChainway_def_getRsmFirmwareVersion);;


    defineInstanceMethod("rsmDeviceClass", js_BarcodeChainway_getRsmDeviceClass);
    //  should define static method !     defineStaticMethod("def_rsmDeviceClass", js_s_BarcodeChainway_def_getRsmDeviceClass);;


    defineInstanceMethod("rsmBatteryStatus", js_BarcodeChainway_getRsmBatteryStatus);
    //  should define static method !     defineStaticMethod("def_rsmBatteryStatus", js_s_BarcodeChainway_def_getRsmBatteryStatus);;


    defineInstanceMethod("rsmBatteryCapacity", js_BarcodeChainway_getRsmBatteryCapacity);
    //  should define static method !     defineStaticMethod("def_rsmBatteryCapacity", js_s_BarcodeChainway_def_getRsmBatteryCapacity);;


    defineInstanceMethod("rsmBatteryId", js_BarcodeChainway_getRsmBatteryId);
    //  should define static method !     defineStaticMethod("def_rsmBatteryId", js_s_BarcodeChainway_def_getRsmBatteryId);;


    defineInstanceMethod("rsmBluetoothAuthentication", js_BarcodeChainway_getRsmBluetoothAuthentication);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothAuthentication", js_s_BarcodeChainway_def_getRsmBluetoothAuthentication);;


    defineInstanceMethod("rsmBluetoothAuthentication=", js_BarcodeChainway_setRsmBluetoothAuthentication);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothAuthentication=", js_s_BarcodeChainway_def_setRsmBluetoothAuthentication);;


    defineInstanceMethod("rsmBluetoothEncryption", js_BarcodeChainway_getRsmBluetoothEncryption);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothEncryption", js_s_BarcodeChainway_def_getRsmBluetoothEncryption);;


    defineInstanceMethod("rsmBluetoothEncryption=", js_BarcodeChainway_setRsmBluetoothEncryption);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothEncryption=", js_s_BarcodeChainway_def_setRsmBluetoothEncryption);;


    defineInstanceMethod("rsmBluetoothPinCode", js_BarcodeChainway_getRsmBluetoothPinCode);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothPinCode", js_s_BarcodeChainway_def_getRsmBluetoothPinCode);;


    defineInstanceMethod("rsmBluetoothPinCode=", js_BarcodeChainway_setRsmBluetoothPinCode);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothPinCode=", js_s_BarcodeChainway_def_setRsmBluetoothPinCode);;


    defineInstanceMethod("rsmBluetoothPinCodeType", js_BarcodeChainway_getRsmBluetoothPinCodeType);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothPinCodeType", js_s_BarcodeChainway_def_getRsmBluetoothPinCodeType);;


    defineInstanceMethod("rsmBluetoothPinCodeType=", js_BarcodeChainway_setRsmBluetoothPinCodeType);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothPinCodeType=", js_s_BarcodeChainway_def_setRsmBluetoothPinCodeType);;


    defineInstanceMethod("rsmBluetoothReconnectionAttempts", js_BarcodeChainway_getRsmBluetoothReconnectionAttempts);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothReconnectionAttempts", js_s_BarcodeChainway_def_getRsmBluetoothReconnectionAttempts);;


    defineInstanceMethod("rsmBluetoothReconnectionAttempts=", js_BarcodeChainway_setRsmBluetoothReconnectionAttempts);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothReconnectionAttempts=", js_s_BarcodeChainway_def_setRsmBluetoothReconnectionAttempts);;


    defineInstanceMethod("rsmBluetoothBeepOnReconnectAttempt", js_BarcodeChainway_getRsmBluetoothBeepOnReconnectAttempt);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothBeepOnReconnectAttempt", js_s_BarcodeChainway_def_getRsmBluetoothBeepOnReconnectAttempt);;


    defineInstanceMethod("rsmBluetoothBeepOnReconnectAttempt=", js_BarcodeChainway_setRsmBluetoothBeepOnReconnectAttempt);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothBeepOnReconnectAttempt=", js_s_BarcodeChainway_def_setRsmBluetoothBeepOnReconnectAttempt);;


    defineInstanceMethod("rsmBluetoothHidAutoReconnect", js_BarcodeChainway_getRsmBluetoothHidAutoReconnect);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothHidAutoReconnect", js_s_BarcodeChainway_def_getRsmBluetoothHidAutoReconnect);;


    defineInstanceMethod("rsmBluetoothHidAutoReconnect=", js_BarcodeChainway_setRsmBluetoothHidAutoReconnect);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothHidAutoReconnect=", js_s_BarcodeChainway_def_setRsmBluetoothHidAutoReconnect);;


    defineInstanceMethod("rsmBluetoothFriendlyName", js_BarcodeChainway_getRsmBluetoothFriendlyName);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothFriendlyName", js_s_BarcodeChainway_def_getRsmBluetoothFriendlyName);;


    defineInstanceMethod("rsmBluetoothFriendlyName=", js_BarcodeChainway_setRsmBluetoothFriendlyName);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothFriendlyName=", js_s_BarcodeChainway_def_setRsmBluetoothFriendlyName);;


    defineInstanceMethod("rsmBluetoothInquiryMode", js_BarcodeChainway_getRsmBluetoothInquiryMode);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothInquiryMode", js_s_BarcodeChainway_def_getRsmBluetoothInquiryMode);;


    defineInstanceMethod("rsmBluetoothInquiryMode=", js_BarcodeChainway_setRsmBluetoothInquiryMode);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothInquiryMode=", js_s_BarcodeChainway_def_setRsmBluetoothInquiryMode);;


    defineInstanceMethod("rsmBluetoothAutoReconnect", js_BarcodeChainway_getRsmBluetoothAutoReconnect);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothAutoReconnect", js_s_BarcodeChainway_def_getRsmBluetoothAutoReconnect);;


    defineInstanceMethod("rsmBluetoothAutoReconnect=", js_BarcodeChainway_setRsmBluetoothAutoReconnect);
    //  should define static method !     defineStaticMethod("def_rsmBluetoothAutoReconnect=", js_s_BarcodeChainway_def_setRsmBluetoothAutoReconnect);;


    defineInstanceMethod("rsmForceSavePairingBarcode", js_BarcodeChainway_getRsmForceSavePairingBarcode);
    //  should define static method !     defineStaticMethod("def_rsmForceSavePairingBarcode", js_s_BarcodeChainway_def_getRsmForceSavePairingBarcode);;


    defineInstanceMethod("rsmForceSavePairingBarcode=", js_BarcodeChainway_setRsmForceSavePairingBarcode);
    //  should define static method !     defineStaticMethod("def_rsmForceSavePairingBarcode=", js_s_BarcodeChainway_def_setRsmForceSavePairingBarcode);;


    defineInstanceMethod("rsmLowBatteryIndication", js_BarcodeChainway_getRsmLowBatteryIndication);
    //  should define static method !     defineStaticMethod("def_rsmLowBatteryIndication", js_s_BarcodeChainway_def_getRsmLowBatteryIndication);;


    defineInstanceMethod("rsmLowBatteryIndication=", js_BarcodeChainway_setRsmLowBatteryIndication);
    //  should define static method !     defineStaticMethod("def_rsmLowBatteryIndication=", js_s_BarcodeChainway_def_setRsmLowBatteryIndication);;


    defineInstanceMethod("rsmLowBatteryIndicationCycle", js_BarcodeChainway_getRsmLowBatteryIndicationCycle);
    //  should define static method !     defineStaticMethod("def_rsmLowBatteryIndicationCycle", js_s_BarcodeChainway_def_getRsmLowBatteryIndicationCycle);;


    defineInstanceMethod("rsmLowBatteryIndicationCycle=", js_BarcodeChainway_setRsmLowBatteryIndicationCycle);
    //  should define static method !     defineStaticMethod("def_rsmLowBatteryIndicationCycle=", js_s_BarcodeChainway_def_setRsmLowBatteryIndicationCycle);;


    defineInstanceMethod("rsmScanLineWidth", js_BarcodeChainway_getRsmScanLineWidth);
    //  should define static method !     defineStaticMethod("def_rsmScanLineWidth", js_s_BarcodeChainway_def_getRsmScanLineWidth);;


    defineInstanceMethod("rsmScanLineWidth=", js_BarcodeChainway_setRsmScanLineWidth);
    //  should define static method !     defineStaticMethod("def_rsmScanLineWidth=", js_s_BarcodeChainway_def_setRsmScanLineWidth);;


    defineInstanceMethod("rsmGoodScansDelay", js_BarcodeChainway_getRsmGoodScansDelay);
    //  should define static method !     defineStaticMethod("def_rsmGoodScansDelay", js_s_BarcodeChainway_def_getRsmGoodScansDelay);;


    defineInstanceMethod("rsmGoodScansDelay=", js_BarcodeChainway_setRsmGoodScansDelay);
    //  should define static method !     defineStaticMethod("def_rsmGoodScansDelay=", js_s_BarcodeChainway_def_setRsmGoodScansDelay);;


    defineInstanceMethod("rsmDecodeFeedback", js_BarcodeChainway_getRsmDecodeFeedback);
    //  should define static method !     defineStaticMethod("def_rsmDecodeFeedback", js_s_BarcodeChainway_def_getRsmDecodeFeedback);;


    defineInstanceMethod("rsmDecodeFeedback=", js_BarcodeChainway_setRsmDecodeFeedback);
    //  should define static method !     defineStaticMethod("def_rsmDecodeFeedback=", js_s_BarcodeChainway_def_setRsmDecodeFeedback);;


    defineInstanceMethod("rsmIgnoreCode128Usps", js_BarcodeChainway_getRsmIgnoreCode128Usps);
    //  should define static method !     defineStaticMethod("def_rsmIgnoreCode128Usps", js_s_BarcodeChainway_def_getRsmIgnoreCode128Usps);;


    defineInstanceMethod("rsmIgnoreCode128Usps=", js_BarcodeChainway_setRsmIgnoreCode128Usps);
    //  should define static method !     defineStaticMethod("def_rsmIgnoreCode128Usps=", js_s_BarcodeChainway_def_setRsmIgnoreCode128Usps);;


    defineInstanceMethod("rsmScanTriggerWakeup", js_BarcodeChainway_getRsmScanTriggerWakeup);
    //  should define static method !     defineStaticMethod("def_rsmScanTriggerWakeup", js_s_BarcodeChainway_def_getRsmScanTriggerWakeup);;


    defineInstanceMethod("rsmScanTriggerWakeup=", js_BarcodeChainway_setRsmScanTriggerWakeup);
    //  should define static method !     defineStaticMethod("def_rsmScanTriggerWakeup=", js_s_BarcodeChainway_def_setRsmScanTriggerWakeup);;


    defineInstanceMethod("rsmMems", js_BarcodeChainway_getRsmMems);
    //  should define static method !     defineStaticMethod("def_rsmMems", js_s_BarcodeChainway_def_getRsmMems);;


    defineInstanceMethod("rsmMems=", js_BarcodeChainway_setRsmMems);
    //  should define static method !     defineStaticMethod("def_rsmMems=", js_s_BarcodeChainway_def_setRsmMems);;


    defineInstanceMethod("rsmProximityEnable", js_BarcodeChainway_getRsmProximityEnable);
    //  should define static method !     defineStaticMethod("def_rsmProximityEnable", js_s_BarcodeChainway_def_getRsmProximityEnable);;


    defineInstanceMethod("rsmProximityEnable=", js_BarcodeChainway_setRsmProximityEnable);
    //  should define static method !     defineStaticMethod("def_rsmProximityEnable=", js_s_BarcodeChainway_def_setRsmProximityEnable);;


    defineInstanceMethod("rsmProximityContinuous", js_BarcodeChainway_getRsmProximityContinuous);
    //  should define static method !     defineStaticMethod("def_rsmProximityContinuous", js_s_BarcodeChainway_def_getRsmProximityContinuous);;


    defineInstanceMethod("rsmProximityContinuous=", js_BarcodeChainway_setRsmProximityContinuous);
    //  should define static method !     defineStaticMethod("def_rsmProximityContinuous=", js_s_BarcodeChainway_def_setRsmProximityContinuous);;


    defineInstanceMethod("rsmProximityDistance", js_BarcodeChainway_getRsmProximityDistance);
    //  should define static method !     defineStaticMethod("def_rsmProximityDistance", js_s_BarcodeChainway_def_getRsmProximityDistance);;


    defineInstanceMethod("rsmProximityDistance=", js_BarcodeChainway_setRsmProximityDistance);
    //  should define static method !     defineStaticMethod("def_rsmProximityDistance=", js_s_BarcodeChainway_def_setRsmProximityDistance);;


    defineInstanceMethod("rsmPagingEnable", js_BarcodeChainway_getRsmPagingEnable);
    //  should define static method !     defineStaticMethod("def_rsmPagingEnable", js_s_BarcodeChainway_def_getRsmPagingEnable);;


    defineInstanceMethod("rsmPagingEnable=", js_BarcodeChainway_setRsmPagingEnable);
    //  should define static method !     defineStaticMethod("def_rsmPagingEnable=", js_s_BarcodeChainway_def_setRsmPagingEnable);;


    defineInstanceMethod("rsmPagingBeepSequence", js_BarcodeChainway_getRsmPagingBeepSequence);
    //  should define static method !     defineStaticMethod("def_rsmPagingBeepSequence", js_s_BarcodeChainway_def_getRsmPagingBeepSequence);;


    defineInstanceMethod("rsmPagingBeepSequence=", js_BarcodeChainway_setRsmPagingBeepSequence);
    //  should define static method !     defineStaticMethod("def_rsmPagingBeepSequence=", js_s_BarcodeChainway_def_setRsmPagingBeepSequence);;


    defineStaticMethod("enumerate", js_s_BarcodeChainway_enumerate);


    defineInstanceMethod("enable", js_BarcodeChainway_enable);
    //  should define static method !     defineStaticMethod("def_enable", js_s_BarcodeChainway_def_enable);;


    defineInstanceMethod("registerBluetoothStatus", js_BarcodeChainway_registerBluetoothStatus);
    //  should define static method !     defineStaticMethod("def_registerBluetoothStatus", js_s_BarcodeChainway_def_registerBluetoothStatus);;


    defineInstanceMethod("start", js_BarcodeChainway_start);
    //  should define static method !     defineStaticMethod("def_start", js_s_BarcodeChainway_def_start);;


    defineInstanceMethod("stop", js_BarcodeChainway_stop);
    //  should define static method !     defineStaticMethod("def_stop", js_s_BarcodeChainway_def_stop);;


    defineInstanceMethod("disable", js_BarcodeChainway_disable);
    //  should define static method !     defineStaticMethod("def_disable", js_s_BarcodeChainway_def_disable);;


    defineInstanceMethod("barcode_recognize", js_BarcodeChainway_barcode_recognize);
    //  should define static method !     defineStaticMethod("def_barcode_recognize", js_s_BarcodeChainway_def_barcode_recognize);;


    defineInstanceMethod("getSupportedProperties", js_BarcodeChainway_getSupportedProperties);
    //  should define static method !     defineStaticMethod("def_getSupportedProperties", js_s_BarcodeChainway_def_getSupportedProperties);;


    defineInstanceMethod("take", js_BarcodeChainway_take);
    //  should define static method !     defineStaticMethod("def_take", js_s_BarcodeChainway_def_take);;


    defineInstanceMethod("take_barcode", js_BarcodeChainway_take_barcode);
    //  should define static method !     defineStaticMethod("def_take_barcode", js_s_BarcodeChainway_def_take_barcode);;


    defineInstanceMethod("commandRemoteScanner", js_BarcodeChainway_commandRemoteScanner);
    //  should define static method !     defineStaticMethod("def_commandRemoteScanner", js_s_BarcodeChainway_def_commandRemoteScanner);;


    defineInstanceMethod("getProperty", js_BarcodeChainway_getProperty);
    //  should define static method !     defineStaticMethod("def_getProperty", js_s_BarcodeChainway_def_getProperty);;


    defineInstanceMethod("getProperties", js_BarcodeChainway_getProperties);
    //  should define static method !     defineStaticMethod("def_getProperties", js_s_BarcodeChainway_def_getProperties);;


    defineInstanceMethod("getAllProperties", js_BarcodeChainway_getAllProperties);
    //  should define static method !     defineStaticMethod("def_getAllProperties", js_s_BarcodeChainway_def_getAllProperties);;


    defineInstanceMethod("setProperty", js_BarcodeChainway_setProperty);
    //  should define static method !     defineStaticMethod("def_setProperty", js_s_BarcodeChainway_def_setProperty);;


    defineInstanceMethod("setProperties", js_BarcodeChainway_setProperties);
    //  should define static method !     defineStaticMethod("def_setProperties", js_s_BarcodeChainway_def_setProperties);;


    defineStaticMethod("getDefaultID", js_s_BarcodeChainway_getDefaultID);
    defineStaticMethod("getDefault", js_s_BarcodeChainway_getDefault);
    defineStaticMethod("setDefaultID", js_s_BarcodeChainway_setDefaultID);

    RAWTRACE("Rho:BarcodeChainway API - done");
  }
}

extern "C" void Init_JSAPI_BarcodeChainway(void)
{
  rho::apiGenerator::defineJSApiModule(new BarcodeChainwayDispatcher);
}
