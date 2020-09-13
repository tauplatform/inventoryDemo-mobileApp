package com.rho.oidcnative;

import java.util.List;
import java.util.Map;

import com.rhomobile.rhodes.api.IMethodResult;

import com.rhomobile.rhodes.api.RhoApiDefaultId;

public abstract class OidcNativeSingletonBase 
    extends RhoApiDefaultId<IOidcNative, IOidcNativeFactory>  {

    public OidcNativeSingletonBase(IOidcNativeFactory factory) {
        super(factory);
    } 

    public static class enumerateTask implements Runnable {
        private IOidcNativeSingleton mApiSingleton; 
        private IMethodResult mResult;

        public enumerateTask(IOidcNativeSingleton obj,         
                IMethodResult result) {
            this.mApiSingleton = obj;         
            this.mResult = result;
        }

        @Override
        public void run() {
            try {
                mApiSingleton.enumerate( mResult);
            } catch (Throwable ex) {
                mResult.set(ex);
            }
        }
    }

    
}
