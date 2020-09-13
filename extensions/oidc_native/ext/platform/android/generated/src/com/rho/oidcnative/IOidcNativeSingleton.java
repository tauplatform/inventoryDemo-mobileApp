package com.rho.oidcnative;



import java.util.Map;
import java.util.List;

import com.rhomobile.rhodes.api.IMethodResult;

import com.rhomobile.rhodes.api.IRhoApiDefaultId;


public interface IOidcNativeSingleton
       extends IRhoApiDefaultId  {



  // hash keys used in properties and parameters

    static final String PROPERTY_SIMPLE_STRING_PROPERTY = "simpleStringProperty"; 


    void enumerate(IMethodResult result); 

}
