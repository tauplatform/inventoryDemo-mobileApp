#include "rhodes.h"
#include "OidcNative.h"

#include "logging/RhoLog.h"
#undef DEFAULT_LOGCATEGORY
#define DEFAULT_LOGCATEGORY "OidcNative_impl"

#define OIDCNATIVE_FACTORY_CLASS "com.rho.oidcnative.OidcNativeFactory"

extern "C" void Init_OidcNative_API(void);

extern "C" void Init_OidcNative(void)
{
    RAWTRACE(__FUNCTION__);

    JNIEnv *env = jnienv();
    if(env)
    {
        jclass cls = rho_find_class(env, OIDCNATIVE_FACTORY_CLASS);
        if(!cls)
        {
            RAWLOG_ERROR1("Failed to find java class: %s", OIDCNATIVE_FACTORY_CLASS);
            return;
        }
        jmethodID midFactory = env->GetMethodID(cls, "<init>", "()V");
        if(!midFactory)
        {
            RAWLOG_ERROR1("Failed to get constructor for java class %s", OIDCNATIVE_FACTORY_CLASS);
            return;
        }
        jobject jFactory = env->NewObject(cls, midFactory);
        if(env->IsSameObject(jFactory, NULL))
        {
            RAWLOG_ERROR1("Failed to create %s instance", OIDCNATIVE_FACTORY_CLASS);
            return;
        }
        
        RAWTRACE("Initializing Java factory");

        rho::COidcNativeBase::setJavaFactory(env, jFactory);

        RAWTRACE("Deleting JNI reference");

        env->DeleteLocalRef(jFactory);

        RAWTRACE("Initializing API");

        Init_OidcNative_API();

        RAWTRACE("Init_OidcNative succeeded");
    }
    else
    {
        RAWLOG_ERROR("Failed to initialize OidcNative API: jnienv() is failed");
    }

}

extern "C" void Init_OidcNative_extension() {
    Init_OidcNative();
}
