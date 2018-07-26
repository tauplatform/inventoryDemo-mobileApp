package com.rho.barcodechainway;

public class BarcodeChainwayFactorySingleton {
    private static IBarcodeChainwayFactory mFactory;
    public static void setInstance(IBarcodeChainwayFactory factory) {
        mFactory = factory;
    }
    public static IBarcodeChainwayFactory getInstance() {
        return mFactory;
    }
}
