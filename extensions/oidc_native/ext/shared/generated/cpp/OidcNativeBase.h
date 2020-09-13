#pragma once

#include "IOidcNative.h"
#include "logging/RhoLog.h"
#include "common/StringConverter.h"
#include "common/ExtManager.h"


namespace rho {

using namespace rho::apiGenerator;
using namespace rho;

// hash keys used in properties and parameters 
namespace oidcnative {

    static const char PROPERTY_SIMPLE_STRING_PROPERTY[] = "simpleStringProperty"; 
 
} 

class COidcNativeFactoryBase : public CModuleFactoryBase<IOidcNative, IOidcNativeSingleton, IOidcNativeFactory>
{
protected:
    static rho::common::CAutoPtr<COidcNativeFactoryBase> m_pInstance;
    HashtablePtr<rho::String,IOidcNative*> m_hashModules;

public:

    static void setInstance(COidcNativeFactoryBase* pInstance){ m_pInstance = pInstance; }
    static COidcNativeFactoryBase* getInstance(){ return m_pInstance; }

    static IOidcNativeSingleton* getOidcNativeSingletonS(){ return getInstance()->getModuleSingleton(); }

    virtual IOidcNative* getModuleByID(const rho::String& strID)
    {
        if ( !m_hashModules.containsKey(strID) )
        {
            IOidcNative* pObj = createModuleByID(strID);
            m_hashModules.put(strID, pObj );

            return pObj;
        }

        return m_hashModules[strID];
    }

    virtual IOidcNative* createModuleByID(const rho::String& strID){ return (IOidcNative*)0; };
    virtual void deleteModuleByID(const rho::String& strID)
    {
        m_hashModules.remove(strID);
    }

};

class COidcNativeSingletonBase : public CModuleSingletonBase< IOidcNativeSingleton >, public rho::common::IRhoExtension
{
protected:
    DEFINE_LOGCLASS;


    rho::String m_strDefaultID;




public:
    virtual rho::LogCategory getModuleLogCategory(){ return getLogCategory(); }

    COidcNativeSingletonBase();
    ~COidcNativeSingletonBase();




    virtual void setDefaultID(const rho::String& strDefaultID){ m_strDefaultID = strDefaultID; }
    virtual rho::String getDefaultID()
    { 
        if ( m_strDefaultID.length() == 0 )
            setDefaultID(getInitialDefaultID());
        return m_strDefaultID; 
    }

};

class COidcNativeBase: public IOidcNative
{
protected:
    DEFINE_LOGCLASS;


    rho::Hashtable<rho::String, rho::String> m_hashProps;
    rho::Hashtable<rho::String, rho::apiGenerator::CMethodAccessor< IOidcNative > *> m_mapPropAccessors;

public:


    COidcNativeBase();

    virtual void getProperty( const rho::String& propertyName, CMethodResult& oResult);
    virtual void getProperties( const rho::Vector<rho::String>& arrayofNames, CMethodResult& oResult);
    virtual void getAllProperties(CMethodResult& oResult);
    virtual void setProperty( const rho::String& propertyName,  const rho::String& propertyValue, CMethodResult& oResult);
    virtual void setProperties( const rho::Hashtable<rho::String, rho::String>& propertyMap, CMethodResult& oResult);
    virtual void clearAllProperties(CMethodResult& oResult);


    virtual void getSimpleStringProperty(rho::apiGenerator::CMethodResult& oResult);

    virtual void setSimpleStringProperty( const rho::String& simpleStringProperty, rho::apiGenerator::CMethodResult& oResult);


    static COidcNativeBase* getInstance(){ return static_cast< COidcNativeBase* >(COidcNativeFactoryBase::getInstance()->getModuleByID(COidcNativeFactoryBase::getOidcNativeSingletonS()->getDefaultID())); }
 

};

extern "C" void Init_OidcNative_API();


}
