// BarcodeChainwayRuntime.cpp
#include "BarcodeChainwayRuntime.h"
#include "BarcodeChainwayFactory.h"
#include "BarcodeChainway_impl.h"
#include "../../uwp/rhoruntime/common/RhoConvertWP8.h"

using namespace Platform;
using namespace rho::apiGenerator;

using namespace rho;

namespace rhoruntime
{

BarcodeChainwayRuntimeComponent::BarcodeChainwayRuntimeComponent(IBarcodeChainwayImpl^ impl):
    _impl(impl), _cppImpl(0)
{
    // TODO: implement runtime component constructor
}

int64 BarcodeChainwayRuntimeComponent::getCppImpl()
{
    if (_cppImpl == 0)
    {
        _cppImpl = _impl->getNativeImpl();
    }
    return _cppImpl;
}

BarcodeChainwaySingletonComponent::BarcodeChainwaySingletonComponent(IBarcodeChainwaySingletonImpl^ impl):
    _impl(impl)
{
    // TODO: implement singleton component constructor
}

void BarcodeChainwaySingletonComponent::enumerate(IMethodResult^ oResult)
{
    //((CBarcodeChainwayImpl*)getCppImpl())->enumerate(*(CMethodResult*)(oResult->getNative()));
}

void BarcodeChainwayRuntimeComponent::getProperty(Platform::String^ propertyName, IMethodResult^ oResult)
{
    ((CBarcodeChainwayImpl*)getCppImpl())->getProperty(rho::common::convertStringAFromWP8(propertyName), *(CMethodResult*)(oResult->getNative()));
}

void BarcodeChainwayRuntimeComponent::getProperties(Windows::Foundation::Collections::IVectorView<Platform::String^>^ arrayofNames, IMethodResult^ oResult)
{
    ((CBarcodeChainwayImpl*)getCppImpl())->getProperties(rho::common::convertArrayFromWP8(arrayofNames), *(CMethodResult*)(oResult->getNative()));
}

void BarcodeChainwayRuntimeComponent::getAllProperties(IMethodResult^ oResult)
{
    ((CBarcodeChainwayImpl*)getCppImpl())->getAllProperties(*(CMethodResult*)(oResult->getNative()));
}

void BarcodeChainwayRuntimeComponent::setProperty(Platform::String^ propertyName, Platform::String^ propertyValue, IMethodResult^ oResult)
{
    ((CBarcodeChainwayImpl*)getCppImpl())->setProperty(rho::common::convertStringAFromWP8(propertyName), rho::common::convertStringAFromWP8(propertyValue), *(CMethodResult*)(oResult->getNative()));
}

void BarcodeChainwayRuntimeComponent::setProperties(Windows::Foundation::Collections::IMapView<Platform::String^, Platform::String^>^ propertyMap, IMethodResult^ oResult)
{
    ((CBarcodeChainwayImpl*)getCppImpl())->setProperties(rho::common::convertHashFromWP8(propertyMap), *(CMethodResult*)(oResult->getNative()));
}

void BarcodeChainwayFactoryComponent::setImpl(IBarcodeChainwayFactoryImpl^ impl)
{
    CBarcodeChainwayFactory::setImpl(impl);
}

}