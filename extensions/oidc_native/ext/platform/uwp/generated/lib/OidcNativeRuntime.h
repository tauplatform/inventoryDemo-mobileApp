#pragma once

#include "../../../../shared/generated/cpp/IOidcNative.h"
#include "api_generator/uwp/IMethodResult.h"

namespace rhoruntime
{
    public interface class IOidcNativeImpl
    {
    public:
        int64 getNativeImpl();
        void setNativeImpl(Platform::String^ strID, int64 native);


        void getSimpleStringProperty(IMethodResult^ oResult);
        void setSimpleStringProperty(Platform::String^ simpleStringProperty, IMethodResult^ oResult);
        void getPlatformName(IMethodResult^ oResult);
        void calcSumm(int a, int b, IMethodResult^ oResult);
        void joinStrings(Platform::String^ a, Platform::String^ b, IMethodResult^ oResult);
        void getProperty(Platform::String^ propertyName, IMethodResult^ oResult);
        void getProperties(Windows::Foundation::Collections::IVectorView<Platform::String^>^ arrayofNames, IMethodResult^ oResult);
        void getAllProperties(IMethodResult^ oResult);
        void setProperty(Platform::String^ propertyName, Platform::String^ propertyValue, IMethodResult^ oResult);
        void setProperties(Windows::Foundation::Collections::IMapView<Platform::String^, Platform::String^>^ propertyMap, IMethodResult^ oResult);
    };

    public interface class IOidcNativeSingletonImpl
    {
    public:
        void enumerate(IMethodResult^ oResult);
    };
    public interface class IOidcNativeFactoryImpl
    {
    public:
        IOidcNativeImpl^ getImpl(Platform::String^ id);
        IOidcNativeSingletonImpl^ getSingletonImpl();
    };

    public ref class OidcNativeRuntimeComponent sealed
    {
    public:
        OidcNativeRuntimeComponent(IOidcNativeImpl^ impl);
        void getProperty(Platform::String^ propertyName, IMethodResult^ oResult);
        void getProperties(Windows::Foundation::Collections::IVectorView<Platform::String^>^ arrayofNames, IMethodResult^ oResult);
        void getAllProperties(IMethodResult^ oResult);
        void setProperty(Platform::String^ propertyName, Platform::String^ propertyValue, IMethodResult^ oResult);
        void setProperties(Windows::Foundation::Collections::IMapView<Platform::String^, Platform::String^>^ propertyMap, IMethodResult^ oResult);
    private:
        IOidcNativeImpl^ _impl;
        int64 _cppImpl;
        int64 getCppImpl();
    };

    public ref class OidcNativeSingletonComponent sealed: public IOidcNativeSingletonImpl
    {
    public:
        OidcNativeSingletonComponent(IOidcNativeSingletonImpl^ impl);
        virtual void enumerate(IMethodResult^ oResult);
    private:
        IOidcNativeSingletonImpl^ _impl;
    };

    public ref class OidcNativeFactoryComponent sealed
    {
    public:
        static void setImpl(IOidcNativeFactoryImpl^ impl);
    };
}
