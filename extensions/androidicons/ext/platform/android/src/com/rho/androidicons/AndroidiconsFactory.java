package com.rho.androidicons;

import com.rhomobile.rhodes.api.RhoApiFactory;

public class AndroidiconsFactory
        extends RhoApiFactory< Androidicons, AndroidiconsSingleton>
        implements IAndroidiconsFactory {

    @Override
    protected AndroidiconsSingleton createSingleton() {
        return new AndroidiconsSingleton(this);
    }

    @Override
    protected Androidicons createApiObject(String id) {
        return new Androidicons(id);
    }
}
