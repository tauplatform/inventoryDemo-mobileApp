using System;
using System.Collections.Generic;
using System.Net;
using Windows.UI.Core;
using System.Threading.Tasks;
using rhoruntime;

namespace rho {

namespace OidcNativeImpl
{
    public class OidcNative : OidcNativeBase
    {
        public OidcNative(string id) : base(id)
        {
            // initialize class instance in C# here
        }

        public override void getSimpleStringProperty(IMethodResult oResult)
        {
            // implement this method in C# here
        }

        public override void setSimpleStringProperty(string simpleStringProperty, IMethodResult oResult)
        {
            // implement this method in C# here
        }

        public override void getPlatformName(IMethodResult oResult)
        {
            // implement this method in C# here
        }

        public override void calcSumm(int a, int b, IMethodResult oResult)
        {
            // implement this method in C# here
        }

        public override void joinStrings(string a, string b, IMethodResult oResult)
        {
            // implement this method in C# here
        }
    }

    public class OidcNativeSingleton : OidcNativeSingletonBase
    {
        public OidcNativeSingleton()
        {
            // initialize singleton instance in C# here
        }

        public override void enumerate(IMethodResult oResult)
        {
            // implement this method in C# here
        }
    }

    public class OidcNativeFactory : OidcNativeFactoryBase
    {
    }
}

}
