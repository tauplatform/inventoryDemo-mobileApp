#include "OidcNative.h"


namespace rho {

IMPLEMENT_LOGCLASS(COidcNativeBase, "OidcNativeJNI");

//OidcNativeFactorySingleton staff
const char* const COidcNativeBase::FACTORY_SINGLETON_CLASS = "com.rho.oidcnative.OidcNativeFactorySingleton";
jclass COidcNativeBase::s_clsFactorySingleton = 0;
jmethodID COidcNativeBase::s_midFactorySetInstance;
jmethodID COidcNativeBase::s_midFactoryGetInstance;

//OidcNativeFactory staff
const char* const COidcNativeBase::IFACTORY_CLASS = "com.rho.oidcnative.IOidcNativeFactory";
jclass COidcNativeBase::s_clsIFactory = 0;
jmethodID COidcNativeBase::s_midGetApiSingleton;
jmethodID COidcNativeBase::s_midGetApiObject;

//OidcNativeSingletonBase staff
const char* const COidcNativeBase::SINGLETON_BASE_CLASS = "com.rho.oidcnative.OidcNativeSingletonBase";
jclass COidcNativeBase::s_clsSingletonBase = 0;

//OidcNativeBase staff
const char* const COidcNativeBase::OBJECT_BASE_CLASS = "com.rho.oidcnative.OidcNativeBase";
jclass COidcNativeBase::s_clsObjectBase = 0;


//IRhoApiDefaultId staff
const char* const COidcNativeBase::IDEFAULTID_CLASS = "com.rhomobile.rhodes.api.IRhoApiDefaultId";
jclass COidcNativeBase::s_clsIDefaultId = 0;
jmethodID COidcNativeBase::s_midGetDefaultID;
jmethodID COidcNativeBase::s_midSetDefaultID;


//Method tasks

const char* const COidcNativeBase::GETSIMPLESTRINGPROPERTY_TASK_CLASS = 
        "com.rho.oidcnative.OidcNativeBase$getSimpleStringPropertyTask";

jclass COidcNativeBase::s_clsgetSimpleStringPropertyTask = 0;
jmethodID COidcNativeBase::s_midgetSimpleStringPropertyTask;

const char* const COidcNativeBase::SETSIMPLESTRINGPROPERTY_TASK_CLASS = 
        "com.rho.oidcnative.OidcNativeBase$setSimpleStringPropertyTask";

jclass COidcNativeBase::s_clssetSimpleStringPropertyTask = 0;
jmethodID COidcNativeBase::s_midsetSimpleStringPropertyTask;

const char* const COidcNativeBase::ENUMERATE_TASK_CLASS = 
        "com.rho.oidcnative.OidcNativeSingletonBase$enumerateTask";

jclass COidcNativeBase::s_clsenumerateTask = 0;
jmethodID COidcNativeBase::s_midenumerateTask;

const char* const COidcNativeBase::GETPLATFORMNAME_TASK_CLASS = 
        "com.rho.oidcnative.OidcNativeBase$getPlatformNameTask";

jclass COidcNativeBase::s_clsgetPlatformNameTask = 0;
jmethodID COidcNativeBase::s_midgetPlatformNameTask;

const char* const COidcNativeBase::CALCSUMM_TASK_CLASS = 
        "com.rho.oidcnative.OidcNativeBase$calcSummTask";

jclass COidcNativeBase::s_clscalcSummTask = 0;
jmethodID COidcNativeBase::s_midcalcSummTask;

const char* const COidcNativeBase::JOINSTRINGS_TASK_CLASS = 
        "com.rho.oidcnative.OidcNativeBase$joinStringsTask";

jclass COidcNativeBase::s_clsjoinStringsTask = 0;
jmethodID COidcNativeBase::s_midjoinStringsTask;

const char* const COidcNativeBase::GETPROPERTY_TASK_CLASS = 
        "com.rho.oidcnative.OidcNativeBase$getPropertyTask";

jclass COidcNativeBase::s_clsgetPropertyTask = 0;
jmethodID COidcNativeBase::s_midgetPropertyTask;

const char* const COidcNativeBase::GETPROPERTIES_TASK_CLASS = 
        "com.rho.oidcnative.OidcNativeBase$getPropertiesTask";

jclass COidcNativeBase::s_clsgetPropertiesTask = 0;
jmethodID COidcNativeBase::s_midgetPropertiesTask;

const char* const COidcNativeBase::GETALLPROPERTIES_TASK_CLASS = 
        "com.rho.oidcnative.OidcNativeBase$getAllPropertiesTask";

jclass COidcNativeBase::s_clsgetAllPropertiesTask = 0;
jmethodID COidcNativeBase::s_midgetAllPropertiesTask;

const char* const COidcNativeBase::SETPROPERTY_TASK_CLASS = 
        "com.rho.oidcnative.OidcNativeBase$setPropertyTask";

jclass COidcNativeBase::s_clssetPropertyTask = 0;
jmethodID COidcNativeBase::s_midsetPropertyTask;

const char* const COidcNativeBase::SETPROPERTIES_TASK_CLASS = 
        "com.rho.oidcnative.OidcNativeBase$setPropertiesTask";

jclass COidcNativeBase::s_clssetPropertiesTask = 0;
jmethodID COidcNativeBase::s_midsetPropertiesTask;


//----------------------------------------------------------------------------------------------------------------------

JNIEnv* COidcNativeBase::jniInit()
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

JNIEnv* COidcNativeBase::jniInit(JNIEnv* env)
{
    static bool initialized = false;
    env = MethodExecutorJni::jniInit(env);
    if (!env) {
        LOG(FATAL) + "JNI init failed";
        return 0;
    }

    if(!initialized)
    {
        //init OidcNativeFactorySingleton JNI
        s_clsFactorySingleton = loadClass(env, FACTORY_SINGLETON_CLASS);
        if (!s_clsFactorySingleton) return 0;

        s_midFactorySetInstance = env->GetStaticMethodID(s_clsFactorySingleton, "setInstance", "(Lcom/rho/oidcnative/IOidcNativeFactory;)V");
        if(!s_midFactorySetInstance)
        {
            LOG(FATAL) + "Failed to get method 'setInstance' for java class " + FACTORY_SINGLETON_CLASS;
            return NULL;
        }
        s_midFactoryGetInstance = env->GetStaticMethodID(s_clsFactorySingleton, "getInstance", "()Lcom/rho/oidcnative/IOidcNativeFactory;");
        if(!s_midFactoryGetInstance)
        {
            LOG(FATAL) + "Failed to get method 'getInstance' for java class " + FACTORY_SINGLETON_CLASS;
            return NULL;
        }

        //init IOidcNativeFactory JNI
        s_clsIFactory = loadClass(env, IFACTORY_CLASS);
        if (!s_clsIFactory) return 0;
        s_midGetApiSingleton = env->GetMethodID(s_clsIFactory, "getApiSingleton", "()Lcom/rho/oidcnative/IOidcNativeSingleton;");
        if(!s_midGetApiSingleton)
        {
            LOG(FATAL) + "Failed to get method 'getApiSingleton' for java class " + IFACTORY_CLASS;
            return NULL;
        }
        s_midGetApiObject = env->GetMethodID(s_clsIFactory, "getApiObject", "(Ljava/lang/String;)Lcom/rho/oidcnative/IOidcNative;");
        if(!s_midGetApiObject)
        {
            LOG(FATAL) + "Failed to get method 'getApiObject' for java class " + IFACTORY_CLASS;
            return NULL;
        }

        s_clsSingletonBase = loadClass(env, SINGLETON_BASE_CLASS);
        if (!s_clsSingletonBase) return 0;
        s_clsObjectBase = loadClass(env, OBJECT_BASE_CLASS);
        if (!s_clsObjectBase) return 0;



        s_clsgetSimpleStringPropertyTask = loadClass(env, GETSIMPLESTRINGPROPERTY_TASK_CLASS);
        if (!s_clsgetSimpleStringPropertyTask) return 0;
        s_midgetSimpleStringPropertyTask = env->GetMethodID(s_clsgetSimpleStringPropertyTask, "<init>",
                        "(Lcom/rho/oidcnative/IOidcNative;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetSimpleStringPropertyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETSIMPLESTRINGPROPERTY_TASK_CLASS;
            return NULL;
        }

        s_clssetSimpleStringPropertyTask = loadClass(env, SETSIMPLESTRINGPROPERTY_TASK_CLASS);
        if (!s_clssetSimpleStringPropertyTask) return 0;
        s_midsetSimpleStringPropertyTask = env->GetMethodID(s_clssetSimpleStringPropertyTask, "<init>",
                        "(Lcom/rho/oidcnative/IOidcNative;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetSimpleStringPropertyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETSIMPLESTRINGPROPERTY_TASK_CLASS;
            return NULL;
        }

        s_clsenumerateTask = loadClass(env, ENUMERATE_TASK_CLASS);
        if (!s_clsenumerateTask) return 0;
        s_midenumerateTask = env->GetMethodID(s_clsenumerateTask, "<init>",
                        "(Lcom/rho/oidcnative/IOidcNativeSingleton;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midenumerateTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + ENUMERATE_TASK_CLASS;
            return NULL;
        }

        s_clsgetPlatformNameTask = loadClass(env, GETPLATFORMNAME_TASK_CLASS);
        if (!s_clsgetPlatformNameTask) return 0;
        s_midgetPlatformNameTask = env->GetMethodID(s_clsgetPlatformNameTask, "<init>",
                        "(Lcom/rho/oidcnative/IOidcNative;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetPlatformNameTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETPLATFORMNAME_TASK_CLASS;
            return NULL;
        }

        s_clscalcSummTask = loadClass(env, CALCSUMM_TASK_CLASS);
        if (!s_clscalcSummTask) return 0;
        s_midcalcSummTask = env->GetMethodID(s_clscalcSummTask, "<init>",
                        "(Lcom/rho/oidcnative/IOidcNative;IILcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midcalcSummTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + CALCSUMM_TASK_CLASS;
            return NULL;
        }

        s_clsjoinStringsTask = loadClass(env, JOINSTRINGS_TASK_CLASS);
        if (!s_clsjoinStringsTask) return 0;
        s_midjoinStringsTask = env->GetMethodID(s_clsjoinStringsTask, "<init>",
                        "(Lcom/rho/oidcnative/IOidcNative;Ljava/lang/String;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midjoinStringsTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + JOINSTRINGS_TASK_CLASS;
            return NULL;
        }

        s_clsgetPropertyTask = loadClass(env, GETPROPERTY_TASK_CLASS);
        if (!s_clsgetPropertyTask) return 0;
        s_midgetPropertyTask = env->GetMethodID(s_clsgetPropertyTask, "<init>",
                        "(Lcom/rho/oidcnative/IOidcNative;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetPropertyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETPROPERTY_TASK_CLASS;
            return NULL;
        }

        s_clsgetPropertiesTask = loadClass(env, GETPROPERTIES_TASK_CLASS);
        if (!s_clsgetPropertiesTask) return 0;
        s_midgetPropertiesTask = env->GetMethodID(s_clsgetPropertiesTask, "<init>",
                        "(Lcom/rho/oidcnative/IOidcNative;Ljava/util/List;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetPropertiesTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETPROPERTIES_TASK_CLASS;
            return NULL;
        }

        s_clsgetAllPropertiesTask = loadClass(env, GETALLPROPERTIES_TASK_CLASS);
        if (!s_clsgetAllPropertiesTask) return 0;
        s_midgetAllPropertiesTask = env->GetMethodID(s_clsgetAllPropertiesTask, "<init>",
                        "(Lcom/rho/oidcnative/IOidcNative;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midgetAllPropertiesTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + GETALLPROPERTIES_TASK_CLASS;
            return NULL;
        }

        s_clssetPropertyTask = loadClass(env, SETPROPERTY_TASK_CLASS);
        if (!s_clssetPropertyTask) return 0;
        s_midsetPropertyTask = env->GetMethodID(s_clssetPropertyTask, "<init>",
                        "(Lcom/rho/oidcnative/IOidcNative;Ljava/lang/String;Ljava/lang/String;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
        if(!s_midsetPropertyTask)
        {
            LOG(FATAL) + "Failed to get constructor for java class " + SETPROPERTY_TASK_CLASS;
            return NULL;
        }

        s_clssetPropertiesTask = loadClass(env, SETPROPERTIES_TASK_CLASS);
        if (!s_clssetPropertiesTask) return 0;
        s_midsetPropertiesTask = env->GetMethodID(s_clssetPropertiesTask, "<init>",
                        "(Lcom/rho/oidcnative/IOidcNative;Ljava/util/Map;Lcom/rhomobile/rhodes/api/IMethodResult;)V");
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
        LOG(TRACE) + "COidcNative JNI init succeeded";
    }
    return env;
}
//----------------------------------------------------------------------------------------------------------------------

void COidcNativeBase::setJavaFactory(JNIEnv* env, jobject jFactory)
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

rho::String COidcNativeBase::getDefaultID()
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

void COidcNativeBase::setDefaultID(const rho::String& id)
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

jobject COidcNativeBase::getFactory(JNIEnv* env)
{
    jobject res = env->CallStaticObjectMethod(s_clsFactorySingleton, s_midFactoryGetInstance);
    return res;
}
//----------------------------------------------------------------------------------------------------------------------

jobject COidcNativeBase::getSingleton(JNIEnv* env)
{
    jhobject jhFactory = getFactory(env);
    jobject res = env->CallObjectMethod(jhFactory.get(), s_midGetApiSingleton);
    return res;
}
//----------------------------------------------------------------------------------------------------------------------

jobject COidcNativeBase::getObject(JNIEnv* env)
{
    jhstring jhId = rho_cast<jstring>(env, m_id);
    jhobject jhFactory = getFactory(env);
    jobject res = env->CallObjectMethod(jhFactory.get(), s_midGetApiObject, jhId.get());
    return res;
}
//----------------------------------------------------------------------------------------------------------------------


}
