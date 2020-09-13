package com.rho.oidcnative;

import com.rhomobile.rhodes.api.IRhoApiFactory;
import com.rhomobile.rhodes.api.IRhoApiSingletonFactory;

public interface IOidcNativeFactory
    extends IRhoApiFactory<IOidcNative>,
            IRhoApiSingletonFactory<IOidcNativeSingleton> {

    @Override
    IOidcNativeSingleton getApiSingleton();

    @Override
    IOidcNative getApiObject(String id);

}
