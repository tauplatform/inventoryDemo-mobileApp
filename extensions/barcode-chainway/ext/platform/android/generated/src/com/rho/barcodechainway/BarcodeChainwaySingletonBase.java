package com.rho.barcodechainway;

import java.util.List;
import java.util.Map;

import com.rhomobile.rhodes.api.IMethodResult;

import com.rhomobile.rhodes.api.RhoApiDefaultId;

public abstract class BarcodeChainwaySingletonBase 
    extends RhoApiDefaultId<IBarcodeChainway, IBarcodeChainwayFactory>  {

    public BarcodeChainwaySingletonBase(IBarcodeChainwayFactory factory) {
        super(factory);
    } 

    public static class enumerateTask implements Runnable {
        private IBarcodeChainwaySingleton mApiSingleton; 
        private IMethodResult mResult;

        public enumerateTask(IBarcodeChainwaySingleton obj,         
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
