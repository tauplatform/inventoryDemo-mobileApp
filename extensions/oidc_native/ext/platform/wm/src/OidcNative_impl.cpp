#include "../../../shared/generated/cpp/OidcNativeBase.h"

namespace rho {

using namespace apiGenerator;

class COidcNativeImpl: public COidcNativeBase
{
public:
    COidcNativeImpl(const rho::String& strID): COidcNativeBase()
    {
    }

    virtual void getPlatformName(rho::apiGenerator::CMethodResult& oResult) {
         oResult.set("WM");
    }

    virtual void calcSumm( int a,  int b, rho::apiGenerator::CMethodResult& oResult) {
         oResult.set(a+b);
    }
    
    virtual void joinStrings( const rho::String& a,  const rho::String& b, rho::apiGenerator::CMethodResult& oResult) {
         oResult.set(a+b);
    }

};

class COidcNativeSingleton: public COidcNativeSingletonBase
{
    ~COidcNativeSingleton(){}
    virtual rho::String getInitialDefaultID();
    virtual void enumerate(CMethodResult& oResult);
};

class COidcNativeFactory: public COidcNativeFactoryBase
{
    ~COidcNativeFactory(){}
    virtual IOidcNativeSingleton* createModuleSingleton();
    virtual IOidcNative* createModuleByID(const rho::String& strID);
};

extern "C" void Init_OidcNative_extension()
{
    COidcNativeFactory::setInstance( new COidcNativeFactory() );
    Init_OidcNative_API();
}

IOidcNative* COidcNativeFactory::createModuleByID(const rho::String& strID)
{
    return new COidcNativeImpl(strID);
}

IOidcNativeSingleton* COidcNativeFactory::createModuleSingleton()
{
    return new COidcNativeSingleton();
}

void COidcNativeSingleton::enumerate(CMethodResult& oResult)
{
    rho::Vector<rho::String> arIDs;
    arIDs.addElement("SC1");
    arIDs.addElement("SC2");

    oResult.set(arIDs);
}

rho::String COidcNativeSingleton::getInitialDefaultID()
{
    CMethodResult oRes;
    enumerate(oRes);

    rho::Vector<rho::String>& arIDs = oRes.getStringArray();
        
    return arIDs[0];
}

}