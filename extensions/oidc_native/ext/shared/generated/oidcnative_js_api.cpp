#include "api_generator/js_helpers.h"
#include "api_generator/Api.h"

#include "logging/RhoLog.h"
#undef DEFAULT_LOGCATEGORY
#define DEFAULT_LOGCATEGORY "OidcNative"




rho::String js_OidcNative_getSimpleStringProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_OidcNative_def_getSimpleStringProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_OidcNative_setSimpleStringProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_OidcNative_def_setSimpleStringProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_s_OidcNative_enumerate(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_OidcNative_getPlatformName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_OidcNative_def_getPlatformName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_OidcNative_calcSumm(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_OidcNative_def_calcSumm(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_OidcNative_joinStrings(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_OidcNative_def_joinStrings(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_OidcNative_getProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_OidcNative_def_getProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_OidcNative_getProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_OidcNative_def_getProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_OidcNative_getAllProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_OidcNative_def_getAllProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_OidcNative_setProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_OidcNative_def_setProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);

rho::String js_OidcNative_setProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_OidcNative_def_setProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);



rho::String js_s_OidcNative_getDefaultID(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_OidcNative_getDefault(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);
rho::String js_s_OidcNative_setDefaultID(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam);



namespace {
  using namespace rho::apiGenerator;
  class OidcNativeDispatcher : public ApiHandler<Func_JS>
  {
  public:
    OidcNativeDispatcher() : ApiHandler("Rho:OidcNative") {}
    virtual ~OidcNativeDispatcher() {}
    virtual void initialize();
  };
  
  void OidcNativeDispatcher::initialize()
  {
    ApiHandler<Func_JS>::initialize();
    
    RAWTRACE("Initializing Rho:OidcNative API...");


    defineInstanceMethod("simpleStringProperty", js_OidcNative_getSimpleStringProperty);
    //  should define static method !     defineStaticMethod("def_simpleStringProperty", js_s_OidcNative_def_getSimpleStringProperty);;


    defineInstanceMethod("simpleStringProperty=", js_OidcNative_setSimpleStringProperty);
    //  should define static method !     defineStaticMethod("def_simpleStringProperty=", js_s_OidcNative_def_setSimpleStringProperty);;


    defineStaticMethod("enumerate", js_s_OidcNative_enumerate);


    defineInstanceMethod("getPlatformName", js_OidcNative_getPlatformName);
    //  should define static method !     defineStaticMethod("def_getPlatformName", js_s_OidcNative_def_getPlatformName);;


    defineInstanceMethod("calcSumm", js_OidcNative_calcSumm);
    //  should define static method !     defineStaticMethod("def_calcSumm", js_s_OidcNative_def_calcSumm);;


    defineInstanceMethod("joinStrings", js_OidcNative_joinStrings);
    //  should define static method !     defineStaticMethod("def_joinStrings", js_s_OidcNative_def_joinStrings);;


    defineInstanceMethod("getProperty", js_OidcNative_getProperty);
    //  should define static method !     defineStaticMethod("def_getProperty", js_s_OidcNative_def_getProperty);;


    defineInstanceMethod("getProperties", js_OidcNative_getProperties);
    //  should define static method !     defineStaticMethod("def_getProperties", js_s_OidcNative_def_getProperties);;


    defineInstanceMethod("getAllProperties", js_OidcNative_getAllProperties);
    //  should define static method !     defineStaticMethod("def_getAllProperties", js_s_OidcNative_def_getAllProperties);;


    defineInstanceMethod("setProperty", js_OidcNative_setProperty);
    //  should define static method !     defineStaticMethod("def_setProperty", js_s_OidcNative_def_setProperty);;


    defineInstanceMethod("setProperties", js_OidcNative_setProperties);
    //  should define static method !     defineStaticMethod("def_setProperties", js_s_OidcNative_def_setProperties);;


    defineStaticMethod("getDefaultID", js_s_OidcNative_getDefaultID);
    defineStaticMethod("getDefault", js_s_OidcNative_getDefault);
    defineStaticMethod("setDefaultID", js_s_OidcNative_setDefaultID);

    RAWTRACE("Rho:OidcNative API - done");
  }
}

extern "C" void Init_JSAPI_OidcNative(void)
{
  rho::apiGenerator::defineJSApiModule(new OidcNativeDispatcher);
}
