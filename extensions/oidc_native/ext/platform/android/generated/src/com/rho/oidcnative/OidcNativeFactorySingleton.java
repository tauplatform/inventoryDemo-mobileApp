package com.rho.oidcnative;

public class OidcNativeFactorySingleton {
    private static IOidcNativeFactory mFactory;
    public static void setInstance(IOidcNativeFactory factory) {
        mFactory = factory;
    }
    public static IOidcNativeFactory getInstance() {
        return mFactory;
    }
}
