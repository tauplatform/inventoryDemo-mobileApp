//
//  OidcNativeImpl.cpp
#include "common/RhoStd.h"
#include "common/AutoPointer.h"
#include "common/RhodesApp.h"
#include "common/RhoConf.h"
#include "generated/cpp/OidcNativeBase.h"
#include "logging/RhoLog.h"

namespace rho {
    
    using namespace apiGenerator;
    using namespace common;
    
    class COidcNativeSingletonImpl: public COidcNativeSingletonBase
    {
    public:
        
        COidcNativeSingletonImpl(): COidcNativeSingletonBase(){}
        
        //methods
        // enumerate  
        virtual void enumerate(rho::apiGenerator::CMethodResult& oResult) {
            // RAWLOGC_INFO("enumerate","OidcNative");
            
        } 

    };
    
    class COidcNativeImpl : public COidcNativeBase
    {
    public:
        virtual ~COidcNativeImpl() {}

        //methods

        virtual void getSimpleStringProperty(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setSimpleStringProperty( const rho::String& simpleStringProperty, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getPlatformName(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void calcSumm( int a,  int b, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void joinStrings( const rho::String& a,  const rho::String& b, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getProperty( const rho::String& propertyName, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getProperties( const rho::Vector<rho::String>& arrayofNames, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void getAllProperties(rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setProperty( const rho::String& propertyName,  const rho::String& propertyValue, rho::apiGenerator::CMethodResult& oResult) {

        } 

        virtual void setProperties( const rho::Hashtable<rho::String, rho::String>& propertyMap, rho::apiGenerator::CMethodResult& oResult) {

        } 

    };
    
    ////////////////////////////////////////////////////////////////////////
    
    class COidcNativeFactory: public COidcNativeFactoryBase    {
    public:
        COidcNativeFactory(){}
        
        IOidcNativeSingleton* createModuleSingleton()
        { 
            return new COidcNativeSingletonImpl();
        }
        
        virtual IOidcNative* createModuleByID(const rho::String& strID){ return new COidcNativeImpl(); };
        
    };
    
}

extern "C" void Init_OidcNative_extension()
{
    rho::COidcNativeFactory::setInstance( new rho::COidcNativeFactory() );
    rho::Init_OidcNative_API();
    
}