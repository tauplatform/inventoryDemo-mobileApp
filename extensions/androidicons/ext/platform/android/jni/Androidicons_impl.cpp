#include "rhodes.h"
#include "Androidicons.h"

#include "logging/RhoLog.h"
#undef DEFAULT_LOGCATEGORY
#define DEFAULT_LOGCATEGORY "Androidicons_impl"

#define ANDROIDICONS_FACTORY_CLASS "com.rho.androidicons.AndroidiconsFactory"

extern "C" void Init_Androidicons_API(void);

extern "C" void Init_Androidicons(void)
{
    RAWTRACE(__FUNCTION__);

    JNIEnv *env = jnienv();
    if(env)
    {
        jclass cls = rho_find_class(env, ANDROIDICONS_FACTORY_CLASS);
        if(!cls)
        {
            RAWLOG_ERROR1("Failed to find java class: %s", ANDROIDICONS_FACTORY_CLASS);
            return;
        }
        jmethodID midFactory = env->GetMethodID(cls, "<init>", "()V");
        if(!midFactory)
        {
            RAWLOG_ERROR1("Failed to get constructor for java class %s", ANDROIDICONS_FACTORY_CLASS);
            return;
        }
        jobject jFactory = env->NewObject(cls, midFactory);
        if(env->IsSameObject(jFactory, NULL))
        {
            RAWLOG_ERROR1("Failed to create %s instance", ANDROIDICONS_FACTORY_CLASS);
            return;
        }
        
        RAWTRACE("Initializing Java factory");

        rho::CAndroidiconsBase::setJavaFactory(env, jFactory);

        RAWTRACE("Deleting JNI reference");

        env->DeleteLocalRef(jFactory);

        RAWTRACE("Initializing API");

        Init_Androidicons_API();

        RAWTRACE("Init_Androidicons succeeded");
    }
    else
    {
        RAWLOG_ERROR("Failed to initialize Androidicons API: jnienv() is failed");
    }

}

extern "C" void Init_Androidicons_extension() {
    Init_Androidicons();
}
