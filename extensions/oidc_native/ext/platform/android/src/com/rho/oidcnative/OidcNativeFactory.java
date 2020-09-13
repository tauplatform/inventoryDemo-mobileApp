package com.rho.oidcnative;

import com.rhomobile.rhodes.api.RhoApiFactory;

public class OidcNativeFactory
        extends RhoApiFactory< OidcNative, OidcNativeSingleton>
        implements IOidcNativeFactory {

    @Override
    protected OidcNativeSingleton createSingleton() {
        return new OidcNativeSingleton(this);
    }

    @Override
    protected OidcNative createApiObject(String id) {
        return new OidcNative(id);
    }
}
