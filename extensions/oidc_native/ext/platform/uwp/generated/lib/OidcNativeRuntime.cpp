// OidcNativeRuntime.cpp
#include "OidcNativeRuntime.h"
#include "OidcNativeFactory.h"
#include "OidcNative_impl.h"
#include "../../uwp/rhoruntime/common/RhoConvertWP8.h"

using namespace Platform;
using namespace rho::apiGenerator;

using namespace rho;

namespace rhoruntime
{

OidcNativeRuntimeComponent::OidcNativeRuntimeComponent(IOidcNativeImpl^ impl):
    _impl(impl), _cppImpl(0)
{
    // TODO: implement runtime component constructor
}

int64 OidcNativeRuntimeComponent::getCppImpl()
{
    if (_cppImpl == 0)
    {
        _cppImpl = _impl->getNativeImpl();
    }
    return _cppImpl;
}

OidcNativeSingletonComponent::OidcNativeSingletonComponent(IOidcNativeSingletonImpl^ impl):
    _impl(impl)
{
    // TODO: implement singleton component constructor
}

void OidcNativeSingletonComponent::enumerate(IMethodResult^ oResult)
{
    //((COidcNativeImpl*)getCppImpl())->enumerate(*(CMethodResult*)(oResult->getNative()));
}

void OidcNativeRuntimeComponent::getProperty(Platform::String^ propertyName, IMethodResult^ oResult)
{
    ((COidcNativeImpl*)getCppImpl())->getProperty(rho::common::convertStringAFromWP8(propertyName), *(CMethodResult*)(oResult->getNative()));
}

void OidcNativeRuntimeComponent::getProperties(Windows::Foundation::Collections::IVectorView<Platform::String^>^ arrayofNames, IMethodResult^ oResult)
{
    ((COidcNativeImpl*)getCppImpl())->getProperties(rho::common::convertArrayFromWP8(arrayofNames), *(CMethodResult*)(oResult->getNative()));
}

void OidcNativeRuntimeComponent::getAllProperties(IMethodResult^ oResult)
{
    ((COidcNativeImpl*)getCppImpl())->getAllProperties(*(CMethodResult*)(oResult->getNative()));
}

void OidcNativeRuntimeComponent::setProperty(Platform::String^ propertyName, Platform::String^ propertyValue, IMethodResult^ oResult)
{
    ((COidcNativeImpl*)getCppImpl())->setProperty(rho::common::convertStringAFromWP8(propertyName), rho::common::convertStringAFromWP8(propertyValue), *(CMethodResult*)(oResult->getNative()));
}

void OidcNativeRuntimeComponent::setProperties(Windows::Foundation::Collections::IMapView<Platform::String^, Platform::String^>^ propertyMap, IMethodResult^ oResult)
{
    ((COidcNativeImpl*)getCppImpl())->setProperties(rho::common::convertHashFromWP8(propertyMap), *(CMethodResult*)(oResult->getNative()));
}

void OidcNativeFactoryComponent::setImpl(IOidcNativeFactoryImpl^ impl)
{
    COidcNativeFactory::setImpl(impl);
}

}