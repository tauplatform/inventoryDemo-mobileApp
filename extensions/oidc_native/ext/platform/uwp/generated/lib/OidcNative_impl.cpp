#include "OidcNative_impl.h"
#include "OidcNativeFactory.h"
#include "api_generator/uwp/MethodResultImpl.h"

using namespace rho::apiGenerator;
using namespace rhoruntime;

namespace rho {


void COidcNativeImpl::getSimpleStringProperty(CMethodResult& oResult)
{
    try {
        _runtime->getSimpleStringProperty(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void COidcNativeImpl::setSimpleStringProperty(const rho::String& simpleStringProperty, CMethodResult& oResult)
{
        Platform::String^ _simpleStringProperty = rho::common::convertStringToWP8(simpleStringProperty);
    try {
        _runtime->setSimpleStringProperty(_simpleStringProperty, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void COidcNativeImpl::getPlatformName(CMethodResult& oResult)
{
    try {
        _runtime->getPlatformName(ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void COidcNativeImpl::calcSumm(int a, int b, CMethodResult& oResult)
{
    try {
        _runtime->calcSumm(a, b, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}

void COidcNativeImpl::joinStrings(const rho::String& a, const rho::String& b, CMethodResult& oResult)
{
        Platform::String^ _a = rho::common::convertStringToWP8(a);
        Platform::String^ _b = rho::common::convertStringToWP8(b);
    try {
        _runtime->joinStrings(_a, _b, ref new CMethodResultImpl((int64)&oResult));
    } catch (Platform::Exception^ e) {
        LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
    }
}


class COidcNativeSingleton: public COidcNativeSingletonBase
{
private:
    IOidcNativeSingletonImpl^ _runtime;
public:
    COidcNativeSingleton(IOidcNativeSingletonImpl^ runtime): COidcNativeSingletonBase(), _runtime(runtime) {}
    ~COidcNativeSingleton(){}

    virtual void enumerate(CMethodResult& oResult)
    {
        try {
            _runtime->enumerate(ref new CMethodResultImpl((int64)&oResult));
        } catch (Platform::Exception^ e) {
            LOG(ERROR) + rho::common::convertStringAFromWP8(e->ToString());
        }
    }


    virtual rho::String getDefaultID(){return "1";} // TODO: implement getDefaultID
    virtual rho::String getInitialDefaultID(){return "1";} // TODO: implement getInitialDefaultID
    virtual void setDefaultID(const rho::String& strID){} // TODO: implement setDefaultID
    
    //virtual void addCommandToQueue(rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor){} // TODO: implement addCommandToQueue
    //virtual void callCommandInThread(rho::common::IRhoRunnable* pFunctor){} // TODO: implement callCommandInThread
};

IOidcNativeFactoryImpl^ COidcNativeFactory::_impl;

IOidcNative* COidcNativeFactory::createModuleByID(const rho::String& strID)
{
    return new COidcNativeImpl(strID, _impl->getImpl(rho::common::convertStringToWP8(strID)));
}

IOidcNativeSingleton* COidcNativeFactory::createModuleSingleton()
{
    return new COidcNativeSingleton(_impl->getSingletonImpl());
}

}

extern "C" void Init_OidcNative_extension()
{
    rho::COidcNativeFactory::setInstance( new rho::COidcNativeFactory() );
    rho::Init_OidcNative_API();

    RHODESAPP().getExtManager().requireRubyFile("RhoOidcNativeApi");
}
