#include "BarcodeChainway.h"

#include "MethodResultJni.h"

#include "ext/rho/rhoruby.h"
#include "rhodes/JNIRhoRuby.h"

#include "logging/RhoLog.h"
#undef DEFAULT_LOGCATEGORY
#define DEFAULT_LOGCATEGORY "BarcodeChainwayRUBY"


typedef rho::CBarcodeChainwayProxy<ArgumentsAdapter<std::vector<VALUE> > > ObjectProxy;

using namespace rho::apiGenerator;
extern "C"
{

VALUE getRuby_BarcodeChainway_Module();


VALUE rb_BarcodeChainway_s_default(VALUE klass)
{
    RAWTRACE("rb_BarcodeChainway_s_default");
    return rho_ruby_create_object_with_id(klass, rho::CBarcodeChainwayBase::getDefaultID().c_str());
}

VALUE rb_BarcodeChainway_s_setDefault(VALUE klass, VALUE valObj)
{
    RAWTRACE("rb_BarcodeChainway_s_set_default");

    const char* szID = rho_ruby_get_object_id(valObj);
    rho::CBarcodeChainwayBase::setDefaultID(szID);

    return rho_ruby_get_NIL();
} 


static VALUE BarcodeChainway_getAutoEnter(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getAutoEnter(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getAutoEnter(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getAutoEnter(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getAutoEnter(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getAutoEnter(argc, argv, id);
}
static VALUE BarcodeChainway_setAutoEnter(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setAutoEnter(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setAutoEnter(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setAutoEnter(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setAutoEnter(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setAutoEnter(argc, argv, id);
}
static VALUE BarcodeChainway_getAutoTab(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getAutoTab(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getAutoTab(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getAutoTab(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getAutoTab(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getAutoTab(argc, argv, id);
}
static VALUE BarcodeChainway_setAutoTab(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setAutoTab(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setAutoTab(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setAutoTab(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setAutoTab(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setAutoTab(argc, argv, id);
}
static VALUE BarcodeChainway_getHapticFeedback(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getHapticFeedback(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getHapticFeedback(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getHapticFeedback(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getHapticFeedback(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getHapticFeedback(argc, argv, id);
}
static VALUE BarcodeChainway_setHapticFeedback(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setHapticFeedback(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setHapticFeedback(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setHapticFeedback(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setHapticFeedback(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setHapticFeedback(argc, argv, id);
}
static VALUE BarcodeChainway_getLinearSecurityLevel(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getLinearSecurityLevel(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getLinearSecurityLevel(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getLinearSecurityLevel(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getLinearSecurityLevel(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getLinearSecurityLevel(argc, argv, id);
}
static VALUE BarcodeChainway_setLinearSecurityLevel(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setLinearSecurityLevel(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setLinearSecurityLevel(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setLinearSecurityLevel(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setLinearSecurityLevel(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setLinearSecurityLevel(argc, argv, id);
}
static VALUE BarcodeChainway_getScanTimeout(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getScanTimeout(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getScanTimeout(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getScanTimeout(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getScanTimeout(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getScanTimeout(argc, argv, id);
}
static VALUE BarcodeChainway_setScanTimeout(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setScanTimeout(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setScanTimeout(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setScanTimeout(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setScanTimeout(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setScanTimeout(argc, argv, id);
}
static VALUE BarcodeChainway_getRasterMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRasterMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRasterMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRasterMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRasterMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRasterMode(argc, argv, id);
}
static VALUE BarcodeChainway_setRasterMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRasterMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRasterMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRasterMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRasterMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRasterMode(argc, argv, id);
}
static VALUE BarcodeChainway_getRasterHeight(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRasterHeight(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRasterHeight(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRasterHeight(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRasterHeight(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRasterHeight(argc, argv, id);
}
static VALUE BarcodeChainway_setRasterHeight(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRasterHeight(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRasterHeight(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRasterHeight(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRasterHeight(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRasterHeight(argc, argv, id);
}
static VALUE BarcodeChainway_getAimType(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getAimType(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getAimType(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getAimType(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getAimType(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getAimType(argc, argv, id);
}
static VALUE BarcodeChainway_setAimType(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setAimType(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setAimType(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setAimType(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setAimType(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setAimType(argc, argv, id);
}
static VALUE BarcodeChainway_getTimedAimDuration(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getTimedAimDuration(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getTimedAimDuration(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getTimedAimDuration(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getTimedAimDuration(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getTimedAimDuration(argc, argv, id);
}
static VALUE BarcodeChainway_setTimedAimDuration(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setTimedAimDuration(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setTimedAimDuration(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setTimedAimDuration(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setTimedAimDuration(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setTimedAimDuration(argc, argv, id);
}
static VALUE BarcodeChainway_getSameSymbolTimeout(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getSameSymbolTimeout(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getSameSymbolTimeout(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getSameSymbolTimeout(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getSameSymbolTimeout(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getSameSymbolTimeout(argc, argv, id);
}
static VALUE BarcodeChainway_setSameSymbolTimeout(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setSameSymbolTimeout(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setSameSymbolTimeout(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setSameSymbolTimeout(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setSameSymbolTimeout(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setSameSymbolTimeout(argc, argv, id);
}
static VALUE BarcodeChainway_getDifferentSymbolTimeout(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDifferentSymbolTimeout(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDifferentSymbolTimeout(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDifferentSymbolTimeout(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDifferentSymbolTimeout(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDifferentSymbolTimeout(argc, argv, id);
}
static VALUE BarcodeChainway_setDifferentSymbolTimeout(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDifferentSymbolTimeout(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDifferentSymbolTimeout(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDifferentSymbolTimeout(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDifferentSymbolTimeout(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDifferentSymbolTimeout(argc, argv, id);
}
static VALUE BarcodeChainway_getAimMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getAimMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getAimMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getAimMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getAimMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getAimMode(argc, argv, id);
}
static VALUE BarcodeChainway_setAimMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setAimMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setAimMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setAimMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setAimMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setAimMode(argc, argv, id);
}
static VALUE BarcodeChainway_getPicklistMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getPicklistMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getPicklistMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getPicklistMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getPicklistMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getPicklistMode(argc, argv, id);
}
static VALUE BarcodeChainway_setPicklistMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setPicklistMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setPicklistMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setPicklistMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setPicklistMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setPicklistMode(argc, argv, id);
}
static VALUE BarcodeChainway_getViewfinderMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getViewfinderMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getViewfinderMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getViewfinderMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getViewfinderMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getViewfinderMode(argc, argv, id);
}
static VALUE BarcodeChainway_setViewfinderMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setViewfinderMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setViewfinderMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setViewfinderMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setViewfinderMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setViewfinderMode(argc, argv, id);
}
static VALUE BarcodeChainway_getViewfinderX(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getViewfinderX(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getViewfinderX(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getViewfinderX(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getViewfinderX(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getViewfinderX(argc, argv, id);
}
static VALUE BarcodeChainway_setViewfinderX(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setViewfinderX(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setViewfinderX(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setViewfinderX(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setViewfinderX(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setViewfinderX(argc, argv, id);
}
static VALUE BarcodeChainway_getViewfinderY(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getViewfinderY(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getViewfinderY(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getViewfinderY(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getViewfinderY(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getViewfinderY(argc, argv, id);
}
static VALUE BarcodeChainway_setViewfinderY(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setViewfinderY(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setViewfinderY(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setViewfinderY(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setViewfinderY(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setViewfinderY(argc, argv, id);
}
static VALUE BarcodeChainway_getViewfinderWidth(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getViewfinderWidth(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getViewfinderWidth(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getViewfinderWidth(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getViewfinderWidth(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getViewfinderWidth(argc, argv, id);
}
static VALUE BarcodeChainway_setViewfinderWidth(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setViewfinderWidth(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setViewfinderWidth(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setViewfinderWidth(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setViewfinderWidth(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setViewfinderWidth(argc, argv, id);
}
static VALUE BarcodeChainway_getViewfinderHeight(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getViewfinderHeight(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getViewfinderHeight(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getViewfinderHeight(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getViewfinderHeight(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getViewfinderHeight(argc, argv, id);
}
static VALUE BarcodeChainway_setViewfinderHeight(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setViewfinderHeight(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setViewfinderHeight(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setViewfinderHeight(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setViewfinderHeight(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setViewfinderHeight(argc, argv, id);
}
static VALUE BarcodeChainway_getViewfinderFeedback(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getViewfinderFeedback(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getViewfinderFeedback(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getViewfinderFeedback(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getViewfinderFeedback(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getViewfinderFeedback(argc, argv, id);
}
static VALUE BarcodeChainway_setViewfinderFeedback(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setViewfinderFeedback(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setViewfinderFeedback(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setViewfinderFeedback(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setViewfinderFeedback(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setViewfinderFeedback(argc, argv, id);
}
static VALUE BarcodeChainway_getViewfinderFeedbackTime(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getViewfinderFeedbackTime(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getViewfinderFeedbackTime(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getViewfinderFeedbackTime(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getViewfinderFeedbackTime(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getViewfinderFeedbackTime(argc, argv, id);
}
static VALUE BarcodeChainway_setViewfinderFeedbackTime(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setViewfinderFeedbackTime(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setViewfinderFeedbackTime(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setViewfinderFeedbackTime(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setViewfinderFeedbackTime(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setViewfinderFeedbackTime(argc, argv, id);
}
static VALUE BarcodeChainway_getFocusMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getFocusMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getFocusMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getFocusMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getFocusMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getFocusMode(argc, argv, id);
}
static VALUE BarcodeChainway_setFocusMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setFocusMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setFocusMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setFocusMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setFocusMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setFocusMode(argc, argv, id);
}
static VALUE BarcodeChainway_getIlluminationMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getIlluminationMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getIlluminationMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getIlluminationMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getIlluminationMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getIlluminationMode(argc, argv, id);
}
static VALUE BarcodeChainway_setIlluminationMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setIlluminationMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setIlluminationMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setIlluminationMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setIlluminationMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setIlluminationMode(argc, argv, id);
}
static VALUE BarcodeChainway_getDpmMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDpmMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDpmMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDpmMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDpmMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDpmMode(argc, argv, id);
}
static VALUE BarcodeChainway_setDpmMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDpmMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDpmMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDpmMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDpmMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDpmMode(argc, argv, id);
}
static VALUE BarcodeChainway_getInverse1dMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getInverse1dMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getInverse1dMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getInverse1dMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getInverse1dMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getInverse1dMode(argc, argv, id);
}
static VALUE BarcodeChainway_setInverse1dMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setInverse1dMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setInverse1dMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setInverse1dMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setInverse1dMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setInverse1dMode(argc, argv, id);
}
static VALUE BarcodeChainway_getPoorQuality1dMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getPoorQuality1dMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getPoorQuality1dMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getPoorQuality1dMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getPoorQuality1dMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getPoorQuality1dMode(argc, argv, id);
}
static VALUE BarcodeChainway_setPoorQuality1dMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setPoorQuality1dMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setPoorQuality1dMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setPoorQuality1dMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setPoorQuality1dMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setPoorQuality1dMode(argc, argv, id);
}
static VALUE BarcodeChainway_getBeamWidth(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getBeamWidth(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getBeamWidth(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getBeamWidth(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getBeamWidth(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getBeamWidth(argc, argv, id);
}
static VALUE BarcodeChainway_setBeamWidth(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setBeamWidth(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setBeamWidth(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setBeamWidth(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setBeamWidth(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setBeamWidth(argc, argv, id);
}
static VALUE BarcodeChainway_getDbpMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDbpMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDbpMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDbpMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDbpMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDbpMode(argc, argv, id);
}
static VALUE BarcodeChainway_setDbpMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDbpMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDbpMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDbpMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDbpMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDbpMode(argc, argv, id);
}
static VALUE BarcodeChainway_getKlasseEins(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getKlasseEins(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getKlasseEins(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getKlasseEins(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getKlasseEins(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getKlasseEins(argc, argv, id);
}
static VALUE BarcodeChainway_setKlasseEins(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setKlasseEins(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setKlasseEins(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setKlasseEins(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setKlasseEins(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setKlasseEins(argc, argv, id);
}
static VALUE BarcodeChainway_getAdaptiveScanning(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getAdaptiveScanning(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getAdaptiveScanning(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getAdaptiveScanning(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getAdaptiveScanning(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getAdaptiveScanning(argc, argv, id);
}
static VALUE BarcodeChainway_setAdaptiveScanning(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setAdaptiveScanning(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setAdaptiveScanning(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setAdaptiveScanning(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setAdaptiveScanning(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setAdaptiveScanning(argc, argv, id);
}
static VALUE BarcodeChainway_getBidirectionalRedundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getBidirectionalRedundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getBidirectionalRedundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getBidirectionalRedundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getBidirectionalRedundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getBidirectionalRedundancy(argc, argv, id);
}
static VALUE BarcodeChainway_setBidirectionalRedundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setBidirectionalRedundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setBidirectionalRedundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setBidirectionalRedundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setBidirectionalRedundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setBidirectionalRedundancy(argc, argv, id);
}
static VALUE BarcodeChainway_getBarcodeDataFormat(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getBarcodeDataFormat(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getBarcodeDataFormat(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getBarcodeDataFormat(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getBarcodeDataFormat(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getBarcodeDataFormat(argc, argv, id);
}
static VALUE BarcodeChainway_setBarcodeDataFormat(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setBarcodeDataFormat(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setBarcodeDataFormat(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setBarcodeDataFormat(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setBarcodeDataFormat(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setBarcodeDataFormat(argc, argv, id);
}
static VALUE BarcodeChainway_getDataBufferSize(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDataBufferSize(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDataBufferSize(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDataBufferSize(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDataBufferSize(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDataBufferSize(argc, argv, id);
}
static VALUE BarcodeChainway_setDataBufferSize(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDataBufferSize(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDataBufferSize(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDataBufferSize(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDataBufferSize(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDataBufferSize(argc, argv, id);
}
static VALUE BarcodeChainway_getConnectionIdleTimeout(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getConnectionIdleTimeout(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getConnectionIdleTimeout(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getConnectionIdleTimeout(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getConnectionIdleTimeout(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getConnectionIdleTimeout(argc, argv, id);
}
static VALUE BarcodeChainway_setConnectionIdleTimeout(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setConnectionIdleTimeout(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setConnectionIdleTimeout(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setConnectionIdleTimeout(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setConnectionIdleTimeout(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setConnectionIdleTimeout(argc, argv, id);
}
static VALUE BarcodeChainway_getDisconnectBtOnDisable(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDisconnectBtOnDisable(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDisconnectBtOnDisable(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDisconnectBtOnDisable(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDisconnectBtOnDisable(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDisconnectBtOnDisable(argc, argv, id);
}
static VALUE BarcodeChainway_setDisconnectBtOnDisable(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDisconnectBtOnDisable(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDisconnectBtOnDisable(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDisconnectBtOnDisable(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDisconnectBtOnDisable(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDisconnectBtOnDisable(argc, argv, id);
}
static VALUE BarcodeChainway_getDisplayBtAddressBarcodeOnEnable(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDisplayBtAddressBarcodeOnEnable(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDisplayBtAddressBarcodeOnEnable(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDisplayBtAddressBarcodeOnEnable(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDisplayBtAddressBarcodeOnEnable(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDisplayBtAddressBarcodeOnEnable(argc, argv, id);
}
static VALUE BarcodeChainway_setDisplayBtAddressBarcodeOnEnable(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDisplayBtAddressBarcodeOnEnable(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDisplayBtAddressBarcodeOnEnable(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDisplayBtAddressBarcodeOnEnable(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDisplayBtAddressBarcodeOnEnable(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDisplayBtAddressBarcodeOnEnable(argc, argv, id);
}
static VALUE BarcodeChainway_getEnableTimeout(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getEnableTimeout(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getEnableTimeout(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getEnableTimeout(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getEnableTimeout(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getEnableTimeout(argc, argv, id);
}
static VALUE BarcodeChainway_setEnableTimeout(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setEnableTimeout(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setEnableTimeout(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setEnableTimeout(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setEnableTimeout(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setEnableTimeout(argc, argv, id);
}
static VALUE BarcodeChainway_getFriendlyName(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getFriendlyName(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getFriendlyName(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getFriendlyName(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getFriendlyName(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getFriendlyName(argc, argv, id);
}
static VALUE BarcodeChainway_getLcdMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getLcdMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getLcdMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getLcdMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getLcdMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getLcdMode(argc, argv, id);
}
static VALUE BarcodeChainway_setLcdMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setLcdMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setLcdMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setLcdMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setLcdMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setLcdMode(argc, argv, id);
}
static VALUE BarcodeChainway_getLowBatteryScan(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getLowBatteryScan(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getLowBatteryScan(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getLowBatteryScan(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getLowBatteryScan(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getLowBatteryScan(argc, argv, id);
}
static VALUE BarcodeChainway_setLowBatteryScan(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setLowBatteryScan(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setLowBatteryScan(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setLowBatteryScan(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setLowBatteryScan(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setLowBatteryScan(argc, argv, id);
}
static VALUE BarcodeChainway_getTriggerConnected(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getTriggerConnected(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getTriggerConnected(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getTriggerConnected(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getTriggerConnected(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getTriggerConnected(argc, argv, id);
}
static VALUE BarcodeChainway_setTriggerConnected(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setTriggerConnected(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setTriggerConnected(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setTriggerConnected(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setTriggerConnected(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setTriggerConnected(argc, argv, id);
}
static VALUE BarcodeChainway_getDisableScannerDuringNavigate(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDisableScannerDuringNavigate(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDisableScannerDuringNavigate(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDisableScannerDuringNavigate(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDisableScannerDuringNavigate(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDisableScannerDuringNavigate(argc, argv, id);
}
static VALUE BarcodeChainway_setDisableScannerDuringNavigate(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDisableScannerDuringNavigate(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDisableScannerDuringNavigate(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDisableScannerDuringNavigate(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDisableScannerDuringNavigate(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDisableScannerDuringNavigate(argc, argv, id);
}
static VALUE BarcodeChainway_getDecodeVolume(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDecodeVolume(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDecodeVolume(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDecodeVolume(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDecodeVolume(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDecodeVolume(argc, argv, id);
}
static VALUE BarcodeChainway_setDecodeVolume(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDecodeVolume(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDecodeVolume(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDecodeVolume(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDecodeVolume(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDecodeVolume(argc, argv, id);
}
static VALUE BarcodeChainway_getDecodeDuration(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDecodeDuration(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDecodeDuration(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDecodeDuration(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDecodeDuration(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDecodeDuration(argc, argv, id);
}
static VALUE BarcodeChainway_setDecodeDuration(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDecodeDuration(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDecodeDuration(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDecodeDuration(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDecodeDuration(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDecodeDuration(argc, argv, id);
}
static VALUE BarcodeChainway_getDecodeFrequency(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDecodeFrequency(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDecodeFrequency(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDecodeFrequency(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDecodeFrequency(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDecodeFrequency(argc, argv, id);
}
static VALUE BarcodeChainway_setDecodeFrequency(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDecodeFrequency(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDecodeFrequency(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDecodeFrequency(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDecodeFrequency(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDecodeFrequency(argc, argv, id);
}
static VALUE BarcodeChainway_getInvalidDecodeFrequency(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getInvalidDecodeFrequency(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getInvalidDecodeFrequency(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getInvalidDecodeFrequency(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getInvalidDecodeFrequency(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getInvalidDecodeFrequency(argc, argv, id);
}
static VALUE BarcodeChainway_setInvalidDecodeFrequency(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setInvalidDecodeFrequency(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setInvalidDecodeFrequency(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setInvalidDecodeFrequency(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setInvalidDecodeFrequency(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setInvalidDecodeFrequency(argc, argv, id);
}
static VALUE BarcodeChainway_getDecodeSound(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDecodeSound(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDecodeSound(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDecodeSound(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDecodeSound(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDecodeSound(argc, argv, id);
}
static VALUE BarcodeChainway_setDecodeSound(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDecodeSound(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDecodeSound(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDecodeSound(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDecodeSound(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDecodeSound(argc, argv, id);
}
static VALUE BarcodeChainway_getInvalidDecodeSound(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getInvalidDecodeSound(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getInvalidDecodeSound(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getInvalidDecodeSound(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getInvalidDecodeSound(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getInvalidDecodeSound(argc, argv, id);
}
static VALUE BarcodeChainway_setInvalidDecodeSound(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setInvalidDecodeSound(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setInvalidDecodeSound(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setInvalidDecodeSound(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setInvalidDecodeSound(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setInvalidDecodeSound(argc, argv, id);
}
static VALUE BarcodeChainway_getScannerType(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getScannerType(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getScannerType(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getScannerType(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getScannerType(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getScannerType(argc, argv, id);
}
static VALUE BarcodeChainway_getAllDecoders(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getAllDecoders(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getAllDecoders(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getAllDecoders(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getAllDecoders(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getAllDecoders(argc, argv, id);
}
static VALUE BarcodeChainway_setAllDecoders(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setAllDecoders(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setAllDecoders(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setAllDecoders(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setAllDecoders(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setAllDecoders(argc, argv, id);
}
static VALUE BarcodeChainway_getAztec(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getAztec(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getAztec(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getAztec(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getAztec(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getAztec(argc, argv, id);
}
static VALUE BarcodeChainway_setAztec(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setAztec(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setAztec(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setAztec(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setAztec(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setAztec(argc, argv, id);
}
static VALUE BarcodeChainway_getChinese2of5(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getChinese2of5(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getChinese2of5(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getChinese2of5(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getChinese2of5(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getChinese2of5(argc, argv, id);
}
static VALUE BarcodeChainway_setChinese2of5(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setChinese2of5(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setChinese2of5(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setChinese2of5(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setChinese2of5(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setChinese2of5(argc, argv, id);
}
static VALUE BarcodeChainway_getCodabar(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCodabar(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCodabar(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCodabar(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCodabar(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCodabar(argc, argv, id);
}
static VALUE BarcodeChainway_setCodabar(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCodabar(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCodabar(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCodabar(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCodabar(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCodabar(argc, argv, id);
}
static VALUE BarcodeChainway_getCodabarClsiEditing(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCodabarClsiEditing(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCodabarClsiEditing(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCodabarClsiEditing(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCodabarClsiEditing(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCodabarClsiEditing(argc, argv, id);
}
static VALUE BarcodeChainway_setCodabarClsiEditing(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCodabarClsiEditing(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCodabarClsiEditing(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCodabarClsiEditing(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCodabarClsiEditing(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCodabarClsiEditing(argc, argv, id);
}
static VALUE BarcodeChainway_getCodabarMaxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCodabarMaxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCodabarMaxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCodabarMaxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCodabarMaxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCodabarMaxLength(argc, argv, id);
}
static VALUE BarcodeChainway_setCodabarMaxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCodabarMaxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCodabarMaxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCodabarMaxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCodabarMaxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCodabarMaxLength(argc, argv, id);
}
static VALUE BarcodeChainway_getCodabarMinLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCodabarMinLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCodabarMinLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCodabarMinLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCodabarMinLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCodabarMinLength(argc, argv, id);
}
static VALUE BarcodeChainway_setCodabarMinLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCodabarMinLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCodabarMinLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCodabarMinLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCodabarMinLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCodabarMinLength(argc, argv, id);
}
static VALUE BarcodeChainway_getCodabarNotisEditing(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCodabarNotisEditing(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCodabarNotisEditing(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCodabarNotisEditing(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCodabarNotisEditing(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCodabarNotisEditing(argc, argv, id);
}
static VALUE BarcodeChainway_setCodabarNotisEditing(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCodabarNotisEditing(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCodabarNotisEditing(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCodabarNotisEditing(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCodabarNotisEditing(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCodabarNotisEditing(argc, argv, id);
}
static VALUE BarcodeChainway_getCodabarRedundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCodabarRedundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCodabarRedundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCodabarRedundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCodabarRedundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCodabarRedundancy(argc, argv, id);
}
static VALUE BarcodeChainway_setCodabarRedundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCodabarRedundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCodabarRedundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCodabarRedundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCodabarRedundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCodabarRedundancy(argc, argv, id);
}
static VALUE BarcodeChainway_getCode11(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode11(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode11(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode11(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode11(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode11(argc, argv, id);
}
static VALUE BarcodeChainway_setCode11(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode11(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode11(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode11(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode11(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode11(argc, argv, id);
}
static VALUE BarcodeChainway_getCode11checkDigitCount(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode11checkDigitCount(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode11checkDigitCount(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode11checkDigitCount(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode11checkDigitCount(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode11checkDigitCount(argc, argv, id);
}
static VALUE BarcodeChainway_setCode11checkDigitCount(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode11checkDigitCount(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode11checkDigitCount(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode11checkDigitCount(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode11checkDigitCount(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode11checkDigitCount(argc, argv, id);
}
static VALUE BarcodeChainway_getCode11maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode11maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode11maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode11maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode11maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode11maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_setCode11maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode11maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode11maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode11maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode11maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode11maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_getCode11minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode11minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode11minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode11minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode11minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode11minLength(argc, argv, id);
}
static VALUE BarcodeChainway_setCode11minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode11minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode11minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode11minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode11minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode11minLength(argc, argv, id);
}
static VALUE BarcodeChainway_getCode11redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode11redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode11redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode11redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode11redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode11redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_setCode11redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode11redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode11redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode11redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode11redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode11redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_getCode11reportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode11reportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode11reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode11reportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode11reportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode11reportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setCode11reportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode11reportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode11reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode11reportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode11reportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode11reportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getCode128(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode128(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode128(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode128(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode128(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode128(argc, argv, id);
}
static VALUE BarcodeChainway_setCode128(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode128(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode128(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode128(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode128(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode128(argc, argv, id);
}
static VALUE BarcodeChainway_getCode128checkIsBtTable(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode128checkIsBtTable(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode128checkIsBtTable(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode128checkIsBtTable(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode128checkIsBtTable(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode128checkIsBtTable(argc, argv, id);
}
static VALUE BarcodeChainway_setCode128checkIsBtTable(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode128checkIsBtTable(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode128checkIsBtTable(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode128checkIsBtTable(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode128checkIsBtTable(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode128checkIsBtTable(argc, argv, id);
}
static VALUE BarcodeChainway_getCode128ean128(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode128ean128(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode128ean128(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode128ean128(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode128ean128(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode128ean128(argc, argv, id);
}
static VALUE BarcodeChainway_setCode128ean128(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode128ean128(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode128ean128(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode128ean128(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode128ean128(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode128ean128(argc, argv, id);
}
static VALUE BarcodeChainway_getCode128isbt128(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode128isbt128(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode128isbt128(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode128isbt128(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode128isbt128(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode128isbt128(argc, argv, id);
}
static VALUE BarcodeChainway_setCode128isbt128(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode128isbt128(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode128isbt128(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode128isbt128(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode128isbt128(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode128isbt128(argc, argv, id);
}
static VALUE BarcodeChainway_getCode128isbt128ConcatMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode128isbt128ConcatMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode128isbt128ConcatMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode128isbt128ConcatMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode128isbt128ConcatMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode128isbt128ConcatMode(argc, argv, id);
}
static VALUE BarcodeChainway_setCode128isbt128ConcatMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode128isbt128ConcatMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode128isbt128ConcatMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode128isbt128ConcatMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode128isbt128ConcatMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode128isbt128ConcatMode(argc, argv, id);
}
static VALUE BarcodeChainway_getCode128maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode128maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode128maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode128maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode128maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode128maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_setCode128maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode128maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode128maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode128maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode128maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode128maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_getCode128minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode128minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode128minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode128minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode128minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode128minLength(argc, argv, id);
}
static VALUE BarcodeChainway_setCode128minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode128minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode128minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode128minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode128minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode128minLength(argc, argv, id);
}
static VALUE BarcodeChainway_getCode128other128(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode128other128(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode128other128(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode128other128(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode128other128(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode128other128(argc, argv, id);
}
static VALUE BarcodeChainway_setCode128other128(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode128other128(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode128other128(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode128other128(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode128other128(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode128other128(argc, argv, id);
}
static VALUE BarcodeChainway_getCode128redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode128redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode128redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode128redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode128redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode128redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_setCode128redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode128redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode128redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode128redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode128redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode128redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_getCode128securityLevel(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode128securityLevel(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode128securityLevel(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode128securityLevel(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode128securityLevel(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode128securityLevel(argc, argv, id);
}
static VALUE BarcodeChainway_setCode128securityLevel(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode128securityLevel(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode128securityLevel(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode128securityLevel(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode128securityLevel(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode128securityLevel(argc, argv, id);
}
static VALUE BarcodeChainway_getCompositeAb(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCompositeAb(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCompositeAb(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCompositeAb(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCompositeAb(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCompositeAb(argc, argv, id);
}
static VALUE BarcodeChainway_setCompositeAb(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCompositeAb(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCompositeAb(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCompositeAb(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCompositeAb(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCompositeAb(argc, argv, id);
}
static VALUE BarcodeChainway_getCompositeAbUccLinkMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCompositeAbUccLinkMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCompositeAbUccLinkMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCompositeAbUccLinkMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCompositeAbUccLinkMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCompositeAbUccLinkMode(argc, argv, id);
}
static VALUE BarcodeChainway_setCompositeAbUccLinkMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCompositeAbUccLinkMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCompositeAbUccLinkMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCompositeAbUccLinkMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCompositeAbUccLinkMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCompositeAbUccLinkMode(argc, argv, id);
}
static VALUE BarcodeChainway_getCompositeAbUseUpcPreambleCheckDigitRules(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCompositeAbUseUpcPreambleCheckDigitRules(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCompositeAbUseUpcPreambleCheckDigitRules(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCompositeAbUseUpcPreambleCheckDigitRules(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCompositeAbUseUpcPreambleCheckDigitRules(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCompositeAbUseUpcPreambleCheckDigitRules(argc, argv, id);
}
static VALUE BarcodeChainway_setCompositeAbUseUpcPreambleCheckDigitRules(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCompositeAbUseUpcPreambleCheckDigitRules(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCompositeAbUseUpcPreambleCheckDigitRules(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCompositeAbUseUpcPreambleCheckDigitRules(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCompositeAbUseUpcPreambleCheckDigitRules(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCompositeAbUseUpcPreambleCheckDigitRules(argc, argv, id);
}
static VALUE BarcodeChainway_getCompositeC(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCompositeC(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCompositeC(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCompositeC(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCompositeC(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCompositeC(argc, argv, id);
}
static VALUE BarcodeChainway_setCompositeC(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCompositeC(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCompositeC(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCompositeC(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCompositeC(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCompositeC(argc, argv, id);
}
static VALUE BarcodeChainway_getCode39(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode39(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode39(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode39(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode39(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode39(argc, argv, id);
}
static VALUE BarcodeChainway_setCode39(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode39(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode39(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode39(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode39(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode39(argc, argv, id);
}
static VALUE BarcodeChainway_getCode39code32Prefix(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode39code32Prefix(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode39code32Prefix(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode39code32Prefix(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode39code32Prefix(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode39code32Prefix(argc, argv, id);
}
static VALUE BarcodeChainway_setCode39code32Prefix(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode39code32Prefix(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode39code32Prefix(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode39code32Prefix(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode39code32Prefix(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode39code32Prefix(argc, argv, id);
}
static VALUE BarcodeChainway_getCode39convertToCode32(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode39convertToCode32(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode39convertToCode32(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode39convertToCode32(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode39convertToCode32(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode39convertToCode32(argc, argv, id);
}
static VALUE BarcodeChainway_setCode39convertToCode32(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode39convertToCode32(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode39convertToCode32(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode39convertToCode32(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode39convertToCode32(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode39convertToCode32(argc, argv, id);
}
static VALUE BarcodeChainway_getCode39fullAscii(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode39fullAscii(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode39fullAscii(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode39fullAscii(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode39fullAscii(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode39fullAscii(argc, argv, id);
}
static VALUE BarcodeChainway_setCode39fullAscii(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode39fullAscii(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode39fullAscii(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode39fullAscii(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode39fullAscii(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode39fullAscii(argc, argv, id);
}
static VALUE BarcodeChainway_getCode39maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode39maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode39maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode39maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode39maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode39maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_setCode39maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode39maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode39maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode39maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode39maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode39maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_getCode39minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode39minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode39minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode39minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode39minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode39minLength(argc, argv, id);
}
static VALUE BarcodeChainway_setCode39minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode39minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode39minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode39minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode39minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode39minLength(argc, argv, id);
}
static VALUE BarcodeChainway_getCode39redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode39redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode39redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode39redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode39redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode39redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_setCode39redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode39redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode39redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode39redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode39redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode39redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_getCode39reportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode39reportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode39reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode39reportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode39reportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode39reportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setCode39reportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode39reportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode39reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode39reportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode39reportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode39reportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getCode39securityLevel(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode39securityLevel(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode39securityLevel(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode39securityLevel(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode39securityLevel(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode39securityLevel(argc, argv, id);
}
static VALUE BarcodeChainway_setCode39securityLevel(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode39securityLevel(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode39securityLevel(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode39securityLevel(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode39securityLevel(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode39securityLevel(argc, argv, id);
}
static VALUE BarcodeChainway_getCode39verifyCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode39verifyCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode39verifyCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode39verifyCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode39verifyCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode39verifyCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setCode39verifyCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode39verifyCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode39verifyCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode39verifyCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode39verifyCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode39verifyCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getCode93(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode93(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode93(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode93(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode93(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode93(argc, argv, id);
}
static VALUE BarcodeChainway_setCode93(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode93(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode93(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode93(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode93(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode93(argc, argv, id);
}
static VALUE BarcodeChainway_getCode93maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode93maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode93maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode93maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode93maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode93maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_setCode93maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode93maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode93maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode93maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode93maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode93maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_getCode93minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode93minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode93minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode93minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode93minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode93minLength(argc, argv, id);
}
static VALUE BarcodeChainway_setCode93minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode93minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode93minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode93minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode93minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode93minLength(argc, argv, id);
}
static VALUE BarcodeChainway_getCode93redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCode93redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCode93redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCode93redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCode93redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCode93redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_setCode93redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCode93redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCode93redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCode93redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCode93redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCode93redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_getD2of5(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getD2of5(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getD2of5(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getD2of5(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getD2of5(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getD2of5(argc, argv, id);
}
static VALUE BarcodeChainway_setD2of5(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setD2of5(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setD2of5(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setD2of5(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setD2of5(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setD2of5(argc, argv, id);
}
static VALUE BarcodeChainway_getD2of5maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getD2of5maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getD2of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getD2of5maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getD2of5maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getD2of5maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_setD2of5maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setD2of5maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setD2of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setD2of5maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setD2of5maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setD2of5maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_getD2of5minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getD2of5minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getD2of5minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getD2of5minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getD2of5minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getD2of5minLength(argc, argv, id);
}
static VALUE BarcodeChainway_setD2of5minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setD2of5minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setD2of5minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setD2of5minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setD2of5minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setD2of5minLength(argc, argv, id);
}
static VALUE BarcodeChainway_getD2of5redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getD2of5redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getD2of5redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getD2of5redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getD2of5redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getD2of5redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_setD2of5redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setD2of5redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setD2of5redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setD2of5redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setD2of5redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setD2of5redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_getDatamatrix(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDatamatrix(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDatamatrix(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDatamatrix(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDatamatrix(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDatamatrix(argc, argv, id);
}
static VALUE BarcodeChainway_setDatamatrix(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDatamatrix(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDatamatrix(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDatamatrix(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDatamatrix(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDatamatrix(argc, argv, id);
}
static VALUE BarcodeChainway_getEan13(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getEan13(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getEan13(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getEan13(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getEan13(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getEan13(argc, argv, id);
}
static VALUE BarcodeChainway_setEan13(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setEan13(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setEan13(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setEan13(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setEan13(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setEan13(argc, argv, id);
}
static VALUE BarcodeChainway_getEan8(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getEan8(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getEan8(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getEan8(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getEan8(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getEan8(argc, argv, id);
}
static VALUE BarcodeChainway_setEan8(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setEan8(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setEan8(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setEan8(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setEan8(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setEan8(argc, argv, id);
}
static VALUE BarcodeChainway_getEan8convertToEan13(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getEan8convertToEan13(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getEan8convertToEan13(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getEan8convertToEan13(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getEan8convertToEan13(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getEan8convertToEan13(argc, argv, id);
}
static VALUE BarcodeChainway_setEan8convertToEan13(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setEan8convertToEan13(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setEan8convertToEan13(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setEan8convertToEan13(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setEan8convertToEan13(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setEan8convertToEan13(argc, argv, id);
}
static VALUE BarcodeChainway_getI2of5(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getI2of5(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getI2of5(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getI2of5(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getI2of5(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getI2of5(argc, argv, id);
}
static VALUE BarcodeChainway_setI2of5(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setI2of5(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setI2of5(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setI2of5(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setI2of5(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setI2of5(argc, argv, id);
}
static VALUE BarcodeChainway_getI2of5convertToEan13(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getI2of5convertToEan13(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getI2of5convertToEan13(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getI2of5convertToEan13(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getI2of5convertToEan13(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getI2of5convertToEan13(argc, argv, id);
}
static VALUE BarcodeChainway_setI2of5convertToEan13(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setI2of5convertToEan13(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setI2of5convertToEan13(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setI2of5convertToEan13(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setI2of5convertToEan13(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setI2of5convertToEan13(argc, argv, id);
}
static VALUE BarcodeChainway_getI2of5maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getI2of5maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getI2of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getI2of5maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getI2of5maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getI2of5maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_setI2of5maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setI2of5maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setI2of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setI2of5maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setI2of5maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setI2of5maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_getI2of5minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getI2of5minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getI2of5minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getI2of5minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getI2of5minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getI2of5minLength(argc, argv, id);
}
static VALUE BarcodeChainway_setI2of5minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setI2of5minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setI2of5minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setI2of5minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setI2of5minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setI2of5minLength(argc, argv, id);
}
static VALUE BarcodeChainway_getI2of5redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getI2of5redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getI2of5redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getI2of5redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getI2of5redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getI2of5redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_setI2of5redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setI2of5redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setI2of5redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setI2of5redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setI2of5redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setI2of5redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_getI2of5reportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getI2of5reportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getI2of5reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getI2of5reportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getI2of5reportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getI2of5reportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setI2of5reportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setI2of5reportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setI2of5reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setI2of5reportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setI2of5reportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setI2of5reportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getI2of5verifyCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getI2of5verifyCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getI2of5verifyCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getI2of5verifyCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getI2of5verifyCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getI2of5verifyCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setI2of5verifyCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setI2of5verifyCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setI2of5verifyCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setI2of5verifyCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setI2of5verifyCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setI2of5verifyCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getKorean3of5(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getKorean3of5(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getKorean3of5(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getKorean3of5(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getKorean3of5(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getKorean3of5(argc, argv, id);
}
static VALUE BarcodeChainway_setKorean3of5(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setKorean3of5(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setKorean3of5(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setKorean3of5(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setKorean3of5(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setKorean3of5(argc, argv, id);
}
static VALUE BarcodeChainway_getKorean3of5redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getKorean3of5redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getKorean3of5redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getKorean3of5redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getKorean3of5redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getKorean3of5redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_setKorean3of5redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setKorean3of5redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setKorean3of5redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setKorean3of5redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setKorean3of5redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setKorean3of5redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_getKorean3of5maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getKorean3of5maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getKorean3of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getKorean3of5maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getKorean3of5maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getKorean3of5maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_setKorean3of5maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setKorean3of5maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setKorean3of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setKorean3of5maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setKorean3of5maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setKorean3of5maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_getKorean3of5minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getKorean3of5minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getKorean3of5minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getKorean3of5minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getKorean3of5minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getKorean3of5minLength(argc, argv, id);
}
static VALUE BarcodeChainway_setKorean3of5minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setKorean3of5minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setKorean3of5minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setKorean3of5minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setKorean3of5minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setKorean3of5minLength(argc, argv, id);
}
static VALUE BarcodeChainway_getMacroPdf(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMacroPdf(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMacroPdf(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMacroPdf(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMacroPdf(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMacroPdf(argc, argv, id);
}
static VALUE BarcodeChainway_setMacroPdf(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMacroPdf(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMacroPdf(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMacroPdf(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMacroPdf(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMacroPdf(argc, argv, id);
}
static VALUE BarcodeChainway_getMacroPdfBufferLabels(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMacroPdfBufferLabels(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMacroPdfBufferLabels(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMacroPdfBufferLabels(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMacroPdfBufferLabels(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMacroPdfBufferLabels(argc, argv, id);
}
static VALUE BarcodeChainway_setMacroPdfBufferLabels(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMacroPdfBufferLabels(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMacroPdfBufferLabels(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMacroPdfBufferLabels(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMacroPdfBufferLabels(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMacroPdfBufferLabels(argc, argv, id);
}
static VALUE BarcodeChainway_getMacroPdfConvertToPdf417(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMacroPdfConvertToPdf417(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMacroPdfConvertToPdf417(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMacroPdfConvertToPdf417(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMacroPdfConvertToPdf417(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMacroPdfConvertToPdf417(argc, argv, id);
}
static VALUE BarcodeChainway_setMacroPdfConvertToPdf417(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMacroPdfConvertToPdf417(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMacroPdfConvertToPdf417(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMacroPdfConvertToPdf417(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMacroPdfConvertToPdf417(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMacroPdfConvertToPdf417(argc, argv, id);
}
static VALUE BarcodeChainway_getMacroPdfExclusive(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMacroPdfExclusive(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMacroPdfExclusive(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMacroPdfExclusive(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMacroPdfExclusive(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMacroPdfExclusive(argc, argv, id);
}
static VALUE BarcodeChainway_setMacroPdfExclusive(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMacroPdfExclusive(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMacroPdfExclusive(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMacroPdfExclusive(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMacroPdfExclusive(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMacroPdfExclusive(argc, argv, id);
}
static VALUE BarcodeChainway_getMacroMicroPdf(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMacroMicroPdf(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMacroMicroPdf(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMacroMicroPdf(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMacroMicroPdf(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMacroMicroPdf(argc, argv, id);
}
static VALUE BarcodeChainway_setMacroMicroPdf(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMacroMicroPdf(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMacroMicroPdf(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMacroMicroPdf(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMacroMicroPdf(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMacroMicroPdf(argc, argv, id);
}
static VALUE BarcodeChainway_getMacroMicroPdfBufferLabels(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMacroMicroPdfBufferLabels(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMacroMicroPdfBufferLabels(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMacroMicroPdfBufferLabels(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMacroMicroPdfBufferLabels(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMacroMicroPdfBufferLabels(argc, argv, id);
}
static VALUE BarcodeChainway_setMacroMicroPdfBufferLabels(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMacroMicroPdfBufferLabels(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMacroMicroPdfBufferLabels(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMacroMicroPdfBufferLabels(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMacroMicroPdfBufferLabels(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMacroMicroPdfBufferLabels(argc, argv, id);
}
static VALUE BarcodeChainway_getMacroMicroPdfConvertToMicroPdf(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMacroMicroPdfConvertToMicroPdf(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMacroMicroPdfConvertToMicroPdf(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMacroMicroPdfConvertToMicroPdf(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMacroMicroPdfConvertToMicroPdf(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMacroMicroPdfConvertToMicroPdf(argc, argv, id);
}
static VALUE BarcodeChainway_setMacroMicroPdfConvertToMicroPdf(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMacroMicroPdfConvertToMicroPdf(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMacroMicroPdfConvertToMicroPdf(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMacroMicroPdfConvertToMicroPdf(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMacroMicroPdfConvertToMicroPdf(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMacroMicroPdfConvertToMicroPdf(argc, argv, id);
}
static VALUE BarcodeChainway_getMacroMicroPdfExclusive(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMacroMicroPdfExclusive(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMacroMicroPdfExclusive(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMacroMicroPdfExclusive(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMacroMicroPdfExclusive(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMacroMicroPdfExclusive(argc, argv, id);
}
static VALUE BarcodeChainway_setMacroMicroPdfExclusive(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMacroMicroPdfExclusive(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMacroMicroPdfExclusive(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMacroMicroPdfExclusive(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMacroMicroPdfExclusive(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMacroMicroPdfExclusive(argc, argv, id);
}
static VALUE BarcodeChainway_getMacroMicroPdfReportAppendInfo(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMacroMicroPdfReportAppendInfo(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMacroMicroPdfReportAppendInfo(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMacroMicroPdfReportAppendInfo(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMacroMicroPdfReportAppendInfo(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMacroMicroPdfReportAppendInfo(argc, argv, id);
}
static VALUE BarcodeChainway_setMacroMicroPdfReportAppendInfo(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMacroMicroPdfReportAppendInfo(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMacroMicroPdfReportAppendInfo(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMacroMicroPdfReportAppendInfo(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMacroMicroPdfReportAppendInfo(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMacroMicroPdfReportAppendInfo(argc, argv, id);
}
static VALUE BarcodeChainway_getMatrix2of5(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMatrix2of5(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMatrix2of5(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMatrix2of5(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMatrix2of5(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMatrix2of5(argc, argv, id);
}
static VALUE BarcodeChainway_setMatrix2of5(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMatrix2of5(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMatrix2of5(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMatrix2of5(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMatrix2of5(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMatrix2of5(argc, argv, id);
}
static VALUE BarcodeChainway_getMatrix2of5maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMatrix2of5maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMatrix2of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMatrix2of5maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMatrix2of5maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMatrix2of5maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_setMatrix2of5maxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMatrix2of5maxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMatrix2of5maxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMatrix2of5maxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMatrix2of5maxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMatrix2of5maxLength(argc, argv, id);
}
static VALUE BarcodeChainway_getMatrix2of5minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMatrix2of5minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMatrix2of5minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMatrix2of5minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMatrix2of5minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMatrix2of5minLength(argc, argv, id);
}
static VALUE BarcodeChainway_setMatrix2of5minLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMatrix2of5minLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMatrix2of5minLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMatrix2of5minLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMatrix2of5minLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMatrix2of5minLength(argc, argv, id);
}
static VALUE BarcodeChainway_getMatrix2of5reportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMatrix2of5reportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMatrix2of5reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMatrix2of5reportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMatrix2of5reportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMatrix2of5reportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setMatrix2of5reportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMatrix2of5reportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMatrix2of5reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMatrix2of5reportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMatrix2of5reportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMatrix2of5reportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getMatrix2of5verifyCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMatrix2of5verifyCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMatrix2of5verifyCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMatrix2of5verifyCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMatrix2of5verifyCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMatrix2of5verifyCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setMatrix2of5verifyCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMatrix2of5verifyCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMatrix2of5verifyCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMatrix2of5verifyCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMatrix2of5verifyCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMatrix2of5verifyCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getMaxiCode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMaxiCode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMaxiCode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMaxiCode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMaxiCode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMaxiCode(argc, argv, id);
}
static VALUE BarcodeChainway_setMaxiCode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMaxiCode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMaxiCode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMaxiCode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMaxiCode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMaxiCode(argc, argv, id);
}
static VALUE BarcodeChainway_getMicroPdf(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMicroPdf(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMicroPdf(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMicroPdf(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMicroPdf(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMicroPdf(argc, argv, id);
}
static VALUE BarcodeChainway_setMicroPdf(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMicroPdf(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMicroPdf(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMicroPdf(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMicroPdf(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMicroPdf(argc, argv, id);
}
static VALUE BarcodeChainway_getMicroQr(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMicroQr(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMicroQr(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMicroQr(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMicroQr(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMicroQr(argc, argv, id);
}
static VALUE BarcodeChainway_setMicroQr(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMicroQr(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMicroQr(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMicroQr(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMicroQr(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMicroQr(argc, argv, id);
}
static VALUE BarcodeChainway_getMsi(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMsi(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMsi(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMsi(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMsi(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMsi(argc, argv, id);
}
static VALUE BarcodeChainway_setMsi(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMsi(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMsi(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMsi(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMsi(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMsi(argc, argv, id);
}
static VALUE BarcodeChainway_getMsiCheckDigits(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMsiCheckDigits(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMsiCheckDigits(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMsiCheckDigits(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMsiCheckDigits(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMsiCheckDigits(argc, argv, id);
}
static VALUE BarcodeChainway_setMsiCheckDigits(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMsiCheckDigits(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMsiCheckDigits(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMsiCheckDigits(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMsiCheckDigits(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMsiCheckDigits(argc, argv, id);
}
static VALUE BarcodeChainway_getMsiCheckDigitScheme(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMsiCheckDigitScheme(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMsiCheckDigitScheme(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMsiCheckDigitScheme(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMsiCheckDigitScheme(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMsiCheckDigitScheme(argc, argv, id);
}
static VALUE BarcodeChainway_setMsiCheckDigitScheme(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMsiCheckDigitScheme(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMsiCheckDigitScheme(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMsiCheckDigitScheme(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMsiCheckDigitScheme(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMsiCheckDigitScheme(argc, argv, id);
}
static VALUE BarcodeChainway_getMsiMaxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMsiMaxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMsiMaxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMsiMaxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMsiMaxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMsiMaxLength(argc, argv, id);
}
static VALUE BarcodeChainway_setMsiMaxLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMsiMaxLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMsiMaxLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMsiMaxLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMsiMaxLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMsiMaxLength(argc, argv, id);
}
static VALUE BarcodeChainway_getMsiMinLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMsiMinLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMsiMinLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMsiMinLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMsiMinLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMsiMinLength(argc, argv, id);
}
static VALUE BarcodeChainway_setMsiMinLength(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMsiMinLength(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMsiMinLength(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMsiMinLength(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMsiMinLength(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMsiMinLength(argc, argv, id);
}
static VALUE BarcodeChainway_getMsiRedundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMsiRedundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMsiRedundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMsiRedundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMsiRedundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMsiRedundancy(argc, argv, id);
}
static VALUE BarcodeChainway_setMsiRedundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMsiRedundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMsiRedundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMsiRedundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMsiRedundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMsiRedundancy(argc, argv, id);
}
static VALUE BarcodeChainway_getMsiReportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getMsiReportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getMsiReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getMsiReportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getMsiReportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getMsiReportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setMsiReportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setMsiReportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setMsiReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setMsiReportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setMsiReportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setMsiReportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getPdf417(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getPdf417(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getPdf417(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getPdf417(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getPdf417(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getPdf417(argc, argv, id);
}
static VALUE BarcodeChainway_setPdf417(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setPdf417(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setPdf417(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setPdf417(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setPdf417(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setPdf417(argc, argv, id);
}
static VALUE BarcodeChainway_getSignature(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getSignature(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getSignature(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getSignature(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getSignature(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getSignature(argc, argv, id);
}
static VALUE BarcodeChainway_setSignature(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setSignature(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setSignature(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setSignature(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setSignature(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setSignature(argc, argv, id);
}
static VALUE BarcodeChainway_getSignatureImageHeight(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getSignatureImageHeight(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getSignatureImageHeight(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getSignatureImageHeight(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getSignatureImageHeight(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getSignatureImageHeight(argc, argv, id);
}
static VALUE BarcodeChainway_setSignatureImageHeight(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setSignatureImageHeight(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setSignatureImageHeight(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setSignatureImageHeight(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setSignatureImageHeight(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setSignatureImageHeight(argc, argv, id);
}
static VALUE BarcodeChainway_getSignatureImageWidth(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getSignatureImageWidth(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getSignatureImageWidth(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getSignatureImageWidth(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getSignatureImageWidth(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getSignatureImageWidth(argc, argv, id);
}
static VALUE BarcodeChainway_setSignatureImageWidth(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setSignatureImageWidth(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setSignatureImageWidth(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setSignatureImageWidth(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setSignatureImageWidth(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setSignatureImageWidth(argc, argv, id);
}
static VALUE BarcodeChainway_getSignatureImageQuality(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getSignatureImageQuality(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getSignatureImageQuality(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getSignatureImageQuality(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getSignatureImageQuality(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getSignatureImageQuality(argc, argv, id);
}
static VALUE BarcodeChainway_setSignatureImageQuality(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setSignatureImageQuality(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setSignatureImageQuality(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setSignatureImageQuality(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setSignatureImageQuality(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setSignatureImageQuality(argc, argv, id);
}
static VALUE BarcodeChainway_getAusPostal(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getAusPostal(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getAusPostal(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getAusPostal(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getAusPostal(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getAusPostal(argc, argv, id);
}
static VALUE BarcodeChainway_setAusPostal(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setAusPostal(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setAusPostal(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setAusPostal(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setAusPostal(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setAusPostal(argc, argv, id);
}
static VALUE BarcodeChainway_getCanPostal(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getCanPostal(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getCanPostal(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getCanPostal(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getCanPostal(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getCanPostal(argc, argv, id);
}
static VALUE BarcodeChainway_setCanPostal(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setCanPostal(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setCanPostal(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setCanPostal(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setCanPostal(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setCanPostal(argc, argv, id);
}
static VALUE BarcodeChainway_getDutchPostal(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getDutchPostal(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getDutchPostal(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getDutchPostal(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getDutchPostal(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getDutchPostal(argc, argv, id);
}
static VALUE BarcodeChainway_setDutchPostal(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setDutchPostal(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setDutchPostal(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setDutchPostal(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setDutchPostal(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setDutchPostal(argc, argv, id);
}
static VALUE BarcodeChainway_getJapPostal(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getJapPostal(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getJapPostal(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getJapPostal(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getJapPostal(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getJapPostal(argc, argv, id);
}
static VALUE BarcodeChainway_setJapPostal(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setJapPostal(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setJapPostal(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setJapPostal(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setJapPostal(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setJapPostal(argc, argv, id);
}
static VALUE BarcodeChainway_getUkPostal(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUkPostal(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUkPostal(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUkPostal(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUkPostal(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUkPostal(argc, argv, id);
}
static VALUE BarcodeChainway_setUkPostal(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUkPostal(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUkPostal(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUkPostal(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUkPostal(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUkPostal(argc, argv, id);
}
static VALUE BarcodeChainway_getUkPostalReportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUkPostalReportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUkPostalReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUkPostalReportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUkPostalReportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUkPostalReportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setUkPostalReportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUkPostalReportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUkPostalReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUkPostalReportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUkPostalReportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUkPostalReportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getUs4state(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUs4state(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUs4state(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUs4state(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUs4state(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUs4state(argc, argv, id);
}
static VALUE BarcodeChainway_setUs4state(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUs4state(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUs4state(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUs4state(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUs4state(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUs4state(argc, argv, id);
}
static VALUE BarcodeChainway_getUs4stateFics(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUs4stateFics(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUs4stateFics(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUs4stateFics(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUs4stateFics(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUs4stateFics(argc, argv, id);
}
static VALUE BarcodeChainway_setUs4stateFics(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUs4stateFics(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUs4stateFics(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUs4stateFics(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUs4stateFics(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUs4stateFics(argc, argv, id);
}
static VALUE BarcodeChainway_getUsPlanet(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUsPlanet(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUsPlanet(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUsPlanet(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUsPlanet(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUsPlanet(argc, argv, id);
}
static VALUE BarcodeChainway_setUsPlanet(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUsPlanet(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUsPlanet(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUsPlanet(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUsPlanet(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUsPlanet(argc, argv, id);
}
static VALUE BarcodeChainway_getUsPlanetReportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUsPlanetReportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUsPlanetReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUsPlanetReportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUsPlanetReportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUsPlanetReportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setUsPlanetReportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUsPlanetReportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUsPlanetReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUsPlanetReportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUsPlanetReportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUsPlanetReportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getUsPostNet(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUsPostNet(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUsPostNet(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUsPostNet(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUsPostNet(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUsPostNet(argc, argv, id);
}
static VALUE BarcodeChainway_setUsPostNet(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUsPostNet(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUsPostNet(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUsPostNet(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUsPostNet(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUsPostNet(argc, argv, id);
}
static VALUE BarcodeChainway_getUsPostNetReportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUsPostNetReportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUsPostNetReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUsPostNetReportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUsPostNetReportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUsPostNetReportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setUsPostNetReportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUsPostNetReportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUsPostNetReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUsPostNetReportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUsPostNetReportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUsPostNetReportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getQrCode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getQrCode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getQrCode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getQrCode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getQrCode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getQrCode(argc, argv, id);
}
static VALUE BarcodeChainway_setQrCode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setQrCode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setQrCode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setQrCode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setQrCode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setQrCode(argc, argv, id);
}
static VALUE BarcodeChainway_getGs1dataBar(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getGs1dataBar(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getGs1dataBar(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getGs1dataBar(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getGs1dataBar(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getGs1dataBar(argc, argv, id);
}
static VALUE BarcodeChainway_setGs1dataBar(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setGs1dataBar(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setGs1dataBar(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setGs1dataBar(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setGs1dataBar(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setGs1dataBar(argc, argv, id);
}
static VALUE BarcodeChainway_getGs1dataBarExpanded(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getGs1dataBarExpanded(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getGs1dataBarExpanded(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getGs1dataBarExpanded(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getGs1dataBarExpanded(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getGs1dataBarExpanded(argc, argv, id);
}
static VALUE BarcodeChainway_setGs1dataBarExpanded(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setGs1dataBarExpanded(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setGs1dataBarExpanded(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setGs1dataBarExpanded(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setGs1dataBarExpanded(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setGs1dataBarExpanded(argc, argv, id);
}
static VALUE BarcodeChainway_getGs1dataBarLimited(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getGs1dataBarLimited(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getGs1dataBarLimited(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getGs1dataBarLimited(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getGs1dataBarLimited(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getGs1dataBarLimited(argc, argv, id);
}
static VALUE BarcodeChainway_setGs1dataBarLimited(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setGs1dataBarLimited(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setGs1dataBarLimited(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setGs1dataBarLimited(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setGs1dataBarLimited(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setGs1dataBarLimited(argc, argv, id);
}
static VALUE BarcodeChainway_getTlc39(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getTlc39(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getTlc39(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getTlc39(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getTlc39(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getTlc39(argc, argv, id);
}
static VALUE BarcodeChainway_setTlc39(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setTlc39(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setTlc39(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setTlc39(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setTlc39(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setTlc39(argc, argv, id);
}
static VALUE BarcodeChainway_getTrioptic39(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getTrioptic39(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getTrioptic39(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getTrioptic39(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getTrioptic39(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getTrioptic39(argc, argv, id);
}
static VALUE BarcodeChainway_setTrioptic39(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setTrioptic39(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setTrioptic39(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setTrioptic39(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setTrioptic39(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setTrioptic39(argc, argv, id);
}
static VALUE BarcodeChainway_getTrioptic39Redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getTrioptic39Redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getTrioptic39Redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getTrioptic39Redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getTrioptic39Redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getTrioptic39Redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_setTrioptic39Redundancy(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setTrioptic39Redundancy(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setTrioptic39Redundancy(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setTrioptic39Redundancy(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setTrioptic39Redundancy(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setTrioptic39Redundancy(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcEanBookland(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcEanBookland(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcEanBookland(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcEanBookland(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcEanBookland(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcEanBookland(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcEanBookland(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcEanBookland(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcEanBookland(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcEanBookland(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcEanBookland(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcEanBookland(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcEanBooklandFormat(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcEanBooklandFormat(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcEanBooklandFormat(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcEanBooklandFormat(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcEanBooklandFormat(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcEanBooklandFormat(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcEanBooklandFormat(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcEanBooklandFormat(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcEanBooklandFormat(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcEanBooklandFormat(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcEanBooklandFormat(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcEanBooklandFormat(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcEanConvertGs1dataBarToUpcEan(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcEanConvertGs1dataBarToUpcEan(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcEanConvertGs1dataBarToUpcEan(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcEanConvertGs1dataBarToUpcEan(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcEanConvertGs1dataBarToUpcEan(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcEanConvertGs1dataBarToUpcEan(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcEanConvertGs1dataBarToUpcEan(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcEanConvertGs1dataBarToUpcEan(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcEanConvertGs1dataBarToUpcEan(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcEanConvertGs1dataBarToUpcEan(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcEanConvertGs1dataBarToUpcEan(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcEanConvertGs1dataBarToUpcEan(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcEanCoupon(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcEanCoupon(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcEanCoupon(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcEanCoupon(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcEanCoupon(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcEanCoupon(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcEanCoupon(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcEanCoupon(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcEanCoupon(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcEanCoupon(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcEanCoupon(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcEanCoupon(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcEanLinearDecode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcEanLinearDecode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcEanLinearDecode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcEanLinearDecode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcEanLinearDecode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcEanLinearDecode(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcEanLinearDecode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcEanLinearDecode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcEanLinearDecode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcEanLinearDecode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcEanLinearDecode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcEanLinearDecode(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcEanRandomWeightCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcEanRandomWeightCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcEanRandomWeightCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcEanRandomWeightCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcEanRandomWeightCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcEanRandomWeightCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcEanRandomWeightCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcEanRandomWeightCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcEanRandomWeightCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcEanRandomWeightCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcEanRandomWeightCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcEanRandomWeightCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcEanRetryCount(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcEanRetryCount(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcEanRetryCount(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcEanRetryCount(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcEanRetryCount(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcEanRetryCount(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcEanRetryCount(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcEanRetryCount(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcEanRetryCount(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcEanRetryCount(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcEanRetryCount(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcEanRetryCount(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcEanSecurityLevel(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcEanSecurityLevel(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcEanSecurityLevel(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcEanSecurityLevel(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcEanSecurityLevel(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcEanSecurityLevel(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcEanSecurityLevel(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcEanSecurityLevel(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcEanSecurityLevel(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcEanSecurityLevel(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcEanSecurityLevel(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcEanSecurityLevel(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcEanSupplemental2(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcEanSupplemental2(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcEanSupplemental2(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcEanSupplemental2(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcEanSupplemental2(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcEanSupplemental2(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcEanSupplemental2(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcEanSupplemental2(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcEanSupplemental2(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcEanSupplemental2(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcEanSupplemental2(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcEanSupplemental2(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcEanSupplemental5(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcEanSupplemental5(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcEanSupplemental5(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcEanSupplemental5(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcEanSupplemental5(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcEanSupplemental5(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcEanSupplemental5(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcEanSupplemental5(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcEanSupplemental5(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcEanSupplemental5(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcEanSupplemental5(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcEanSupplemental5(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcEanSupplementalMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcEanSupplementalMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcEanSupplementalMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcEanSupplementalMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcEanSupplementalMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcEanSupplementalMode(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcEanSupplementalMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcEanSupplementalMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcEanSupplementalMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcEanSupplementalMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcEanSupplementalMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcEanSupplementalMode(argc, argv, id);
}
static VALUE BarcodeChainway_getUpca(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpca(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpca(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpca(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpca(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpca(argc, argv, id);
}
static VALUE BarcodeChainway_setUpca(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpca(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpca(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpca(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpca(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpca(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcaPreamble(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcaPreamble(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcaPreamble(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcaPreamble(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcaPreamble(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcaPreamble(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcaPreamble(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcaPreamble(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcaPreamble(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcaPreamble(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcaPreamble(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcaPreamble(argc, argv, id);
}
static VALUE BarcodeChainway_getUpcaReportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpcaReportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpcaReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpcaReportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpcaReportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpcaReportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setUpcaReportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpcaReportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpcaReportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpcaReportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpcaReportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpcaReportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getUpce0(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpce0(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpce0(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpce0(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpce0(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpce0(argc, argv, id);
}
static VALUE BarcodeChainway_setUpce0(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpce0(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpce0(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpce0(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpce0(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpce0(argc, argv, id);
}
static VALUE BarcodeChainway_getUpce0convertToUpca(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpce0convertToUpca(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpce0convertToUpca(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpce0convertToUpca(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpce0convertToUpca(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpce0convertToUpca(argc, argv, id);
}
static VALUE BarcodeChainway_setUpce0convertToUpca(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpce0convertToUpca(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpce0convertToUpca(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpce0convertToUpca(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpce0convertToUpca(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpce0convertToUpca(argc, argv, id);
}
static VALUE BarcodeChainway_getUpce0preamble(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpce0preamble(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpce0preamble(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpce0preamble(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpce0preamble(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpce0preamble(argc, argv, id);
}
static VALUE BarcodeChainway_setUpce0preamble(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpce0preamble(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpce0preamble(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpce0preamble(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpce0preamble(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpce0preamble(argc, argv, id);
}
static VALUE BarcodeChainway_getUpce0reportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpce0reportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpce0reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpce0reportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpce0reportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpce0reportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setUpce0reportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpce0reportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpce0reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpce0reportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpce0reportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpce0reportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getUpce1(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpce1(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpce1(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpce1(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpce1(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpce1(argc, argv, id);
}
static VALUE BarcodeChainway_setUpce1(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpce1(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpce1(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpce1(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpce1(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpce1(argc, argv, id);
}
static VALUE BarcodeChainway_getUpce1convertToUpca(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpce1convertToUpca(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpce1convertToUpca(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpce1convertToUpca(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpce1convertToUpca(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpce1convertToUpca(argc, argv, id);
}
static VALUE BarcodeChainway_setUpce1convertToUpca(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpce1convertToUpca(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpce1convertToUpca(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpce1convertToUpca(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpce1convertToUpca(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpce1convertToUpca(argc, argv, id);
}
static VALUE BarcodeChainway_getUpce1preamble(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpce1preamble(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpce1preamble(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpce1preamble(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpce1preamble(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpce1preamble(argc, argv, id);
}
static VALUE BarcodeChainway_setUpce1preamble(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpce1preamble(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpce1preamble(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpce1preamble(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpce1preamble(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpce1preamble(argc, argv, id);
}
static VALUE BarcodeChainway_getUpce1reportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getUpce1reportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getUpce1reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getUpce1reportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getUpce1reportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getUpce1reportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_setUpce1reportCheckDigit(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setUpce1reportCheckDigit(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setUpce1reportCheckDigit(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setUpce1reportCheckDigit(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setUpce1reportCheckDigit(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setUpce1reportCheckDigit(argc, argv, id);
}
static VALUE BarcodeChainway_getWebcode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getWebcode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getWebcode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getWebcode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getWebcode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getWebcode(argc, argv, id);
}
static VALUE BarcodeChainway_setWebcode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setWebcode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setWebcode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setWebcode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setWebcode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setWebcode(argc, argv, id);
}
static VALUE BarcodeChainway_getWebcodeDecodeGtSubtype(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getWebcodeDecodeGtSubtype(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getWebcodeDecodeGtSubtype(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getWebcodeDecodeGtSubtype(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getWebcodeDecodeGtSubtype(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getWebcodeDecodeGtSubtype(argc, argv, id);
}
static VALUE BarcodeChainway_setWebcodeDecodeGtSubtype(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setWebcodeDecodeGtSubtype(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setWebcodeDecodeGtSubtype(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setWebcodeDecodeGtSubtype(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setWebcodeDecodeGtSubtype(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setWebcodeDecodeGtSubtype(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmModelNumber(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmModelNumber(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmModelNumber(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmModelNumber(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmModelNumber(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmModelNumber(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmSerialNumber(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmSerialNumber(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmSerialNumber(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmSerialNumber(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmSerialNumber(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmSerialNumber(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmDateOfManufacture(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmDateOfManufacture(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmDateOfManufacture(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmDateOfManufacture(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmDateOfManufacture(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmDateOfManufacture(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmDateOfService(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmDateOfService(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmDateOfService(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmDateOfService(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmDateOfService(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmDateOfService(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBluetoothAddress(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBluetoothAddress(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBluetoothAddress(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBluetoothAddress(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBluetoothAddress(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBluetoothAddress(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmFirmwareVersion(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmFirmwareVersion(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmFirmwareVersion(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmFirmwareVersion(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmFirmwareVersion(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmFirmwareVersion(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmDeviceClass(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmDeviceClass(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmDeviceClass(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmDeviceClass(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmDeviceClass(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmDeviceClass(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBatteryStatus(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBatteryStatus(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBatteryStatus(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBatteryStatus(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBatteryStatus(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBatteryStatus(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBatteryCapacity(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBatteryCapacity(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBatteryCapacity(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBatteryCapacity(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBatteryCapacity(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBatteryCapacity(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBatteryId(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBatteryId(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBatteryId(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBatteryId(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBatteryId(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBatteryId(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBluetoothAuthentication(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBluetoothAuthentication(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBluetoothAuthentication(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBluetoothAuthentication(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBluetoothAuthentication(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBluetoothAuthentication(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmBluetoothAuthentication(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmBluetoothAuthentication(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmBluetoothAuthentication(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmBluetoothAuthentication(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmBluetoothAuthentication(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmBluetoothAuthentication(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBluetoothEncryption(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBluetoothEncryption(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBluetoothEncryption(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBluetoothEncryption(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBluetoothEncryption(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBluetoothEncryption(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmBluetoothEncryption(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmBluetoothEncryption(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmBluetoothEncryption(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmBluetoothEncryption(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmBluetoothEncryption(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmBluetoothEncryption(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBluetoothPinCode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBluetoothPinCode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBluetoothPinCode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBluetoothPinCode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBluetoothPinCode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBluetoothPinCode(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmBluetoothPinCode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmBluetoothPinCode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmBluetoothPinCode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmBluetoothPinCode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmBluetoothPinCode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmBluetoothPinCode(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBluetoothPinCodeType(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBluetoothPinCodeType(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBluetoothPinCodeType(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBluetoothPinCodeType(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBluetoothPinCodeType(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBluetoothPinCodeType(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmBluetoothPinCodeType(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmBluetoothPinCodeType(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmBluetoothPinCodeType(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmBluetoothPinCodeType(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmBluetoothPinCodeType(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmBluetoothPinCodeType(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBluetoothReconnectionAttempts(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBluetoothReconnectionAttempts(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBluetoothReconnectionAttempts(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBluetoothReconnectionAttempts(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBluetoothReconnectionAttempts(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBluetoothReconnectionAttempts(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmBluetoothReconnectionAttempts(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmBluetoothReconnectionAttempts(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmBluetoothReconnectionAttempts(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmBluetoothReconnectionAttempts(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmBluetoothReconnectionAttempts(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmBluetoothReconnectionAttempts(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBluetoothBeepOnReconnectAttempt(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBluetoothBeepOnReconnectAttempt(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBluetoothBeepOnReconnectAttempt(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBluetoothBeepOnReconnectAttempt(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBluetoothBeepOnReconnectAttempt(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBluetoothBeepOnReconnectAttempt(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmBluetoothBeepOnReconnectAttempt(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmBluetoothBeepOnReconnectAttempt(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmBluetoothBeepOnReconnectAttempt(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmBluetoothBeepOnReconnectAttempt(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmBluetoothBeepOnReconnectAttempt(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmBluetoothBeepOnReconnectAttempt(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBluetoothHidAutoReconnect(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBluetoothHidAutoReconnect(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBluetoothHidAutoReconnect(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBluetoothHidAutoReconnect(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBluetoothHidAutoReconnect(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBluetoothHidAutoReconnect(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmBluetoothHidAutoReconnect(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmBluetoothHidAutoReconnect(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmBluetoothHidAutoReconnect(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmBluetoothHidAutoReconnect(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmBluetoothHidAutoReconnect(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmBluetoothHidAutoReconnect(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBluetoothFriendlyName(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBluetoothFriendlyName(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBluetoothFriendlyName(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBluetoothFriendlyName(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBluetoothFriendlyName(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBluetoothFriendlyName(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmBluetoothFriendlyName(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmBluetoothFriendlyName(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmBluetoothFriendlyName(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmBluetoothFriendlyName(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmBluetoothFriendlyName(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmBluetoothFriendlyName(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBluetoothInquiryMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBluetoothInquiryMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBluetoothInquiryMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBluetoothInquiryMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBluetoothInquiryMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBluetoothInquiryMode(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmBluetoothInquiryMode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmBluetoothInquiryMode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmBluetoothInquiryMode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmBluetoothInquiryMode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmBluetoothInquiryMode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmBluetoothInquiryMode(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmBluetoothAutoReconnect(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmBluetoothAutoReconnect(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmBluetoothAutoReconnect(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmBluetoothAutoReconnect(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmBluetoothAutoReconnect(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmBluetoothAutoReconnect(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmBluetoothAutoReconnect(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmBluetoothAutoReconnect(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmBluetoothAutoReconnect(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmBluetoothAutoReconnect(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmBluetoothAutoReconnect(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmBluetoothAutoReconnect(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmForceSavePairingBarcode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmForceSavePairingBarcode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmForceSavePairingBarcode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmForceSavePairingBarcode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmForceSavePairingBarcode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmForceSavePairingBarcode(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmForceSavePairingBarcode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmForceSavePairingBarcode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmForceSavePairingBarcode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmForceSavePairingBarcode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmForceSavePairingBarcode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmForceSavePairingBarcode(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmLowBatteryIndication(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmLowBatteryIndication(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmLowBatteryIndication(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmLowBatteryIndication(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmLowBatteryIndication(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmLowBatteryIndication(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmLowBatteryIndication(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmLowBatteryIndication(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmLowBatteryIndication(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmLowBatteryIndication(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmLowBatteryIndication(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmLowBatteryIndication(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmLowBatteryIndicationCycle(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmLowBatteryIndicationCycle(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmLowBatteryIndicationCycle(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmLowBatteryIndicationCycle(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmLowBatteryIndicationCycle(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmLowBatteryIndicationCycle(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmLowBatteryIndicationCycle(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmLowBatteryIndicationCycle(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmLowBatteryIndicationCycle(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmLowBatteryIndicationCycle(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmLowBatteryIndicationCycle(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmLowBatteryIndicationCycle(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmScanLineWidth(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmScanLineWidth(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmScanLineWidth(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmScanLineWidth(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmScanLineWidth(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmScanLineWidth(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmScanLineWidth(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmScanLineWidth(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmScanLineWidth(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmScanLineWidth(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmScanLineWidth(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmScanLineWidth(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmGoodScansDelay(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmGoodScansDelay(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmGoodScansDelay(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmGoodScansDelay(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmGoodScansDelay(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmGoodScansDelay(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmGoodScansDelay(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmGoodScansDelay(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmGoodScansDelay(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmGoodScansDelay(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmGoodScansDelay(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmGoodScansDelay(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmDecodeFeedback(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmDecodeFeedback(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmDecodeFeedback(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmDecodeFeedback(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmDecodeFeedback(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmDecodeFeedback(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmDecodeFeedback(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmDecodeFeedback(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmDecodeFeedback(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmDecodeFeedback(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmDecodeFeedback(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmDecodeFeedback(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmIgnoreCode128Usps(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmIgnoreCode128Usps(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmIgnoreCode128Usps(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmIgnoreCode128Usps(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmIgnoreCode128Usps(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmIgnoreCode128Usps(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmIgnoreCode128Usps(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmIgnoreCode128Usps(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmIgnoreCode128Usps(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmIgnoreCode128Usps(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmIgnoreCode128Usps(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmIgnoreCode128Usps(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmScanTriggerWakeup(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmScanTriggerWakeup(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmScanTriggerWakeup(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmScanTriggerWakeup(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmScanTriggerWakeup(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmScanTriggerWakeup(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmScanTriggerWakeup(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmScanTriggerWakeup(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmScanTriggerWakeup(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmScanTriggerWakeup(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmScanTriggerWakeup(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmScanTriggerWakeup(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmMems(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmMems(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmMems(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmMems(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmMems(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmMems(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmMems(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmMems(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmMems(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmMems(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmMems(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmMems(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmProximityEnable(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmProximityEnable(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmProximityEnable(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmProximityEnable(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmProximityEnable(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmProximityEnable(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmProximityEnable(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmProximityEnable(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmProximityEnable(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmProximityEnable(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmProximityEnable(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmProximityEnable(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmProximityContinuous(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmProximityContinuous(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmProximityContinuous(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmProximityContinuous(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmProximityContinuous(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmProximityContinuous(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmProximityContinuous(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmProximityContinuous(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmProximityContinuous(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmProximityContinuous(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmProximityContinuous(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmProximityContinuous(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmProximityDistance(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmProximityDistance(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmProximityDistance(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmProximityDistance(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmProximityDistance(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmProximityDistance(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmProximityDistance(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmProximityDistance(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmProximityDistance(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmProximityDistance(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmProximityDistance(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmProximityDistance(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmPagingEnable(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmPagingEnable(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmPagingEnable(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmPagingEnable(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmPagingEnable(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmPagingEnable(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmPagingEnable(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmPagingEnable(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmPagingEnable(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmPagingEnable(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmPagingEnable(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmPagingEnable(argc, argv, id);
}
static VALUE BarcodeChainway_getRsmPagingBeepSequence(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getRsmPagingBeepSequence(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getRsmPagingBeepSequence(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getRsmPagingBeepSequence(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getRsmPagingBeepSequence(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getRsmPagingBeepSequence(argc, argv, id);
}
static VALUE BarcodeChainway_setRsmPagingBeepSequence(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setRsmPagingBeepSequence(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setRsmPagingBeepSequence(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setRsmPagingBeepSequence(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setRsmPagingBeepSequence(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setRsmPagingBeepSequence(argc, argv, id);
}
VALUE rb_s_BarcodeChainway_enumerate(int argc, VALUE *argv)
{
    RAWTRACE2("%s - argc: %d", __FUNCTION__, argc);
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");


    if((argc < 0) || (argc > 2))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    result.setObjectClassPath("Rho::BarcodeChainway");
    RAWTRACE("Object class path is set");

    ObjectProxy::enumerate(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}

static VALUE BarcodeChainway_enable(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 3))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.enable(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_enable(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_enable(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_enable(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_enable(argc, argv, id);
}
static VALUE BarcodeChainway_registerBluetoothStatus(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 2))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.registerBluetoothStatus(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_registerBluetoothStatus(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_registerBluetoothStatus(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_registerBluetoothStatus(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_registerBluetoothStatus(argc, argv, id);
}
static VALUE BarcodeChainway_start(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.start(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_start(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_start(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_start(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_start(argc, argv, id);
}
static VALUE BarcodeChainway_stop(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.stop(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_stop(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_stop(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_stop(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_stop(argc, argv, id);
}
static VALUE BarcodeChainway_disable(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 0))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.disable(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_disable(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_disable(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_disable(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_disable(argc, argv, id);
}
static VALUE BarcodeChainway_barcode_recognize(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.barcode_recognize(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_barcode_recognize(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_barcode_recognize(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_barcode_recognize(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_barcode_recognize(argc, argv, id);
}
static VALUE BarcodeChainway_getSupportedProperties(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 2))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getSupportedProperties(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getSupportedProperties(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getSupportedProperties(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getSupportedProperties(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getSupportedProperties(argc, argv, id);
}
static VALUE BarcodeChainway_take(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 2) || (argc > 3))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.take(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_take(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_take(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_take(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_take(argc, argv, id);
}
static VALUE BarcodeChainway_take_barcode(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 2))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 2) ? argc : 2;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 2)
    {
        if (rho_ruby_is_proc(argv[2]) || rho_ruby_is_method(argv[2]))
        {
            result.setRubyProcCallBack(argv[2]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 3)
                result.setCallBack(argv[2], argv[3]);
            else
                result.setCallBack(argv[2]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.take_barcode(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_take_barcode(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_take_barcode(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_take_barcode(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_take_barcode(argc, argv, id);
}
static VALUE BarcodeChainway_commandRemoteScanner(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.commandRemoteScanner(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_commandRemoteScanner(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_commandRemoteScanner(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_commandRemoteScanner(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_commandRemoteScanner(argc, argv, id);
}
static VALUE BarcodeChainway_getProperty(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 3))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getProperty(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getProperty(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getProperty(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getProperty(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getProperty(argc, argv, id);
}
static VALUE BarcodeChainway_getProperties(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 3))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getProperties(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getProperties(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getProperties(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getProperties(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getProperties(argc, argv, id);
}
static VALUE BarcodeChainway_getAllProperties(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 0) || (argc > 2))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 0) ? argc : 0;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 0)
    {
        if (rho_ruby_is_proc(argv[0]) || rho_ruby_is_method(argv[0]))
        {
            result.setRubyProcCallBack(argv[0]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 1)
                result.setCallBack(argv[0], argv[1]);
            else
                result.setCallBack(argv[0]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.getAllProperties(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_getAllProperties(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_getAllProperties(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_getAllProperties(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_getAllProperties(argc, argv, id);
}
static VALUE BarcodeChainway_setProperty(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 2) || (argc > 2))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 2) ? argc : 2;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 2)
    {
        if (rho_ruby_is_proc(argv[2]) || rho_ruby_is_method(argv[2]))
        {
            result.setRubyProcCallBack(argv[2]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 3)
                result.setCallBack(argv[2], argv[3]);
            else
                result.setCallBack(argv[2]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setProperty(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setProperty(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setProperty(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setProperty(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setProperty(argc, argv, id);
}
static VALUE BarcodeChainway_setProperties(int argc, VALUE *argv, const rho::String& id)
{
    RAWTRACE2("%s(id=%s)", __FUNCTION__, id.c_str());
    MethodResultJni result(true);
    if(!result)
    {
        RAWLOG_ERROR("JNI error: failed to initialize MethodResult java object ^^^");
        result.setError("JNI error: failed to initialize MethodResult java object");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    RAWTRACE("MethodResultJni instance is created");

    ObjectProxy barcodechainway(id);

    if((argc < 1) || (argc > 1))
    {
        RAWLOG_ERROR1("Wrong number of arguments: %d ^^^", argc);
        result.setArgError("Wrong number of arguments");
        return CMethodResultConvertor().toRuby(result, false);
    }
    
    unsigned realParamCount = (argc < 1) ? argc : 1;
    std::vector<VALUE> arguments(argv, argv + realParamCount);
    
    RAWTRACE1("Count of passed arguments: %d", arguments.size());
    
    if(argc > 1)
    {
        if (rho_ruby_is_proc(argv[1]) || rho_ruby_is_method(argv[1]))
        {
            result.setRubyProcCallBack(argv[1]);
            RAWTRACE("Ruby proc callback is set");
        } else
        {
            if(argc > 2)
                result.setCallBack(argv[1], argv[2]);
            else
                result.setCallBack(argv[1]);
            
            RAWTRACE("Callback URL is set");
        }
        if(!result.hasCallback())
        {
            RAWLOG_ERROR("Error setting callback ^^^");
            return CMethodResultConvertor().toRuby(result, false);
        }
    }

    barcodechainway.setProperties(argumentsAdapter(arguments), result); 
    RAWTRACE("Native metod has invoked, converting result");
    VALUE res = CMethodResultConvertor().toRuby(result, false);
    RAWTRACE(__FUNCTION__);
    return res;
}
VALUE rb_BarcodeChainway_setProperties(int argc, VALUE *argv, VALUE obj)
{
    rho::String id = rho_ruby_get_object_id(obj);
    return BarcodeChainway_setProperties(argc, argv, id);
}

VALUE rb_s_BarcodeChainway_def_setProperties(int argc, VALUE *argv)
{
    rho::String id = ObjectProxy::getDefaultID();
    return BarcodeChainway_setProperties(argc, argv, id);
}
}
