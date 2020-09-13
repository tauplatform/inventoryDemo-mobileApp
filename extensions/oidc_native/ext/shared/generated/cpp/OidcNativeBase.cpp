#include "OidcNativeBase.h"
#include "common/RhodesApp.h"


namespace rho {

IMPLEMENT_LOGCLASS(COidcNativeSingletonBase, "OidcNative");
IMPLEMENT_LOGCLASS(COidcNativeBase, "OidcNative");

rho::common::CAutoPtr< COidcNativeFactoryBase> COidcNativeFactoryBase::m_pInstance;



///////////////////////////////////////
//string constants definiton 

////////////////////////////////////////////////

COidcNativeBase::COidcNativeBase()
{

    m_mapPropAccessors["simpleStringProperty"] = 0;


}

void COidcNativeBase::getProperty( const rho::String& propertyName, CMethodResult& oResult)
{

    oResult.resetToEmptyString();
    CMethodAccessor< IOidcNative >* pAccessor = m_mapPropAccessors[propertyName];
    if ( pAccessor )
        pAccessor->callGetter(this, oResult);
    else
    {

        oResult.set(m_hashProps[propertyName]);

    }
}

void COidcNativeBase::getProperties( const rho::Vector<rho::String>& arrayofNames, CMethodResult& oResult)
{
    rho::Hashtable<rho::String, rho::String> res;
    oResult.setCollectionMode(true);
    for ( int i = 0; i < (int)arrayofNames.size(); i++ )
    {
        getProperty(arrayofNames[i], oResult);

        if ( !oResult.isError() )
        {
            res[arrayofNames[i]] = oResult.toString();
        }
    }
    oResult.setCollectionMode(false);

    oResult.set(res);
}

void COidcNativeBase::getAllProperties(CMethodResult& oResult)
{
    rho::Hashtable<rho::String, rho::String> res;
    oResult.setCollectionMode(true);

    
    // user defined properties
    for ( rho::Hashtable<rho::String, rho::String>::const_iterator it = m_hashProps.begin();  it != m_hashProps.end(); ++it )
    {
        res[it->first] = it->second;
    }
    

    // existing properties
    for ( rho::Hashtable<rho::String, rho::apiGenerator::CMethodAccessor< IOidcNative > *>::const_iterator it = m_mapPropAccessors.begin();  it != m_mapPropAccessors.end(); ++it )
    {
        getProperty(it->first, oResult);
        
        if ( oResult.isError() )
            break;
        
        res[it->first] = oResult.toString();
    }
    
    oResult.setCollectionMode(false);
    if ( oResult.isError() )
        oResult.callCallback();
    else
        oResult.set(res);
}

void COidcNativeBase::setProperty( const rho::String& propertyName,  const rho::String& propertyValue, CMethodResult& oResult)
{
    CMethodAccessor< IOidcNative >* pAccessor = m_mapPropAccessors[propertyName];
    if (pAccessor && pAccessor->hasSetter())
        m_mapPropAccessors[propertyName]->callSetter(this, propertyValue, oResult);
    else
    {
        

        m_hashProps.put(propertyName, propertyValue);
    }
}

void COidcNativeBase::setProperties( const rho::Hashtable<rho::String, rho::String>& propertyMap, CMethodResult& oResult)
{
    for ( rho::Hashtable<rho::String, rho::String>::const_iterator it = propertyMap.begin();  it != propertyMap.end(); ++it )
    {
        setProperty( it->first, it->second, oResult );
        if ( oResult.isError() )
            break;
    }
}

void COidcNativeBase::clearAllProperties(CMethodResult& oResult)
{
    m_hashProps.clear();
    // ToDo: set default values to existing properties 
}



void COidcNativeBase::getSimpleStringProperty(rho::apiGenerator::CMethodResult& oResult)
{ 
    getProperty( "simpleStringProperty", oResult); 
}

void COidcNativeBase::setSimpleStringProperty( const rho::String& simpleStringProperty, rho::apiGenerator::CMethodResult& oResult)
{ 
    setProperty( "simpleStringProperty", rho::common::convertToStringA(simpleStringProperty), oResult );
}
COidcNativeSingletonBase::COidcNativeSingletonBase()
{
    RHODESAPP().getExtManager().registerExtension( "OidcNative", this );
}

COidcNativeSingletonBase::~COidcNativeSingletonBase()
{
    COidcNativeFactoryBase::setInstance(0);
}


}
