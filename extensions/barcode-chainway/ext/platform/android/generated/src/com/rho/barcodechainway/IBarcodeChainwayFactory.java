package com.rho.barcodechainway;

import com.rhomobile.rhodes.api.IRhoApiFactory;
import com.rhomobile.rhodes.api.IRhoApiSingletonFactory;

public interface IBarcodeChainwayFactory
    extends IRhoApiFactory<IBarcodeChainway>,
            IRhoApiSingletonFactory<IBarcodeChainwaySingleton> {

    @Override
    IBarcodeChainwaySingleton getApiSingleton();

    @Override
    IBarcodeChainway getApiObject(String id);

}
