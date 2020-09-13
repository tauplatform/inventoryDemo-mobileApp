#pragma once

#include "../../../../shared/generated/cpp/OidcNativeBase.h"
#include "OidcNativeRuntime.h"


namespace rho {
class COidcNativeFactory: public COidcNativeFactoryBase
{
private:
    static rhoruntime::IOidcNativeFactoryImpl^ _impl;
public:
    static void setImpl(rhoruntime::IOidcNativeFactoryImpl^ impl) { _impl = impl; }
    ~COidcNativeFactory(){}
    virtual IOidcNativeSingleton* createModuleSingleton();
    virtual IOidcNative* createModuleByID(const rho::String& strID);
};

}
