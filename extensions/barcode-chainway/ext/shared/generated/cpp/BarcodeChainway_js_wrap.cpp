

#include "logging/RhoLog.h"
#undef DEFAULT_LOGCATEGORY
#define DEFAULT_LOGCATEGORY "BarcodeChainway"

#include "BarcodeChainwayBase.h"
#include "api_generator/js_helpers.h"
#include "api_generator/JSONResultConvertor.h"

#include "common/StringConverter.h"

extern "C" void rho_os_impl_performOnUiThread(rho::common::IRhoRunnable* pTask);

#ifdef OS_ANDROID
#include <jni.h>
extern "C" void* rho_nativethread_start();
JNIEnv* jnienv();
#endif //OS_ANDROID

using namespace rho;
using namespace rho::json;
using namespace rho::common;
using namespace rho::apiGenerator;


rho::String js_BarcodeChainway_getAutoEnter(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getAutoEnter(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAutoEnter,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAutoEnter(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setAutoEnter(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setAutoEnter(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAutoEnter, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAutoEnter( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getAutoTab(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getAutoTab(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAutoTab,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAutoTab(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setAutoTab(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setAutoTab(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAutoTab, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAutoTab( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getHapticFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getHapticFeedback(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getHapticFeedback,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getHapticFeedback(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setHapticFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setHapticFeedback(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = true;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setHapticFeedback, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setHapticFeedback( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getLinearSecurityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getLinearSecurityLevel(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getLinearSecurityLevel,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getLinearSecurityLevel(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setLinearSecurityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setLinearSecurityLevel(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setLinearSecurityLevel, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setLinearSecurityLevel( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getScanTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getScanTimeout(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getScanTimeout,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getScanTimeout(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setScanTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setScanTimeout(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setScanTimeout, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setScanTimeout( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRasterMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRasterMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRasterMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRasterMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRasterMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRasterMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRasterMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRasterMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRasterHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRasterHeight(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRasterHeight,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRasterHeight(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRasterHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRasterHeight(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRasterHeight, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRasterHeight( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getAimType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getAimType(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAimType,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAimType(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setAimType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setAimType(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAimType, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAimType( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getTimedAimDuration(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getTimedAimDuration(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getTimedAimDuration,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getTimedAimDuration(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setTimedAimDuration(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setTimedAimDuration(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setTimedAimDuration, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setTimedAimDuration( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getSameSymbolTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getSameSymbolTimeout(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getSameSymbolTimeout,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getSameSymbolTimeout(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setSameSymbolTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setSameSymbolTimeout(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setSameSymbolTimeout, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setSameSymbolTimeout( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDifferentSymbolTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDifferentSymbolTimeout(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDifferentSymbolTimeout,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDifferentSymbolTimeout(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDifferentSymbolTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDifferentSymbolTimeout(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDifferentSymbolTimeout, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDifferentSymbolTimeout( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getAimMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getAimMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAimMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAimMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setAimMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setAimMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAimMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAimMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getPicklistMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getPicklistMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getPicklistMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getPicklistMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setPicklistMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setPicklistMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setPicklistMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setPicklistMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getViewfinderMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getViewfinderMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setViewfinderMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setViewfinderMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getViewfinderX(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getViewfinderX(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderX,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderX(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setViewfinderX(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setViewfinderX(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderX, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderX( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getViewfinderY(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getViewfinderY(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderY,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderY(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setViewfinderY(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setViewfinderY(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderY, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderY( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getViewfinderWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getViewfinderWidth(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderWidth,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderWidth(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setViewfinderWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setViewfinderWidth(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderWidth, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderWidth( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getViewfinderHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getViewfinderHeight(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderHeight,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderHeight(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setViewfinderHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setViewfinderHeight(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderHeight, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderHeight( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getViewfinderFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getViewfinderFeedback(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderFeedback,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderFeedback(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setViewfinderFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setViewfinderFeedback(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderFeedback, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderFeedback( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getViewfinderFeedbackTime(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getViewfinderFeedbackTime(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderFeedbackTime,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderFeedbackTime(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setViewfinderFeedbackTime(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setViewfinderFeedbackTime(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderFeedbackTime, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderFeedbackTime( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getFocusMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getFocusMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getFocusMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getFocusMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setFocusMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setFocusMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setFocusMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setFocusMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getIlluminationMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getIlluminationMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getIlluminationMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getIlluminationMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setIlluminationMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setIlluminationMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setIlluminationMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setIlluminationMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDpmMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDpmMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDpmMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDpmMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDpmMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDpmMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDpmMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDpmMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getInverse1dMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getInverse1dMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getInverse1dMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getInverse1dMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setInverse1dMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setInverse1dMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setInverse1dMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setInverse1dMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getPoorQuality1dMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getPoorQuality1dMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getPoorQuality1dMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getPoorQuality1dMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setPoorQuality1dMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setPoorQuality1dMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setPoorQuality1dMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setPoorQuality1dMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getBeamWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getBeamWidth(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getBeamWidth,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getBeamWidth(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setBeamWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setBeamWidth(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setBeamWidth, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setBeamWidth( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDbpMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDbpMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDbpMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDbpMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDbpMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDbpMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDbpMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDbpMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getKlasseEins(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getKlasseEins(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getKlasseEins,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getKlasseEins(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setKlasseEins(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setKlasseEins(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setKlasseEins, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setKlasseEins( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getAdaptiveScanning(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getAdaptiveScanning(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAdaptiveScanning,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAdaptiveScanning(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setAdaptiveScanning(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setAdaptiveScanning(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAdaptiveScanning, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAdaptiveScanning( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getBidirectionalRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getBidirectionalRedundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getBidirectionalRedundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getBidirectionalRedundancy(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setBidirectionalRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setBidirectionalRedundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setBidirectionalRedundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setBidirectionalRedundancy( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getBarcodeDataFormat(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getBarcodeDataFormat(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getBarcodeDataFormat,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getBarcodeDataFormat(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setBarcodeDataFormat(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setBarcodeDataFormat(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setBarcodeDataFormat, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setBarcodeDataFormat( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDataBufferSize(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDataBufferSize(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDataBufferSize,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDataBufferSize(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDataBufferSize(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDataBufferSize(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDataBufferSize, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDataBufferSize( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getConnectionIdleTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getConnectionIdleTimeout(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getConnectionIdleTimeout,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getConnectionIdleTimeout(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setConnectionIdleTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setConnectionIdleTimeout(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setConnectionIdleTimeout, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setConnectionIdleTimeout( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDisconnectBtOnDisable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDisconnectBtOnDisable(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDisconnectBtOnDisable,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDisconnectBtOnDisable(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDisconnectBtOnDisable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDisconnectBtOnDisable(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDisconnectBtOnDisable, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDisconnectBtOnDisable( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDisplayBtAddressBarcodeOnEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDisplayBtAddressBarcodeOnEnable(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDisplayBtAddressBarcodeOnEnable,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDisplayBtAddressBarcodeOnEnable(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDisplayBtAddressBarcodeOnEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDisplayBtAddressBarcodeOnEnable(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDisplayBtAddressBarcodeOnEnable, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDisplayBtAddressBarcodeOnEnable( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getEnableTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getEnableTimeout(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getEnableTimeout,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getEnableTimeout(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setEnableTimeout(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setEnableTimeout(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setEnableTimeout, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setEnableTimeout( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getFriendlyName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getFriendlyName(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getFriendlyName,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getFriendlyName(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getLcdMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getLcdMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getLcdMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getLcdMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setLcdMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setLcdMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setLcdMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setLcdMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getLowBatteryScan(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getLowBatteryScan(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getLowBatteryScan,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getLowBatteryScan(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setLowBatteryScan(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setLowBatteryScan(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setLowBatteryScan, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setLowBatteryScan( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getTriggerConnected(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getTriggerConnected(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getTriggerConnected,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getTriggerConnected(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setTriggerConnected(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setTriggerConnected(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = true;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setTriggerConnected, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setTriggerConnected( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDisableScannerDuringNavigate(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDisableScannerDuringNavigate(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDisableScannerDuringNavigate,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDisableScannerDuringNavigate(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDisableScannerDuringNavigate(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDisableScannerDuringNavigate(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = true;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDisableScannerDuringNavigate, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDisableScannerDuringNavigate( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDecodeVolume(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDecodeVolume(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDecodeVolume,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDecodeVolume(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDecodeVolume(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDecodeVolume(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 5;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDecodeVolume, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDecodeVolume( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDecodeDuration(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDecodeDuration(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDecodeDuration,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDecodeDuration(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDecodeDuration(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDecodeDuration(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 250;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDecodeDuration, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDecodeDuration( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDecodeFrequency(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDecodeFrequency(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDecodeFrequency,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDecodeFrequency(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDecodeFrequency(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDecodeFrequency(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 3000;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDecodeFrequency, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDecodeFrequency( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getInvalidDecodeFrequency(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getInvalidDecodeFrequency(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getInvalidDecodeFrequency,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getInvalidDecodeFrequency(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setInvalidDecodeFrequency(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setInvalidDecodeFrequency(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 2500;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setInvalidDecodeFrequency, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setInvalidDecodeFrequency( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDecodeSound(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDecodeSound(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDecodeSound,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDecodeSound(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDecodeSound(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDecodeSound(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDecodeSound, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDecodeSound( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getInvalidDecodeSound(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getInvalidDecodeSound(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getInvalidDecodeSound,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getInvalidDecodeSound(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setInvalidDecodeSound(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setInvalidDecodeSound(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setInvalidDecodeSound, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setInvalidDecodeSound( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getScannerType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getScannerType(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getScannerType,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getScannerType(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getAllDecoders(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getAllDecoders(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAllDecoders,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAllDecoders(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setAllDecoders(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setAllDecoders(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAllDecoders, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAllDecoders( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getAztec(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getAztec(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAztec,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAztec(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setAztec(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setAztec(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAztec, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAztec( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getChinese2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getChinese2of5(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getChinese2of5,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getChinese2of5(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setChinese2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setChinese2of5(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setChinese2of5, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setChinese2of5( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCodabar(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCodabar(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCodabar,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCodabar(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCodabar(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCodabar(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCodabar, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCodabar( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCodabarClsiEditing(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCodabarClsiEditing(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCodabarClsiEditing,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCodabarClsiEditing(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCodabarClsiEditing(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCodabarClsiEditing(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCodabarClsiEditing, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCodabarClsiEditing( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCodabarMaxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCodabarMaxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCodabarMaxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCodabarMaxLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCodabarMaxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCodabarMaxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCodabarMaxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCodabarMaxLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCodabarMinLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCodabarMinLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCodabarMinLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCodabarMinLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCodabarMinLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCodabarMinLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCodabarMinLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCodabarMinLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCodabarNotisEditing(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCodabarNotisEditing(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCodabarNotisEditing,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCodabarNotisEditing(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCodabarNotisEditing(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCodabarNotisEditing(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCodabarNotisEditing, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCodabarNotisEditing( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCodabarRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCodabarRedundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCodabarRedundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCodabarRedundancy(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCodabarRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCodabarRedundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCodabarRedundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCodabarRedundancy( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode11(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode11(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode11,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode11(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode11(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode11(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode11, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode11( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode11checkDigitCount(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode11checkDigitCount(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode11checkDigitCount,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode11checkDigitCount(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode11checkDigitCount(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode11checkDigitCount(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode11checkDigitCount, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode11checkDigitCount( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode11maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode11maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode11maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode11maxLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode11maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode11maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode11maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode11maxLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode11minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode11minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode11minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode11minLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode11minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode11minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode11minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode11minLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode11redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode11redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode11redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode11redundancy(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode11redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode11redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode11redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode11redundancy( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode11reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode11reportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode11reportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode11reportCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode11reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode11reportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode11reportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode11reportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode128(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode128(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode128checkIsBtTable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode128checkIsBtTable(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128checkIsBtTable,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128checkIsBtTable(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode128checkIsBtTable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode128checkIsBtTable(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128checkIsBtTable, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128checkIsBtTable( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode128ean128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode128ean128(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128ean128,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128ean128(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode128ean128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode128ean128(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128ean128, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128ean128( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode128isbt128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode128isbt128(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128isbt128,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128isbt128(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode128isbt128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode128isbt128(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128isbt128, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128isbt128( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode128isbt128ConcatMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode128isbt128ConcatMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128isbt128ConcatMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128isbt128ConcatMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode128isbt128ConcatMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode128isbt128ConcatMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128isbt128ConcatMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128isbt128ConcatMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode128maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode128maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128maxLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode128maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode128maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128maxLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode128minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode128minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128minLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode128minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode128minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128minLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode128other128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode128other128(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128other128,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128other128(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode128other128(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode128other128(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128other128, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128other128( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode128redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode128redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128redundancy(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode128redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode128redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128redundancy( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode128securityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode128securityLevel(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128securityLevel,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128securityLevel(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode128securityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode128securityLevel(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128securityLevel, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128securityLevel( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCompositeAb(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCompositeAb(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCompositeAb,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCompositeAb(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCompositeAb(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCompositeAb(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCompositeAb, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCompositeAb( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCompositeAbUccLinkMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCompositeAbUccLinkMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCompositeAbUccLinkMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCompositeAbUccLinkMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCompositeAbUccLinkMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCompositeAbUccLinkMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCompositeAbUccLinkMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCompositeAbUccLinkMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCompositeAbUseUpcPreambleCheckDigitRules(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCompositeAbUseUpcPreambleCheckDigitRules(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCompositeAbUseUpcPreambleCheckDigitRules,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCompositeAbUseUpcPreambleCheckDigitRules(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCompositeAbUseUpcPreambleCheckDigitRules(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCompositeAbUseUpcPreambleCheckDigitRules(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCompositeAbUseUpcPreambleCheckDigitRules, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCompositeAbUseUpcPreambleCheckDigitRules( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCompositeC(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCompositeC(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCompositeC,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCompositeC(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCompositeC(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCompositeC(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCompositeC, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCompositeC( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode39(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode39(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode39code32Prefix(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode39code32Prefix(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39code32Prefix,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39code32Prefix(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode39code32Prefix(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode39code32Prefix(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39code32Prefix, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39code32Prefix( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode39convertToCode32(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode39convertToCode32(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39convertToCode32,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39convertToCode32(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode39convertToCode32(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode39convertToCode32(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39convertToCode32, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39convertToCode32( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode39fullAscii(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode39fullAscii(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39fullAscii,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39fullAscii(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode39fullAscii(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode39fullAscii(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39fullAscii, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39fullAscii( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode39maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode39maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39maxLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode39maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode39maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39maxLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode39minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode39minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39minLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode39minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode39minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39minLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode39redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode39redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39redundancy(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode39redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode39redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39redundancy( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode39reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode39reportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39reportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39reportCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode39reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode39reportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39reportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39reportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode39securityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode39securityLevel(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39securityLevel,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39securityLevel(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode39securityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode39securityLevel(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39securityLevel, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39securityLevel( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode39verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode39verifyCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39verifyCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39verifyCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode39verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode39verifyCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39verifyCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39verifyCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode93(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode93(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode93,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode93(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode93(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode93(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode93, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode93( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode93maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode93maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode93maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode93maxLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode93maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode93maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode93maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode93maxLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode93minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode93minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode93minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode93minLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode93minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode93minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode93minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode93minLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCode93redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCode93redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode93redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode93redundancy(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCode93redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCode93redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode93redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode93redundancy( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getD2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getD2of5(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getD2of5,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getD2of5(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setD2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setD2of5(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setD2of5, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setD2of5( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getD2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getD2of5maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getD2of5maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getD2of5maxLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setD2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setD2of5maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setD2of5maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setD2of5maxLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getD2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getD2of5minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getD2of5minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getD2of5minLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setD2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setD2of5minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setD2of5minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setD2of5minLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getD2of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getD2of5redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getD2of5redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getD2of5redundancy(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setD2of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setD2of5redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setD2of5redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setD2of5redundancy( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDatamatrix(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDatamatrix(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDatamatrix,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDatamatrix(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDatamatrix(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDatamatrix(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDatamatrix, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDatamatrix( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getEan13(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getEan13,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getEan13(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setEan13(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setEan13, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setEan13( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getEan8(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getEan8(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getEan8,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getEan8(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setEan8(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setEan8(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setEan8, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setEan8( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getEan8convertToEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getEan8convertToEan13(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getEan8convertToEan13,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getEan8convertToEan13(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setEan8convertToEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setEan8convertToEan13(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setEan8convertToEan13, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setEan8convertToEan13( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getI2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getI2of5(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setI2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setI2of5(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getI2of5convertToEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getI2of5convertToEan13(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5convertToEan13,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5convertToEan13(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setI2of5convertToEan13(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setI2of5convertToEan13(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5convertToEan13, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5convertToEan13( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getI2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getI2of5maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5maxLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setI2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setI2of5maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5maxLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getI2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getI2of5minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5minLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setI2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setI2of5minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5minLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getI2of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getI2of5redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5redundancy(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setI2of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setI2of5redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5redundancy( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getI2of5reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getI2of5reportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5reportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5reportCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setI2of5reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setI2of5reportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5reportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5reportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getI2of5verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getI2of5verifyCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5verifyCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5verifyCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setI2of5verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setI2of5verifyCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5verifyCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5verifyCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getKorean3of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getKorean3of5(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getKorean3of5,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getKorean3of5(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setKorean3of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setKorean3of5(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setKorean3of5, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setKorean3of5( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getKorean3of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getKorean3of5redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getKorean3of5redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getKorean3of5redundancy(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setKorean3of5redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setKorean3of5redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setKorean3of5redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setKorean3of5redundancy( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getKorean3of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getKorean3of5maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getKorean3of5maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getKorean3of5maxLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setKorean3of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setKorean3of5maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setKorean3of5maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setKorean3of5maxLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getKorean3of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getKorean3of5minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getKorean3of5minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getKorean3of5minLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setKorean3of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setKorean3of5minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setKorean3of5minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setKorean3of5minLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMacroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMacroPdf(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroPdf,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroPdf(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMacroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMacroPdf(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroPdf, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroPdf( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMacroPdfBufferLabels(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMacroPdfBufferLabels(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroPdfBufferLabels,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroPdfBufferLabels(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMacroPdfBufferLabels(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMacroPdfBufferLabels(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroPdfBufferLabels, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroPdfBufferLabels( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMacroPdfConvertToPdf417(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMacroPdfConvertToPdf417(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroPdfConvertToPdf417,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroPdfConvertToPdf417(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMacroPdfConvertToPdf417(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMacroPdfConvertToPdf417(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroPdfConvertToPdf417, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroPdfConvertToPdf417( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMacroPdfExclusive(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMacroPdfExclusive(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroPdfExclusive,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroPdfExclusive(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMacroPdfExclusive(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMacroPdfExclusive(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroPdfExclusive, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroPdfExclusive( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMacroMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMacroMicroPdf(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroMicroPdf,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroMicroPdf(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMacroMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMacroMicroPdf(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroMicroPdf, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroMicroPdf( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMacroMicroPdfBufferLabels(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMacroMicroPdfBufferLabels(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroMicroPdfBufferLabels,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroMicroPdfBufferLabels(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMacroMicroPdfBufferLabels(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMacroMicroPdfBufferLabels(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroMicroPdfBufferLabels, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroMicroPdfBufferLabels( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMacroMicroPdfConvertToMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMacroMicroPdfConvertToMicroPdf(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroMicroPdfConvertToMicroPdf,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroMicroPdfConvertToMicroPdf(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMacroMicroPdfConvertToMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMacroMicroPdfConvertToMicroPdf(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroMicroPdfConvertToMicroPdf, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroMicroPdfConvertToMicroPdf( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMacroMicroPdfExclusive(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMacroMicroPdfExclusive(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroMicroPdfExclusive,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroMicroPdfExclusive(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMacroMicroPdfExclusive(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMacroMicroPdfExclusive(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroMicroPdfExclusive, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroMicroPdfExclusive( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMacroMicroPdfReportAppendInfo(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMacroMicroPdfReportAppendInfo(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroMicroPdfReportAppendInfo,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroMicroPdfReportAppendInfo(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMacroMicroPdfReportAppendInfo(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMacroMicroPdfReportAppendInfo(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroMicroPdfReportAppendInfo, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroMicroPdfReportAppendInfo( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMatrix2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMatrix2of5(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMatrix2of5,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMatrix2of5(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMatrix2of5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMatrix2of5(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMatrix2of5, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMatrix2of5( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMatrix2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMatrix2of5maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMatrix2of5maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMatrix2of5maxLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMatrix2of5maxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMatrix2of5maxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMatrix2of5maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMatrix2of5maxLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMatrix2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMatrix2of5minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMatrix2of5minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMatrix2of5minLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMatrix2of5minLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMatrix2of5minLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMatrix2of5minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMatrix2of5minLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMatrix2of5reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMatrix2of5reportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMatrix2of5reportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMatrix2of5reportCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMatrix2of5reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMatrix2of5reportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMatrix2of5reportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMatrix2of5reportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMatrix2of5verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMatrix2of5verifyCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMatrix2of5verifyCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMatrix2of5verifyCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMatrix2of5verifyCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMatrix2of5verifyCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMatrix2of5verifyCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMatrix2of5verifyCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMaxiCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMaxiCode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMaxiCode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMaxiCode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMaxiCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMaxiCode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMaxiCode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMaxiCode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMicroPdf(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMicroPdf,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMicroPdf(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMicroPdf(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMicroPdf(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMicroPdf, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMicroPdf( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMicroQr(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMicroQr(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMicroQr,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMicroQr(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMicroQr(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMicroQr(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMicroQr, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMicroQr( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMsi(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMsi(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsi,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsi(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMsi(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMsi(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsi, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsi( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMsiCheckDigits(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMsiCheckDigits(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsiCheckDigits,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsiCheckDigits(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMsiCheckDigits(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMsiCheckDigits(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsiCheckDigits, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsiCheckDigits( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMsiCheckDigitScheme(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMsiCheckDigitScheme(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsiCheckDigitScheme,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsiCheckDigitScheme(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMsiCheckDigitScheme(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMsiCheckDigitScheme(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsiCheckDigitScheme, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsiCheckDigitScheme( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMsiMaxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMsiMaxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsiMaxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsiMaxLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMsiMaxLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMsiMaxLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsiMaxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsiMaxLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMsiMinLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMsiMinLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsiMinLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsiMinLength(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMsiMinLength(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMsiMinLength(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsiMinLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsiMinLength( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMsiRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMsiRedundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsiRedundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsiRedundancy(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMsiRedundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMsiRedundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsiRedundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsiRedundancy( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getMsiReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getMsiReportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsiReportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsiReportCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setMsiReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setMsiReportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsiReportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsiReportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getPdf417(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getPdf417(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getPdf417,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getPdf417(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setPdf417(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setPdf417(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setPdf417, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setPdf417( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getSignature(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getSignature(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getSignature,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getSignature(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setSignature(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setSignature(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setSignature, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setSignature( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getSignatureImageHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getSignatureImageHeight(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getSignatureImageHeight,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getSignatureImageHeight(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setSignatureImageHeight(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setSignatureImageHeight(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setSignatureImageHeight, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setSignatureImageHeight( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getSignatureImageWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getSignatureImageWidth(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getSignatureImageWidth,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getSignatureImageWidth(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setSignatureImageWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setSignatureImageWidth(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setSignatureImageWidth, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setSignatureImageWidth( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getSignatureImageQuality(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getSignatureImageQuality(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getSignatureImageQuality,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getSignatureImageQuality(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setSignatureImageQuality(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setSignatureImageQuality(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setSignatureImageQuality, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setSignatureImageQuality( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getAusPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getAusPostal(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAusPostal,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAusPostal(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setAusPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setAusPostal(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAusPostal, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAusPostal( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getCanPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getCanPostal(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCanPostal,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCanPostal(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setCanPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setCanPostal(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCanPostal, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCanPostal( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getDutchPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getDutchPostal(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDutchPostal,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDutchPostal(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setDutchPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setDutchPostal(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDutchPostal, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDutchPostal( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getJapPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getJapPostal(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getJapPostal,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getJapPostal(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setJapPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setJapPostal(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setJapPostal, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setJapPostal( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUkPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUkPostal(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUkPostal,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUkPostal(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUkPostal(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUkPostal(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUkPostal, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUkPostal( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUkPostalReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUkPostalReportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUkPostalReportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUkPostalReportCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUkPostalReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUkPostalReportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUkPostalReportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUkPostalReportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUs4state(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUs4state(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUs4state,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUs4state(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUs4state(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUs4state(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUs4state, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUs4state( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUs4stateFics(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUs4stateFics(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUs4stateFics,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUs4stateFics(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUs4stateFics(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUs4stateFics(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUs4stateFics, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUs4stateFics( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUsPlanet(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUsPlanet(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUsPlanet,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUsPlanet(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUsPlanet(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUsPlanet(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUsPlanet, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUsPlanet( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUsPlanetReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUsPlanetReportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUsPlanetReportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUsPlanetReportCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUsPlanetReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUsPlanetReportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUsPlanetReportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUsPlanetReportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUsPostNet(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUsPostNet(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUsPostNet,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUsPostNet(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUsPostNet(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUsPostNet(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUsPostNet, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUsPostNet( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUsPostNetReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUsPostNetReportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUsPostNetReportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUsPostNetReportCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUsPostNetReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUsPostNetReportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUsPostNetReportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUsPostNetReportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getQrCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getQrCode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getQrCode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getQrCode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setQrCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setQrCode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setQrCode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setQrCode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getGs1dataBar(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getGs1dataBar(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getGs1dataBar,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getGs1dataBar(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setGs1dataBar(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setGs1dataBar(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setGs1dataBar, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setGs1dataBar( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getGs1dataBarExpanded(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getGs1dataBarExpanded(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getGs1dataBarExpanded,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getGs1dataBarExpanded(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setGs1dataBarExpanded(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setGs1dataBarExpanded(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setGs1dataBarExpanded, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setGs1dataBarExpanded( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getGs1dataBarLimited(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getGs1dataBarLimited(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getGs1dataBarLimited,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getGs1dataBarLimited(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setGs1dataBarLimited(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setGs1dataBarLimited(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setGs1dataBarLimited, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setGs1dataBarLimited( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getTlc39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getTlc39(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getTlc39,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getTlc39(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setTlc39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setTlc39(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setTlc39, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setTlc39( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getTrioptic39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getTrioptic39(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getTrioptic39,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getTrioptic39(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setTrioptic39(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setTrioptic39(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setTrioptic39, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setTrioptic39( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getTrioptic39Redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getTrioptic39Redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getTrioptic39Redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getTrioptic39Redundancy(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setTrioptic39Redundancy(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setTrioptic39Redundancy(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setTrioptic39Redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setTrioptic39Redundancy( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcEanBookland(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcEanBookland(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanBookland,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanBookland(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcEanBookland(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcEanBookland(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanBookland, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanBookland( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcEanBooklandFormat(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcEanBooklandFormat(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanBooklandFormat,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanBooklandFormat(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcEanBooklandFormat(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcEanBooklandFormat(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanBooklandFormat, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanBooklandFormat( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcEanConvertGs1dataBarToUpcEan(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcEanConvertGs1dataBarToUpcEan(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanConvertGs1dataBarToUpcEan,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanConvertGs1dataBarToUpcEan(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcEanConvertGs1dataBarToUpcEan(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcEanConvertGs1dataBarToUpcEan(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanConvertGs1dataBarToUpcEan, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanConvertGs1dataBarToUpcEan( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcEanCoupon(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcEanCoupon(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanCoupon,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanCoupon(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcEanCoupon(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcEanCoupon(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanCoupon, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanCoupon( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcEanLinearDecode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcEanLinearDecode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanLinearDecode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanLinearDecode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcEanLinearDecode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcEanLinearDecode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanLinearDecode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanLinearDecode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcEanRandomWeightCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcEanRandomWeightCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanRandomWeightCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanRandomWeightCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcEanRandomWeightCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcEanRandomWeightCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanRandomWeightCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanRandomWeightCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcEanRetryCount(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcEanRetryCount(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanRetryCount,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanRetryCount(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcEanRetryCount(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcEanRetryCount(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanRetryCount, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanRetryCount( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcEanSecurityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcEanSecurityLevel(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanSecurityLevel,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanSecurityLevel(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcEanSecurityLevel(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcEanSecurityLevel(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanSecurityLevel, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanSecurityLevel( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcEanSupplemental2(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcEanSupplemental2(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanSupplemental2,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanSupplemental2(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcEanSupplemental2(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcEanSupplemental2(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanSupplemental2, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanSupplemental2( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcEanSupplemental5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcEanSupplemental5(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanSupplemental5,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanSupplemental5(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcEanSupplemental5(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcEanSupplemental5(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanSupplemental5, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanSupplemental5( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcEanSupplementalMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcEanSupplementalMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanSupplementalMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanSupplementalMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcEanSupplementalMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcEanSupplementalMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanSupplementalMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanSupplementalMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpca(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpca,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpca(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpca(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpca, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpca( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcaPreamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcaPreamble(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcaPreamble,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcaPreamble(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcaPreamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcaPreamble(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcaPreamble, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcaPreamble( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpcaReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpcaReportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcaReportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcaReportCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpcaReportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpcaReportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcaReportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcaReportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpce0(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpce0(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce0(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpce0(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpce0(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce0, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce0( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpce0convertToUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpce0convertToUpca(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce0convertToUpca,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce0convertToUpca(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpce0convertToUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpce0convertToUpca(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce0convertToUpca, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce0convertToUpca( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpce0preamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpce0preamble(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce0preamble,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce0preamble(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpce0preamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpce0preamble(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce0preamble, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce0preamble( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpce0reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpce0reportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce0reportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce0reportCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpce0reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpce0reportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce0reportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce0reportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpce1(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpce1(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce1,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce1(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpce1(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpce1(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce1, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce1( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpce1convertToUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpce1convertToUpca(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce1convertToUpca,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce1convertToUpca(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpce1convertToUpca(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpce1convertToUpca(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce1convertToUpca, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce1convertToUpca( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpce1preamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpce1preamble(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce1preamble,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce1preamble(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpce1preamble(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpce1preamble(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce1preamble, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce1preamble( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getUpce1reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getUpce1reportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce1reportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce1reportCheckDigit(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setUpce1reportCheckDigit(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setUpce1reportCheckDigit(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce1reportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce1reportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getWebcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getWebcode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getWebcode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getWebcode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setWebcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setWebcode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setWebcode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setWebcode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getWebcodeDecodeGtSubtype(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getWebcodeDecodeGtSubtype(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getWebcodeDecodeGtSubtype,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getWebcodeDecodeGtSubtype(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setWebcodeDecodeGtSubtype(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setWebcodeDecodeGtSubtype(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setWebcodeDecodeGtSubtype, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setWebcodeDecodeGtSubtype( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmModelNumber(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmModelNumber(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmModelNumber,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmModelNumber(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmSerialNumber(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmSerialNumber(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmSerialNumber,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmSerialNumber(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmDateOfManufacture(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmDateOfManufacture(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmDateOfManufacture,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmDateOfManufacture(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmDateOfService(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmDateOfService(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmDateOfService,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmDateOfService(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBluetoothAddress(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBluetoothAddress(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothAddress,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothAddress(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmFirmwareVersion(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmFirmwareVersion(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmFirmwareVersion,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmFirmwareVersion(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmDeviceClass(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmDeviceClass(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmDeviceClass,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmDeviceClass(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBatteryStatus(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBatteryStatus(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBatteryStatus,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBatteryStatus(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBatteryCapacity(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBatteryCapacity(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBatteryCapacity,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBatteryCapacity(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBatteryId(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBatteryId(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBatteryId,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBatteryId(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBluetoothAuthentication(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBluetoothAuthentication(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothAuthentication,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothAuthentication(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmBluetoothAuthentication(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmBluetoothAuthentication(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothAuthentication, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothAuthentication( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBluetoothEncryption(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBluetoothEncryption(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothEncryption,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothEncryption(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmBluetoothEncryption(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmBluetoothEncryption(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothEncryption, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothEncryption( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBluetoothPinCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBluetoothPinCode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothPinCode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothPinCode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmBluetoothPinCode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmBluetoothPinCode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothPinCode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothPinCode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBluetoothPinCodeType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBluetoothPinCodeType(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothPinCodeType,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothPinCodeType(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmBluetoothPinCodeType(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmBluetoothPinCodeType(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothPinCodeType, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothPinCodeType( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBluetoothReconnectionAttempts(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBluetoothReconnectionAttempts(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothReconnectionAttempts,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothReconnectionAttempts(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmBluetoothReconnectionAttempts(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmBluetoothReconnectionAttempts(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothReconnectionAttempts, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothReconnectionAttempts( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBluetoothBeepOnReconnectAttempt(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBluetoothBeepOnReconnectAttempt(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothBeepOnReconnectAttempt,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothBeepOnReconnectAttempt(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmBluetoothBeepOnReconnectAttempt(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmBluetoothBeepOnReconnectAttempt(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothBeepOnReconnectAttempt, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothBeepOnReconnectAttempt( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBluetoothHidAutoReconnect(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBluetoothHidAutoReconnect(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothHidAutoReconnect,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothHidAutoReconnect(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmBluetoothHidAutoReconnect(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmBluetoothHidAutoReconnect(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothHidAutoReconnect, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothHidAutoReconnect( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBluetoothFriendlyName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBluetoothFriendlyName(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothFriendlyName,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothFriendlyName(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmBluetoothFriendlyName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmBluetoothFriendlyName(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothFriendlyName, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothFriendlyName( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBluetoothInquiryMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBluetoothInquiryMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothInquiryMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothInquiryMode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmBluetoothInquiryMode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmBluetoothInquiryMode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothInquiryMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothInquiryMode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmBluetoothAutoReconnect(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmBluetoothAutoReconnect(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothAutoReconnect,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothAutoReconnect(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmBluetoothAutoReconnect(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmBluetoothAutoReconnect(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothAutoReconnect, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothAutoReconnect( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmForceSavePairingBarcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmForceSavePairingBarcode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmForceSavePairingBarcode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmForceSavePairingBarcode(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmForceSavePairingBarcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmForceSavePairingBarcode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmForceSavePairingBarcode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmForceSavePairingBarcode( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmLowBatteryIndication(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmLowBatteryIndication(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmLowBatteryIndication,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmLowBatteryIndication(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmLowBatteryIndication(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmLowBatteryIndication(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmLowBatteryIndication, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmLowBatteryIndication( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmLowBatteryIndicationCycle(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmLowBatteryIndicationCycle(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmLowBatteryIndicationCycle,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmLowBatteryIndicationCycle(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmLowBatteryIndicationCycle(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmLowBatteryIndicationCycle(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmLowBatteryIndicationCycle, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmLowBatteryIndicationCycle( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmScanLineWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmScanLineWidth(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmScanLineWidth,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmScanLineWidth(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmScanLineWidth(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmScanLineWidth(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmScanLineWidth, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmScanLineWidth( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmGoodScansDelay(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmGoodScansDelay(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmGoodScansDelay,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmGoodScansDelay(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmGoodScansDelay(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmGoodScansDelay(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmGoodScansDelay, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmGoodScansDelay( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmDecodeFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmDecodeFeedback(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmDecodeFeedback,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmDecodeFeedback(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmDecodeFeedback(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmDecodeFeedback(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmDecodeFeedback, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmDecodeFeedback( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmIgnoreCode128Usps(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmIgnoreCode128Usps(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmIgnoreCode128Usps,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmIgnoreCode128Usps(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmIgnoreCode128Usps(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmIgnoreCode128Usps(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmIgnoreCode128Usps, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmIgnoreCode128Usps( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmScanTriggerWakeup(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmScanTriggerWakeup(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmScanTriggerWakeup,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmScanTriggerWakeup(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmScanTriggerWakeup(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmScanTriggerWakeup(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmScanTriggerWakeup, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmScanTriggerWakeup( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmMems(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmMems(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmMems,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmMems(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmMems(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmMems(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmMems, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmMems( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmProximityEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmProximityEnable(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmProximityEnable,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmProximityEnable(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmProximityEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmProximityEnable(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmProximityEnable, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmProximityEnable( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmProximityContinuous(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmProximityContinuous(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmProximityContinuous,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmProximityContinuous(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmProximityContinuous(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmProximityContinuous(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmProximityContinuous, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmProximityContinuous( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmProximityDistance(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmProximityDistance(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmProximityDistance,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmProximityDistance(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmProximityDistance(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmProximityDistance(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmProximityDistance, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmProximityDistance( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmPagingEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmPagingEnable(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eBool);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmPagingEnable,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmPagingEnable(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmPagingEnable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmPagingEnable(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( argv[0].isBoolean() )
            arg0 = argv[0].getBoolean();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmPagingEnable, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmPagingEnable( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getRsmPagingBeepSequence(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getRsmPagingBeepSequence(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eInt);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmPagingBeepSequence,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmPagingBeepSequence(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setRsmPagingBeepSequence(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setRsmPagingBeepSequence(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( argv[0].isInteger() )
            arg0 = argv[0].getInt();
        else if (!argv[0].isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmPagingBeepSequence, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmPagingBeepSequence( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_s_BarcodeChainway_enumerate(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("enumerate(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setParamName( "result" );
    oRes.setJSObjectClassPath( "Rho.BarcodeChainway" );
    oRes.setRequestedType(CMethodResult::eStringArray);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    oRes.setCallInUIThread(false);
    oRes.setJSCallback( strCallbackID, strJsVmID);
    oRes.setCallbackParam( strCallbackParam );

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS(), &rho::IBarcodeChainwaySingleton::enumerate,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->enumerate(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_enable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("enable(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eStringHash);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    rho::Hashtable<rho::String, rho::String> arg0;
    if ( argc > 0 )
    {
        CJSONEntry value(argv[0]);
        if ( value.isObject() )
        {
            
            CJSONStructIterator objIter(value);

            for( ; !objIter.isEnd(); objIter.next() )
            {
                arg0[objIter.getCurKey()] = objIter.getCurString();
            }
            
        }
        else if (!value.isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "hash" );
            return oRes.toJSON();
        }
    }

    oRes.setCallInUIThread(false);
    oRes.setJSCallback( strCallbackID, strJsVmID);
    oRes.setCallbackParam( strCallbackParam );

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::enable, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->enable( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_registerBluetoothStatus(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("registerBluetoothStatus(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eStringHash);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    oRes.setCallInUIThread(false);
    oRes.setJSCallback( strCallbackID, strJsVmID);
    oRes.setCallbackParam( strCallbackParam );

    if ( !oRes.hasCallback() )
    {
        oRes.setArgError("Callback argument is missed");
        return oRes.toJSON();
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::registerBluetoothStatus,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->registerBluetoothStatus(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_start(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("start(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::start,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->start(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_stop(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("stop(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::stop,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->stop(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_disable(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("disable(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::disable,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->disable(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_barcode_recognize(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("barcode_recognize(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::barcode_recognize, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->barcode_recognize( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getSupportedProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getSupportedProperties(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setParamName( "result" );
    oRes.setRequestedType(CMethodResult::eStringArray);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    oRes.setCallInUIThread(false);
    oRes.setJSCallback( strCallbackID, strJsVmID);
    oRes.setCallbackParam( strCallbackParam );

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getSupportedProperties,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getSupportedProperties(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_take(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("take(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eStringHash);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    rho::Hashtable<rho::String, rho::String> arg0;
    if ( argc > 0 )
    {
        CJSONEntry value(argv[0]);
        if ( value.isObject() )
        {
            
            CJSONStructIterator objIter(value);

            for( ; !objIter.isEnd(); objIter.next() )
            {
                arg0[objIter.getCurKey()] = objIter.getCurString();
            }
            
        }
        else if (!value.isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "hash" );
            return oRes.toJSON();
        }
    }

    oRes.setCallInUIThread(false);
    oRes.setJSCallback( strCallbackID, strJsVmID);
    oRes.setCallbackParam( strCallbackParam );

    if ( !oRes.hasCallback() )
    {
        oRes.setArgError("Callback argument is missed");
        return oRes.toJSON();
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::take, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->take( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_take_barcode(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("take_barcode(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(2) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    rho::Hashtable<rho::String, rho::String> arg1;
    if ( argc > 1 )
    {
        CJSONEntry value(argv[1]);
        if ( value.isObject() )
        {
            
            CJSONStructIterator objIter(value);

            for( ; !objIter.isEnd(); objIter.next() )
            {
                arg1[objIter.getCurKey()] = objIter.getCurString();
            }
            
        }
        else if (!value.isNull())
        {
            oRes.setArgError("Type error: argument " "1" " should be " "hash" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor3( pObj, &rho::IBarcodeChainway::take_barcode, arg0, arg1,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->take_barcode( arg0, arg1,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_commandRemoteScanner(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("commandRemoteScanner(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::commandRemoteScanner, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->commandRemoteScanner( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getProperty(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eString);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    oRes.setCallInUIThread(false);
    oRes.setJSCallback( strCallbackID, strJsVmID);
    oRes.setCallbackParam( strCallbackParam );

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::getProperty, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getProperty( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getProperties(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eStringHash);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::Vector<rho::String> arg0;
    if ( argc > 0 )
    {
        CJSONEntry value(argv[0]);
        if ( value.isArray() )
        {
            
            CJSONArray arParam(value);
            arg0.reserve(arParam.getSize());
            for( int i = 0; i < arParam.getSize(); i++ )
            {
                arg0.addElement( arParam[i].getStringObject() );
            }
            
        }
        else if (!value.isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "array" );
            return oRes.toJSON();
        }
    }

    oRes.setCallInUIThread(false);
    oRes.setJSCallback( strCallbackID, strJsVmID);
    oRes.setCallbackParam( strCallbackParam );

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::getProperties, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getProperties( arg0,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_getAllProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("getAllProperties(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;


    oRes.setRequestedType(CMethodResult::eStringHash);

    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    oRes.setCallInUIThread(false);
    oRes.setJSCallback( strCallbackID, strJsVmID);
    oRes.setCallbackParam( strCallbackParam );

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAllProperties,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAllProperties(  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setProperty(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(2) );
        return oRes.toJSON();
    }
    
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( argv[0].isString() )
        {
            arg0 = argv[0].getStringObject();
        }
        else if (!argv[0].isNull())
        {
            oRes.setArgError( "Type error: argument " "0" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( argc == 1 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(2) );
        return oRes.toJSON();
    }
    
    rho::String arg1 = "";
    if ( argc > 1 )
    {
        if ( argv[1].isString() )
        {
            arg1 = argv[1].getStringObject();
        }
        else if (!argv[1].isNull())
        {
            oRes.setArgError( "Type error: argument " "1" " should be " "string" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor3( pObj, &rho::IBarcodeChainway::setProperty, arg0, arg1,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setProperty( arg0, arg1,  oRes );
    }
    
    return oRes.toJSON();

}

rho::String js_BarcodeChainway_setProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    RAWTRACE4("setProperties(strObjID = %s, argc = %d, strCallbackID = %s, strJsVmID = %s)", strObjID.c_str(), argv.getSize(), strCallbackID.c_str(), strJsVmID.c_str());

#ifdef OS_ANDROID
    if ( jnienv() == 0 )
    {
        rho_nativethread_start();
    }
#endif

    rho::apiGenerator::CMethodResult oRes;



    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    int argc = argv.getSize();

    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strObjID);

    if ( argc == 0 )
    {
        oRes.setArgError( "Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toJSON();
    }
    
    rho::Hashtable<rho::String, rho::String> arg0;
    if ( argc > 0 )
    {
        CJSONEntry value(argv[0]);
        if ( value.isObject() )
        {
            
            CJSONStructIterator objIter(value);

            for( ; !objIter.isEnd(); objIter.next() )
            {
                arg0[objIter.getCurKey()] = objIter.getCurString();
            }
            
        }
        else if (!value.isNull())
        {
            oRes.setArgError("Type error: argument " "0" " should be " "hash" );
            return oRes.toJSON();
        }
    }

    if ( oRes.hasCallback() )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setProperties, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setProperties( arg0,  oRes );
    }
    
    return oRes.toJSON();

}



rho::String js_s_BarcodeChainway_getDefaultID(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    rho::apiGenerator::CMethodResult oRes;
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    oRes.set(strDefaultID);

    return oRes.toJSON();
}

rho::String js_s_BarcodeChainway_getDefault(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    rho::apiGenerator::CMethodResult oRes;
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    oRes.set(strDefaultID);
    oRes.setJSObjectClassPath("Rho.BarcodeChainway");

    return oRes.toJSON();
}

rho::String js_s_BarcodeChainway_setDefaultID(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    rho::apiGenerator::CMethodResult oRes;
    rho::json::CJSONEntry el = argv[0];

    if (el.isString()) {
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->setDefaultID(el.getString());
    } else {
        oRes.setError("Method parameter should be defined as string!");
    }

    return oRes.toJSON();
}


