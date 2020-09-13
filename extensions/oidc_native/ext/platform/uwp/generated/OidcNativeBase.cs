using System;
using System.Collections.Generic;
using System.Net;
using Windows.UI.Core;
using System.Threading.Tasks;
using rhoruntime;
using rhodes;

namespace rho {

namespace OidcNativeImpl
{
    abstract public class OidcNativeBase : IOidcNativeImpl
    {
        protected string _strID = "1";
        protected long _nativeImpl = 0;
        protected CoreDispatcher dispatcher = null;
        protected OidcNativeRuntimeComponent _runtime;

        public OidcNativeBase(string id)
        {
            _strID = id;
            _runtime = new OidcNativeRuntimeComponent(this);
            try{dispatcher = MainPage.getDispatcher();
            }catch(Exception e){deb("Can't get access to dispatcher");}
        }

        public static void deb(String s, [System.Runtime.CompilerServices.CallerMemberName] string memberName = "")
        {
            if (memberName.Length != 0) {memberName = memberName + " : ";}
            System.Diagnostics.Debug.WriteLine(memberName + s);
        }

        public long getNativeImpl()
        {
            return _nativeImpl;
        }

        public virtual void setNativeImpl(string strID, long native)
        {
            _strID = strID;
            _nativeImpl = native;
        }

        public void dispatchInvoke(Action a)
        {
            if (dispatcher != null) {
              var ignore = dispatcher.RunAsync(CoreDispatcherPriority.Normal, () =>
              {try{a();} catch (Exception ex) {System.Diagnostics.Debug.WriteLine("Invoke in UI Thread exception");} });
            }else{a();}
        }

        public void getProperty(string propertyName, IMethodResult oResult)
        {
            _runtime.getProperty(propertyName, oResult);
        }

        public void getProperties(IReadOnlyList<string> arrayofNames, IMethodResult oResult)
        {
            _runtime.getProperties(arrayofNames, oResult);
        }

        public void getAllProperties(IMethodResult oResult)
        {
            _runtime.getAllProperties(oResult);
        }

        public void setProperty(string propertyName, string propertyValue, IMethodResult oResult)
        {
            _runtime.setProperty(propertyName, propertyValue, oResult);
        }

        public void setProperties(IReadOnlyDictionary<string, string> propertyMap, IMethodResult oResult)
        {
            _runtime.setProperties(propertyMap, oResult);
        }

        abstract public void getSimpleStringProperty(IMethodResult oResult);
        abstract public void setSimpleStringProperty(string simpleStringProperty, IMethodResult oResult);
        abstract public void getPlatformName(IMethodResult oResult);
        abstract public void calcSumm(int a, int b, IMethodResult oResult);
        abstract public void joinStrings(string a, string b, IMethodResult oResult);
    }

    abstract public class OidcNativeSingletonBase : IOidcNativeSingletonImpl
    {

        protected SortedDictionary<string, OidcNativeBase> keeper = new SortedDictionary<string, OidcNativeBase>();

        public IOidcNativeImpl getOidcNativeByID(string id)
        {
            if (keeper.ContainsKey(id))
            {
                return keeper[id];
            }
            else
            {
                OidcNativeBase impl = new OidcNative(id);
                keeper.Add(id, impl);
                return impl;
            }
        }

        protected OidcNativeSingletonComponent _runtime;

        public OidcNativeSingletonBase()
        {
              try{dispatcher = MainPage.getDispatcher();
              }catch(Exception e){deb("Can't get access to dispatcher");}
              _runtime = new OidcNativeSingletonComponent(this);
        }

        public static void deb(String s, [System.Runtime.CompilerServices.CallerMemberName] string memberName = "")
        {
            if (memberName.Length != 0) {memberName = memberName + " : ";}
            System.Diagnostics.Debug.WriteLine(memberName + s);
        }

        public void dispatchInvoke(Action a)
        {
            if (dispatcher != null) {
              var ignore = dispatcher.RunAsync(CoreDispatcherPriority.Normal, () =>
              {try{a();} catch (Exception ex) {System.Diagnostics.Debug.WriteLine("Invoke in UI Thread exception");} });
            }else{a();}
        }
        protected CoreDispatcher dispatcher = null;


        abstract public void enumerate(IMethodResult oResult);
    }

    public class OidcNativeFactoryBase : IOidcNativeFactoryImpl
    {
        protected static OidcNativeSingleton instance = null;
        public virtual IOidcNativeImpl getImpl(string id) {
            getSingletonImpl();
            return instance.getOidcNativeByID(id);
        }
        public IOidcNativeSingletonImpl getSingletonImpl() {
            if (instance == null){instance = new OidcNativeSingleton();}
            return instance;
          
        }
    }
}

}
