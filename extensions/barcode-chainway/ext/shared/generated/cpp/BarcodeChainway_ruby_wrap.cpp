
#include "BarcodeChainwayBase.h"

#include "logging/RhoLog.h"
#undef DEFAULT_LOGCATEGORY
#define DEFAULT_LOGCATEGORY "BarcodeChainway"

#include "api_generator/RubyResultConvertor.h"

#include "ruby/ext/rho/rhoruby.h"
#include "common/StringConverter.h"
#include "common/AutoPointer.h"

using namespace rho;
using namespace rho::common;
using namespace rho::apiGenerator;

extern "C"
{
void rho_os_impl_performOnUiThread(rho::common::IRhoRunnable* pTask);
VALUE getRuby_BarcodeChainway_Module();


VALUE rb_BarcodeChainway_s_default(VALUE klass)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();

    return rho_ruby_create_object_with_id( klass, strDefaultID.c_str() );
}

VALUE rb_BarcodeChainway_s_setDefault(VALUE klass, VALUE valObj)
{
    const char* szID = rho_ruby_get_object_id( valObj );
    rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->setDefaultID(szID);

    return rho_ruby_get_NIL();
}


static void string_iter(const char* szVal, int valueLen, void* par)
{
    rho::Vector<rho::String>& ar = *((rho::Vector<rho::String>*)(par));
    ar.addElement( rho::String(szVal,valueLen) );
}

static void getStringArrayFromValue(VALUE val, rho::Vector<rho::String>& res)
{
    rho_ruby_enum_strary_json(val, string_iter, &res);
}

static void hash_eachstr(const char* szName, const char* szVal, int valueLen, void* par)
{
    rho::Hashtable<rho::String, rho::String>& hash = *((rho::Hashtable<rho::String, rho::String>*)(par));
    hash.put( szName, rho::String(szVal,valueLen) );
}

static void getStringHashFromValue(VALUE val, rho::Hashtable<rho::String, rho::String>& res)
{
    rho_ruby_enum_strhash_json(val, hash_eachstr, &res);
}
    
static rho::String getStringObjectFromValue(VALUE val)
{
    return rho::String(getStringFromValue(val),getStringLenFromValue(val));
}


static VALUE _api_generator_BarcodeChainway_getAutoEnter(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAutoEnter,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAutoEnter(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getAutoEnter(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getAutoEnter(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getAutoEnter(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getAutoEnter(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setAutoEnter(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAutoEnter, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAutoEnter( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setAutoEnter(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setAutoEnter(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setAutoEnter(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setAutoEnter(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getAutoTab(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAutoTab,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAutoTab(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getAutoTab(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getAutoTab(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getAutoTab(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getAutoTab(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setAutoTab(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAutoTab, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAutoTab( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setAutoTab(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setAutoTab(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setAutoTab(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setAutoTab(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getHapticFeedback(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getHapticFeedback,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getHapticFeedback(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getHapticFeedback(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getHapticFeedback(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getHapticFeedback(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getHapticFeedback(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setHapticFeedback(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = true;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setHapticFeedback, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setHapticFeedback( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setHapticFeedback(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setHapticFeedback(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setHapticFeedback(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setHapticFeedback(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getLinearSecurityLevel(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getLinearSecurityLevel,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getLinearSecurityLevel(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getLinearSecurityLevel(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getLinearSecurityLevel(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getLinearSecurityLevel(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getLinearSecurityLevel(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setLinearSecurityLevel(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setLinearSecurityLevel, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setLinearSecurityLevel( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setLinearSecurityLevel(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setLinearSecurityLevel(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setLinearSecurityLevel(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setLinearSecurityLevel(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getScanTimeout(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getScanTimeout,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getScanTimeout(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getScanTimeout(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getScanTimeout(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getScanTimeout(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getScanTimeout(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setScanTimeout(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setScanTimeout, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setScanTimeout( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setScanTimeout(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setScanTimeout(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setScanTimeout(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setScanTimeout(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRasterMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRasterMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRasterMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRasterMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRasterMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRasterMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRasterMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRasterMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRasterMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRasterMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRasterMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRasterMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRasterMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRasterMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRasterHeight(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRasterHeight,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRasterHeight(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRasterHeight(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRasterHeight(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRasterHeight(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRasterHeight(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRasterHeight(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRasterHeight, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRasterHeight( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRasterHeight(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRasterHeight(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRasterHeight(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRasterHeight(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getAimType(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAimType,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAimType(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getAimType(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getAimType(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getAimType(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getAimType(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setAimType(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAimType, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAimType( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setAimType(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setAimType(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setAimType(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setAimType(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getTimedAimDuration(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getTimedAimDuration,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getTimedAimDuration(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getTimedAimDuration(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getTimedAimDuration(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getTimedAimDuration(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getTimedAimDuration(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setTimedAimDuration(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setTimedAimDuration, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setTimedAimDuration( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setTimedAimDuration(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setTimedAimDuration(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setTimedAimDuration(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setTimedAimDuration(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getSameSymbolTimeout(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getSameSymbolTimeout,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getSameSymbolTimeout(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getSameSymbolTimeout(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getSameSymbolTimeout(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getSameSymbolTimeout(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getSameSymbolTimeout(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setSameSymbolTimeout(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setSameSymbolTimeout, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setSameSymbolTimeout( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setSameSymbolTimeout(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setSameSymbolTimeout(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setSameSymbolTimeout(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setSameSymbolTimeout(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDifferentSymbolTimeout(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDifferentSymbolTimeout,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDifferentSymbolTimeout(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDifferentSymbolTimeout(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDifferentSymbolTimeout(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDifferentSymbolTimeout(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDifferentSymbolTimeout(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDifferentSymbolTimeout(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDifferentSymbolTimeout, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDifferentSymbolTimeout( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDifferentSymbolTimeout(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDifferentSymbolTimeout(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDifferentSymbolTimeout(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDifferentSymbolTimeout(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getAimMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAimMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAimMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getAimMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getAimMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getAimMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getAimMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setAimMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAimMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAimMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setAimMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setAimMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setAimMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setAimMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getPicklistMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getPicklistMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getPicklistMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getPicklistMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getPicklistMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getPicklistMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getPicklistMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setPicklistMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setPicklistMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setPicklistMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setPicklistMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setPicklistMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setPicklistMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setPicklistMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getViewfinderMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getViewfinderMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getViewfinderMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getViewfinderMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getViewfinderMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setViewfinderMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setViewfinderMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setViewfinderMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setViewfinderMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setViewfinderMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getViewfinderX(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderX,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderX(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getViewfinderX(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getViewfinderX(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getViewfinderX(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getViewfinderX(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setViewfinderX(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderX, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderX( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setViewfinderX(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setViewfinderX(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setViewfinderX(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setViewfinderX(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getViewfinderY(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderY,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderY(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getViewfinderY(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getViewfinderY(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getViewfinderY(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getViewfinderY(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setViewfinderY(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderY, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderY( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setViewfinderY(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setViewfinderY(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setViewfinderY(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setViewfinderY(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getViewfinderWidth(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderWidth,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderWidth(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getViewfinderWidth(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getViewfinderWidth(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getViewfinderWidth(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getViewfinderWidth(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setViewfinderWidth(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderWidth, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderWidth( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setViewfinderWidth(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setViewfinderWidth(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setViewfinderWidth(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setViewfinderWidth(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getViewfinderHeight(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderHeight,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderHeight(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getViewfinderHeight(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getViewfinderHeight(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getViewfinderHeight(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getViewfinderHeight(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setViewfinderHeight(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderHeight, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderHeight( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setViewfinderHeight(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setViewfinderHeight(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setViewfinderHeight(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setViewfinderHeight(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getViewfinderFeedback(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderFeedback,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderFeedback(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getViewfinderFeedback(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getViewfinderFeedback(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getViewfinderFeedback(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getViewfinderFeedback(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setViewfinderFeedback(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderFeedback, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderFeedback( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setViewfinderFeedback(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setViewfinderFeedback(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setViewfinderFeedback(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setViewfinderFeedback(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getViewfinderFeedbackTime(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getViewfinderFeedbackTime,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getViewfinderFeedbackTime(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getViewfinderFeedbackTime(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getViewfinderFeedbackTime(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getViewfinderFeedbackTime(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getViewfinderFeedbackTime(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setViewfinderFeedbackTime(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setViewfinderFeedbackTime, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setViewfinderFeedbackTime( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setViewfinderFeedbackTime(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setViewfinderFeedbackTime(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setViewfinderFeedbackTime(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setViewfinderFeedbackTime(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getFocusMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getFocusMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getFocusMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getFocusMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getFocusMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getFocusMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getFocusMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setFocusMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setFocusMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setFocusMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setFocusMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setFocusMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setFocusMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setFocusMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getIlluminationMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getIlluminationMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getIlluminationMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getIlluminationMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getIlluminationMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getIlluminationMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getIlluminationMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setIlluminationMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setIlluminationMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setIlluminationMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setIlluminationMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setIlluminationMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setIlluminationMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setIlluminationMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDpmMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDpmMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDpmMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDpmMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDpmMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDpmMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDpmMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDpmMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDpmMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDpmMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDpmMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDpmMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDpmMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDpmMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getInverse1dMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getInverse1dMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getInverse1dMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getInverse1dMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getInverse1dMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getInverse1dMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getInverse1dMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setInverse1dMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setInverse1dMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setInverse1dMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setInverse1dMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setInverse1dMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setInverse1dMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setInverse1dMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getPoorQuality1dMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getPoorQuality1dMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getPoorQuality1dMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getPoorQuality1dMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getPoorQuality1dMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getPoorQuality1dMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getPoorQuality1dMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setPoorQuality1dMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setPoorQuality1dMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setPoorQuality1dMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setPoorQuality1dMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setPoorQuality1dMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setPoorQuality1dMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setPoorQuality1dMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getBeamWidth(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getBeamWidth,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getBeamWidth(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getBeamWidth(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getBeamWidth(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getBeamWidth(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getBeamWidth(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setBeamWidth(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setBeamWidth, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setBeamWidth( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setBeamWidth(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setBeamWidth(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setBeamWidth(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setBeamWidth(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDbpMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDbpMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDbpMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDbpMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDbpMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDbpMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDbpMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDbpMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDbpMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDbpMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDbpMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDbpMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDbpMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDbpMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getKlasseEins(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getKlasseEins,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getKlasseEins(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getKlasseEins(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getKlasseEins(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getKlasseEins(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getKlasseEins(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setKlasseEins(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setKlasseEins, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setKlasseEins( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setKlasseEins(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setKlasseEins(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setKlasseEins(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setKlasseEins(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getAdaptiveScanning(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAdaptiveScanning,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAdaptiveScanning(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getAdaptiveScanning(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getAdaptiveScanning(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getAdaptiveScanning(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getAdaptiveScanning(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setAdaptiveScanning(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAdaptiveScanning, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAdaptiveScanning( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setAdaptiveScanning(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setAdaptiveScanning(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setAdaptiveScanning(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setAdaptiveScanning(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getBidirectionalRedundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getBidirectionalRedundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getBidirectionalRedundancy(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getBidirectionalRedundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getBidirectionalRedundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getBidirectionalRedundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getBidirectionalRedundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setBidirectionalRedundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setBidirectionalRedundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setBidirectionalRedundancy( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setBidirectionalRedundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setBidirectionalRedundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setBidirectionalRedundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setBidirectionalRedundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getBarcodeDataFormat(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getBarcodeDataFormat,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getBarcodeDataFormat(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getBarcodeDataFormat(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getBarcodeDataFormat(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getBarcodeDataFormat(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getBarcodeDataFormat(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setBarcodeDataFormat(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setBarcodeDataFormat, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setBarcodeDataFormat( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setBarcodeDataFormat(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setBarcodeDataFormat(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setBarcodeDataFormat(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setBarcodeDataFormat(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDataBufferSize(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDataBufferSize,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDataBufferSize(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDataBufferSize(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDataBufferSize(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDataBufferSize(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDataBufferSize(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDataBufferSize(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDataBufferSize, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDataBufferSize( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDataBufferSize(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDataBufferSize(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDataBufferSize(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDataBufferSize(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getConnectionIdleTimeout(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getConnectionIdleTimeout,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getConnectionIdleTimeout(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getConnectionIdleTimeout(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getConnectionIdleTimeout(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getConnectionIdleTimeout(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getConnectionIdleTimeout(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setConnectionIdleTimeout(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setConnectionIdleTimeout, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setConnectionIdleTimeout( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setConnectionIdleTimeout(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setConnectionIdleTimeout(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setConnectionIdleTimeout(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setConnectionIdleTimeout(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDisconnectBtOnDisable(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDisconnectBtOnDisable,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDisconnectBtOnDisable(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDisconnectBtOnDisable(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDisconnectBtOnDisable(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDisconnectBtOnDisable(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDisconnectBtOnDisable(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDisconnectBtOnDisable(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDisconnectBtOnDisable, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDisconnectBtOnDisable( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDisconnectBtOnDisable(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDisconnectBtOnDisable(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDisconnectBtOnDisable(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDisconnectBtOnDisable(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDisplayBtAddressBarcodeOnEnable(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDisplayBtAddressBarcodeOnEnable,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDisplayBtAddressBarcodeOnEnable(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDisplayBtAddressBarcodeOnEnable(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDisplayBtAddressBarcodeOnEnable(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDisplayBtAddressBarcodeOnEnable(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDisplayBtAddressBarcodeOnEnable(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDisplayBtAddressBarcodeOnEnable(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDisplayBtAddressBarcodeOnEnable, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDisplayBtAddressBarcodeOnEnable( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDisplayBtAddressBarcodeOnEnable(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDisplayBtAddressBarcodeOnEnable(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDisplayBtAddressBarcodeOnEnable(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDisplayBtAddressBarcodeOnEnable(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getEnableTimeout(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getEnableTimeout,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getEnableTimeout(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getEnableTimeout(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getEnableTimeout(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getEnableTimeout(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getEnableTimeout(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setEnableTimeout(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setEnableTimeout, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setEnableTimeout( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setEnableTimeout(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setEnableTimeout(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setEnableTimeout(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setEnableTimeout(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getFriendlyName(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getFriendlyName,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getFriendlyName(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getFriendlyName(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getFriendlyName(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getFriendlyName(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getFriendlyName(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getLcdMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getLcdMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getLcdMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getLcdMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getLcdMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getLcdMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getLcdMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setLcdMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setLcdMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setLcdMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setLcdMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setLcdMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setLcdMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setLcdMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getLowBatteryScan(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getLowBatteryScan,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getLowBatteryScan(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getLowBatteryScan(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getLowBatteryScan(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getLowBatteryScan(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getLowBatteryScan(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setLowBatteryScan(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setLowBatteryScan, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setLowBatteryScan( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setLowBatteryScan(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setLowBatteryScan(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setLowBatteryScan(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setLowBatteryScan(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getTriggerConnected(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getTriggerConnected,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getTriggerConnected(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getTriggerConnected(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getTriggerConnected(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getTriggerConnected(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getTriggerConnected(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setTriggerConnected(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = true;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setTriggerConnected, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setTriggerConnected( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setTriggerConnected(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setTriggerConnected(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setTriggerConnected(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setTriggerConnected(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDisableScannerDuringNavigate(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDisableScannerDuringNavigate,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDisableScannerDuringNavigate(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDisableScannerDuringNavigate(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDisableScannerDuringNavigate(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDisableScannerDuringNavigate(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDisableScannerDuringNavigate(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDisableScannerDuringNavigate(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = true;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDisableScannerDuringNavigate, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDisableScannerDuringNavigate( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDisableScannerDuringNavigate(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDisableScannerDuringNavigate(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDisableScannerDuringNavigate(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDisableScannerDuringNavigate(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDecodeVolume(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDecodeVolume,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDecodeVolume(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDecodeVolume(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDecodeVolume(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDecodeVolume(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDecodeVolume(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDecodeVolume(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 5;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDecodeVolume, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDecodeVolume( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDecodeVolume(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDecodeVolume(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDecodeVolume(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDecodeVolume(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDecodeDuration(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDecodeDuration,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDecodeDuration(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDecodeDuration(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDecodeDuration(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDecodeDuration(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDecodeDuration(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDecodeDuration(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 250;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDecodeDuration, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDecodeDuration( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDecodeDuration(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDecodeDuration(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDecodeDuration(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDecodeDuration(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDecodeFrequency(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDecodeFrequency,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDecodeFrequency(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDecodeFrequency(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDecodeFrequency(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDecodeFrequency(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDecodeFrequency(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDecodeFrequency(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 3000;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDecodeFrequency, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDecodeFrequency( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDecodeFrequency(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDecodeFrequency(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDecodeFrequency(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDecodeFrequency(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getInvalidDecodeFrequency(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getInvalidDecodeFrequency,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getInvalidDecodeFrequency(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getInvalidDecodeFrequency(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getInvalidDecodeFrequency(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getInvalidDecodeFrequency(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getInvalidDecodeFrequency(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setInvalidDecodeFrequency(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 2500;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setInvalidDecodeFrequency, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setInvalidDecodeFrequency( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setInvalidDecodeFrequency(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setInvalidDecodeFrequency(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setInvalidDecodeFrequency(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setInvalidDecodeFrequency(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDecodeSound(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDecodeSound,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDecodeSound(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDecodeSound(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDecodeSound(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDecodeSound(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDecodeSound(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDecodeSound(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDecodeSound, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDecodeSound( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDecodeSound(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDecodeSound(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDecodeSound(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDecodeSound(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getInvalidDecodeSound(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getInvalidDecodeSound,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getInvalidDecodeSound(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getInvalidDecodeSound(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getInvalidDecodeSound(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getInvalidDecodeSound(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getInvalidDecodeSound(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setInvalidDecodeSound(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setInvalidDecodeSound, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setInvalidDecodeSound( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setInvalidDecodeSound(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setInvalidDecodeSound(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setInvalidDecodeSound(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setInvalidDecodeSound(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getScannerType(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getScannerType,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getScannerType(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getScannerType(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getScannerType(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getScannerType(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getScannerType(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getAllDecoders(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAllDecoders,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAllDecoders(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getAllDecoders(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getAllDecoders(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getAllDecoders(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getAllDecoders(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setAllDecoders(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAllDecoders, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAllDecoders( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setAllDecoders(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setAllDecoders(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setAllDecoders(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setAllDecoders(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getAztec(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAztec,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAztec(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getAztec(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getAztec(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getAztec(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getAztec(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setAztec(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAztec, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAztec( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setAztec(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setAztec(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setAztec(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setAztec(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getChinese2of5(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getChinese2of5,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getChinese2of5(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getChinese2of5(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getChinese2of5(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getChinese2of5(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getChinese2of5(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setChinese2of5(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setChinese2of5, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setChinese2of5( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setChinese2of5(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setChinese2of5(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setChinese2of5(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setChinese2of5(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCodabar(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCodabar,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCodabar(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCodabar(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCodabar(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCodabar(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCodabar(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCodabar(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCodabar, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCodabar( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCodabar(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCodabar(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCodabar(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCodabar(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCodabarClsiEditing(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCodabarClsiEditing,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCodabarClsiEditing(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCodabarClsiEditing(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCodabarClsiEditing(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCodabarClsiEditing(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCodabarClsiEditing(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCodabarClsiEditing(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCodabarClsiEditing, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCodabarClsiEditing( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCodabarClsiEditing(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCodabarClsiEditing(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCodabarClsiEditing(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCodabarClsiEditing(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCodabarMaxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCodabarMaxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCodabarMaxLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCodabarMaxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCodabarMaxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCodabarMaxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCodabarMaxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCodabarMaxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCodabarMaxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCodabarMaxLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCodabarMaxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCodabarMaxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCodabarMaxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCodabarMaxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCodabarMinLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCodabarMinLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCodabarMinLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCodabarMinLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCodabarMinLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCodabarMinLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCodabarMinLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCodabarMinLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCodabarMinLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCodabarMinLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCodabarMinLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCodabarMinLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCodabarMinLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCodabarMinLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCodabarNotisEditing(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCodabarNotisEditing,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCodabarNotisEditing(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCodabarNotisEditing(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCodabarNotisEditing(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCodabarNotisEditing(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCodabarNotisEditing(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCodabarNotisEditing(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCodabarNotisEditing, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCodabarNotisEditing( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCodabarNotisEditing(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCodabarNotisEditing(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCodabarNotisEditing(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCodabarNotisEditing(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCodabarRedundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCodabarRedundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCodabarRedundancy(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCodabarRedundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCodabarRedundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCodabarRedundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCodabarRedundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCodabarRedundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCodabarRedundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCodabarRedundancy( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCodabarRedundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCodabarRedundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCodabarRedundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCodabarRedundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode11(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode11,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode11(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode11(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode11(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode11(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode11(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode11(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode11, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode11( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode11(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode11(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode11(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode11(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode11checkDigitCount(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode11checkDigitCount,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode11checkDigitCount(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode11checkDigitCount(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode11checkDigitCount(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode11checkDigitCount(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode11checkDigitCount(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode11checkDigitCount(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode11checkDigitCount, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode11checkDigitCount( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode11checkDigitCount(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode11checkDigitCount(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode11checkDigitCount(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode11checkDigitCount(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode11maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode11maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode11maxLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode11maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode11maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode11maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode11maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode11maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode11maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode11maxLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode11maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode11maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode11maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode11maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode11minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode11minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode11minLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode11minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode11minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode11minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode11minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode11minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode11minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode11minLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode11minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode11minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode11minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode11minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode11redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode11redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode11redundancy(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode11redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode11redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode11redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode11redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode11redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode11redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode11redundancy( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode11redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode11redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode11redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode11redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode11reportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode11reportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode11reportCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode11reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode11reportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode11reportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode11reportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode11reportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode11reportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode11reportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode11reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode11reportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode11reportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode11reportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode128(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode128(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode128(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode128(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode128(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode128(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode128(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode128(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode128(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode128(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode128checkIsBtTable(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128checkIsBtTable,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128checkIsBtTable(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode128checkIsBtTable(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode128checkIsBtTable(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode128checkIsBtTable(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode128checkIsBtTable(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode128checkIsBtTable(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128checkIsBtTable, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128checkIsBtTable( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode128checkIsBtTable(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode128checkIsBtTable(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode128checkIsBtTable(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode128checkIsBtTable(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode128ean128(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128ean128,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128ean128(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode128ean128(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode128ean128(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode128ean128(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode128ean128(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode128ean128(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128ean128, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128ean128( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode128ean128(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode128ean128(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode128ean128(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode128ean128(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode128isbt128(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128isbt128,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128isbt128(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode128isbt128(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode128isbt128(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode128isbt128(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode128isbt128(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode128isbt128(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128isbt128, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128isbt128( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode128isbt128(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode128isbt128(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode128isbt128(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode128isbt128(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode128isbt128ConcatMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128isbt128ConcatMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128isbt128ConcatMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode128isbt128ConcatMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode128isbt128ConcatMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode128isbt128ConcatMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode128isbt128ConcatMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode128isbt128ConcatMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128isbt128ConcatMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128isbt128ConcatMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode128isbt128ConcatMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode128isbt128ConcatMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode128isbt128ConcatMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode128isbt128ConcatMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode128maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128maxLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode128maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode128maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode128maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode128maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode128maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128maxLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode128maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode128maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode128maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode128maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode128minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128minLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode128minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode128minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode128minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode128minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode128minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128minLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode128minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode128minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode128minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode128minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode128other128(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128other128,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128other128(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode128other128(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode128other128(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode128other128(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode128other128(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode128other128(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128other128, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128other128( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode128other128(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode128other128(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode128other128(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode128other128(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode128redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128redundancy(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode128redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode128redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode128redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode128redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode128redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128redundancy( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode128redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode128redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode128redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode128redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode128securityLevel(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode128securityLevel,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode128securityLevel(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode128securityLevel(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode128securityLevel(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode128securityLevel(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode128securityLevel(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode128securityLevel(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode128securityLevel, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode128securityLevel( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode128securityLevel(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode128securityLevel(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode128securityLevel(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode128securityLevel(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCompositeAb(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCompositeAb,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCompositeAb(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCompositeAb(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCompositeAb(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCompositeAb(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCompositeAb(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCompositeAb(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCompositeAb, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCompositeAb( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCompositeAb(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCompositeAb(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCompositeAb(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCompositeAb(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCompositeAbUccLinkMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCompositeAbUccLinkMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCompositeAbUccLinkMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCompositeAbUccLinkMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCompositeAbUccLinkMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCompositeAbUccLinkMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCompositeAbUccLinkMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCompositeAbUccLinkMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCompositeAbUccLinkMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCompositeAbUccLinkMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCompositeAbUccLinkMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCompositeAbUccLinkMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCompositeAbUccLinkMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCompositeAbUccLinkMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCompositeAbUseUpcPreambleCheckDigitRules(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCompositeAbUseUpcPreambleCheckDigitRules,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCompositeAbUseUpcPreambleCheckDigitRules(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCompositeAbUseUpcPreambleCheckDigitRules(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCompositeAbUseUpcPreambleCheckDigitRules(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCompositeAbUseUpcPreambleCheckDigitRules(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCompositeAbUseUpcPreambleCheckDigitRules(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCompositeAbUseUpcPreambleCheckDigitRules(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCompositeAbUseUpcPreambleCheckDigitRules, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCompositeAbUseUpcPreambleCheckDigitRules( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCompositeAbUseUpcPreambleCheckDigitRules(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCompositeAbUseUpcPreambleCheckDigitRules(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCompositeAbUseUpcPreambleCheckDigitRules(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCompositeAbUseUpcPreambleCheckDigitRules(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCompositeC(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCompositeC,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCompositeC(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCompositeC(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCompositeC(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCompositeC(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCompositeC(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCompositeC(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCompositeC, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCompositeC( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCompositeC(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCompositeC(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCompositeC(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCompositeC(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode39(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode39(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode39(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode39(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode39(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode39(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode39(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode39(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode39(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode39(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode39code32Prefix(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39code32Prefix,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39code32Prefix(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode39code32Prefix(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode39code32Prefix(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode39code32Prefix(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode39code32Prefix(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode39code32Prefix(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39code32Prefix, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39code32Prefix( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode39code32Prefix(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode39code32Prefix(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode39code32Prefix(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode39code32Prefix(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode39convertToCode32(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39convertToCode32,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39convertToCode32(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode39convertToCode32(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode39convertToCode32(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode39convertToCode32(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode39convertToCode32(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode39convertToCode32(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39convertToCode32, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39convertToCode32( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode39convertToCode32(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode39convertToCode32(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode39convertToCode32(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode39convertToCode32(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode39fullAscii(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39fullAscii,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39fullAscii(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode39fullAscii(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode39fullAscii(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode39fullAscii(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode39fullAscii(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode39fullAscii(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39fullAscii, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39fullAscii( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode39fullAscii(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode39fullAscii(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode39fullAscii(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode39fullAscii(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode39maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39maxLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode39maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode39maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode39maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode39maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode39maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39maxLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode39maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode39maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode39maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode39maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode39minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39minLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode39minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode39minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode39minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode39minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode39minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39minLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode39minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode39minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode39minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode39minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode39redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39redundancy(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode39redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode39redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode39redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode39redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode39redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39redundancy( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode39redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode39redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode39redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode39redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode39reportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39reportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39reportCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode39reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode39reportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode39reportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode39reportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode39reportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39reportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39reportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode39reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode39reportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode39reportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode39reportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode39securityLevel(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39securityLevel,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39securityLevel(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode39securityLevel(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode39securityLevel(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode39securityLevel(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode39securityLevel(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode39securityLevel(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39securityLevel, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39securityLevel( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode39securityLevel(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode39securityLevel(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode39securityLevel(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode39securityLevel(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode39verifyCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode39verifyCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode39verifyCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode39verifyCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode39verifyCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode39verifyCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode39verifyCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode39verifyCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode39verifyCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode39verifyCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode39verifyCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode39verifyCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode39verifyCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode39verifyCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode93(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode93,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode93(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode93(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode93(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode93(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode93(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode93(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode93, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode93( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode93(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode93(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode93(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode93(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode93maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode93maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode93maxLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode93maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode93maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode93maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode93maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode93maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode93maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode93maxLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode93maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode93maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode93maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode93maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode93minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode93minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode93minLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode93minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode93minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode93minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode93minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode93minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode93minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode93minLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode93minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode93minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode93minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode93minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCode93redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCode93redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCode93redundancy(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCode93redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCode93redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCode93redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCode93redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCode93redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCode93redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCode93redundancy( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCode93redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCode93redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCode93redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCode93redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getD2of5(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getD2of5,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getD2of5(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getD2of5(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getD2of5(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getD2of5(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getD2of5(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setD2of5(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setD2of5, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setD2of5( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setD2of5(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setD2of5(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setD2of5(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setD2of5(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getD2of5maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getD2of5maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getD2of5maxLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getD2of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getD2of5maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getD2of5maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getD2of5maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setD2of5maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setD2of5maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setD2of5maxLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setD2of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setD2of5maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setD2of5maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setD2of5maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getD2of5minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getD2of5minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getD2of5minLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getD2of5minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getD2of5minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getD2of5minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getD2of5minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setD2of5minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setD2of5minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setD2of5minLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setD2of5minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setD2of5minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setD2of5minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setD2of5minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getD2of5redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getD2of5redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getD2of5redundancy(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getD2of5redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getD2of5redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getD2of5redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getD2of5redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setD2of5redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setD2of5redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setD2of5redundancy( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setD2of5redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setD2of5redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setD2of5redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setD2of5redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDatamatrix(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDatamatrix,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDatamatrix(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDatamatrix(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDatamatrix(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDatamatrix(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDatamatrix(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDatamatrix(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDatamatrix, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDatamatrix( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDatamatrix(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDatamatrix(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDatamatrix(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDatamatrix(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getEan13(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getEan13,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getEan13(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getEan13(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getEan13(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getEan13(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getEan13(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setEan13(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setEan13, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setEan13( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setEan13(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setEan13(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setEan13(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setEan13(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getEan8(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getEan8,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getEan8(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getEan8(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getEan8(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getEan8(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getEan8(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setEan8(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setEan8, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setEan8( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setEan8(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setEan8(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setEan8(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setEan8(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getEan8convertToEan13(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getEan8convertToEan13,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getEan8convertToEan13(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getEan8convertToEan13(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getEan8convertToEan13(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getEan8convertToEan13(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getEan8convertToEan13(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setEan8convertToEan13(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setEan8convertToEan13, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setEan8convertToEan13( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setEan8convertToEan13(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setEan8convertToEan13(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setEan8convertToEan13(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setEan8convertToEan13(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getI2of5(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getI2of5(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getI2of5(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getI2of5(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getI2of5(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setI2of5(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setI2of5(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setI2of5(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setI2of5(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setI2of5(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getI2of5convertToEan13(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5convertToEan13,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5convertToEan13(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getI2of5convertToEan13(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getI2of5convertToEan13(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getI2of5convertToEan13(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getI2of5convertToEan13(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setI2of5convertToEan13(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5convertToEan13, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5convertToEan13( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setI2of5convertToEan13(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setI2of5convertToEan13(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setI2of5convertToEan13(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setI2of5convertToEan13(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getI2of5maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5maxLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getI2of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getI2of5maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getI2of5maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getI2of5maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setI2of5maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5maxLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setI2of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setI2of5maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setI2of5maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setI2of5maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getI2of5minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5minLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getI2of5minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getI2of5minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getI2of5minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getI2of5minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setI2of5minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5minLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setI2of5minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setI2of5minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setI2of5minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setI2of5minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getI2of5redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5redundancy(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getI2of5redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getI2of5redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getI2of5redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getI2of5redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setI2of5redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5redundancy( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setI2of5redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setI2of5redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setI2of5redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setI2of5redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getI2of5reportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5reportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5reportCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getI2of5reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getI2of5reportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getI2of5reportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getI2of5reportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setI2of5reportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5reportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5reportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setI2of5reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setI2of5reportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setI2of5reportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setI2of5reportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getI2of5verifyCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getI2of5verifyCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getI2of5verifyCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getI2of5verifyCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getI2of5verifyCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getI2of5verifyCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getI2of5verifyCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setI2of5verifyCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setI2of5verifyCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setI2of5verifyCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setI2of5verifyCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setI2of5verifyCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setI2of5verifyCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setI2of5verifyCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getKorean3of5(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getKorean3of5,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getKorean3of5(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getKorean3of5(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getKorean3of5(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getKorean3of5(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getKorean3of5(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setKorean3of5(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setKorean3of5, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setKorean3of5( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setKorean3of5(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setKorean3of5(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setKorean3of5(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setKorean3of5(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getKorean3of5redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getKorean3of5redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getKorean3of5redundancy(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getKorean3of5redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getKorean3of5redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getKorean3of5redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getKorean3of5redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setKorean3of5redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setKorean3of5redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setKorean3of5redundancy( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setKorean3of5redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setKorean3of5redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setKorean3of5redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setKorean3of5redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getKorean3of5maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getKorean3of5maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getKorean3of5maxLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getKorean3of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getKorean3of5maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getKorean3of5maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getKorean3of5maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setKorean3of5maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setKorean3of5maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setKorean3of5maxLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setKorean3of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setKorean3of5maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setKorean3of5maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setKorean3of5maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getKorean3of5minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getKorean3of5minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getKorean3of5minLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getKorean3of5minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getKorean3of5minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getKorean3of5minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getKorean3of5minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setKorean3of5minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setKorean3of5minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setKorean3of5minLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setKorean3of5minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setKorean3of5minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setKorean3of5minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setKorean3of5minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMacroPdf(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroPdf,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroPdf(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMacroPdf(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMacroPdf(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMacroPdf(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMacroPdf(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMacroPdf(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroPdf, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroPdf( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMacroPdf(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMacroPdf(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMacroPdf(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMacroPdf(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMacroPdfBufferLabels(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroPdfBufferLabels,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroPdfBufferLabels(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMacroPdfBufferLabels(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMacroPdfBufferLabels(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMacroPdfBufferLabels(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMacroPdfBufferLabels(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMacroPdfBufferLabels(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroPdfBufferLabels, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroPdfBufferLabels( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMacroPdfBufferLabels(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMacroPdfBufferLabels(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMacroPdfBufferLabels(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMacroPdfBufferLabels(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMacroPdfConvertToPdf417(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroPdfConvertToPdf417,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroPdfConvertToPdf417(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMacroPdfConvertToPdf417(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMacroPdfConvertToPdf417(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMacroPdfConvertToPdf417(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMacroPdfConvertToPdf417(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMacroPdfConvertToPdf417(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroPdfConvertToPdf417, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroPdfConvertToPdf417( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMacroPdfConvertToPdf417(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMacroPdfConvertToPdf417(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMacroPdfConvertToPdf417(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMacroPdfConvertToPdf417(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMacroPdfExclusive(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroPdfExclusive,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroPdfExclusive(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMacroPdfExclusive(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMacroPdfExclusive(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMacroPdfExclusive(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMacroPdfExclusive(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMacroPdfExclusive(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroPdfExclusive, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroPdfExclusive( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMacroPdfExclusive(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMacroPdfExclusive(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMacroPdfExclusive(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMacroPdfExclusive(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMacroMicroPdf(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroMicroPdf,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroMicroPdf(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMacroMicroPdf(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMacroMicroPdf(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMacroMicroPdf(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMacroMicroPdf(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMacroMicroPdf(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroMicroPdf, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroMicroPdf( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMacroMicroPdf(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMacroMicroPdf(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMacroMicroPdf(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMacroMicroPdf(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMacroMicroPdfBufferLabels(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroMicroPdfBufferLabels,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroMicroPdfBufferLabels(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMacroMicroPdfBufferLabels(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMacroMicroPdfBufferLabels(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMacroMicroPdfBufferLabels(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMacroMicroPdfBufferLabels(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMacroMicroPdfBufferLabels(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroMicroPdfBufferLabels, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroMicroPdfBufferLabels( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMacroMicroPdfBufferLabels(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMacroMicroPdfBufferLabels(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMacroMicroPdfBufferLabels(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMacroMicroPdfBufferLabels(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMacroMicroPdfConvertToMicroPdf(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroMicroPdfConvertToMicroPdf,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroMicroPdfConvertToMicroPdf(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMacroMicroPdfConvertToMicroPdf(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMacroMicroPdfConvertToMicroPdf(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMacroMicroPdfConvertToMicroPdf(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMacroMicroPdfConvertToMicroPdf(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMacroMicroPdfConvertToMicroPdf(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroMicroPdfConvertToMicroPdf, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroMicroPdfConvertToMicroPdf( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMacroMicroPdfConvertToMicroPdf(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMacroMicroPdfConvertToMicroPdf(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMacroMicroPdfConvertToMicroPdf(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMacroMicroPdfConvertToMicroPdf(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMacroMicroPdfExclusive(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroMicroPdfExclusive,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroMicroPdfExclusive(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMacroMicroPdfExclusive(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMacroMicroPdfExclusive(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMacroMicroPdfExclusive(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMacroMicroPdfExclusive(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMacroMicroPdfExclusive(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroMicroPdfExclusive, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroMicroPdfExclusive( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMacroMicroPdfExclusive(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMacroMicroPdfExclusive(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMacroMicroPdfExclusive(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMacroMicroPdfExclusive(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMacroMicroPdfReportAppendInfo(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMacroMicroPdfReportAppendInfo,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMacroMicroPdfReportAppendInfo(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMacroMicroPdfReportAppendInfo(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMacroMicroPdfReportAppendInfo(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMacroMicroPdfReportAppendInfo(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMacroMicroPdfReportAppendInfo(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMacroMicroPdfReportAppendInfo(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMacroMicroPdfReportAppendInfo, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMacroMicroPdfReportAppendInfo( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMacroMicroPdfReportAppendInfo(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMacroMicroPdfReportAppendInfo(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMacroMicroPdfReportAppendInfo(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMacroMicroPdfReportAppendInfo(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMatrix2of5(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMatrix2of5,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMatrix2of5(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMatrix2of5(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMatrix2of5(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMatrix2of5(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMatrix2of5(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMatrix2of5(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMatrix2of5, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMatrix2of5( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMatrix2of5(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMatrix2of5(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMatrix2of5(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMatrix2of5(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMatrix2of5maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMatrix2of5maxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMatrix2of5maxLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMatrix2of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMatrix2of5maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMatrix2of5maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMatrix2of5maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMatrix2of5maxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMatrix2of5maxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMatrix2of5maxLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMatrix2of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMatrix2of5maxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMatrix2of5maxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMatrix2of5maxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMatrix2of5minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMatrix2of5minLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMatrix2of5minLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMatrix2of5minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMatrix2of5minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMatrix2of5minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMatrix2of5minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMatrix2of5minLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMatrix2of5minLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMatrix2of5minLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMatrix2of5minLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMatrix2of5minLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMatrix2of5minLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMatrix2of5minLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMatrix2of5reportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMatrix2of5reportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMatrix2of5reportCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMatrix2of5reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMatrix2of5reportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMatrix2of5reportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMatrix2of5reportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMatrix2of5reportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMatrix2of5reportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMatrix2of5reportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMatrix2of5reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMatrix2of5reportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMatrix2of5reportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMatrix2of5reportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMatrix2of5verifyCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMatrix2of5verifyCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMatrix2of5verifyCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMatrix2of5verifyCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMatrix2of5verifyCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMatrix2of5verifyCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMatrix2of5verifyCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMatrix2of5verifyCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMatrix2of5verifyCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMatrix2of5verifyCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMatrix2of5verifyCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMatrix2of5verifyCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMatrix2of5verifyCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMatrix2of5verifyCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMaxiCode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMaxiCode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMaxiCode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMaxiCode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMaxiCode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMaxiCode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMaxiCode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMaxiCode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMaxiCode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMaxiCode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMaxiCode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMaxiCode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMaxiCode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMaxiCode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMicroPdf(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMicroPdf,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMicroPdf(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMicroPdf(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMicroPdf(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMicroPdf(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMicroPdf(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMicroPdf(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMicroPdf, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMicroPdf( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMicroPdf(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMicroPdf(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMicroPdf(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMicroPdf(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMicroQr(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMicroQr,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMicroQr(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMicroQr(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMicroQr(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMicroQr(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMicroQr(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMicroQr(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMicroQr, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMicroQr( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMicroQr(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMicroQr(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMicroQr(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMicroQr(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMsi(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsi,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsi(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMsi(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMsi(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMsi(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMsi(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMsi(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsi, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsi( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMsi(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMsi(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMsi(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMsi(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMsiCheckDigits(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsiCheckDigits,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsiCheckDigits(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMsiCheckDigits(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMsiCheckDigits(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMsiCheckDigits(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMsiCheckDigits(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMsiCheckDigits(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsiCheckDigits, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsiCheckDigits( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMsiCheckDigits(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMsiCheckDigits(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMsiCheckDigits(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMsiCheckDigits(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMsiCheckDigitScheme(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsiCheckDigitScheme,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsiCheckDigitScheme(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMsiCheckDigitScheme(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMsiCheckDigitScheme(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMsiCheckDigitScheme(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMsiCheckDigitScheme(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMsiCheckDigitScheme(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsiCheckDigitScheme, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsiCheckDigitScheme( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMsiCheckDigitScheme(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMsiCheckDigitScheme(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMsiCheckDigitScheme(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMsiCheckDigitScheme(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMsiMaxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsiMaxLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsiMaxLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMsiMaxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMsiMaxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMsiMaxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMsiMaxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMsiMaxLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsiMaxLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsiMaxLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMsiMaxLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMsiMaxLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMsiMaxLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMsiMaxLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMsiMinLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsiMinLength,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsiMinLength(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMsiMinLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMsiMinLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMsiMinLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMsiMinLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMsiMinLength(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsiMinLength, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsiMinLength( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMsiMinLength(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMsiMinLength(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMsiMinLength(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMsiMinLength(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMsiRedundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsiRedundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsiRedundancy(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMsiRedundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMsiRedundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMsiRedundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMsiRedundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMsiRedundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsiRedundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsiRedundancy( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMsiRedundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMsiRedundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMsiRedundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMsiRedundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getMsiReportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getMsiReportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getMsiReportCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getMsiReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getMsiReportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getMsiReportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getMsiReportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setMsiReportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setMsiReportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setMsiReportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setMsiReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setMsiReportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setMsiReportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setMsiReportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getPdf417(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getPdf417,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getPdf417(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getPdf417(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getPdf417(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getPdf417(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getPdf417(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setPdf417(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setPdf417, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setPdf417( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setPdf417(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setPdf417(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setPdf417(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setPdf417(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getSignature(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getSignature,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getSignature(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getSignature(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getSignature(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getSignature(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getSignature(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setSignature(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setSignature, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setSignature( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setSignature(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setSignature(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setSignature(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setSignature(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getSignatureImageHeight(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getSignatureImageHeight,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getSignatureImageHeight(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getSignatureImageHeight(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getSignatureImageHeight(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getSignatureImageHeight(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getSignatureImageHeight(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setSignatureImageHeight(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setSignatureImageHeight, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setSignatureImageHeight( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setSignatureImageHeight(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setSignatureImageHeight(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setSignatureImageHeight(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setSignatureImageHeight(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getSignatureImageWidth(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getSignatureImageWidth,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getSignatureImageWidth(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getSignatureImageWidth(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getSignatureImageWidth(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getSignatureImageWidth(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getSignatureImageWidth(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setSignatureImageWidth(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setSignatureImageWidth, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setSignatureImageWidth( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setSignatureImageWidth(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setSignatureImageWidth(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setSignatureImageWidth(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setSignatureImageWidth(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getSignatureImageQuality(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getSignatureImageQuality,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getSignatureImageQuality(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getSignatureImageQuality(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getSignatureImageQuality(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getSignatureImageQuality(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getSignatureImageQuality(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setSignatureImageQuality(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setSignatureImageQuality, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setSignatureImageQuality( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setSignatureImageQuality(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setSignatureImageQuality(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setSignatureImageQuality(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setSignatureImageQuality(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getAusPostal(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAusPostal,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAusPostal(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getAusPostal(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getAusPostal(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getAusPostal(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getAusPostal(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setAusPostal(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setAusPostal, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setAusPostal( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setAusPostal(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setAusPostal(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setAusPostal(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setAusPostal(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getCanPostal(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getCanPostal,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getCanPostal(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getCanPostal(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getCanPostal(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getCanPostal(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getCanPostal(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setCanPostal(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setCanPostal, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setCanPostal( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setCanPostal(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setCanPostal(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setCanPostal(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setCanPostal(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getDutchPostal(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getDutchPostal,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getDutchPostal(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getDutchPostal(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getDutchPostal(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getDutchPostal(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getDutchPostal(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setDutchPostal(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setDutchPostal, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setDutchPostal( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setDutchPostal(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setDutchPostal(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setDutchPostal(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setDutchPostal(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getJapPostal(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getJapPostal,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getJapPostal(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getJapPostal(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getJapPostal(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getJapPostal(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getJapPostal(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setJapPostal(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setJapPostal, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setJapPostal( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setJapPostal(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setJapPostal(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setJapPostal(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setJapPostal(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUkPostal(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUkPostal,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUkPostal(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUkPostal(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUkPostal(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUkPostal(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUkPostal(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUkPostal(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUkPostal, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUkPostal( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUkPostal(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUkPostal(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUkPostal(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUkPostal(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUkPostalReportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUkPostalReportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUkPostalReportCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUkPostalReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUkPostalReportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUkPostalReportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUkPostalReportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUkPostalReportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUkPostalReportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUkPostalReportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUkPostalReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUkPostalReportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUkPostalReportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUkPostalReportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUs4state(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUs4state,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUs4state(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUs4state(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUs4state(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUs4state(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUs4state(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUs4state(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUs4state, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUs4state( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUs4state(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUs4state(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUs4state(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUs4state(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUs4stateFics(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUs4stateFics,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUs4stateFics(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUs4stateFics(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUs4stateFics(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUs4stateFics(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUs4stateFics(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUs4stateFics(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUs4stateFics, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUs4stateFics( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUs4stateFics(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUs4stateFics(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUs4stateFics(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUs4stateFics(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUsPlanet(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUsPlanet,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUsPlanet(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUsPlanet(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUsPlanet(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUsPlanet(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUsPlanet(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUsPlanet(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUsPlanet, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUsPlanet( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUsPlanet(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUsPlanet(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUsPlanet(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUsPlanet(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUsPlanetReportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUsPlanetReportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUsPlanetReportCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUsPlanetReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUsPlanetReportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUsPlanetReportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUsPlanetReportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUsPlanetReportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUsPlanetReportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUsPlanetReportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUsPlanetReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUsPlanetReportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUsPlanetReportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUsPlanetReportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUsPostNet(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUsPostNet,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUsPostNet(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUsPostNet(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUsPostNet(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUsPostNet(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUsPostNet(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUsPostNet(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUsPostNet, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUsPostNet( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUsPostNet(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUsPostNet(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUsPostNet(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUsPostNet(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUsPostNetReportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUsPostNetReportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUsPostNetReportCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUsPostNetReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUsPostNetReportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUsPostNetReportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUsPostNetReportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUsPostNetReportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUsPostNetReportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUsPostNetReportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUsPostNetReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUsPostNetReportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUsPostNetReportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUsPostNetReportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getQrCode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getQrCode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getQrCode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getQrCode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getQrCode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getQrCode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getQrCode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setQrCode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setQrCode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setQrCode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setQrCode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setQrCode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setQrCode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setQrCode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getGs1dataBar(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getGs1dataBar,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getGs1dataBar(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getGs1dataBar(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getGs1dataBar(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getGs1dataBar(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getGs1dataBar(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setGs1dataBar(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setGs1dataBar, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setGs1dataBar( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setGs1dataBar(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setGs1dataBar(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setGs1dataBar(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setGs1dataBar(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getGs1dataBarExpanded(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getGs1dataBarExpanded,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getGs1dataBarExpanded(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getGs1dataBarExpanded(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getGs1dataBarExpanded(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getGs1dataBarExpanded(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getGs1dataBarExpanded(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setGs1dataBarExpanded(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setGs1dataBarExpanded, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setGs1dataBarExpanded( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setGs1dataBarExpanded(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setGs1dataBarExpanded(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setGs1dataBarExpanded(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setGs1dataBarExpanded(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getGs1dataBarLimited(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getGs1dataBarLimited,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getGs1dataBarLimited(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getGs1dataBarLimited(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getGs1dataBarLimited(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getGs1dataBarLimited(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getGs1dataBarLimited(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setGs1dataBarLimited(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setGs1dataBarLimited, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setGs1dataBarLimited( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setGs1dataBarLimited(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setGs1dataBarLimited(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setGs1dataBarLimited(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setGs1dataBarLimited(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getTlc39(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getTlc39,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getTlc39(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getTlc39(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getTlc39(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getTlc39(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getTlc39(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setTlc39(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setTlc39, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setTlc39( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setTlc39(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setTlc39(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setTlc39(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setTlc39(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getTrioptic39(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getTrioptic39,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getTrioptic39(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getTrioptic39(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getTrioptic39(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getTrioptic39(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getTrioptic39(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setTrioptic39(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setTrioptic39, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setTrioptic39( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setTrioptic39(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setTrioptic39(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setTrioptic39(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setTrioptic39(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getTrioptic39Redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getTrioptic39Redundancy,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getTrioptic39Redundancy(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getTrioptic39Redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getTrioptic39Redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getTrioptic39Redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getTrioptic39Redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setTrioptic39Redundancy(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setTrioptic39Redundancy, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setTrioptic39Redundancy( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setTrioptic39Redundancy(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setTrioptic39Redundancy(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setTrioptic39Redundancy(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setTrioptic39Redundancy(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcEanBookland(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanBookland,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanBookland(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcEanBookland(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcEanBookland(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcEanBookland(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcEanBookland(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcEanBookland(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanBookland, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanBookland( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcEanBookland(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcEanBookland(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcEanBookland(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcEanBookland(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcEanBooklandFormat(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanBooklandFormat,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanBooklandFormat(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcEanBooklandFormat(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcEanBooklandFormat(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcEanBooklandFormat(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcEanBooklandFormat(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcEanBooklandFormat(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanBooklandFormat, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanBooklandFormat( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcEanBooklandFormat(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcEanBooklandFormat(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcEanBooklandFormat(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcEanBooklandFormat(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcEanConvertGs1dataBarToUpcEan(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanConvertGs1dataBarToUpcEan,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanConvertGs1dataBarToUpcEan(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcEanConvertGs1dataBarToUpcEan(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcEanConvertGs1dataBarToUpcEan(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcEanConvertGs1dataBarToUpcEan(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcEanConvertGs1dataBarToUpcEan(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcEanConvertGs1dataBarToUpcEan(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanConvertGs1dataBarToUpcEan, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanConvertGs1dataBarToUpcEan( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcEanConvertGs1dataBarToUpcEan(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcEanConvertGs1dataBarToUpcEan(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcEanConvertGs1dataBarToUpcEan(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcEanConvertGs1dataBarToUpcEan(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcEanCoupon(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanCoupon,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanCoupon(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcEanCoupon(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcEanCoupon(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcEanCoupon(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcEanCoupon(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcEanCoupon(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanCoupon, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanCoupon( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcEanCoupon(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcEanCoupon(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcEanCoupon(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcEanCoupon(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcEanLinearDecode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanLinearDecode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanLinearDecode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcEanLinearDecode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcEanLinearDecode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcEanLinearDecode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcEanLinearDecode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcEanLinearDecode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanLinearDecode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanLinearDecode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcEanLinearDecode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcEanLinearDecode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcEanLinearDecode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcEanLinearDecode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcEanRandomWeightCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanRandomWeightCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanRandomWeightCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcEanRandomWeightCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcEanRandomWeightCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcEanRandomWeightCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcEanRandomWeightCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcEanRandomWeightCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanRandomWeightCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanRandomWeightCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcEanRandomWeightCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcEanRandomWeightCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcEanRandomWeightCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcEanRandomWeightCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcEanRetryCount(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanRetryCount,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanRetryCount(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcEanRetryCount(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcEanRetryCount(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcEanRetryCount(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcEanRetryCount(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcEanRetryCount(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanRetryCount, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanRetryCount( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcEanRetryCount(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcEanRetryCount(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcEanRetryCount(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcEanRetryCount(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcEanSecurityLevel(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanSecurityLevel,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanSecurityLevel(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcEanSecurityLevel(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcEanSecurityLevel(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcEanSecurityLevel(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcEanSecurityLevel(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcEanSecurityLevel(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanSecurityLevel, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanSecurityLevel( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcEanSecurityLevel(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcEanSecurityLevel(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcEanSecurityLevel(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcEanSecurityLevel(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcEanSupplemental2(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanSupplemental2,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanSupplemental2(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcEanSupplemental2(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcEanSupplemental2(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcEanSupplemental2(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcEanSupplemental2(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcEanSupplemental2(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanSupplemental2, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanSupplemental2( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcEanSupplemental2(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcEanSupplemental2(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcEanSupplemental2(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcEanSupplemental2(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcEanSupplemental5(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanSupplemental5,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanSupplemental5(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcEanSupplemental5(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcEanSupplemental5(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcEanSupplemental5(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcEanSupplemental5(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcEanSupplemental5(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanSupplemental5, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanSupplemental5( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcEanSupplemental5(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcEanSupplemental5(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcEanSupplemental5(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcEanSupplemental5(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcEanSupplementalMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcEanSupplementalMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcEanSupplementalMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcEanSupplementalMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcEanSupplementalMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcEanSupplementalMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcEanSupplementalMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcEanSupplementalMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcEanSupplementalMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcEanSupplementalMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcEanSupplementalMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcEanSupplementalMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcEanSupplementalMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcEanSupplementalMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpca(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpca,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpca(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpca(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpca(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpca(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpca(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpca(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpca, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpca( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpca(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpca(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpca(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpca(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcaPreamble(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcaPreamble,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcaPreamble(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcaPreamble(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcaPreamble(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcaPreamble(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcaPreamble(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcaPreamble(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcaPreamble, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcaPreamble( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcaPreamble(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcaPreamble(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcaPreamble(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcaPreamble(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpcaReportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpcaReportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpcaReportCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpcaReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpcaReportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpcaReportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpcaReportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpcaReportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpcaReportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpcaReportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpcaReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpcaReportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpcaReportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpcaReportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpce0(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce0(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpce0(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpce0(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpce0(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpce0(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpce0(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce0, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce0( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpce0(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpce0(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpce0(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpce0(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpce0convertToUpca(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce0convertToUpca,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce0convertToUpca(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpce0convertToUpca(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpce0convertToUpca(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpce0convertToUpca(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpce0convertToUpca(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpce0convertToUpca(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce0convertToUpca, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce0convertToUpca( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpce0convertToUpca(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpce0convertToUpca(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpce0convertToUpca(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpce0convertToUpca(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpce0preamble(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce0preamble,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce0preamble(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpce0preamble(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpce0preamble(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpce0preamble(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpce0preamble(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpce0preamble(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce0preamble, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce0preamble( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpce0preamble(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpce0preamble(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpce0preamble(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpce0preamble(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpce0reportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce0reportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce0reportCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpce0reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpce0reportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpce0reportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpce0reportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpce0reportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce0reportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce0reportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpce0reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpce0reportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpce0reportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpce0reportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpce1(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce1,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce1(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpce1(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpce1(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpce1(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpce1(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpce1(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce1, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce1( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpce1(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpce1(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpce1(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpce1(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpce1convertToUpca(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce1convertToUpca,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce1convertToUpca(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpce1convertToUpca(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpce1convertToUpca(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpce1convertToUpca(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpce1convertToUpca(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpce1convertToUpca(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce1convertToUpca, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce1convertToUpca( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpce1convertToUpca(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpce1convertToUpca(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpce1convertToUpca(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpce1convertToUpca(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpce1preamble(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce1preamble,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce1preamble(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpce1preamble(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpce1preamble(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpce1preamble(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpce1preamble(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpce1preamble(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce1preamble, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce1preamble( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpce1preamble(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpce1preamble(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpce1preamble(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpce1preamble(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getUpce1reportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getUpce1reportCheckDigit,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getUpce1reportCheckDigit(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getUpce1reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getUpce1reportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getUpce1reportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getUpce1reportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setUpce1reportCheckDigit(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setUpce1reportCheckDigit, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setUpce1reportCheckDigit( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setUpce1reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setUpce1reportCheckDigit(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setUpce1reportCheckDigit(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setUpce1reportCheckDigit(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getWebcode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getWebcode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getWebcode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getWebcode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getWebcode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getWebcode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getWebcode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setWebcode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setWebcode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setWebcode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setWebcode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setWebcode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setWebcode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setWebcode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getWebcodeDecodeGtSubtype(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getWebcodeDecodeGtSubtype,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getWebcodeDecodeGtSubtype(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getWebcodeDecodeGtSubtype(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getWebcodeDecodeGtSubtype(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getWebcodeDecodeGtSubtype(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getWebcodeDecodeGtSubtype(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setWebcodeDecodeGtSubtype(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setWebcodeDecodeGtSubtype, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setWebcodeDecodeGtSubtype( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setWebcodeDecodeGtSubtype(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setWebcodeDecodeGtSubtype(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setWebcodeDecodeGtSubtype(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setWebcodeDecodeGtSubtype(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmModelNumber(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmModelNumber,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmModelNumber(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmModelNumber(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmModelNumber(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmModelNumber(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmModelNumber(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmSerialNumber(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmSerialNumber,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmSerialNumber(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmSerialNumber(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmSerialNumber(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmSerialNumber(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmSerialNumber(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmDateOfManufacture(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmDateOfManufacture,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmDateOfManufacture(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmDateOfManufacture(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmDateOfManufacture(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmDateOfManufacture(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmDateOfManufacture(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmDateOfService(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmDateOfService,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmDateOfService(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmDateOfService(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmDateOfService(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmDateOfService(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmDateOfService(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBluetoothAddress(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothAddress,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothAddress(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBluetoothAddress(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBluetoothAddress(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBluetoothAddress(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBluetoothAddress(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmFirmwareVersion(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmFirmwareVersion,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmFirmwareVersion(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmFirmwareVersion(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmFirmwareVersion(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmFirmwareVersion(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmFirmwareVersion(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmDeviceClass(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmDeviceClass,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmDeviceClass(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmDeviceClass(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmDeviceClass(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmDeviceClass(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmDeviceClass(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBatteryStatus(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBatteryStatus,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBatteryStatus(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBatteryStatus(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBatteryStatus(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBatteryStatus(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBatteryStatus(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBatteryCapacity(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBatteryCapacity,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBatteryCapacity(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBatteryCapacity(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBatteryCapacity(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBatteryCapacity(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBatteryCapacity(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBatteryId(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBatteryId,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBatteryId(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBatteryId(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBatteryId(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBatteryId(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBatteryId(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBluetoothAuthentication(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothAuthentication,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothAuthentication(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBluetoothAuthentication(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBluetoothAuthentication(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBluetoothAuthentication(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBluetoothAuthentication(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmBluetoothAuthentication(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothAuthentication, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothAuthentication( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmBluetoothAuthentication(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmBluetoothAuthentication(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmBluetoothAuthentication(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmBluetoothAuthentication(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBluetoothEncryption(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothEncryption,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothEncryption(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBluetoothEncryption(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBluetoothEncryption(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBluetoothEncryption(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBluetoothEncryption(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmBluetoothEncryption(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothEncryption, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothEncryption( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmBluetoothEncryption(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmBluetoothEncryption(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmBluetoothEncryption(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmBluetoothEncryption(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBluetoothPinCode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothPinCode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothPinCode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBluetoothPinCode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBluetoothPinCode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBluetoothPinCode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBluetoothPinCode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmBluetoothPinCode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothPinCode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothPinCode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmBluetoothPinCode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmBluetoothPinCode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmBluetoothPinCode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmBluetoothPinCode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBluetoothPinCodeType(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothPinCodeType,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothPinCodeType(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBluetoothPinCodeType(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBluetoothPinCodeType(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBluetoothPinCodeType(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBluetoothPinCodeType(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmBluetoothPinCodeType(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothPinCodeType, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothPinCodeType( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmBluetoothPinCodeType(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmBluetoothPinCodeType(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmBluetoothPinCodeType(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmBluetoothPinCodeType(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBluetoothReconnectionAttempts(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothReconnectionAttempts,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothReconnectionAttempts(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBluetoothReconnectionAttempts(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBluetoothReconnectionAttempts(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBluetoothReconnectionAttempts(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBluetoothReconnectionAttempts(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmBluetoothReconnectionAttempts(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothReconnectionAttempts, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothReconnectionAttempts( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmBluetoothReconnectionAttempts(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmBluetoothReconnectionAttempts(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmBluetoothReconnectionAttempts(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmBluetoothReconnectionAttempts(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBluetoothBeepOnReconnectAttempt(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothBeepOnReconnectAttempt,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothBeepOnReconnectAttempt(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBluetoothBeepOnReconnectAttempt(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBluetoothBeepOnReconnectAttempt(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBluetoothBeepOnReconnectAttempt(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBluetoothBeepOnReconnectAttempt(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmBluetoothBeepOnReconnectAttempt(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothBeepOnReconnectAttempt, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothBeepOnReconnectAttempt( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmBluetoothBeepOnReconnectAttempt(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmBluetoothBeepOnReconnectAttempt(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmBluetoothBeepOnReconnectAttempt(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmBluetoothBeepOnReconnectAttempt(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBluetoothHidAutoReconnect(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothHidAutoReconnect,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothHidAutoReconnect(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBluetoothHidAutoReconnect(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBluetoothHidAutoReconnect(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBluetoothHidAutoReconnect(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBluetoothHidAutoReconnect(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmBluetoothHidAutoReconnect(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothHidAutoReconnect, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothHidAutoReconnect( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmBluetoothHidAutoReconnect(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmBluetoothHidAutoReconnect(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmBluetoothHidAutoReconnect(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmBluetoothHidAutoReconnect(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBluetoothFriendlyName(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothFriendlyName,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothFriendlyName(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBluetoothFriendlyName(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBluetoothFriendlyName(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBluetoothFriendlyName(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBluetoothFriendlyName(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmBluetoothFriendlyName(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothFriendlyName, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothFriendlyName( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmBluetoothFriendlyName(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmBluetoothFriendlyName(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmBluetoothFriendlyName(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmBluetoothFriendlyName(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBluetoothInquiryMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothInquiryMode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothInquiryMode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBluetoothInquiryMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBluetoothInquiryMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBluetoothInquiryMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBluetoothInquiryMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmBluetoothInquiryMode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothInquiryMode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothInquiryMode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmBluetoothInquiryMode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmBluetoothInquiryMode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmBluetoothInquiryMode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmBluetoothInquiryMode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmBluetoothAutoReconnect(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmBluetoothAutoReconnect,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmBluetoothAutoReconnect(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmBluetoothAutoReconnect(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmBluetoothAutoReconnect(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmBluetoothAutoReconnect(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmBluetoothAutoReconnect(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmBluetoothAutoReconnect(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmBluetoothAutoReconnect, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmBluetoothAutoReconnect( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmBluetoothAutoReconnect(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmBluetoothAutoReconnect(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmBluetoothAutoReconnect(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmBluetoothAutoReconnect(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmForceSavePairingBarcode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmForceSavePairingBarcode,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmForceSavePairingBarcode(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmForceSavePairingBarcode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmForceSavePairingBarcode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmForceSavePairingBarcode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmForceSavePairingBarcode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmForceSavePairingBarcode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmForceSavePairingBarcode, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmForceSavePairingBarcode( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmForceSavePairingBarcode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmForceSavePairingBarcode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmForceSavePairingBarcode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmForceSavePairingBarcode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmLowBatteryIndication(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmLowBatteryIndication,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmLowBatteryIndication(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmLowBatteryIndication(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmLowBatteryIndication(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmLowBatteryIndication(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmLowBatteryIndication(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmLowBatteryIndication(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmLowBatteryIndication, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmLowBatteryIndication( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmLowBatteryIndication(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmLowBatteryIndication(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmLowBatteryIndication(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmLowBatteryIndication(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmLowBatteryIndicationCycle(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmLowBatteryIndicationCycle,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmLowBatteryIndicationCycle(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmLowBatteryIndicationCycle(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmLowBatteryIndicationCycle(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmLowBatteryIndicationCycle(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmLowBatteryIndicationCycle(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmLowBatteryIndicationCycle(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmLowBatteryIndicationCycle, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmLowBatteryIndicationCycle( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmLowBatteryIndicationCycle(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmLowBatteryIndicationCycle(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmLowBatteryIndicationCycle(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmLowBatteryIndicationCycle(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmScanLineWidth(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmScanLineWidth,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmScanLineWidth(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmScanLineWidth(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmScanLineWidth(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmScanLineWidth(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmScanLineWidth(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmScanLineWidth(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmScanLineWidth, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmScanLineWidth( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmScanLineWidth(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmScanLineWidth(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmScanLineWidth(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmScanLineWidth(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmGoodScansDelay(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmGoodScansDelay,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmGoodScansDelay(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmGoodScansDelay(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmGoodScansDelay(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmGoodScansDelay(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmGoodScansDelay(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmGoodScansDelay(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmGoodScansDelay, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmGoodScansDelay( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmGoodScansDelay(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmGoodScansDelay(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmGoodScansDelay(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmGoodScansDelay(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmDecodeFeedback(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmDecodeFeedback,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmDecodeFeedback(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmDecodeFeedback(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmDecodeFeedback(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmDecodeFeedback(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmDecodeFeedback(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmDecodeFeedback(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmDecodeFeedback, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmDecodeFeedback( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmDecodeFeedback(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmDecodeFeedback(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmDecodeFeedback(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmDecodeFeedback(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmIgnoreCode128Usps(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmIgnoreCode128Usps,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmIgnoreCode128Usps(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmIgnoreCode128Usps(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmIgnoreCode128Usps(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmIgnoreCode128Usps(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmIgnoreCode128Usps(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmIgnoreCode128Usps(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmIgnoreCode128Usps, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmIgnoreCode128Usps( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmIgnoreCode128Usps(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmIgnoreCode128Usps(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmIgnoreCode128Usps(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmIgnoreCode128Usps(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmScanTriggerWakeup(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmScanTriggerWakeup,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmScanTriggerWakeup(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmScanTriggerWakeup(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmScanTriggerWakeup(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmScanTriggerWakeup(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmScanTriggerWakeup(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmScanTriggerWakeup(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmScanTriggerWakeup, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmScanTriggerWakeup( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmScanTriggerWakeup(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmScanTriggerWakeup(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmScanTriggerWakeup(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmScanTriggerWakeup(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmMems(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmMems,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmMems(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmMems(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmMems(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmMems(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmMems(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmMems(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmMems, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmMems( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmMems(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmMems(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmMems(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmMems(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmProximityEnable(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmProximityEnable,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmProximityEnable(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmProximityEnable(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmProximityEnable(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmProximityEnable(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmProximityEnable(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmProximityEnable(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmProximityEnable, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmProximityEnable( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmProximityEnable(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmProximityEnable(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmProximityEnable(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmProximityEnable(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmProximityContinuous(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmProximityContinuous,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmProximityContinuous(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmProximityContinuous(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmProximityContinuous(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmProximityContinuous(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmProximityContinuous(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmProximityContinuous(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmProximityContinuous, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmProximityContinuous( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmProximityContinuous(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmProximityContinuous(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmProximityContinuous(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmProximityContinuous(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmProximityDistance(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmProximityDistance,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmProximityDistance(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmProximityDistance(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmProximityDistance(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmProximityDistance(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmProximityDistance(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmProximityDistance(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmProximityDistance, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmProximityDistance( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmProximityDistance(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmProximityDistance(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmProximityDistance(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmProximityDistance(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmPagingEnable(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eBool);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmPagingEnable,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmPagingEnable(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmPagingEnable(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmPagingEnable(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmPagingEnable(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmPagingEnable(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmPagingEnable(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    bool arg0 = false;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_boolean(argv[0]) )
            arg0 = rho_ruby_get_bool(argv[0]) ? true : false;
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "boolean" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmPagingEnable, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmPagingEnable( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmPagingEnable(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmPagingEnable(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmPagingEnable(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmPagingEnable(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getRsmPagingBeepSequence(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eInt);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getRsmPagingBeepSequence,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getRsmPagingBeepSequence(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getRsmPagingBeepSequence(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getRsmPagingBeepSequence(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getRsmPagingBeepSequence(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getRsmPagingBeepSequence(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setRsmPagingBeepSequence(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    int arg0 = 0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_integer(argv[0]) )
            arg0 = rho_ruby_get_int(argv[0]);
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "integer" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setRsmPagingBeepSequence, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setRsmPagingBeepSequence( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setRsmPagingBeepSequence(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setRsmPagingBeepSequence(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setRsmPagingBeepSequence(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setRsmPagingBeepSequence(argc, argv, pObj);
}


VALUE rb_s_BarcodeChainway_enumerate(int argc, VALUE *argv)
{
    rho::apiGenerator::CMethodResult oRes;


    oRes.setParamName( "result" );
    oRes.setRubyObjectClass( getRuby_BarcodeChainway_Module() );
    oRes.setRequestedType(CMethodResult::eStringArray);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        if ( rho_ruby_is_proc(argv[nCallbackArg]) || rho_ruby_is_method(argv[nCallbackArg]) )
        {
            oRes.setRubyCallbackProc( argv[nCallbackArg] );
        }else if ( rho_ruby_is_string(argv[nCallbackArg]) )
        {
            oRes.setRubyCallback( getStringObjectFromValue(argv[nCallbackArg]) );
        }else
        {
            oRes.setArgError("Type error: callback should be String");
            return oRes.toRuby();
        }

        oRes.setCallInUIThread(false);
        if ( argc > nCallbackArg + 1 )
        {
            if ( !rho_ruby_is_NIL(argv[nCallbackArg + 1]) )
            {
                if ( !rho_ruby_is_string(argv[nCallbackArg + 1]) )
                {
                    oRes.setArgError("Type error: callback parameter should be String");
                    return oRes.toRuby();
                }

                oRes.setCallbackParam( getStringObjectFromValue(argv[nCallbackArg + 1]) );
            }
        }
        
        bUseCallback = true;
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS(), &rho::IBarcodeChainwaySingleton::enumerate,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->enumerate(  oRes );
    }
    
    return oRes.toRuby();
}






static VALUE _api_generator_BarcodeChainway_enable(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eStringHash);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    rho::Hashtable<rho::String, rho::String> arg0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_hash(argv[0]) )
        {
            rho::String res;
            rho_value_to_typed_hash<rho::String, rho::String>(argv[0], arg0, res);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "hash" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        if ( rho_ruby_is_proc(argv[nCallbackArg]) || rho_ruby_is_method(argv[nCallbackArg]) )
        {
            oRes.setRubyCallbackProc( argv[nCallbackArg] );
        }else if ( rho_ruby_is_string(argv[nCallbackArg]) )
        {
            oRes.setRubyCallback( getStringObjectFromValue(argv[nCallbackArg]) );
        }else
        {
            oRes.setArgError("Type error: callback should be String");
            return oRes.toRuby();
        }

        oRes.setCallInUIThread(false);
        if ( argc > nCallbackArg + 1 )
        {
            if ( !rho_ruby_is_NIL(argv[nCallbackArg + 1]) )
            {
                if ( !rho_ruby_is_string(argv[nCallbackArg + 1]) )
                {
                    oRes.setArgError("Type error: callback parameter should be String");
                    return oRes.toRuby();
                }

                oRes.setCallbackParam( getStringObjectFromValue(argv[nCallbackArg + 1]) );
            }
        }
        
        bUseCallback = true;
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::enable, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->enable( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_enable(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_enable(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_enable(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_enable(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_registerBluetoothStatus(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eStringHash);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        if ( rho_ruby_is_proc(argv[nCallbackArg]) || rho_ruby_is_method(argv[nCallbackArg]) )
        {
            oRes.setRubyCallbackProc( argv[nCallbackArg] );
        }else if ( rho_ruby_is_string(argv[nCallbackArg]) )
        {
            oRes.setRubyCallback( getStringObjectFromValue(argv[nCallbackArg]) );
        }else
        {
            oRes.setArgError("Type error: callback should be String");
            return oRes.toRuby();
        }

        oRes.setCallInUIThread(false);
        if ( argc > nCallbackArg + 1 )
        {
            if ( !rho_ruby_is_NIL(argv[nCallbackArg + 1]) )
            {
                if ( !rho_ruby_is_string(argv[nCallbackArg + 1]) )
                {
                    oRes.setArgError("Type error: callback parameter should be String");
                    return oRes.toRuby();
                }

                oRes.setCallbackParam( getStringObjectFromValue(argv[nCallbackArg + 1]) );
            }
        }
        
        bUseCallback = true;
    }
    else
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) + ".Mandatory Callback parameter is mised." );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::registerBluetoothStatus,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->registerBluetoothStatus(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_registerBluetoothStatus(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_registerBluetoothStatus(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_registerBluetoothStatus(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_registerBluetoothStatus(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_start(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::start,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->start(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_start(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_start(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_start(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_start(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_stop(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::stop,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->stop(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_stop(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_stop(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_stop(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_stop(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_disable(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(0) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::disable,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->disable(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_disable(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_disable(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_disable(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_disable(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_barcode_recognize(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::barcode_recognize, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->barcode_recognize( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_barcode_recognize(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_barcode_recognize(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_barcode_recognize(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_barcode_recognize(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getSupportedProperties(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setParamName( "result" );
    oRes.setRequestedType(CMethodResult::eStringArray);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        if ( rho_ruby_is_proc(argv[nCallbackArg]) || rho_ruby_is_method(argv[nCallbackArg]) )
        {
            oRes.setRubyCallbackProc( argv[nCallbackArg] );
        }else if ( rho_ruby_is_string(argv[nCallbackArg]) )
        {
            oRes.setRubyCallback( getStringObjectFromValue(argv[nCallbackArg]) );
        }else
        {
            oRes.setArgError("Type error: callback should be String");
            return oRes.toRuby();
        }

        oRes.setCallInUIThread(false);
        if ( argc > nCallbackArg + 1 )
        {
            if ( !rho_ruby_is_NIL(argv[nCallbackArg + 1]) )
            {
                if ( !rho_ruby_is_string(argv[nCallbackArg + 1]) )
                {
                    oRes.setArgError("Type error: callback parameter should be String");
                    return oRes.toRuby();
                }

                oRes.setCallbackParam( getStringObjectFromValue(argv[nCallbackArg + 1]) );
            }
        }
        
        bUseCallback = true;
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getSupportedProperties,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getSupportedProperties(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getSupportedProperties(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getSupportedProperties(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getSupportedProperties(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getSupportedProperties(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_take(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eStringHash);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    rho::Hashtable<rho::String, rho::String> arg0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_hash(argv[0]) )
        {
            rho::String res;
            rho_value_to_typed_hash<rho::String, rho::String>(argv[0], arg0, res);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "hash" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        if ( rho_ruby_is_proc(argv[nCallbackArg]) || rho_ruby_is_method(argv[nCallbackArg]) )
        {
            oRes.setRubyCallbackProc( argv[nCallbackArg] );
        }else if ( rho_ruby_is_string(argv[nCallbackArg]) )
        {
            oRes.setRubyCallback( getStringObjectFromValue(argv[nCallbackArg]) );
        }else
        {
            oRes.setArgError("Type error: callback should be String");
            return oRes.toRuby();
        }

        oRes.setCallInUIThread(false);
        if ( argc > nCallbackArg + 1 )
        {
            if ( !rho_ruby_is_NIL(argv[nCallbackArg + 1]) )
            {
                if ( !rho_ruby_is_string(argv[nCallbackArg + 1]) )
                {
                    oRes.setArgError("Type error: callback parameter should be String");
                    return oRes.toRuby();
                }

                oRes.setCallbackParam( getStringObjectFromValue(argv[nCallbackArg + 1]) );
            }
        }
        
        bUseCallback = true;
    }
    else
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(2) + ".Mandatory Callback parameter is mised." );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::take, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->take( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_take(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_take(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_take(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_take(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_take_barcode(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(2) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    nCallbackArg = 2;
    rho::Hashtable<rho::String, rho::String> arg1;
    if ( argc > 1 )
    {
        if ( rho_ruby_is_hash(argv[1]) )
        {
            rho::String res;
            rho_value_to_typed_hash<rho::String, rho::String>(argv[1], arg1, res);
        }
        else if (!rho_ruby_is_NIL(argv[1]))
        {
            oRes.setArgError("Type error: argument " "1" " should be " "hash" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(2) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor3( pObj, &rho::IBarcodeChainway::take_barcode, arg0, arg1,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->take_barcode( arg0, arg1,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_take_barcode(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_take_barcode(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_take_barcode(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_take_barcode(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_commandRemoteScanner(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::commandRemoteScanner, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->commandRemoteScanner( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_commandRemoteScanner(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_commandRemoteScanner(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_commandRemoteScanner(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_commandRemoteScanner(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getProperty(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eString);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        if ( rho_ruby_is_proc(argv[nCallbackArg]) || rho_ruby_is_method(argv[nCallbackArg]) )
        {
            oRes.setRubyCallbackProc( argv[nCallbackArg] );
        }else if ( rho_ruby_is_string(argv[nCallbackArg]) )
        {
            oRes.setRubyCallback( getStringObjectFromValue(argv[nCallbackArg]) );
        }else
        {
            oRes.setArgError("Type error: callback should be String");
            return oRes.toRuby();
        }

        oRes.setCallInUIThread(false);
        if ( argc > nCallbackArg + 1 )
        {
            if ( !rho_ruby_is_NIL(argv[nCallbackArg + 1]) )
            {
                if ( !rho_ruby_is_string(argv[nCallbackArg + 1]) )
                {
                    oRes.setArgError("Type error: callback parameter should be String");
                    return oRes.toRuby();
                }

                oRes.setCallbackParam( getStringObjectFromValue(argv[nCallbackArg + 1]) );
            }
        }
        
        bUseCallback = true;
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::getProperty, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getProperty( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getProperty(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getProperty(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getProperty(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getProperty(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getProperties(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eStringHash);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::Vector<rho::String> arg0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_array(argv[0]) )
        {
            rho::String res;
            rho_value_to_typed_array<rho::String>(argv[0], arg0, res);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "array" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        if ( rho_ruby_is_proc(argv[nCallbackArg]) || rho_ruby_is_method(argv[nCallbackArg]) )
        {
            oRes.setRubyCallbackProc( argv[nCallbackArg] );
        }else if ( rho_ruby_is_string(argv[nCallbackArg]) )
        {
            oRes.setRubyCallback( getStringObjectFromValue(argv[nCallbackArg]) );
        }else
        {
            oRes.setArgError("Type error: callback should be String");
            return oRes.toRuby();
        }

        oRes.setCallInUIThread(false);
        if ( argc > nCallbackArg + 1 )
        {
            if ( !rho_ruby_is_NIL(argv[nCallbackArg + 1]) )
            {
                if ( !rho_ruby_is_string(argv[nCallbackArg + 1]) )
                {
                    oRes.setArgError("Type error: callback parameter should be String");
                    return oRes.toRuby();
                }

                oRes.setCallbackParam( getStringObjectFromValue(argv[nCallbackArg + 1]) );
            }
        }
        
        bUseCallback = true;
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::getProperties, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getProperties( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getProperties(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getProperties(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getProperties(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getProperties(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_getAllProperties(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    oRes.setRequestedType(CMethodResult::eStringHash);
    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    if ( argc > nCallbackArg )
    {

        if ( rho_ruby_is_proc(argv[nCallbackArg]) || rho_ruby_is_method(argv[nCallbackArg]) )
        {
            oRes.setRubyCallbackProc( argv[nCallbackArg] );
        }else if ( rho_ruby_is_string(argv[nCallbackArg]) )
        {
            oRes.setRubyCallback( getStringObjectFromValue(argv[nCallbackArg]) );
        }else
        {
            oRes.setArgError("Type error: callback should be String");
            return oRes.toRuby();
        }

        oRes.setCallInUIThread(false);
        if ( argc > nCallbackArg + 1 )
        {
            if ( !rho_ruby_is_NIL(argv[nCallbackArg + 1]) )
            {
                if ( !rho_ruby_is_string(argv[nCallbackArg + 1]) )
                {
                    oRes.setArgError("Type error: callback parameter should be String");
                    return oRes.toRuby();
                }

                oRes.setCallbackParam( getStringObjectFromValue(argv[nCallbackArg + 1]) );
            }
        }
        
        bUseCallback = true;
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor1( pObj, &rho::IBarcodeChainway::getAllProperties,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->getAllProperties(  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_getAllProperties(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_getAllProperties(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_getAllProperties(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_getAllProperties(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setProperty(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(2) );
        return oRes.toRuby();
    }
    rho::String arg0 = "";
    if ( argc > 0 )
    {
        if ( rho_ruby_is_string(argv[0]) )
        {
            arg0 = getStringObjectFromValue(argv[0]);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "string" );
            return oRes.toRuby();
        }
    }

    nCallbackArg = 2;
    if ( argc == 1 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(2) );
        return oRes.toRuby();
    }
    rho::String arg1 = "";
    if ( argc > 1 )
    {
        if ( rho_ruby_is_string(argv[1]) )
        {
            arg1 = getStringObjectFromValue(argv[1]);
        }
        else if (!rho_ruby_is_NIL(argv[1]))
        {
            oRes.setArgError("Type error: argument " "1" " should be " "string" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(2) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor3( pObj, &rho::IBarcodeChainway::setProperty, arg0, arg1,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setProperty( arg0, arg1,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setProperty(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setProperty(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setProperty(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setProperty(argc, argv, pObj);
}


static VALUE _api_generator_BarcodeChainway_setProperties(int argc, VALUE *argv, rho::IBarcodeChainway* pObj)
{
    rho::apiGenerator::CMethodResult oRes;

    if(!pObj)
    {
        oRes.setArgError("Invalid object!");
        return oRes.toRuby();
    }


    rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor = 0;
    bool bUseCallback = false;
    int nCallbackArg = 0;
    nCallbackArg = 1;
    if ( argc == 0 )
    {
        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    rho::Hashtable<rho::String, rho::String> arg0;
    if ( argc > 0 )
    {
        if ( rho_ruby_is_hash(argv[0]) )
        {
            rho::String res;
            rho_value_to_typed_hash<rho::String, rho::String>(argv[0], arg0, res);
        }
        else if (!rho_ruby_is_NIL(argv[0]))
        {
            oRes.setArgError("Type error: argument " "0" " should be " "hash" );
            return oRes.toRuby();
        }
    }

    if ( argc > nCallbackArg )
    {

        oRes.setArgError("Wrong number of arguments: " + convertToStringA(argc) + " instead of " + convertToStringA(1) );
        return oRes.toRuby();
    }
    if ( bUseCallback )
    {
        pFunctor = rho_makeInstanceClassFunctor2( pObj, &rho::IBarcodeChainway::setProperties, arg0,  oRes );
        rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->addCommandToQueue( pFunctor );
    }
    else 
    {

        pObj->setProperties( arg0,  oRes );
    }
    
    return oRes.toRuby();
}



VALUE rb_BarcodeChainway_setProperties(int argc, VALUE *argv, VALUE obj)
{
    const char* szID = rho_ruby_get_object_id( obj );
    if (!szID)
        rho_ruby_raise_runtime("Object was deleted.");

    VALUE res = 0;
    rho::IBarcodeChainway* pObj =  rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(szID);

    res = _api_generator_BarcodeChainway_setProperties(argc, argv, pObj);

    return res;
}



VALUE rb_s_BarcodeChainway_def_setProperties(int argc, VALUE *argv)
{
    rho::String strDefaultID = rho::CBarcodeChainwayFactoryBase::getBarcodeChainwaySingletonS()->getDefaultID();
    rho::IBarcodeChainway* pObj = rho::CBarcodeChainwayFactoryBase::getInstance()->getModuleByID(strDefaultID);

    return _api_generator_BarcodeChainway_setProperties(argc, argv, pObj);
}



}