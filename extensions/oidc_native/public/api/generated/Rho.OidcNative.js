
(function ($, rho, rhoUtil) {
    'use strict';

    var moduleNS = 'Rho.OidcNative';
    var apiReq = rhoUtil.apiReqFor(moduleNS);


    // === OidcNative class definition ===

    function OidcNative() {
        var id = null;
        this.getId = function () {return id;};

        if (1 == arguments.length && arguments[0][rhoUtil.rhoIdParam()]) {
            if (moduleNS != arguments[0][rhoUtil.rhoClassParam()]) {
                throw "Wrong class instantiation!";
            }
            id = arguments[0][rhoUtil.rhoIdParam()];
        } else {
            id = rhoUtil.nextId();
            // constructor methods are following:
            
        }
    };

    // === OidcNative instance properties ===

    rhoUtil.createPropsProxy(OidcNative.prototype, [
        { propName: 'simpleStringProperty', propAccess: 'rw' }
    ], apiReq, function(){ return this.getId(); });

    // === OidcNative instance methods ===

    rhoUtil.createMethodsProxy(OidcNative.prototype, [
    
          // function(/* optional function */ oResult)
          { methodName: 'getPlatformName', nativeName: 'getPlatformName', valueCallbackIndex: 0 }
    
          // function(/* int */ a, /* int */ b, /* optional function */ oResult)
        , { methodName: 'calcSumm', nativeName: 'calcSumm', valueCallbackIndex: 2 }
    
          // function(/* const rho::String& */ a, /* const rho::String& */ b, /* optional function */ oResult)
        , { methodName: 'joinStrings', nativeName: 'joinStrings', valueCallbackIndex: 2 }
    
          // function(/* const rho::String& */ propertyName, /* optional function */ oResult)
        , { methodName: 'getProperty', nativeName: 'getProperty', persistentCallbackIndex: 1, valueCallbackIndex: 3 }
    
          // function(/* const rho::Vector<rho::String>& */ arrayofNames, /* optional function */ oResult)
        , { methodName: 'getProperties', nativeName: 'getProperties', persistentCallbackIndex: 1, valueCallbackIndex: 3 }
    
          // function(/* optional function */ oResult)
        , { methodName: 'getAllProperties', nativeName: 'getAllProperties', persistentCallbackIndex: 0, valueCallbackIndex: 2 }
    
          // function(/* const rho::String& */ propertyName, /* const rho::String& */ propertyValue, /* optional function */ oResult)
        , { methodName: 'setProperty', nativeName: 'setProperty', valueCallbackIndex: 2 }
    
          // function(/* const rho::Hashtable<rho::String, rho::String>& */ propertyMap, /* optional function */ oResult)
        , { methodName: 'setProperties', nativeName: 'setProperties', valueCallbackIndex: 1 }
    
    ], apiReq, function(){ return this.getId(); });

    

    rhoUtil.createRawPropsProxy(OidcNative.prototype, [
    ]);

    // === OidcNative constants ===

    



    // === OidcNative static properties ===

    rhoUtil.createPropsProxy(OidcNative, [
    ], apiReq);

    // === OidcNative static methods ===

    rhoUtil.createMethodsProxy(OidcNative, [
    
          // function(/* optional function */ oResult)
          { methodName: 'enumerate', nativeName: 'enumerate', persistentCallbackIndex: 0, valueCallbackIndex: 2 }
    
    ], apiReq);

    // === OidcNative default instance support ===
    

        rhoUtil.createPropsProxy(OidcNative, [
            { propName: 'defaultInstance:getDefault:setDefault', propAccess: 'rw', customSet: function(obj) { if(!obj || 'function' != typeof obj.getId){ throw 'Default object should provide getId method!' }; OidcNative.setDefaultID(obj.getId()); } }
          , { propName: 'defaultID:getDefaultID:setDefaultID', propAccess: 'rw' }
        ], apiReq);

        OidcNative.getId = function() {
            return OidcNative.getDefaultID();
        }

        // === OidcNative default instance properties ===

        rhoUtil.createPropsProxy(OidcNative, [
            { propName: 'simpleStringProperty', propAccess: 'rw' }
        ], apiReq, function(){ return this.getId(); });

        // === OidcNative default instance methods ===

        rhoUtil.createMethodsProxy(OidcNative, [
        
              // function(/* optional function */ oResult)
              { methodName: 'getPlatformName', nativeName: 'getPlatformName', valueCallbackIndex: 0 }
        
              // function(/* int */ a, /* int */ b, /* optional function */ oResult)
            , { methodName: 'calcSumm', nativeName: 'calcSumm', valueCallbackIndex: 2 }
        
              // function(/* const rho::String& */ a, /* const rho::String& */ b, /* optional function */ oResult)
            , { methodName: 'joinStrings', nativeName: 'joinStrings', valueCallbackIndex: 2 }
        
              // function(/* const rho::String& */ propertyName, /* optional function */ oResult)
            , { methodName: 'getProperty', nativeName: 'getProperty', persistentCallbackIndex: 1, valueCallbackIndex: 3 }
        
              // function(/* const rho::Vector<rho::String>& */ arrayofNames, /* optional function */ oResult)
            , { methodName: 'getProperties', nativeName: 'getProperties', persistentCallbackIndex: 1, valueCallbackIndex: 3 }
        
              // function(/* optional function */ oResult)
            , { methodName: 'getAllProperties', nativeName: 'getAllProperties', persistentCallbackIndex: 0, valueCallbackIndex: 2 }
        
              // function(/* const rho::String& */ propertyName, /* const rho::String& */ propertyValue, /* optional function */ oResult)
            , { methodName: 'setProperty', nativeName: 'setProperty', valueCallbackIndex: 2 }
        
              // function(/* const rho::Hashtable<rho::String, rho::String>& */ propertyMap, /* optional function */ oResult)
            , { methodName: 'setProperties', nativeName: 'setProperties', valueCallbackIndex: 1 }
        
        ], apiReq, function(){ return this.getId(); });

        // will reuse already defined methods
        rhoUtil.createRawPropsProxy(OidcNative, [
        ]);

    

    rhoUtil.namespace(moduleNS, OidcNative);

    

    

})(Rho.jQuery, Rho, Rho.util);
