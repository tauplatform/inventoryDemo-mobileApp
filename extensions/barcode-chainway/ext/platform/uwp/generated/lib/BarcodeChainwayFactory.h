#pragma once

#include "../../../../shared/generated/cpp/BarcodeChainwayBase.h"
#include "BarcodeChainwayRuntime.h"


namespace rho {
class CBarcodeChainwayFactory: public CBarcodeChainwayFactoryBase
{
private:
    static rhoruntime::IBarcodeChainwayFactoryImpl^ _impl;
public:
    static void setImpl(rhoruntime::IBarcodeChainwayFactoryImpl^ impl) { _impl = impl; }
    ~CBarcodeChainwayFactory(){}
    virtual IBarcodeChainwaySingleton* createModuleSingleton();
    virtual IBarcodeChainway* createModuleByID(const rho::String& strID);
};

}
