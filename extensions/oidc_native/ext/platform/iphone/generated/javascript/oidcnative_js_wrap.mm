
#import "IOidcNative.h"
//#import "api_generator/common/ruby_helpers.h"

#include "api_generator/js_helpers.h"

#import "api_generator/iphone/CMethodResult.h"
#import "api_generator/iphone/CJSConverter.h"

extern VALUE getRuby_OidcNative_Module();



id<IOidcNative> OidcNative_makeInstanceByJSObject(rho::String sid) {
    const char* szID = sid.c_str();
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    return [factory getOidcNativeByID:[NSString stringWithUTF8String:szID]];
}









@interface OidcNative_getSimpleStringProperty_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(OidcNative_getSimpleStringProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation OidcNative_getSimpleStringProperty_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(OidcNative_getSimpleStringProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    OidcNative_getSimpleStringProperty_caller_params* par = [[[OidcNative_getSimpleStringProperty_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface OidcNative_getSimpleStringProperty_caller : NSObject {

}
+(OidcNative_getSimpleStringProperty_caller*) getSharedInstance;
+(void) getSimpleStringProperty:(OidcNative_getSimpleStringProperty_caller_params*)caller_params;
+(void) getSimpleStringProperty_in_thread:(OidcNative_getSimpleStringProperty_caller_params*)caller_params;
+(void) getSimpleStringProperty_in_UI_thread:(OidcNative_getSimpleStringProperty_caller_params*)caller_params;

@end

static OidcNative_getSimpleStringProperty_caller* our_OidcNative_getSimpleStringProperty_caller = nil;

@implementation OidcNative_getSimpleStringProperty_caller

+(OidcNative_getSimpleStringProperty_caller*) getSharedInstance {
    if (our_OidcNative_getSimpleStringProperty_caller == nil) {
        our_OidcNative_getSimpleStringProperty_caller = [[OidcNative_getSimpleStringProperty_caller alloc] init];
    }
    return our_OidcNative_getSimpleStringProperty_caller;
}

-(void) command_getSimpleStringProperty:(OidcNative_getSimpleStringProperty_caller_params*)caller_params {

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem getSimpleStringProperty:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}


+(void) getSimpleStringProperty:(OidcNative_getSimpleStringProperty_caller_params*)caller_params {
    [[OidcNative_getSimpleStringProperty_caller getSharedInstance] command_getSimpleStringProperty:caller_params];
}

+(void) getSimpleStringProperty_in_thread:(OidcNative_getSimpleStringProperty_caller_params*)caller_params {
    [[OidcNative_getSimpleStringProperty_caller getSharedInstance] performSelectorInBackground:@selector(command_getSimpleStringProperty:) withObject:caller_params];
}

+(void) getSimpleStringProperty_in_UI_thread:(OidcNative_getSimpleStringProperty_caller_params*)caller_params {
    [[OidcNative_getSimpleStringProperty_caller getSharedInstance] performSelectorOnMainThread:@selector(command_getSimpleStringProperty:) withObject:caller_params waitUntilDone:NO];
}


@end


rho::String js_OidcNative_getSimpleStringProperty_Obj(rho::json::CJSONArray& argv, id<IOidcNative>objItem, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[0+1];
    BOOL method_return_result = YES;
    BOOL method_receive_callback = NO;
    int argc = argv.getSize();


    [methodResult setMethodSignature:@"OidcNative::simpleStringProperty"];

    
    static RHO_API_PARAM rho_api_params[] = {  };

    
    BOOL is_factory_param[] = { NO };

    int i;

    // init
    for (i = 0; i < (0); i++) {
        params[i] = [CJSConverter getObjectiveCNULL];
    }

    

    // enumerate params
    for (int i = 0; i < (0); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByJSObject(argv.getItem(i).getString());
            }
            else {
                rho::json::CJSONEntry entry = argv.getItem(i);
                params[i] = [[CJSConverter convertFromJS:&entry rho_api_param:&(rho_api_params[i])] retain];
            }
            // TODO: Handle CMethodResultError
            if (params[i] == nil) {
                //NSLog(@"OidcNative::getSimpleStringProperty parameter %d is nil!", i);
                rho::String resValue = rho::String("\"result\":null,\"error\":\"Method parameter is nil!\"");
                return resValue;
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(0)];
    for (i = 0 ; i < (0); i++) {
        [params_array addObject:params[i]];
    }

    
        if (strCallbackID.size() > 0) {
            method_receive_callback = YES;
        }
    

    

    if (method_receive_callback) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        [methodResult setJSCallback:[NSString stringWithUTF8String:strCallbackID.c_str()] webViewUID:[NSString stringWithUTF8String:strJsVmID.c_str()]];
        [methodResult setCallbackParam:[NSString stringWithUTF8String:strCallbackParam.c_str()]];
        
        [OidcNative_getSimpleStringProperty_caller getSimpleStringProperty_in_thread:[OidcNative_getSimpleStringProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [OidcNative_getSimpleStringProperty_caller getSimpleStringProperty:[OidcNative_getSimpleStringProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    rho::String resValue = rho::String("\"result\":null");
    if ((!method_receive_callback) && (method_return_result)) {
        resValue = [[methodResult toJSON] UTF8String];
    }
    [methodResult release];
    return resValue;
}


rho::String js_OidcNative_getSimpleStringProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    id<IOidcNative> item = OidcNative_makeInstanceByJSObject(strObjID);
    return js_OidcNative_getSimpleStringProperty_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);

}

rho::String js_s_OidcNative_def_getSimpleStringProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return js_OidcNative_getSimpleStringProperty_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);
}







@interface OidcNative_setSimpleStringProperty_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(OidcNative_setSimpleStringProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation OidcNative_setSimpleStringProperty_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(OidcNative_setSimpleStringProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    OidcNative_setSimpleStringProperty_caller_params* par = [[[OidcNative_setSimpleStringProperty_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface OidcNative_setSimpleStringProperty_caller : NSObject {

}
+(OidcNative_setSimpleStringProperty_caller*) getSharedInstance;
+(void) setSimpleStringProperty:(OidcNative_setSimpleStringProperty_caller_params*)caller_params;
+(void) setSimpleStringProperty_in_thread:(OidcNative_setSimpleStringProperty_caller_params*)caller_params;
+(void) setSimpleStringProperty_in_UI_thread:(OidcNative_setSimpleStringProperty_caller_params*)caller_params;

@end

static OidcNative_setSimpleStringProperty_caller* our_OidcNative_setSimpleStringProperty_caller = nil;

@implementation OidcNative_setSimpleStringProperty_caller

+(OidcNative_setSimpleStringProperty_caller*) getSharedInstance {
    if (our_OidcNative_setSimpleStringProperty_caller == nil) {
        our_OidcNative_setSimpleStringProperty_caller = [[OidcNative_setSimpleStringProperty_caller alloc] init];
    }
    return our_OidcNative_setSimpleStringProperty_caller;
}

-(void) command_setSimpleStringProperty:(OidcNative_setSimpleStringProperty_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem setSimpleStringProperty:(NSString*)[params objectAtIndex:0] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}


+(void) setSimpleStringProperty:(OidcNative_setSimpleStringProperty_caller_params*)caller_params {
    [[OidcNative_setSimpleStringProperty_caller getSharedInstance] command_setSimpleStringProperty:caller_params];
}

+(void) setSimpleStringProperty_in_thread:(OidcNative_setSimpleStringProperty_caller_params*)caller_params {
    [[OidcNative_setSimpleStringProperty_caller getSharedInstance] performSelectorInBackground:@selector(command_setSimpleStringProperty:) withObject:caller_params];
}

+(void) setSimpleStringProperty_in_UI_thread:(OidcNative_setSimpleStringProperty_caller_params*)caller_params {
    [[OidcNative_setSimpleStringProperty_caller getSharedInstance] performSelectorOnMainThread:@selector(command_setSimpleStringProperty:) withObject:caller_params waitUntilDone:NO];
}


@end


rho::String js_OidcNative_setSimpleStringProperty_Obj(rho::json::CJSONArray& argv, id<IOidcNative>objItem, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[1+1];
    BOOL method_return_result = YES;
    BOOL method_receive_callback = NO;
    int argc = argv.getSize();


    [methodResult setMethodSignature:@"OidcNative::simpleStringProperty="];

    
    static RHO_API_PARAM rho_api_params[] = { {RHO_API_STRING, 0, "simpleStringProperty", 0, 0 } };

    
    BOOL is_factory_param[] = { NO, NO };

    int i;

    // init
    for (i = 0; i < (1); i++) {
        params[i] = [CJSConverter getObjectiveCNULL];
    }

    

    // enumerate params
    for (int i = 0; i < (1); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByJSObject(argv.getItem(i).getString());
            }
            else {
                rho::json::CJSONEntry entry = argv.getItem(i);
                params[i] = [[CJSConverter convertFromJS:&entry rho_api_param:&(rho_api_params[i])] retain];
            }
            // TODO: Handle CMethodResultError
            if (params[i] == nil) {
                //NSLog(@"OidcNative::setSimpleStringProperty parameter %d is nil!", i);
                rho::String resValue = rho::String("\"result\":null,\"error\":\"Method parameter is nil!\"");
                return resValue;
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(1)];
    for (i = 0 ; i < (1); i++) {
        [params_array addObject:params[i]];
    }

    
        if (strCallbackID.size() > 0) {
            method_receive_callback = YES;
        }
    

    

    if (method_receive_callback) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        [methodResult setJSCallback:[NSString stringWithUTF8String:strCallbackID.c_str()] webViewUID:[NSString stringWithUTF8String:strJsVmID.c_str()]];
        [methodResult setCallbackParam:[NSString stringWithUTF8String:strCallbackParam.c_str()]];
        
        [OidcNative_setSimpleStringProperty_caller setSimpleStringProperty_in_thread:[OidcNative_setSimpleStringProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [OidcNative_setSimpleStringProperty_caller setSimpleStringProperty:[OidcNative_setSimpleStringProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    rho::String resValue = rho::String("\"result\":null");
    if ((!method_receive_callback) && (method_return_result)) {
        resValue = [[methodResult toJSON] UTF8String];
    }
    [methodResult release];
    return resValue;
}


rho::String js_OidcNative_setSimpleStringProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    id<IOidcNative> item = OidcNative_makeInstanceByJSObject(strObjID);
    return js_OidcNative_setSimpleStringProperty_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);

}

rho::String js_s_OidcNative_def_setSimpleStringProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return js_OidcNative_setSimpleStringProperty_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);
}







@interface OidcNative_enumerate_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNativeSingleton> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(OidcNative_enumerate_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNativeSingleton>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation OidcNative_enumerate_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(OidcNative_enumerate_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNativeSingleton>)_item _methodResult:(CMethodResult*)_methodResult {
    OidcNative_enumerate_caller_params* par = [[[OidcNative_enumerate_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface OidcNative_enumerate_caller : NSObject {

}
+(OidcNative_enumerate_caller*) getSharedInstance;
+(void) enumerate:(OidcNative_enumerate_caller_params*)caller_params;
+(void) enumerate_in_thread:(OidcNative_enumerate_caller_params*)caller_params;
+(void) enumerate_in_UI_thread:(OidcNative_enumerate_caller_params*)caller_params;

@end

static OidcNative_enumerate_caller* our_OidcNative_enumerate_caller = nil;

@implementation OidcNative_enumerate_caller

+(OidcNative_enumerate_caller*) getSharedInstance {
    if (our_OidcNative_enumerate_caller == nil) {
        our_OidcNative_enumerate_caller = [[OidcNative_enumerate_caller alloc] init];
    }
    return our_OidcNative_enumerate_caller;
}

-(void) command_enumerate:(OidcNative_enumerate_caller_params*)caller_params {

    id<IOidcNativeSingleton> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem enumerate:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}


+(void) enumerate:(OidcNative_enumerate_caller_params*)caller_params {
    [[OidcNative_enumerate_caller getSharedInstance] command_enumerate:caller_params];
}

+(void) enumerate_in_thread:(OidcNative_enumerate_caller_params*)caller_params {
    [[OidcNative_enumerate_caller getSharedInstance] performSelectorInBackground:@selector(command_enumerate:) withObject:caller_params];
}

+(void) enumerate_in_UI_thread:(OidcNative_enumerate_caller_params*)caller_params {
    [[OidcNative_enumerate_caller getSharedInstance] performSelectorOnMainThread:@selector(command_enumerate:) withObject:caller_params waitUntilDone:NO];
}


@end


rho::String js_OidcNative_enumerate_Obj(rho::json::CJSONArray& argv, id<IOidcNativeSingleton>objItem, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[0+1];
    BOOL method_return_result = YES;
    BOOL method_receive_callback = NO;
    int argc = argv.getSize();


    [methodResult setMethodSignature:@"OidcNative::enumerate"];

    
    static RHO_API_PARAM rho_api_params[] = {  };

    
    BOOL is_factory_param[] = { NO };

    int i;

    // init
    for (i = 0; i < (0); i++) {
        params[i] = [CJSConverter getObjectiveCNULL];
    }

    

    // enumerate params
    for (int i = 0; i < (0); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByJSObject(argv.getItem(i).getString());
            }
            else {
                rho::json::CJSONEntry entry = argv.getItem(i);
                params[i] = [[CJSConverter convertFromJS:&entry rho_api_param:&(rho_api_params[i])] retain];
            }
            // TODO: Handle CMethodResultError
            if (params[i] == nil) {
                //NSLog(@"OidcNative::enumerate parameter %d is nil!", i);
                rho::String resValue = rho::String("\"result\":null,\"error\":\"Method parameter is nil!\"");
                return resValue;
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(0)];
    for (i = 0 ; i < (0); i++) {
        [params_array addObject:params[i]];
    }

    
        if (strCallbackID.size() > 0) {
            method_receive_callback = YES;
        }
    

    [methodResult enableObjectCreationModeWithJSClassPath:@"Rho.OidcNative"];

    if (method_receive_callback) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        [methodResult setJSCallback:[NSString stringWithUTF8String:strCallbackID.c_str()] webViewUID:[NSString stringWithUTF8String:strJsVmID.c_str()]];
        [methodResult setCallbackParam:[NSString stringWithUTF8String:strCallbackParam.c_str()]];
        
        [OidcNative_enumerate_caller enumerate_in_thread:[OidcNative_enumerate_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [OidcNative_enumerate_caller enumerate:[OidcNative_enumerate_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    rho::String resValue = rho::String("\"result\":null");
    if ((!method_receive_callback) && (method_return_result)) {
        resValue = [[methodResult toJSON] UTF8String];
    }
    [methodResult release];
    return resValue;
}


rho::String js_s_OidcNative_enumerate(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];
    return js_OidcNative_enumerate_Obj(argv, singleton, strCallbackID, strJsVmID, strCallbackParam);

}







@interface OidcNative_getPlatformName_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(OidcNative_getPlatformName_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation OidcNative_getPlatformName_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(OidcNative_getPlatformName_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    OidcNative_getPlatformName_caller_params* par = [[[OidcNative_getPlatformName_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface OidcNative_getPlatformName_caller : NSObject {

}
+(OidcNative_getPlatformName_caller*) getSharedInstance;
+(void) getPlatformName:(OidcNative_getPlatformName_caller_params*)caller_params;
+(void) getPlatformName_in_thread:(OidcNative_getPlatformName_caller_params*)caller_params;
+(void) getPlatformName_in_UI_thread:(OidcNative_getPlatformName_caller_params*)caller_params;

@end

static OidcNative_getPlatformName_caller* our_OidcNative_getPlatformName_caller = nil;

@implementation OidcNative_getPlatformName_caller

+(OidcNative_getPlatformName_caller*) getSharedInstance {
    if (our_OidcNative_getPlatformName_caller == nil) {
        our_OidcNative_getPlatformName_caller = [[OidcNative_getPlatformName_caller alloc] init];
    }
    return our_OidcNative_getPlatformName_caller;
}

-(void) command_getPlatformName:(OidcNative_getPlatformName_caller_params*)caller_params {

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem getPlatformName:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}


+(void) getPlatformName:(OidcNative_getPlatformName_caller_params*)caller_params {
    [[OidcNative_getPlatformName_caller getSharedInstance] command_getPlatformName:caller_params];
}

+(void) getPlatformName_in_thread:(OidcNative_getPlatformName_caller_params*)caller_params {
    [[OidcNative_getPlatformName_caller getSharedInstance] performSelectorInBackground:@selector(command_getPlatformName:) withObject:caller_params];
}

+(void) getPlatformName_in_UI_thread:(OidcNative_getPlatformName_caller_params*)caller_params {
    [[OidcNative_getPlatformName_caller getSharedInstance] performSelectorOnMainThread:@selector(command_getPlatformName:) withObject:caller_params waitUntilDone:NO];
}


@end


rho::String js_OidcNative_getPlatformName_Obj(rho::json::CJSONArray& argv, id<IOidcNative>objItem, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[0+1];
    BOOL method_return_result = YES;
    BOOL method_receive_callback = NO;
    int argc = argv.getSize();


    [methodResult setMethodSignature:@"OidcNative::getPlatformName"];

    
    static RHO_API_PARAM rho_api_params[] = {  };

    
    BOOL is_factory_param[] = { NO };

    int i;

    // init
    for (i = 0; i < (0); i++) {
        params[i] = [CJSConverter getObjectiveCNULL];
    }

    

    // enumerate params
    for (int i = 0; i < (0); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByJSObject(argv.getItem(i).getString());
            }
            else {
                rho::json::CJSONEntry entry = argv.getItem(i);
                params[i] = [[CJSConverter convertFromJS:&entry rho_api_param:&(rho_api_params[i])] retain];
            }
            // TODO: Handle CMethodResultError
            if (params[i] == nil) {
                //NSLog(@"OidcNative::getPlatformName parameter %d is nil!", i);
                rho::String resValue = rho::String("\"result\":null,\"error\":\"Method parameter is nil!\"");
                return resValue;
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(0)];
    for (i = 0 ; i < (0); i++) {
        [params_array addObject:params[i]];
    }

    
        if (strCallbackID.size() > 0) {
            method_receive_callback = YES;
        }
    

    

    if (method_receive_callback) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        [methodResult setJSCallback:[NSString stringWithUTF8String:strCallbackID.c_str()] webViewUID:[NSString stringWithUTF8String:strJsVmID.c_str()]];
        [methodResult setCallbackParam:[NSString stringWithUTF8String:strCallbackParam.c_str()]];
        
        [OidcNative_getPlatformName_caller getPlatformName_in_thread:[OidcNative_getPlatformName_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [OidcNative_getPlatformName_caller getPlatformName:[OidcNative_getPlatformName_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    rho::String resValue = rho::String("\"result\":null");
    if ((!method_receive_callback) && (method_return_result)) {
        resValue = [[methodResult toJSON] UTF8String];
    }
    [methodResult release];
    return resValue;
}


rho::String js_OidcNative_getPlatformName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    id<IOidcNative> item = OidcNative_makeInstanceByJSObject(strObjID);
    return js_OidcNative_getPlatformName_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);

}

rho::String js_s_OidcNative_def_getPlatformName(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return js_OidcNative_getPlatformName_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);
}







@interface OidcNative_calcSumm_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(OidcNative_calcSumm_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation OidcNative_calcSumm_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(OidcNative_calcSumm_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    OidcNative_calcSumm_caller_params* par = [[[OidcNative_calcSumm_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface OidcNative_calcSumm_caller : NSObject {

}
+(OidcNative_calcSumm_caller*) getSharedInstance;
+(void) calcSumm:(OidcNative_calcSumm_caller_params*)caller_params;
+(void) calcSumm_in_thread:(OidcNative_calcSumm_caller_params*)caller_params;
+(void) calcSumm_in_UI_thread:(OidcNative_calcSumm_caller_params*)caller_params;

@end

static OidcNative_calcSumm_caller* our_OidcNative_calcSumm_caller = nil;

@implementation OidcNative_calcSumm_caller

+(OidcNative_calcSumm_caller*) getSharedInstance {
    if (our_OidcNative_calcSumm_caller == nil) {
        our_OidcNative_calcSumm_caller = [[OidcNative_calcSumm_caller alloc] init];
    }
    return our_OidcNative_calcSumm_caller;
}

-(void) command_calcSumm:(OidcNative_calcSumm_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem calcSumm:(int)[((NSNumber*)[params objectAtIndex:0]) intValue] b:(int)[((NSNumber*)[params objectAtIndex:1]) intValue] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}


+(void) calcSumm:(OidcNative_calcSumm_caller_params*)caller_params {
    [[OidcNative_calcSumm_caller getSharedInstance] command_calcSumm:caller_params];
}

+(void) calcSumm_in_thread:(OidcNative_calcSumm_caller_params*)caller_params {
    [[OidcNative_calcSumm_caller getSharedInstance] performSelectorInBackground:@selector(command_calcSumm:) withObject:caller_params];
}

+(void) calcSumm_in_UI_thread:(OidcNative_calcSumm_caller_params*)caller_params {
    [[OidcNative_calcSumm_caller getSharedInstance] performSelectorOnMainThread:@selector(command_calcSumm:) withObject:caller_params waitUntilDone:NO];
}


@end


rho::String js_OidcNative_calcSumm_Obj(rho::json::CJSONArray& argv, id<IOidcNative>objItem, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[2+1];
    BOOL method_return_result = YES;
    BOOL method_receive_callback = NO;
    int argc = argv.getSize();


    [methodResult setMethodSignature:@"OidcNative::calcSumm"];

    
    static RHO_API_PARAM rho_api_params[] = { {RHO_API_INTEGER, 0, "a", 0, 0 }, {RHO_API_INTEGER, 0, "b", 0, 0 } };

    
    BOOL is_factory_param[] = { NO, NO, NO };

    int i;

    // init
    for (i = 0; i < (2); i++) {
        params[i] = [CJSConverter getObjectiveCNULL];
    }

    

    // enumerate params
    for (int i = 0; i < (2); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByJSObject(argv.getItem(i).getString());
            }
            else {
                rho::json::CJSONEntry entry = argv.getItem(i);
                params[i] = [[CJSConverter convertFromJS:&entry rho_api_param:&(rho_api_params[i])] retain];
            }
            // TODO: Handle CMethodResultError
            if (params[i] == nil) {
                //NSLog(@"OidcNative::calcSumm parameter %d is nil!", i);
                rho::String resValue = rho::String("\"result\":null,\"error\":\"Method parameter is nil!\"");
                return resValue;
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(2)];
    for (i = 0 ; i < (2); i++) {
        [params_array addObject:params[i]];
    }

    
        if (strCallbackID.size() > 0) {
            method_receive_callback = YES;
        }
    

    

    if (method_receive_callback) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        [methodResult setJSCallback:[NSString stringWithUTF8String:strCallbackID.c_str()] webViewUID:[NSString stringWithUTF8String:strJsVmID.c_str()]];
        [methodResult setCallbackParam:[NSString stringWithUTF8String:strCallbackParam.c_str()]];
        
        [OidcNative_calcSumm_caller calcSumm_in_thread:[OidcNative_calcSumm_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [OidcNative_calcSumm_caller calcSumm:[OidcNative_calcSumm_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    rho::String resValue = rho::String("\"result\":null");
    if ((!method_receive_callback) && (method_return_result)) {
        resValue = [[methodResult toJSON] UTF8String];
    }
    [methodResult release];
    return resValue;
}


rho::String js_OidcNative_calcSumm(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    id<IOidcNative> item = OidcNative_makeInstanceByJSObject(strObjID);
    return js_OidcNative_calcSumm_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);

}

rho::String js_s_OidcNative_def_calcSumm(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return js_OidcNative_calcSumm_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);
}







@interface OidcNative_joinStrings_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(OidcNative_joinStrings_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation OidcNative_joinStrings_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(OidcNative_joinStrings_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    OidcNative_joinStrings_caller_params* par = [[[OidcNative_joinStrings_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface OidcNative_joinStrings_caller : NSObject {

}
+(OidcNative_joinStrings_caller*) getSharedInstance;
+(void) joinStrings:(OidcNative_joinStrings_caller_params*)caller_params;
+(void) joinStrings_in_thread:(OidcNative_joinStrings_caller_params*)caller_params;
+(void) joinStrings_in_UI_thread:(OidcNative_joinStrings_caller_params*)caller_params;

@end

static OidcNative_joinStrings_caller* our_OidcNative_joinStrings_caller = nil;

@implementation OidcNative_joinStrings_caller

+(OidcNative_joinStrings_caller*) getSharedInstance {
    if (our_OidcNative_joinStrings_caller == nil) {
        our_OidcNative_joinStrings_caller = [[OidcNative_joinStrings_caller alloc] init];
    }
    return our_OidcNative_joinStrings_caller;
}

-(void) command_joinStrings:(OidcNative_joinStrings_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem joinStrings:(NSString*)[params objectAtIndex:0] b:(NSString*)[params objectAtIndex:1] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}


+(void) joinStrings:(OidcNative_joinStrings_caller_params*)caller_params {
    [[OidcNative_joinStrings_caller getSharedInstance] command_joinStrings:caller_params];
}

+(void) joinStrings_in_thread:(OidcNative_joinStrings_caller_params*)caller_params {
    [[OidcNative_joinStrings_caller getSharedInstance] performSelectorInBackground:@selector(command_joinStrings:) withObject:caller_params];
}

+(void) joinStrings_in_UI_thread:(OidcNative_joinStrings_caller_params*)caller_params {
    [[OidcNative_joinStrings_caller getSharedInstance] performSelectorOnMainThread:@selector(command_joinStrings:) withObject:caller_params waitUntilDone:NO];
}


@end


rho::String js_OidcNative_joinStrings_Obj(rho::json::CJSONArray& argv, id<IOidcNative>objItem, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[2+1];
    BOOL method_return_result = YES;
    BOOL method_receive_callback = NO;
    int argc = argv.getSize();


    [methodResult setMethodSignature:@"OidcNative::joinStrings"];

    
    static RHO_API_PARAM rho_api_params[] = { {RHO_API_STRING, 0, "a", 0, 0 }, {RHO_API_STRING, 0, "b", 0, 0 } };

    
    BOOL is_factory_param[] = { NO, NO, NO };

    int i;

    // init
    for (i = 0; i < (2); i++) {
        params[i] = [CJSConverter getObjectiveCNULL];
    }

    

    // enumerate params
    for (int i = 0; i < (2); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByJSObject(argv.getItem(i).getString());
            }
            else {
                rho::json::CJSONEntry entry = argv.getItem(i);
                params[i] = [[CJSConverter convertFromJS:&entry rho_api_param:&(rho_api_params[i])] retain];
            }
            // TODO: Handle CMethodResultError
            if (params[i] == nil) {
                //NSLog(@"OidcNative::joinStrings parameter %d is nil!", i);
                rho::String resValue = rho::String("\"result\":null,\"error\":\"Method parameter is nil!\"");
                return resValue;
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(2)];
    for (i = 0 ; i < (2); i++) {
        [params_array addObject:params[i]];
    }

    
        if (strCallbackID.size() > 0) {
            method_receive_callback = YES;
        }
    

    

    if (method_receive_callback) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        [methodResult setJSCallback:[NSString stringWithUTF8String:strCallbackID.c_str()] webViewUID:[NSString stringWithUTF8String:strJsVmID.c_str()]];
        [methodResult setCallbackParam:[NSString stringWithUTF8String:strCallbackParam.c_str()]];
        
        [OidcNative_joinStrings_caller joinStrings_in_thread:[OidcNative_joinStrings_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [OidcNative_joinStrings_caller joinStrings:[OidcNative_joinStrings_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    rho::String resValue = rho::String("\"result\":null");
    if ((!method_receive_callback) && (method_return_result)) {
        resValue = [[methodResult toJSON] UTF8String];
    }
    [methodResult release];
    return resValue;
}


rho::String js_OidcNative_joinStrings(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    id<IOidcNative> item = OidcNative_makeInstanceByJSObject(strObjID);
    return js_OidcNative_joinStrings_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);

}

rho::String js_s_OidcNative_def_joinStrings(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return js_OidcNative_joinStrings_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);
}







@interface OidcNative_getProperty_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(OidcNative_getProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation OidcNative_getProperty_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(OidcNative_getProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    OidcNative_getProperty_caller_params* par = [[[OidcNative_getProperty_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface OidcNative_getProperty_caller : NSObject {

}
+(OidcNative_getProperty_caller*) getSharedInstance;
+(void) getProperty:(OidcNative_getProperty_caller_params*)caller_params;
+(void) getProperty_in_thread:(OidcNative_getProperty_caller_params*)caller_params;
+(void) getProperty_in_UI_thread:(OidcNative_getProperty_caller_params*)caller_params;

@end

static OidcNative_getProperty_caller* our_OidcNative_getProperty_caller = nil;

@implementation OidcNative_getProperty_caller

+(OidcNative_getProperty_caller*) getSharedInstance {
    if (our_OidcNative_getProperty_caller == nil) {
        our_OidcNative_getProperty_caller = [[OidcNative_getProperty_caller alloc] init];
    }
    return our_OidcNative_getProperty_caller;
}

-(void) command_getProperty:(OidcNative_getProperty_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem getProperty:(NSString*)[params objectAtIndex:0] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}


+(void) getProperty:(OidcNative_getProperty_caller_params*)caller_params {
    [[OidcNative_getProperty_caller getSharedInstance] command_getProperty:caller_params];
}

+(void) getProperty_in_thread:(OidcNative_getProperty_caller_params*)caller_params {
    [[OidcNative_getProperty_caller getSharedInstance] performSelectorInBackground:@selector(command_getProperty:) withObject:caller_params];
}

+(void) getProperty_in_UI_thread:(OidcNative_getProperty_caller_params*)caller_params {
    [[OidcNative_getProperty_caller getSharedInstance] performSelectorOnMainThread:@selector(command_getProperty:) withObject:caller_params waitUntilDone:NO];
}


@end


rho::String js_OidcNative_getProperty_Obj(rho::json::CJSONArray& argv, id<IOidcNative>objItem, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[1+1];
    BOOL method_return_result = YES;
    BOOL method_receive_callback = NO;
    int argc = argv.getSize();


    [methodResult setMethodSignature:@"OidcNative::getProperty"];

    
    static RHO_API_PARAM rho_api_params[] = { {RHO_API_STRING, 0, "propertyName", 0, 0 } };

    
    BOOL is_factory_param[] = { NO, NO };

    int i;

    // init
    for (i = 0; i < (1); i++) {
        params[i] = [CJSConverter getObjectiveCNULL];
    }

    

    // enumerate params
    for (int i = 0; i < (1); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByJSObject(argv.getItem(i).getString());
            }
            else {
                rho::json::CJSONEntry entry = argv.getItem(i);
                params[i] = [[CJSConverter convertFromJS:&entry rho_api_param:&(rho_api_params[i])] retain];
            }
            // TODO: Handle CMethodResultError
            if (params[i] == nil) {
                //NSLog(@"OidcNative::getProperty parameter %d is nil!", i);
                rho::String resValue = rho::String("\"result\":null,\"error\":\"Method parameter is nil!\"");
                return resValue;
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(1)];
    for (i = 0 ; i < (1); i++) {
        [params_array addObject:params[i]];
    }

    
        if (strCallbackID.size() > 0) {
            method_receive_callback = YES;
        }
    

    

    if (method_receive_callback) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        [methodResult setJSCallback:[NSString stringWithUTF8String:strCallbackID.c_str()] webViewUID:[NSString stringWithUTF8String:strJsVmID.c_str()]];
        [methodResult setCallbackParam:[NSString stringWithUTF8String:strCallbackParam.c_str()]];
        
        [OidcNative_getProperty_caller getProperty_in_thread:[OidcNative_getProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [OidcNative_getProperty_caller getProperty:[OidcNative_getProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    rho::String resValue = rho::String("\"result\":null");
    if ((!method_receive_callback) && (method_return_result)) {
        resValue = [[methodResult toJSON] UTF8String];
    }
    [methodResult release];
    return resValue;
}


rho::String js_OidcNative_getProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    id<IOidcNative> item = OidcNative_makeInstanceByJSObject(strObjID);
    return js_OidcNative_getProperty_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);

}

rho::String js_s_OidcNative_def_getProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return js_OidcNative_getProperty_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);
}







@interface OidcNative_getProperties_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(OidcNative_getProperties_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation OidcNative_getProperties_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(OidcNative_getProperties_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    OidcNative_getProperties_caller_params* par = [[[OidcNative_getProperties_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface OidcNative_getProperties_caller : NSObject {

}
+(OidcNative_getProperties_caller*) getSharedInstance;
+(void) getProperties:(OidcNative_getProperties_caller_params*)caller_params;
+(void) getProperties_in_thread:(OidcNative_getProperties_caller_params*)caller_params;
+(void) getProperties_in_UI_thread:(OidcNative_getProperties_caller_params*)caller_params;

@end

static OidcNative_getProperties_caller* our_OidcNative_getProperties_caller = nil;

@implementation OidcNative_getProperties_caller

+(OidcNative_getProperties_caller*) getSharedInstance {
    if (our_OidcNative_getProperties_caller == nil) {
        our_OidcNative_getProperties_caller = [[OidcNative_getProperties_caller alloc] init];
    }
    return our_OidcNative_getProperties_caller;
}

-(void) command_getProperties:(OidcNative_getProperties_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem getProperties:(NSArray*)[params objectAtIndex:0] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}


+(void) getProperties:(OidcNative_getProperties_caller_params*)caller_params {
    [[OidcNative_getProperties_caller getSharedInstance] command_getProperties:caller_params];
}

+(void) getProperties_in_thread:(OidcNative_getProperties_caller_params*)caller_params {
    [[OidcNative_getProperties_caller getSharedInstance] performSelectorInBackground:@selector(command_getProperties:) withObject:caller_params];
}

+(void) getProperties_in_UI_thread:(OidcNative_getProperties_caller_params*)caller_params {
    [[OidcNative_getProperties_caller getSharedInstance] performSelectorOnMainThread:@selector(command_getProperties:) withObject:caller_params waitUntilDone:NO];
}


@end


rho::String js_OidcNative_getProperties_Obj(rho::json::CJSONArray& argv, id<IOidcNative>objItem, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[1+1];
    BOOL method_return_result = YES;
    BOOL method_receive_callback = NO;
    int argc = argv.getSize();


    [methodResult setMethodSignature:@"OidcNative::getProperties"];

    
    static RHO_API_PARAM rho_api_params_param0[] = { {RHO_API_STRING, 0, "array_param", 0, 0 } };
    static RHO_API_PARAM rho_api_params[] = { {RHO_API_ARRAY, 0, "arrayofNames", 1, rho_api_params_param0 } };

    
    BOOL is_factory_param[] = { NO, NO };

    int i;

    // init
    for (i = 0; i < (1); i++) {
        params[i] = [CJSConverter getObjectiveCNULL];
    }

    

    // enumerate params
    for (int i = 0; i < (1); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByJSObject(argv.getItem(i).getString());
            }
            else {
                rho::json::CJSONEntry entry = argv.getItem(i);
                params[i] = [[CJSConverter convertFromJS:&entry rho_api_param:&(rho_api_params[i])] retain];
            }
            // TODO: Handle CMethodResultError
            if (params[i] == nil) {
                //NSLog(@"OidcNative::getProperties parameter %d is nil!", i);
                rho::String resValue = rho::String("\"result\":null,\"error\":\"Method parameter is nil!\"");
                return resValue;
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(1)];
    for (i = 0 ; i < (1); i++) {
        [params_array addObject:params[i]];
    }

    
        if (strCallbackID.size() > 0) {
            method_receive_callback = YES;
        }
    

    

    if (method_receive_callback) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        [methodResult setJSCallback:[NSString stringWithUTF8String:strCallbackID.c_str()] webViewUID:[NSString stringWithUTF8String:strJsVmID.c_str()]];
        [methodResult setCallbackParam:[NSString stringWithUTF8String:strCallbackParam.c_str()]];
        
        [OidcNative_getProperties_caller getProperties_in_thread:[OidcNative_getProperties_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [OidcNative_getProperties_caller getProperties:[OidcNative_getProperties_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    rho::String resValue = rho::String("\"result\":null");
    if ((!method_receive_callback) && (method_return_result)) {
        resValue = [[methodResult toJSON] UTF8String];
    }
    [methodResult release];
    return resValue;
}


rho::String js_OidcNative_getProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    id<IOidcNative> item = OidcNative_makeInstanceByJSObject(strObjID);
    return js_OidcNative_getProperties_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);

}

rho::String js_s_OidcNative_def_getProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return js_OidcNative_getProperties_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);
}







@interface OidcNative_getAllProperties_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(OidcNative_getAllProperties_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation OidcNative_getAllProperties_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(OidcNative_getAllProperties_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    OidcNative_getAllProperties_caller_params* par = [[[OidcNative_getAllProperties_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface OidcNative_getAllProperties_caller : NSObject {

}
+(OidcNative_getAllProperties_caller*) getSharedInstance;
+(void) getAllProperties:(OidcNative_getAllProperties_caller_params*)caller_params;
+(void) getAllProperties_in_thread:(OidcNative_getAllProperties_caller_params*)caller_params;
+(void) getAllProperties_in_UI_thread:(OidcNative_getAllProperties_caller_params*)caller_params;

@end

static OidcNative_getAllProperties_caller* our_OidcNative_getAllProperties_caller = nil;

@implementation OidcNative_getAllProperties_caller

+(OidcNative_getAllProperties_caller*) getSharedInstance {
    if (our_OidcNative_getAllProperties_caller == nil) {
        our_OidcNative_getAllProperties_caller = [[OidcNative_getAllProperties_caller alloc] init];
    }
    return our_OidcNative_getAllProperties_caller;
}

-(void) command_getAllProperties:(OidcNative_getAllProperties_caller_params*)caller_params {

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem getAllProperties:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}


+(void) getAllProperties:(OidcNative_getAllProperties_caller_params*)caller_params {
    [[OidcNative_getAllProperties_caller getSharedInstance] command_getAllProperties:caller_params];
}

+(void) getAllProperties_in_thread:(OidcNative_getAllProperties_caller_params*)caller_params {
    [[OidcNative_getAllProperties_caller getSharedInstance] performSelectorInBackground:@selector(command_getAllProperties:) withObject:caller_params];
}

+(void) getAllProperties_in_UI_thread:(OidcNative_getAllProperties_caller_params*)caller_params {
    [[OidcNative_getAllProperties_caller getSharedInstance] performSelectorOnMainThread:@selector(command_getAllProperties:) withObject:caller_params waitUntilDone:NO];
}


@end


rho::String js_OidcNative_getAllProperties_Obj(rho::json::CJSONArray& argv, id<IOidcNative>objItem, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[0+1];
    BOOL method_return_result = YES;
    BOOL method_receive_callback = NO;
    int argc = argv.getSize();


    [methodResult setMethodSignature:@"OidcNative::getAllProperties"];

    
    static RHO_API_PARAM rho_api_params[] = {  };

    
    BOOL is_factory_param[] = { NO };

    int i;

    // init
    for (i = 0; i < (0); i++) {
        params[i] = [CJSConverter getObjectiveCNULL];
    }

    

    // enumerate params
    for (int i = 0; i < (0); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByJSObject(argv.getItem(i).getString());
            }
            else {
                rho::json::CJSONEntry entry = argv.getItem(i);
                params[i] = [[CJSConverter convertFromJS:&entry rho_api_param:&(rho_api_params[i])] retain];
            }
            // TODO: Handle CMethodResultError
            if (params[i] == nil) {
                //NSLog(@"OidcNative::getAllProperties parameter %d is nil!", i);
                rho::String resValue = rho::String("\"result\":null,\"error\":\"Method parameter is nil!\"");
                return resValue;
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(0)];
    for (i = 0 ; i < (0); i++) {
        [params_array addObject:params[i]];
    }

    
        if (strCallbackID.size() > 0) {
            method_receive_callback = YES;
        }
    

    

    if (method_receive_callback) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        [methodResult setJSCallback:[NSString stringWithUTF8String:strCallbackID.c_str()] webViewUID:[NSString stringWithUTF8String:strJsVmID.c_str()]];
        [methodResult setCallbackParam:[NSString stringWithUTF8String:strCallbackParam.c_str()]];
        
        [OidcNative_getAllProperties_caller getAllProperties_in_thread:[OidcNative_getAllProperties_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [OidcNative_getAllProperties_caller getAllProperties:[OidcNative_getAllProperties_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    rho::String resValue = rho::String("\"result\":null");
    if ((!method_receive_callback) && (method_return_result)) {
        resValue = [[methodResult toJSON] UTF8String];
    }
    [methodResult release];
    return resValue;
}


rho::String js_OidcNative_getAllProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    id<IOidcNative> item = OidcNative_makeInstanceByJSObject(strObjID);
    return js_OidcNative_getAllProperties_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);

}

rho::String js_s_OidcNative_def_getAllProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return js_OidcNative_getAllProperties_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);
}







@interface OidcNative_setProperty_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(OidcNative_setProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation OidcNative_setProperty_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(OidcNative_setProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    OidcNative_setProperty_caller_params* par = [[[OidcNative_setProperty_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface OidcNative_setProperty_caller : NSObject {

}
+(OidcNative_setProperty_caller*) getSharedInstance;
+(void) setProperty:(OidcNative_setProperty_caller_params*)caller_params;
+(void) setProperty_in_thread:(OidcNative_setProperty_caller_params*)caller_params;
+(void) setProperty_in_UI_thread:(OidcNative_setProperty_caller_params*)caller_params;

@end

static OidcNative_setProperty_caller* our_OidcNative_setProperty_caller = nil;

@implementation OidcNative_setProperty_caller

+(OidcNative_setProperty_caller*) getSharedInstance {
    if (our_OidcNative_setProperty_caller == nil) {
        our_OidcNative_setProperty_caller = [[OidcNative_setProperty_caller alloc] init];
    }
    return our_OidcNative_setProperty_caller;
}

-(void) command_setProperty:(OidcNative_setProperty_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem setProperty:(NSString*)[params objectAtIndex:0] propertyValue:(NSString*)[params objectAtIndex:1] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}


+(void) setProperty:(OidcNative_setProperty_caller_params*)caller_params {
    [[OidcNative_setProperty_caller getSharedInstance] command_setProperty:caller_params];
}

+(void) setProperty_in_thread:(OidcNative_setProperty_caller_params*)caller_params {
    [[OidcNative_setProperty_caller getSharedInstance] performSelectorInBackground:@selector(command_setProperty:) withObject:caller_params];
}

+(void) setProperty_in_UI_thread:(OidcNative_setProperty_caller_params*)caller_params {
    [[OidcNative_setProperty_caller getSharedInstance] performSelectorOnMainThread:@selector(command_setProperty:) withObject:caller_params waitUntilDone:NO];
}


@end


rho::String js_OidcNative_setProperty_Obj(rho::json::CJSONArray& argv, id<IOidcNative>objItem, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[2+1];
    BOOL method_return_result = YES;
    BOOL method_receive_callback = NO;
    int argc = argv.getSize();


    [methodResult setMethodSignature:@"OidcNative::setProperty"];

    
    static RHO_API_PARAM rho_api_params[] = { {RHO_API_STRING, 0, "propertyName", 0, 0 }, {RHO_API_STRING, 0, "propertyValue", 0, 0 } };

    
    BOOL is_factory_param[] = { NO, NO, NO };

    int i;

    // init
    for (i = 0; i < (2); i++) {
        params[i] = [CJSConverter getObjectiveCNULL];
    }

    

    // enumerate params
    for (int i = 0; i < (2); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByJSObject(argv.getItem(i).getString());
            }
            else {
                rho::json::CJSONEntry entry = argv.getItem(i);
                params[i] = [[CJSConverter convertFromJS:&entry rho_api_param:&(rho_api_params[i])] retain];
            }
            // TODO: Handle CMethodResultError
            if (params[i] == nil) {
                //NSLog(@"OidcNative::setProperty parameter %d is nil!", i);
                rho::String resValue = rho::String("\"result\":null,\"error\":\"Method parameter is nil!\"");
                return resValue;
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(2)];
    for (i = 0 ; i < (2); i++) {
        [params_array addObject:params[i]];
    }

    
        if (strCallbackID.size() > 0) {
            method_receive_callback = YES;
        }
    

    

    if (method_receive_callback) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        [methodResult setJSCallback:[NSString stringWithUTF8String:strCallbackID.c_str()] webViewUID:[NSString stringWithUTF8String:strJsVmID.c_str()]];
        [methodResult setCallbackParam:[NSString stringWithUTF8String:strCallbackParam.c_str()]];
        
        [OidcNative_setProperty_caller setProperty_in_thread:[OidcNative_setProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [OidcNative_setProperty_caller setProperty:[OidcNative_setProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    rho::String resValue = rho::String("\"result\":null");
    if ((!method_receive_callback) && (method_return_result)) {
        resValue = [[methodResult toJSON] UTF8String];
    }
    [methodResult release];
    return resValue;
}


rho::String js_OidcNative_setProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    id<IOidcNative> item = OidcNative_makeInstanceByJSObject(strObjID);
    return js_OidcNative_setProperty_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);

}

rho::String js_s_OidcNative_def_setProperty(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return js_OidcNative_setProperty_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);
}







@interface OidcNative_setProperties_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(OidcNative_setProperties_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation OidcNative_setProperties_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(OidcNative_setProperties_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    OidcNative_setProperties_caller_params* par = [[[OidcNative_setProperties_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface OidcNative_setProperties_caller : NSObject {

}
+(OidcNative_setProperties_caller*) getSharedInstance;
+(void) setProperties:(OidcNative_setProperties_caller_params*)caller_params;
+(void) setProperties_in_thread:(OidcNative_setProperties_caller_params*)caller_params;
+(void) setProperties_in_UI_thread:(OidcNative_setProperties_caller_params*)caller_params;

@end

static OidcNative_setProperties_caller* our_OidcNative_setProperties_caller = nil;

@implementation OidcNative_setProperties_caller

+(OidcNative_setProperties_caller*) getSharedInstance {
    if (our_OidcNative_setProperties_caller == nil) {
        our_OidcNative_setProperties_caller = [[OidcNative_setProperties_caller alloc] init];
    }
    return our_OidcNative_setProperties_caller;
}

-(void) command_setProperties:(OidcNative_setProperties_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem setProperties:(NSDictionary*)[params objectAtIndex:0] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}


+(void) setProperties:(OidcNative_setProperties_caller_params*)caller_params {
    [[OidcNative_setProperties_caller getSharedInstance] command_setProperties:caller_params];
}

+(void) setProperties_in_thread:(OidcNative_setProperties_caller_params*)caller_params {
    [[OidcNative_setProperties_caller getSharedInstance] performSelectorInBackground:@selector(command_setProperties:) withObject:caller_params];
}

+(void) setProperties_in_UI_thread:(OidcNative_setProperties_caller_params*)caller_params {
    [[OidcNative_setProperties_caller getSharedInstance] performSelectorOnMainThread:@selector(command_setProperties:) withObject:caller_params waitUntilDone:NO];
}


@end


rho::String js_OidcNative_setProperties_Obj(rho::json::CJSONArray& argv, id<IOidcNative>objItem, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[1+1];
    BOOL method_return_result = YES;
    BOOL method_receive_callback = NO;
    int argc = argv.getSize();


    [methodResult setMethodSignature:@"OidcNative::setProperties"];

    
    static RHO_API_PARAM rho_api_params[] = { {RHO_API_HASH, 0, "propertyMap", 0, 0 } };

    
    BOOL is_factory_param[] = { NO, NO };

    int i;

    // init
    for (i = 0; i < (1); i++) {
        params[i] = [CJSConverter getObjectiveCNULL];
    }

    

    // enumerate params
    for (int i = 0; i < (1); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByJSObject(argv.getItem(i).getString());
            }
            else {
                rho::json::CJSONEntry entry = argv.getItem(i);
                params[i] = [[CJSConverter convertFromJS:&entry rho_api_param:&(rho_api_params[i])] retain];
            }
            // TODO: Handle CMethodResultError
            if (params[i] == nil) {
                //NSLog(@"OidcNative::setProperties parameter %d is nil!", i);
                rho::String resValue = rho::String("\"result\":null,\"error\":\"Method parameter is nil!\"");
                return resValue;
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(1)];
    for (i = 0 ; i < (1); i++) {
        [params_array addObject:params[i]];
    }

    
        if (strCallbackID.size() > 0) {
            method_receive_callback = YES;
        }
    

    

    if (method_receive_callback) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        [methodResult setJSCallback:[NSString stringWithUTF8String:strCallbackID.c_str()] webViewUID:[NSString stringWithUTF8String:strJsVmID.c_str()]];
        [methodResult setCallbackParam:[NSString stringWithUTF8String:strCallbackParam.c_str()]];
        
        [OidcNative_setProperties_caller setProperties_in_thread:[OidcNative_setProperties_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [OidcNative_setProperties_caller setProperties:[OidcNative_setProperties_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    rho::String resValue = rho::String("\"result\":null");
    if ((!method_receive_callback) && (method_return_result)) {
        resValue = [[methodResult toJSON] UTF8String];
    }
    [methodResult release];
    return resValue;
}


rho::String js_OidcNative_setProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {

    id<IOidcNative> item = OidcNative_makeInstanceByJSObject(strObjID);
    return js_OidcNative_setProperties_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);

}

rho::String js_s_OidcNative_def_setProperties(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return js_OidcNative_setProperties_Obj(argv, item, strCallbackID, strJsVmID, strCallbackParam);
}







rho::String js_s_OidcNative_getDefaultID(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    rho::String res =  [[CJSConverter convertToJS:defID level:0] UTF8String];

    return res;
}

rho::String js_s_OidcNative_getDefault(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    rho::String res =  [[CJSConverter convertToJS:[CRhoAPIClassInstance rubyClassByName:@"Rho.OidcNative" instanceID:defID] level:0] UTF8String];

    return res;
}

rho::String js_s_OidcNative_setDefaultID(const rho::String& strObjID, rho::json::CJSONArray& argv, const rho::String& strCallbackID, const rho::String& strJsVmID, const rho::String& strCallbackParam)
{
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    rho::json::CJSONEntry el = argv[0];

    if (el.isString()) {
        NSString* defID = [NSString stringWithUTF8String:(el.getString())];

        [singleton setDefaultID:defID];

        return [[CJSConverter convertToJS:nil level:0] UTF8String];
    }

    return "\"result\":null,\"error\":\"Method parameter should be defined as string!\"";
}

