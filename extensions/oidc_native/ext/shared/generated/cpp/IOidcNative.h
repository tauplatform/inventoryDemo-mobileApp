#pragma once

#include "common/RhoStd.h"
#include "api_generator/MethodResult.h"
#include "api_generator/BaseClasses.h"


namespace rho {
///////////////////////////////////////////////////////////



struct IOidcNative
{
//constants


//methods
    virtual ~IOidcNative(){}

    virtual void getSimpleStringProperty(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setSimpleStringProperty( const rho::String& simpleStringProperty, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getPlatformName(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void calcSumm( int a,  int b, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void joinStrings( const rho::String& a,  const rho::String& b, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getProperty( const rho::String& propertyName, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getProperties( const rho::Vector<rho::String>& arrayofNames, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void getAllProperties(rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setProperty( const rho::String& propertyName,  const rho::String& propertyValue, rho::apiGenerator::CMethodResult& oResult) = 0;
    virtual void setProperties( const rho::Hashtable<rho::String, rho::String>& propertyMap, rho::apiGenerator::CMethodResult& oResult) = 0;

};

struct IOidcNativeSingleton
{
//constants


    virtual ~IOidcNativeSingleton(){}

//methods
    virtual void enumerate(rho::apiGenerator::CMethodResult& oResult) = 0;


    virtual rho::String getDefaultID() = 0;
    virtual rho::String getInitialDefaultID() = 0;
    virtual void setDefaultID(const rho::String& strID) = 0;

    virtual void addCommandToQueue(rho::common::CInstanceClassFunctorBase<rho::apiGenerator::CMethodResult>* pFunctor) = 0;
    virtual void callCommandInThread(rho::common::IRhoRunnable* pFunctor) = 0;
};

struct IOidcNativeFactory
{
    virtual ~IOidcNativeFactory(){}

    virtual IOidcNativeSingleton* getModuleSingleton() = 0;


    virtual IOidcNative* getModuleByID(const rho::String& strID) = 0;

};


}
