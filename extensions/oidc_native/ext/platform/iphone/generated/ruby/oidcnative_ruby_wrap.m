
#import "IOidcNative.h"
//#import "api_generator/common/ruby_helpers.h"

#import "ruby/ext/rho/rhoruby.h"
#import "api_generator/iphone/CMethodResult.h"
#import "api_generator/iphone/CRubyConverter.h"

extern VALUE getRuby_OidcNative_Module();



@interface OidcNative_RubyValueFactory : NSObject<IMethodResult_RubyObjectFactory> {
}

- (VALUE) makeRubyValue:(NSObject*)obj;
+ (OidcNative_RubyValueFactory*) getSharedInstance;

@end

static OidcNative_RubyValueFactory* our_OidcNative_RubyValueFactory = nil;

@implementation OidcNative_RubyValueFactory

- (VALUE) makeRubyValue:(NSObject*)obj {
    VALUE v = rho_ruby_get_NIL();
    if ([obj isKindOfClass:[NSString class]]) {
        // single objects id
        NSString* strRes = (NSString*)obj;
        v = rho_ruby_create_object_with_id( getRuby_OidcNative_Module(), [strRes UTF8String] );
    }
    else if ([obj isKindOfClass:[NSArray class]]) {
        // list of IDs
        v = rho_ruby_create_array();
        NSArray* arrRes = (NSArray*)obj;
        int i;
        for (i = 0; i < [arrRes count]; i++) {
            NSString* strItem = (NSString*)[arrRes objectAtIndex:i];
            VALUE vItem = rho_ruby_create_object_with_id( getRuby_OidcNative_Module(), [strItem UTF8String] );
            rho_ruby_add_to_array(v, vItem);
        }
    }
    return v;
}

+ (OidcNative_RubyValueFactory*) getSharedInstance {
    if (our_OidcNative_RubyValueFactory == nil) {
        our_OidcNative_RubyValueFactory = [[OidcNative_RubyValueFactory alloc] init];
    }
    return our_OidcNative_RubyValueFactory;
}

@end


id<IOidcNative> OidcNative_makeInstanceByRubyObject(VALUE obj) {
    const char* szID = rho_ruby_get_object_id( obj );
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    return [factory getOidcNativeByID:[NSString stringWithUTF8String:szID]];
}









@interface rb_OidcNative_getSimpleStringProperty_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(rb_OidcNative_getSimpleStringProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation rb_OidcNative_getSimpleStringProperty_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(rb_OidcNative_getSimpleStringProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    rb_OidcNative_getSimpleStringProperty_caller_params* par = [[[rb_OidcNative_getSimpleStringProperty_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface rb_OidcNative_getSimpleStringProperty_caller : NSObject {

}
+(rb_OidcNative_getSimpleStringProperty_caller*) getSharedInstance;
+(void) getSimpleStringProperty:(rb_OidcNative_getSimpleStringProperty_caller_params*)caller_params;
+(void) getSimpleStringProperty_in_thread:(rb_OidcNative_getSimpleStringProperty_caller_params*)caller_params;
+(void) getSimpleStringProperty_in_UI_thread:(rb_OidcNative_getSimpleStringProperty_caller_params*)caller_params;

@end

static rb_OidcNative_getSimpleStringProperty_caller* our_OidcNative_getSimpleStringProperty_caller = nil;

@implementation rb_OidcNative_getSimpleStringProperty_caller

+(rb_OidcNative_getSimpleStringProperty_caller*) getSharedInstance {
    if (our_OidcNative_getSimpleStringProperty_caller == nil) {
        our_OidcNative_getSimpleStringProperty_caller = [[rb_OidcNative_getSimpleStringProperty_caller alloc] init];
    }
    return our_OidcNative_getSimpleStringProperty_caller;
}

-(void) command_getSimpleStringProperty:(rb_OidcNative_getSimpleStringProperty_caller_params*)caller_params {

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem getSimpleStringProperty:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}

+(void) getSimpleStringProperty:(rb_OidcNative_getSimpleStringProperty_caller_params*)caller_params {
    [[rb_OidcNative_getSimpleStringProperty_caller getSharedInstance] command_getSimpleStringProperty:caller_params];
}

+(void) getSimpleStringProperty_in_thread:(rb_OidcNative_getSimpleStringProperty_caller_params*)caller_params {
    [[rb_OidcNative_getSimpleStringProperty_caller getSharedInstance] performSelectorInBackground:@selector(command_getSimpleStringProperty:) withObject:caller_params];
}

+(void) getSimpleStringProperty_in_UI_thread:(rb_OidcNative_getSimpleStringProperty_caller_params*)caller_params {
    [[rb_OidcNative_getSimpleStringProperty_caller getSharedInstance] performSelectorOnMainThread:@selector(command_getSimpleStringProperty:) withObject:caller_params waitUntilDone:NO];
}


@end


VALUE rb_OidcNative_getSimpleStringProperty_Obj(int argc, VALUE *argv, id<IOidcNative>objItem) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[0+1];
    NSString* callbackURL = nil;
    unsigned long callbackMethod = 0;
    NSString* callbackParam = nil;
    BOOL method_return_result = YES;

    [methodResult setMethodSignature:@"OidcNative::simpleStringProperty"];

    
    BOOL is_factory_param[] = { NO };

    int i;

    // init
    for (i = 0; i < (0); i++) {
        params[i] = [NSNull null];
    }

    

    // enumerate params
    for (int i = 0; i < (0); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByRubyObject(argv[i]);
            }
            else {
                params[i] = [[CRubyConverter convertFromRuby:argv[i]] retain];
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(0)];
    for (i = 0 ; i < (0); i++) {
        [params_array addObject:params[i]];
    }

    
    // check callback
    if (argc >= (0+1)) {
        VALUE callback = argv[0];
        if (rho_ruby_is_string(callback)) {
            callbackURL = [((NSString*)[CRubyConverter convertFromRuby:callback]) retain];
        }
        else if (rho_ruby_is_proc(callback) || rho_ruby_is_method(callback)) {
            callbackMethod = callback;
        }
    }
    // check callback param
    if (argc >= (0+2)) {
        VALUE callback_param = argv[0+1];
        if (rho_ruby_is_string(callback_param)) {
            callbackParam = [((NSString*)[CRubyConverter convertFromRuby:callback_param]) retain];
        }
    }
    

    
    


    if ((callbackURL != nil) || (callbackMethod != 0)) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        if (callbackURL != nil)
            [methodResult setRubyCallback:callbackURL];
        if (callbackMethod != 0)
            [methodResult setRubyCallbackMethod:callbackMethod];
        if (callbackParam != nil) {
            [methodResult setCallbackParam:callbackParam];
        }
        
        [rb_OidcNative_getSimpleStringProperty_caller getSimpleStringProperty_in_thread:[rb_OidcNative_getSimpleStringProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [rb_OidcNative_getSimpleStringProperty_caller getSimpleStringProperty:[rb_OidcNative_getSimpleStringProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    VALUE resValue = rho_ruby_get_NIL();
    if ((callbackURL == nil) && (callbackMethod == 0) && (method_return_result)) {
        resValue = [methodResult toRuby];
    }
    [methodResult release];
    return resValue;
}


VALUE rb_OidcNative_getSimpleStringProperty(int argc, VALUE *argv, VALUE obj) {

    id<IOidcNative> item = OidcNative_makeInstanceByRubyObject(obj);
    return rb_OidcNative_getSimpleStringProperty_Obj(argc, argv, item);

}

VALUE rb_s_OidcNative_def_getSimpleStringProperty(int argc, VALUE *argv) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return rb_OidcNative_getSimpleStringProperty_Obj(argc, argv, item);
}







@interface rb_OidcNative_setSimpleStringProperty_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(rb_OidcNative_setSimpleStringProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation rb_OidcNative_setSimpleStringProperty_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(rb_OidcNative_setSimpleStringProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    rb_OidcNative_setSimpleStringProperty_caller_params* par = [[[rb_OidcNative_setSimpleStringProperty_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface rb_OidcNative_setSimpleStringProperty_caller : NSObject {

}
+(rb_OidcNative_setSimpleStringProperty_caller*) getSharedInstance;
+(void) setSimpleStringProperty:(rb_OidcNative_setSimpleStringProperty_caller_params*)caller_params;
+(void) setSimpleStringProperty_in_thread:(rb_OidcNative_setSimpleStringProperty_caller_params*)caller_params;
+(void) setSimpleStringProperty_in_UI_thread:(rb_OidcNative_setSimpleStringProperty_caller_params*)caller_params;

@end

static rb_OidcNative_setSimpleStringProperty_caller* our_OidcNative_setSimpleStringProperty_caller = nil;

@implementation rb_OidcNative_setSimpleStringProperty_caller

+(rb_OidcNative_setSimpleStringProperty_caller*) getSharedInstance {
    if (our_OidcNative_setSimpleStringProperty_caller == nil) {
        our_OidcNative_setSimpleStringProperty_caller = [[rb_OidcNative_setSimpleStringProperty_caller alloc] init];
    }
    return our_OidcNative_setSimpleStringProperty_caller;
}

-(void) command_setSimpleStringProperty:(rb_OidcNative_setSimpleStringProperty_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem setSimpleStringProperty:(NSString*)[params objectAtIndex:0] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}

+(void) setSimpleStringProperty:(rb_OidcNative_setSimpleStringProperty_caller_params*)caller_params {
    [[rb_OidcNative_setSimpleStringProperty_caller getSharedInstance] command_setSimpleStringProperty:caller_params];
}

+(void) setSimpleStringProperty_in_thread:(rb_OidcNative_setSimpleStringProperty_caller_params*)caller_params {
    [[rb_OidcNative_setSimpleStringProperty_caller getSharedInstance] performSelectorInBackground:@selector(command_setSimpleStringProperty:) withObject:caller_params];
}

+(void) setSimpleStringProperty_in_UI_thread:(rb_OidcNative_setSimpleStringProperty_caller_params*)caller_params {
    [[rb_OidcNative_setSimpleStringProperty_caller getSharedInstance] performSelectorOnMainThread:@selector(command_setSimpleStringProperty:) withObject:caller_params waitUntilDone:NO];
}


@end


VALUE rb_OidcNative_setSimpleStringProperty_Obj(int argc, VALUE *argv, id<IOidcNative>objItem) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[1+1];
    NSString* callbackURL = nil;
    unsigned long callbackMethod = 0;
    NSString* callbackParam = nil;
    BOOL method_return_result = YES;

    [methodResult setMethodSignature:@"OidcNative::simpleStringProperty="];

    
    BOOL is_factory_param[] = { NO, NO };

    int i;

    // init
    for (i = 0; i < (1); i++) {
        params[i] = [NSNull null];
    }

    

    // enumerate params
    for (int i = 0; i < (1); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByRubyObject(argv[i]);
            }
            else {
                params[i] = [[CRubyConverter convertFromRuby:argv[i]] retain];
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(1)];
    for (i = 0 ; i < (1); i++) {
        [params_array addObject:params[i]];
    }

    
    // check callback
    if (argc >= (1+1)) {
        VALUE callback = argv[1];
        if (rho_ruby_is_string(callback)) {
            callbackURL = [((NSString*)[CRubyConverter convertFromRuby:callback]) retain];
        }
        else if (rho_ruby_is_proc(callback) || rho_ruby_is_method(callback)) {
            callbackMethod = callback;
        }
    }
    // check callback param
    if (argc >= (1+2)) {
        VALUE callback_param = argv[1+1];
        if (rho_ruby_is_string(callback_param)) {
            callbackParam = [((NSString*)[CRubyConverter convertFromRuby:callback_param]) retain];
        }
    }
    

    
    


    if ((callbackURL != nil) || (callbackMethod != 0)) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        if (callbackURL != nil)
            [methodResult setRubyCallback:callbackURL];
        if (callbackMethod != 0)
            [methodResult setRubyCallbackMethod:callbackMethod];
        if (callbackParam != nil) {
            [methodResult setCallbackParam:callbackParam];
        }
        
        [rb_OidcNative_setSimpleStringProperty_caller setSimpleStringProperty_in_thread:[rb_OidcNative_setSimpleStringProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [rb_OidcNative_setSimpleStringProperty_caller setSimpleStringProperty:[rb_OidcNative_setSimpleStringProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    VALUE resValue = rho_ruby_get_NIL();
    if ((callbackURL == nil) && (callbackMethod == 0) && (method_return_result)) {
        resValue = [methodResult toRuby];
    }
    [methodResult release];
    return resValue;
}


VALUE rb_OidcNative_setSimpleStringProperty(int argc, VALUE *argv, VALUE obj) {

    id<IOidcNative> item = OidcNative_makeInstanceByRubyObject(obj);
    return rb_OidcNative_setSimpleStringProperty_Obj(argc, argv, item);

}

VALUE rb_s_OidcNative_def_setSimpleStringProperty(int argc, VALUE *argv) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return rb_OidcNative_setSimpleStringProperty_Obj(argc, argv, item);
}







@interface rb_OidcNative_enumerate_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNativeSingleton> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(rb_OidcNative_enumerate_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNativeSingleton>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation rb_OidcNative_enumerate_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(rb_OidcNative_enumerate_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNativeSingleton>)_item _methodResult:(CMethodResult*)_methodResult {
    rb_OidcNative_enumerate_caller_params* par = [[[rb_OidcNative_enumerate_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface rb_OidcNative_enumerate_caller : NSObject {

}
+(rb_OidcNative_enumerate_caller*) getSharedInstance;
+(void) enumerate:(rb_OidcNative_enumerate_caller_params*)caller_params;
+(void) enumerate_in_thread:(rb_OidcNative_enumerate_caller_params*)caller_params;
+(void) enumerate_in_UI_thread:(rb_OidcNative_enumerate_caller_params*)caller_params;

@end

static rb_OidcNative_enumerate_caller* our_OidcNative_enumerate_caller = nil;

@implementation rb_OidcNative_enumerate_caller

+(rb_OidcNative_enumerate_caller*) getSharedInstance {
    if (our_OidcNative_enumerate_caller == nil) {
        our_OidcNative_enumerate_caller = [[rb_OidcNative_enumerate_caller alloc] init];
    }
    return our_OidcNative_enumerate_caller;
}

-(void) command_enumerate:(rb_OidcNative_enumerate_caller_params*)caller_params {

    id<IOidcNativeSingleton> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem enumerate:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}

+(void) enumerate:(rb_OidcNative_enumerate_caller_params*)caller_params {
    [[rb_OidcNative_enumerate_caller getSharedInstance] command_enumerate:caller_params];
}

+(void) enumerate_in_thread:(rb_OidcNative_enumerate_caller_params*)caller_params {
    [[rb_OidcNative_enumerate_caller getSharedInstance] performSelectorInBackground:@selector(command_enumerate:) withObject:caller_params];
}

+(void) enumerate_in_UI_thread:(rb_OidcNative_enumerate_caller_params*)caller_params {
    [[rb_OidcNative_enumerate_caller getSharedInstance] performSelectorOnMainThread:@selector(command_enumerate:) withObject:caller_params waitUntilDone:NO];
}


@end


VALUE rb_OidcNative_enumerate_Obj(int argc, VALUE *argv, id<IOidcNativeSingleton>objItem) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[0+1];
    NSString* callbackURL = nil;
    unsigned long callbackMethod = 0;
    NSString* callbackParam = nil;
    BOOL method_return_result = YES;

    [methodResult setMethodSignature:@"OidcNative::enumerate"];

    
    BOOL is_factory_param[] = { NO };

    int i;

    // init
    for (i = 0; i < (0); i++) {
        params[i] = [NSNull null];
    }

    

    // enumerate params
    for (int i = 0; i < (0); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByRubyObject(argv[i]);
            }
            else {
                params[i] = [[CRubyConverter convertFromRuby:argv[i]] retain];
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(0)];
    for (i = 0 ; i < (0); i++) {
        [params_array addObject:params[i]];
    }

    
    // check callback
    if (argc >= (0+1)) {
        VALUE callback = argv[0];
        if (rho_ruby_is_string(callback)) {
            callbackURL = [((NSString*)[CRubyConverter convertFromRuby:callback]) retain];
        }
        else if (rho_ruby_is_proc(callback) || rho_ruby_is_method(callback)) {
            callbackMethod = callback;
        }
    }
    // check callback param
    if (argc >= (0+2)) {
        VALUE callback_param = argv[0+1];
        if (rho_ruby_is_string(callback_param)) {
            callbackParam = [((NSString*)[CRubyConverter convertFromRuby:callback_param]) retain];
        }
    }
    

    
    [methodResult enableObjectCreationModeWithRubyClassPath:@"Rho::OidcNative"];


    if ((callbackURL != nil) || (callbackMethod != 0)) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        if (callbackURL != nil)
            [methodResult setRubyCallback:callbackURL];
        if (callbackMethod != 0)
            [methodResult setRubyCallbackMethod:callbackMethod];
        if (callbackParam != nil) {
            [methodResult setCallbackParam:callbackParam];
        }
        
        [rb_OidcNative_enumerate_caller enumerate_in_thread:[rb_OidcNative_enumerate_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [rb_OidcNative_enumerate_caller enumerate:[rb_OidcNative_enumerate_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    VALUE resValue = rho_ruby_get_NIL();
    if ((callbackURL == nil) && (callbackMethod == 0) && (method_return_result)) {
        resValue = [methodResult toRuby];
    }
    [methodResult release];
    return resValue;
}


VALUE rb_s_OidcNative_enumerate(int argc, VALUE *argv) {

    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];
    return rb_OidcNative_enumerate_Obj(argc, argv, singleton);

}







@interface rb_OidcNative_getPlatformName_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(rb_OidcNative_getPlatformName_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation rb_OidcNative_getPlatformName_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(rb_OidcNative_getPlatformName_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    rb_OidcNative_getPlatformName_caller_params* par = [[[rb_OidcNative_getPlatformName_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface rb_OidcNative_getPlatformName_caller : NSObject {

}
+(rb_OidcNative_getPlatformName_caller*) getSharedInstance;
+(void) getPlatformName:(rb_OidcNative_getPlatformName_caller_params*)caller_params;
+(void) getPlatformName_in_thread:(rb_OidcNative_getPlatformName_caller_params*)caller_params;
+(void) getPlatformName_in_UI_thread:(rb_OidcNative_getPlatformName_caller_params*)caller_params;

@end

static rb_OidcNative_getPlatformName_caller* our_OidcNative_getPlatformName_caller = nil;

@implementation rb_OidcNative_getPlatformName_caller

+(rb_OidcNative_getPlatformName_caller*) getSharedInstance {
    if (our_OidcNative_getPlatformName_caller == nil) {
        our_OidcNative_getPlatformName_caller = [[rb_OidcNative_getPlatformName_caller alloc] init];
    }
    return our_OidcNative_getPlatformName_caller;
}

-(void) command_getPlatformName:(rb_OidcNative_getPlatformName_caller_params*)caller_params {

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem getPlatformName:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}

+(void) getPlatformName:(rb_OidcNative_getPlatformName_caller_params*)caller_params {
    [[rb_OidcNative_getPlatformName_caller getSharedInstance] command_getPlatformName:caller_params];
}

+(void) getPlatformName_in_thread:(rb_OidcNative_getPlatformName_caller_params*)caller_params {
    [[rb_OidcNative_getPlatformName_caller getSharedInstance] performSelectorInBackground:@selector(command_getPlatformName:) withObject:caller_params];
}

+(void) getPlatformName_in_UI_thread:(rb_OidcNative_getPlatformName_caller_params*)caller_params {
    [[rb_OidcNative_getPlatformName_caller getSharedInstance] performSelectorOnMainThread:@selector(command_getPlatformName:) withObject:caller_params waitUntilDone:NO];
}


@end


VALUE rb_OidcNative_getPlatformName_Obj(int argc, VALUE *argv, id<IOidcNative>objItem) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[0+1];
    NSString* callbackURL = nil;
    unsigned long callbackMethod = 0;
    NSString* callbackParam = nil;
    BOOL method_return_result = YES;

    [methodResult setMethodSignature:@"OidcNative::getPlatformName"];

    
    BOOL is_factory_param[] = { NO };

    int i;

    // init
    for (i = 0; i < (0); i++) {
        params[i] = [NSNull null];
    }

    

    // enumerate params
    for (int i = 0; i < (0); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByRubyObject(argv[i]);
            }
            else {
                params[i] = [[CRubyConverter convertFromRuby:argv[i]] retain];
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(0)];
    for (i = 0 ; i < (0); i++) {
        [params_array addObject:params[i]];
    }

    
    // check callback
    if (argc >= (0+1)) {
        VALUE callback = argv[0];
        if (rho_ruby_is_string(callback)) {
            callbackURL = [((NSString*)[CRubyConverter convertFromRuby:callback]) retain];
        }
        else if (rho_ruby_is_proc(callback) || rho_ruby_is_method(callback)) {
            callbackMethod = callback;
        }
    }
    // check callback param
    if (argc >= (0+2)) {
        VALUE callback_param = argv[0+1];
        if (rho_ruby_is_string(callback_param)) {
            callbackParam = [((NSString*)[CRubyConverter convertFromRuby:callback_param]) retain];
        }
    }
    

    
    


    if ((callbackURL != nil) || (callbackMethod != 0)) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        if (callbackURL != nil)
            [methodResult setRubyCallback:callbackURL];
        if (callbackMethod != 0)
            [methodResult setRubyCallbackMethod:callbackMethod];
        if (callbackParam != nil) {
            [methodResult setCallbackParam:callbackParam];
        }
        
        [rb_OidcNative_getPlatformName_caller getPlatformName_in_thread:[rb_OidcNative_getPlatformName_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [rb_OidcNative_getPlatformName_caller getPlatformName:[rb_OidcNative_getPlatformName_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    VALUE resValue = rho_ruby_get_NIL();
    if ((callbackURL == nil) && (callbackMethod == 0) && (method_return_result)) {
        resValue = [methodResult toRuby];
    }
    [methodResult release];
    return resValue;
}


VALUE rb_OidcNative_getPlatformName(int argc, VALUE *argv, VALUE obj) {

    id<IOidcNative> item = OidcNative_makeInstanceByRubyObject(obj);
    return rb_OidcNative_getPlatformName_Obj(argc, argv, item);

}

VALUE rb_s_OidcNative_def_getPlatformName(int argc, VALUE *argv) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return rb_OidcNative_getPlatformName_Obj(argc, argv, item);
}







@interface rb_OidcNative_calcSumm_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(rb_OidcNative_calcSumm_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation rb_OidcNative_calcSumm_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(rb_OidcNative_calcSumm_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    rb_OidcNative_calcSumm_caller_params* par = [[[rb_OidcNative_calcSumm_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface rb_OidcNative_calcSumm_caller : NSObject {

}
+(rb_OidcNative_calcSumm_caller*) getSharedInstance;
+(void) calcSumm:(rb_OidcNative_calcSumm_caller_params*)caller_params;
+(void) calcSumm_in_thread:(rb_OidcNative_calcSumm_caller_params*)caller_params;
+(void) calcSumm_in_UI_thread:(rb_OidcNative_calcSumm_caller_params*)caller_params;

@end

static rb_OidcNative_calcSumm_caller* our_OidcNative_calcSumm_caller = nil;

@implementation rb_OidcNative_calcSumm_caller

+(rb_OidcNative_calcSumm_caller*) getSharedInstance {
    if (our_OidcNative_calcSumm_caller == nil) {
        our_OidcNative_calcSumm_caller = [[rb_OidcNative_calcSumm_caller alloc] init];
    }
    return our_OidcNative_calcSumm_caller;
}

-(void) command_calcSumm:(rb_OidcNative_calcSumm_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem calcSumm:(int)[((NSNumber*)[params objectAtIndex:0]) intValue] b:(int)[((NSNumber*)[params objectAtIndex:1]) intValue] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}

+(void) calcSumm:(rb_OidcNative_calcSumm_caller_params*)caller_params {
    [[rb_OidcNative_calcSumm_caller getSharedInstance] command_calcSumm:caller_params];
}

+(void) calcSumm_in_thread:(rb_OidcNative_calcSumm_caller_params*)caller_params {
    [[rb_OidcNative_calcSumm_caller getSharedInstance] performSelectorInBackground:@selector(command_calcSumm:) withObject:caller_params];
}

+(void) calcSumm_in_UI_thread:(rb_OidcNative_calcSumm_caller_params*)caller_params {
    [[rb_OidcNative_calcSumm_caller getSharedInstance] performSelectorOnMainThread:@selector(command_calcSumm:) withObject:caller_params waitUntilDone:NO];
}


@end


VALUE rb_OidcNative_calcSumm_Obj(int argc, VALUE *argv, id<IOidcNative>objItem) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[2+1];
    NSString* callbackURL = nil;
    unsigned long callbackMethod = 0;
    NSString* callbackParam = nil;
    BOOL method_return_result = YES;

    [methodResult setMethodSignature:@"OidcNative::calcSumm"];

    
    BOOL is_factory_param[] = { NO, NO, NO };

    int i;

    // init
    for (i = 0; i < (2); i++) {
        params[i] = [NSNull null];
    }

    

    // enumerate params
    for (int i = 0; i < (2); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByRubyObject(argv[i]);
            }
            else {
                params[i] = [[CRubyConverter convertFromRuby:argv[i]] retain];
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(2)];
    for (i = 0 ; i < (2); i++) {
        [params_array addObject:params[i]];
    }

    
    // check callback
    if (argc >= (2+1)) {
        VALUE callback = argv[2];
        if (rho_ruby_is_string(callback)) {
            callbackURL = [((NSString*)[CRubyConverter convertFromRuby:callback]) retain];
        }
        else if (rho_ruby_is_proc(callback) || rho_ruby_is_method(callback)) {
            callbackMethod = callback;
        }
    }
    // check callback param
    if (argc >= (2+2)) {
        VALUE callback_param = argv[2+1];
        if (rho_ruby_is_string(callback_param)) {
            callbackParam = [((NSString*)[CRubyConverter convertFromRuby:callback_param]) retain];
        }
    }
    

    
    


    if ((callbackURL != nil) || (callbackMethod != 0)) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        if (callbackURL != nil)
            [methodResult setRubyCallback:callbackURL];
        if (callbackMethod != 0)
            [methodResult setRubyCallbackMethod:callbackMethod];
        if (callbackParam != nil) {
            [methodResult setCallbackParam:callbackParam];
        }
        
        [rb_OidcNative_calcSumm_caller calcSumm_in_thread:[rb_OidcNative_calcSumm_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [rb_OidcNative_calcSumm_caller calcSumm:[rb_OidcNative_calcSumm_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    VALUE resValue = rho_ruby_get_NIL();
    if ((callbackURL == nil) && (callbackMethod == 0) && (method_return_result)) {
        resValue = [methodResult toRuby];
    }
    [methodResult release];
    return resValue;
}


VALUE rb_OidcNative_calcSumm(int argc, VALUE *argv, VALUE obj) {

    id<IOidcNative> item = OidcNative_makeInstanceByRubyObject(obj);
    return rb_OidcNative_calcSumm_Obj(argc, argv, item);

}

VALUE rb_s_OidcNative_def_calcSumm(int argc, VALUE *argv) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return rb_OidcNative_calcSumm_Obj(argc, argv, item);
}







@interface rb_OidcNative_joinStrings_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(rb_OidcNative_joinStrings_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation rb_OidcNative_joinStrings_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(rb_OidcNative_joinStrings_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    rb_OidcNative_joinStrings_caller_params* par = [[[rb_OidcNative_joinStrings_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface rb_OidcNative_joinStrings_caller : NSObject {

}
+(rb_OidcNative_joinStrings_caller*) getSharedInstance;
+(void) joinStrings:(rb_OidcNative_joinStrings_caller_params*)caller_params;
+(void) joinStrings_in_thread:(rb_OidcNative_joinStrings_caller_params*)caller_params;
+(void) joinStrings_in_UI_thread:(rb_OidcNative_joinStrings_caller_params*)caller_params;

@end

static rb_OidcNative_joinStrings_caller* our_OidcNative_joinStrings_caller = nil;

@implementation rb_OidcNative_joinStrings_caller

+(rb_OidcNative_joinStrings_caller*) getSharedInstance {
    if (our_OidcNative_joinStrings_caller == nil) {
        our_OidcNative_joinStrings_caller = [[rb_OidcNative_joinStrings_caller alloc] init];
    }
    return our_OidcNative_joinStrings_caller;
}

-(void) command_joinStrings:(rb_OidcNative_joinStrings_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem joinStrings:(NSString*)[params objectAtIndex:0] b:(NSString*)[params objectAtIndex:1] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}

+(void) joinStrings:(rb_OidcNative_joinStrings_caller_params*)caller_params {
    [[rb_OidcNative_joinStrings_caller getSharedInstance] command_joinStrings:caller_params];
}

+(void) joinStrings_in_thread:(rb_OidcNative_joinStrings_caller_params*)caller_params {
    [[rb_OidcNative_joinStrings_caller getSharedInstance] performSelectorInBackground:@selector(command_joinStrings:) withObject:caller_params];
}

+(void) joinStrings_in_UI_thread:(rb_OidcNative_joinStrings_caller_params*)caller_params {
    [[rb_OidcNative_joinStrings_caller getSharedInstance] performSelectorOnMainThread:@selector(command_joinStrings:) withObject:caller_params waitUntilDone:NO];
}


@end


VALUE rb_OidcNative_joinStrings_Obj(int argc, VALUE *argv, id<IOidcNative>objItem) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[2+1];
    NSString* callbackURL = nil;
    unsigned long callbackMethod = 0;
    NSString* callbackParam = nil;
    BOOL method_return_result = YES;

    [methodResult setMethodSignature:@"OidcNative::joinStrings"];

    
    BOOL is_factory_param[] = { NO, NO, NO };

    int i;

    // init
    for (i = 0; i < (2); i++) {
        params[i] = [NSNull null];
    }

    

    // enumerate params
    for (int i = 0; i < (2); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByRubyObject(argv[i]);
            }
            else {
                params[i] = [[CRubyConverter convertFromRuby:argv[i]] retain];
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(2)];
    for (i = 0 ; i < (2); i++) {
        [params_array addObject:params[i]];
    }

    
    // check callback
    if (argc >= (2+1)) {
        VALUE callback = argv[2];
        if (rho_ruby_is_string(callback)) {
            callbackURL = [((NSString*)[CRubyConverter convertFromRuby:callback]) retain];
        }
        else if (rho_ruby_is_proc(callback) || rho_ruby_is_method(callback)) {
            callbackMethod = callback;
        }
    }
    // check callback param
    if (argc >= (2+2)) {
        VALUE callback_param = argv[2+1];
        if (rho_ruby_is_string(callback_param)) {
            callbackParam = [((NSString*)[CRubyConverter convertFromRuby:callback_param]) retain];
        }
    }
    

    
    


    if ((callbackURL != nil) || (callbackMethod != 0)) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        if (callbackURL != nil)
            [methodResult setRubyCallback:callbackURL];
        if (callbackMethod != 0)
            [methodResult setRubyCallbackMethod:callbackMethod];
        if (callbackParam != nil) {
            [methodResult setCallbackParam:callbackParam];
        }
        
        [rb_OidcNative_joinStrings_caller joinStrings_in_thread:[rb_OidcNative_joinStrings_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [rb_OidcNative_joinStrings_caller joinStrings:[rb_OidcNative_joinStrings_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    VALUE resValue = rho_ruby_get_NIL();
    if ((callbackURL == nil) && (callbackMethod == 0) && (method_return_result)) {
        resValue = [methodResult toRuby];
    }
    [methodResult release];
    return resValue;
}


VALUE rb_OidcNative_joinStrings(int argc, VALUE *argv, VALUE obj) {

    id<IOidcNative> item = OidcNative_makeInstanceByRubyObject(obj);
    return rb_OidcNative_joinStrings_Obj(argc, argv, item);

}

VALUE rb_s_OidcNative_def_joinStrings(int argc, VALUE *argv) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return rb_OidcNative_joinStrings_Obj(argc, argv, item);
}







@interface rb_OidcNative_getProperty_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(rb_OidcNative_getProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation rb_OidcNative_getProperty_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(rb_OidcNative_getProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    rb_OidcNative_getProperty_caller_params* par = [[[rb_OidcNative_getProperty_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface rb_OidcNative_getProperty_caller : NSObject {

}
+(rb_OidcNative_getProperty_caller*) getSharedInstance;
+(void) getProperty:(rb_OidcNative_getProperty_caller_params*)caller_params;
+(void) getProperty_in_thread:(rb_OidcNative_getProperty_caller_params*)caller_params;
+(void) getProperty_in_UI_thread:(rb_OidcNative_getProperty_caller_params*)caller_params;

@end

static rb_OidcNative_getProperty_caller* our_OidcNative_getProperty_caller = nil;

@implementation rb_OidcNative_getProperty_caller

+(rb_OidcNative_getProperty_caller*) getSharedInstance {
    if (our_OidcNative_getProperty_caller == nil) {
        our_OidcNative_getProperty_caller = [[rb_OidcNative_getProperty_caller alloc] init];
    }
    return our_OidcNative_getProperty_caller;
}

-(void) command_getProperty:(rb_OidcNative_getProperty_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem getProperty:(NSString*)[params objectAtIndex:0] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}

+(void) getProperty:(rb_OidcNative_getProperty_caller_params*)caller_params {
    [[rb_OidcNative_getProperty_caller getSharedInstance] command_getProperty:caller_params];
}

+(void) getProperty_in_thread:(rb_OidcNative_getProperty_caller_params*)caller_params {
    [[rb_OidcNative_getProperty_caller getSharedInstance] performSelectorInBackground:@selector(command_getProperty:) withObject:caller_params];
}

+(void) getProperty_in_UI_thread:(rb_OidcNative_getProperty_caller_params*)caller_params {
    [[rb_OidcNative_getProperty_caller getSharedInstance] performSelectorOnMainThread:@selector(command_getProperty:) withObject:caller_params waitUntilDone:NO];
}


@end


VALUE rb_OidcNative_getProperty_Obj(int argc, VALUE *argv, id<IOidcNative>objItem) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[1+1];
    NSString* callbackURL = nil;
    unsigned long callbackMethod = 0;
    NSString* callbackParam = nil;
    BOOL method_return_result = YES;

    [methodResult setMethodSignature:@"OidcNative::getProperty"];

    
    BOOL is_factory_param[] = { NO, NO };

    int i;

    // init
    for (i = 0; i < (1); i++) {
        params[i] = [NSNull null];
    }

    

    // enumerate params
    for (int i = 0; i < (1); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByRubyObject(argv[i]);
            }
            else {
                params[i] = [[CRubyConverter convertFromRuby:argv[i]] retain];
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(1)];
    for (i = 0 ; i < (1); i++) {
        [params_array addObject:params[i]];
    }

    
    // check callback
    if (argc >= (1+1)) {
        VALUE callback = argv[1];
        if (rho_ruby_is_string(callback)) {
            callbackURL = [((NSString*)[CRubyConverter convertFromRuby:callback]) retain];
        }
        else if (rho_ruby_is_proc(callback) || rho_ruby_is_method(callback)) {
            callbackMethod = callback;
        }
    }
    // check callback param
    if (argc >= (1+2)) {
        VALUE callback_param = argv[1+1];
        if (rho_ruby_is_string(callback_param)) {
            callbackParam = [((NSString*)[CRubyConverter convertFromRuby:callback_param]) retain];
        }
    }
    

    
    


    if ((callbackURL != nil) || (callbackMethod != 0)) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        if (callbackURL != nil)
            [methodResult setRubyCallback:callbackURL];
        if (callbackMethod != 0)
            [methodResult setRubyCallbackMethod:callbackMethod];
        if (callbackParam != nil) {
            [methodResult setCallbackParam:callbackParam];
        }
        
        [rb_OidcNative_getProperty_caller getProperty_in_thread:[rb_OidcNative_getProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [rb_OidcNative_getProperty_caller getProperty:[rb_OidcNative_getProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    VALUE resValue = rho_ruby_get_NIL();
    if ((callbackURL == nil) && (callbackMethod == 0) && (method_return_result)) {
        resValue = [methodResult toRuby];
    }
    [methodResult release];
    return resValue;
}


VALUE rb_OidcNative_getProperty(int argc, VALUE *argv, VALUE obj) {

    id<IOidcNative> item = OidcNative_makeInstanceByRubyObject(obj);
    return rb_OidcNative_getProperty_Obj(argc, argv, item);

}

VALUE rb_s_OidcNative_def_getProperty(int argc, VALUE *argv) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return rb_OidcNative_getProperty_Obj(argc, argv, item);
}







@interface rb_OidcNative_getProperties_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(rb_OidcNative_getProperties_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation rb_OidcNative_getProperties_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(rb_OidcNative_getProperties_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    rb_OidcNative_getProperties_caller_params* par = [[[rb_OidcNative_getProperties_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface rb_OidcNative_getProperties_caller : NSObject {

}
+(rb_OidcNative_getProperties_caller*) getSharedInstance;
+(void) getProperties:(rb_OidcNative_getProperties_caller_params*)caller_params;
+(void) getProperties_in_thread:(rb_OidcNative_getProperties_caller_params*)caller_params;
+(void) getProperties_in_UI_thread:(rb_OidcNative_getProperties_caller_params*)caller_params;

@end

static rb_OidcNative_getProperties_caller* our_OidcNative_getProperties_caller = nil;

@implementation rb_OidcNative_getProperties_caller

+(rb_OidcNative_getProperties_caller*) getSharedInstance {
    if (our_OidcNative_getProperties_caller == nil) {
        our_OidcNative_getProperties_caller = [[rb_OidcNative_getProperties_caller alloc] init];
    }
    return our_OidcNative_getProperties_caller;
}

-(void) command_getProperties:(rb_OidcNative_getProperties_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem getProperties:(NSArray*)[params objectAtIndex:0] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}

+(void) getProperties:(rb_OidcNative_getProperties_caller_params*)caller_params {
    [[rb_OidcNative_getProperties_caller getSharedInstance] command_getProperties:caller_params];
}

+(void) getProperties_in_thread:(rb_OidcNative_getProperties_caller_params*)caller_params {
    [[rb_OidcNative_getProperties_caller getSharedInstance] performSelectorInBackground:@selector(command_getProperties:) withObject:caller_params];
}

+(void) getProperties_in_UI_thread:(rb_OidcNative_getProperties_caller_params*)caller_params {
    [[rb_OidcNative_getProperties_caller getSharedInstance] performSelectorOnMainThread:@selector(command_getProperties:) withObject:caller_params waitUntilDone:NO];
}


@end


VALUE rb_OidcNative_getProperties_Obj(int argc, VALUE *argv, id<IOidcNative>objItem) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[1+1];
    NSString* callbackURL = nil;
    unsigned long callbackMethod = 0;
    NSString* callbackParam = nil;
    BOOL method_return_result = YES;

    [methodResult setMethodSignature:@"OidcNative::getProperties"];

    
    BOOL is_factory_param[] = { NO, NO };

    int i;

    // init
    for (i = 0; i < (1); i++) {
        params[i] = [NSNull null];
    }

    

    // enumerate params
    for (int i = 0; i < (1); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByRubyObject(argv[i]);
            }
            else {
                params[i] = [[CRubyConverter convertFromRuby:argv[i]] retain];
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(1)];
    for (i = 0 ; i < (1); i++) {
        [params_array addObject:params[i]];
    }

    
    // check callback
    if (argc >= (1+1)) {
        VALUE callback = argv[1];
        if (rho_ruby_is_string(callback)) {
            callbackURL = [((NSString*)[CRubyConverter convertFromRuby:callback]) retain];
        }
        else if (rho_ruby_is_proc(callback) || rho_ruby_is_method(callback)) {
            callbackMethod = callback;
        }
    }
    // check callback param
    if (argc >= (1+2)) {
        VALUE callback_param = argv[1+1];
        if (rho_ruby_is_string(callback_param)) {
            callbackParam = [((NSString*)[CRubyConverter convertFromRuby:callback_param]) retain];
        }
    }
    

    
    


    if ((callbackURL != nil) || (callbackMethod != 0)) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        if (callbackURL != nil)
            [methodResult setRubyCallback:callbackURL];
        if (callbackMethod != 0)
            [methodResult setRubyCallbackMethod:callbackMethod];
        if (callbackParam != nil) {
            [methodResult setCallbackParam:callbackParam];
        }
        
        [rb_OidcNative_getProperties_caller getProperties_in_thread:[rb_OidcNative_getProperties_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [rb_OidcNative_getProperties_caller getProperties:[rb_OidcNative_getProperties_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    VALUE resValue = rho_ruby_get_NIL();
    if ((callbackURL == nil) && (callbackMethod == 0) && (method_return_result)) {
        resValue = [methodResult toRuby];
    }
    [methodResult release];
    return resValue;
}


VALUE rb_OidcNative_getProperties(int argc, VALUE *argv, VALUE obj) {

    id<IOidcNative> item = OidcNative_makeInstanceByRubyObject(obj);
    return rb_OidcNative_getProperties_Obj(argc, argv, item);

}

VALUE rb_s_OidcNative_def_getProperties(int argc, VALUE *argv) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return rb_OidcNative_getProperties_Obj(argc, argv, item);
}







@interface rb_OidcNative_getAllProperties_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(rb_OidcNative_getAllProperties_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation rb_OidcNative_getAllProperties_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(rb_OidcNative_getAllProperties_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    rb_OidcNative_getAllProperties_caller_params* par = [[[rb_OidcNative_getAllProperties_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface rb_OidcNative_getAllProperties_caller : NSObject {

}
+(rb_OidcNative_getAllProperties_caller*) getSharedInstance;
+(void) getAllProperties:(rb_OidcNative_getAllProperties_caller_params*)caller_params;
+(void) getAllProperties_in_thread:(rb_OidcNative_getAllProperties_caller_params*)caller_params;
+(void) getAllProperties_in_UI_thread:(rb_OidcNative_getAllProperties_caller_params*)caller_params;

@end

static rb_OidcNative_getAllProperties_caller* our_OidcNative_getAllProperties_caller = nil;

@implementation rb_OidcNative_getAllProperties_caller

+(rb_OidcNative_getAllProperties_caller*) getSharedInstance {
    if (our_OidcNative_getAllProperties_caller == nil) {
        our_OidcNative_getAllProperties_caller = [[rb_OidcNative_getAllProperties_caller alloc] init];
    }
    return our_OidcNative_getAllProperties_caller;
}

-(void) command_getAllProperties:(rb_OidcNative_getAllProperties_caller_params*)caller_params {

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem getAllProperties:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}

+(void) getAllProperties:(rb_OidcNative_getAllProperties_caller_params*)caller_params {
    [[rb_OidcNative_getAllProperties_caller getSharedInstance] command_getAllProperties:caller_params];
}

+(void) getAllProperties_in_thread:(rb_OidcNative_getAllProperties_caller_params*)caller_params {
    [[rb_OidcNative_getAllProperties_caller getSharedInstance] performSelectorInBackground:@selector(command_getAllProperties:) withObject:caller_params];
}

+(void) getAllProperties_in_UI_thread:(rb_OidcNative_getAllProperties_caller_params*)caller_params {
    [[rb_OidcNative_getAllProperties_caller getSharedInstance] performSelectorOnMainThread:@selector(command_getAllProperties:) withObject:caller_params waitUntilDone:NO];
}


@end


VALUE rb_OidcNative_getAllProperties_Obj(int argc, VALUE *argv, id<IOidcNative>objItem) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[0+1];
    NSString* callbackURL = nil;
    unsigned long callbackMethod = 0;
    NSString* callbackParam = nil;
    BOOL method_return_result = YES;

    [methodResult setMethodSignature:@"OidcNative::getAllProperties"];

    
    BOOL is_factory_param[] = { NO };

    int i;

    // init
    for (i = 0; i < (0); i++) {
        params[i] = [NSNull null];
    }

    

    // enumerate params
    for (int i = 0; i < (0); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByRubyObject(argv[i]);
            }
            else {
                params[i] = [[CRubyConverter convertFromRuby:argv[i]] retain];
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(0)];
    for (i = 0 ; i < (0); i++) {
        [params_array addObject:params[i]];
    }

    
    // check callback
    if (argc >= (0+1)) {
        VALUE callback = argv[0];
        if (rho_ruby_is_string(callback)) {
            callbackURL = [((NSString*)[CRubyConverter convertFromRuby:callback]) retain];
        }
        else if (rho_ruby_is_proc(callback) || rho_ruby_is_method(callback)) {
            callbackMethod = callback;
        }
    }
    // check callback param
    if (argc >= (0+2)) {
        VALUE callback_param = argv[0+1];
        if (rho_ruby_is_string(callback_param)) {
            callbackParam = [((NSString*)[CRubyConverter convertFromRuby:callback_param]) retain];
        }
    }
    

    
    


    if ((callbackURL != nil) || (callbackMethod != 0)) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        if (callbackURL != nil)
            [methodResult setRubyCallback:callbackURL];
        if (callbackMethod != 0)
            [methodResult setRubyCallbackMethod:callbackMethod];
        if (callbackParam != nil) {
            [methodResult setCallbackParam:callbackParam];
        }
        
        [rb_OidcNative_getAllProperties_caller getAllProperties_in_thread:[rb_OidcNative_getAllProperties_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [rb_OidcNative_getAllProperties_caller getAllProperties:[rb_OidcNative_getAllProperties_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    VALUE resValue = rho_ruby_get_NIL();
    if ((callbackURL == nil) && (callbackMethod == 0) && (method_return_result)) {
        resValue = [methodResult toRuby];
    }
    [methodResult release];
    return resValue;
}


VALUE rb_OidcNative_getAllProperties(int argc, VALUE *argv, VALUE obj) {

    id<IOidcNative> item = OidcNative_makeInstanceByRubyObject(obj);
    return rb_OidcNative_getAllProperties_Obj(argc, argv, item);

}

VALUE rb_s_OidcNative_def_getAllProperties(int argc, VALUE *argv) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return rb_OidcNative_getAllProperties_Obj(argc, argv, item);
}







@interface rb_OidcNative_setProperty_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(rb_OidcNative_setProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation rb_OidcNative_setProperty_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(rb_OidcNative_setProperty_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    rb_OidcNative_setProperty_caller_params* par = [[[rb_OidcNative_setProperty_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface rb_OidcNative_setProperty_caller : NSObject {

}
+(rb_OidcNative_setProperty_caller*) getSharedInstance;
+(void) setProperty:(rb_OidcNative_setProperty_caller_params*)caller_params;
+(void) setProperty_in_thread:(rb_OidcNative_setProperty_caller_params*)caller_params;
+(void) setProperty_in_UI_thread:(rb_OidcNative_setProperty_caller_params*)caller_params;

@end

static rb_OidcNative_setProperty_caller* our_OidcNative_setProperty_caller = nil;

@implementation rb_OidcNative_setProperty_caller

+(rb_OidcNative_setProperty_caller*) getSharedInstance {
    if (our_OidcNative_setProperty_caller == nil) {
        our_OidcNative_setProperty_caller = [[rb_OidcNative_setProperty_caller alloc] init];
    }
    return our_OidcNative_setProperty_caller;
}

-(void) command_setProperty:(rb_OidcNative_setProperty_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem setProperty:(NSString*)[params objectAtIndex:0] propertyValue:(NSString*)[params objectAtIndex:1] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}

+(void) setProperty:(rb_OidcNative_setProperty_caller_params*)caller_params {
    [[rb_OidcNative_setProperty_caller getSharedInstance] command_setProperty:caller_params];
}

+(void) setProperty_in_thread:(rb_OidcNative_setProperty_caller_params*)caller_params {
    [[rb_OidcNative_setProperty_caller getSharedInstance] performSelectorInBackground:@selector(command_setProperty:) withObject:caller_params];
}

+(void) setProperty_in_UI_thread:(rb_OidcNative_setProperty_caller_params*)caller_params {
    [[rb_OidcNative_setProperty_caller getSharedInstance] performSelectorOnMainThread:@selector(command_setProperty:) withObject:caller_params waitUntilDone:NO];
}


@end


VALUE rb_OidcNative_setProperty_Obj(int argc, VALUE *argv, id<IOidcNative>objItem) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[2+1];
    NSString* callbackURL = nil;
    unsigned long callbackMethod = 0;
    NSString* callbackParam = nil;
    BOOL method_return_result = YES;

    [methodResult setMethodSignature:@"OidcNative::setProperty"];

    
    BOOL is_factory_param[] = { NO, NO, NO };

    int i;

    // init
    for (i = 0; i < (2); i++) {
        params[i] = [NSNull null];
    }

    

    // enumerate params
    for (int i = 0; i < (2); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByRubyObject(argv[i]);
            }
            else {
                params[i] = [[CRubyConverter convertFromRuby:argv[i]] retain];
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(2)];
    for (i = 0 ; i < (2); i++) {
        [params_array addObject:params[i]];
    }

    
    // check callback
    if (argc >= (2+1)) {
        VALUE callback = argv[2];
        if (rho_ruby_is_string(callback)) {
            callbackURL = [((NSString*)[CRubyConverter convertFromRuby:callback]) retain];
        }
        else if (rho_ruby_is_proc(callback) || rho_ruby_is_method(callback)) {
            callbackMethod = callback;
        }
    }
    // check callback param
    if (argc >= (2+2)) {
        VALUE callback_param = argv[2+1];
        if (rho_ruby_is_string(callback_param)) {
            callbackParam = [((NSString*)[CRubyConverter convertFromRuby:callback_param]) retain];
        }
    }
    

    
    


    if ((callbackURL != nil) || (callbackMethod != 0)) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        if (callbackURL != nil)
            [methodResult setRubyCallback:callbackURL];
        if (callbackMethod != 0)
            [methodResult setRubyCallbackMethod:callbackMethod];
        if (callbackParam != nil) {
            [methodResult setCallbackParam:callbackParam];
        }
        
        [rb_OidcNative_setProperty_caller setProperty_in_thread:[rb_OidcNative_setProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [rb_OidcNative_setProperty_caller setProperty:[rb_OidcNative_setProperty_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    VALUE resValue = rho_ruby_get_NIL();
    if ((callbackURL == nil) && (callbackMethod == 0) && (method_return_result)) {
        resValue = [methodResult toRuby];
    }
    [methodResult release];
    return resValue;
}


VALUE rb_OidcNative_setProperty(int argc, VALUE *argv, VALUE obj) {

    id<IOidcNative> item = OidcNative_makeInstanceByRubyObject(obj);
    return rb_OidcNative_setProperty_Obj(argc, argv, item);

}

VALUE rb_s_OidcNative_def_setProperty(int argc, VALUE *argv) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return rb_OidcNative_setProperty_Obj(argc, argv, item);
}







@interface rb_OidcNative_setProperties_caller_params : NSObject

@property (nonatomic, copy) NSArray* params;
@property (assign) id<IOidcNative> item;
@property (assign) CMethodResult* methodResult;

-(void)dealloc;

+(rb_OidcNative_setProperties_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult;

@end

@implementation rb_OidcNative_setProperties_caller_params

@synthesize params,item,methodResult;

-(void)dealloc {
    [params release];
    [super dealloc];
}

+(rb_OidcNative_setProperties_caller_params*) makeParams:(NSArray*)_params _item:(id<IOidcNative>)_item _methodResult:(CMethodResult*)_methodResult {
    rb_OidcNative_setProperties_caller_params* par = [[[rb_OidcNative_setProperties_caller_params alloc] init] autorelease];
    par.params = _params;
    par.item = _item;
    par.methodResult = [_methodResult retain];
    return [par retain];
}

@end


@interface rb_OidcNative_setProperties_caller : NSObject {

}
+(rb_OidcNative_setProperties_caller*) getSharedInstance;
+(void) setProperties:(rb_OidcNative_setProperties_caller_params*)caller_params;
+(void) setProperties_in_thread:(rb_OidcNative_setProperties_caller_params*)caller_params;
+(void) setProperties_in_UI_thread:(rb_OidcNative_setProperties_caller_params*)caller_params;

@end

static rb_OidcNative_setProperties_caller* our_OidcNative_setProperties_caller = nil;

@implementation rb_OidcNative_setProperties_caller

+(rb_OidcNative_setProperties_caller*) getSharedInstance {
    if (our_OidcNative_setProperties_caller == nil) {
        our_OidcNative_setProperties_caller = [[rb_OidcNative_setProperties_caller alloc] init];
    }
    return our_OidcNative_setProperties_caller;
}

-(void) command_setProperties:(rb_OidcNative_setProperties_caller_params*)caller_params {

    NSArray* params = caller_params.params;

    id<IOidcNative> objItem = caller_params.item;
    CMethodResult* methodResult = caller_params.methodResult;

    
    [objItem setProperties:(NSDictionary*)[params objectAtIndex:0] methodResult:methodResult ];
    [caller_params.methodResult release];
    [caller_params release];
}

+(void) setProperties:(rb_OidcNative_setProperties_caller_params*)caller_params {
    [[rb_OidcNative_setProperties_caller getSharedInstance] command_setProperties:caller_params];
}

+(void) setProperties_in_thread:(rb_OidcNative_setProperties_caller_params*)caller_params {
    [[rb_OidcNative_setProperties_caller getSharedInstance] performSelectorInBackground:@selector(command_setProperties:) withObject:caller_params];
}

+(void) setProperties_in_UI_thread:(rb_OidcNative_setProperties_caller_params*)caller_params {
    [[rb_OidcNative_setProperties_caller getSharedInstance] performSelectorOnMainThread:@selector(command_setProperties:) withObject:caller_params waitUntilDone:NO];
}


@end


VALUE rb_OidcNative_setProperties_Obj(int argc, VALUE *argv, id<IOidcNative>objItem) {

    CMethodResult* methodResult = [[CMethodResult alloc] init];

    NSObject* params[1+1];
    NSString* callbackURL = nil;
    unsigned long callbackMethod = 0;
    NSString* callbackParam = nil;
    BOOL method_return_result = YES;

    [methodResult setMethodSignature:@"OidcNative::setProperties"];

    
    BOOL is_factory_param[] = { NO, NO };

    int i;

    // init
    for (i = 0; i < (1); i++) {
        params[i] = [NSNull null];
    }

    

    // enumerate params
    for (int i = 0; i < (1); i++) {
        if (argc > i) {
            // we have a [i] param !
            if (is_factory_param[i]) {
                params[i] = OidcNative_makeInstanceByRubyObject(argv[i]);
            }
            else {
                params[i] = [[CRubyConverter convertFromRuby:argv[i]] retain];
            }
        }
    }

    NSMutableArray* params_array = [NSMutableArray arrayWithCapacity:(1)];
    for (i = 0 ; i < (1); i++) {
        [params_array addObject:params[i]];
    }

    
    // check callback
    if (argc >= (1+1)) {
        VALUE callback = argv[1];
        if (rho_ruby_is_string(callback)) {
            callbackURL = [((NSString*)[CRubyConverter convertFromRuby:callback]) retain];
        }
        else if (rho_ruby_is_proc(callback) || rho_ruby_is_method(callback)) {
            callbackMethod = callback;
        }
    }
    // check callback param
    if (argc >= (1+2)) {
        VALUE callback_param = argv[1+1];
        if (rho_ruby_is_string(callback_param)) {
            callbackParam = [((NSString*)[CRubyConverter convertFromRuby:callback_param]) retain];
        }
    }
    

    
    


    if ((callbackURL != nil) || (callbackMethod != 0)) {
        // we have callback - method should not call setResult if method execute from current thread - only later or in UI or separated threads !!!
        if (callbackURL != nil)
            [methodResult setRubyCallback:callbackURL];
        if (callbackMethod != 0)
            [methodResult setRubyCallbackMethod:callbackMethod];
        if (callbackParam != nil) {
            [methodResult setCallbackParam:callbackParam];
        }
        
        [rb_OidcNative_setProperties_caller setProperties_in_thread:[rb_OidcNative_setProperties_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        

        // FIXME: callback should not be retained, it must be saved outside of this call
        [methodResult retain];
    }
    else {
        // we do not have callback
        
        [rb_OidcNative_setProperties_caller setProperties:[rb_OidcNative_setProperties_caller_params makeParams:params_array _item:objItem _methodResult:methodResult]];
        
    }
    VALUE resValue = rho_ruby_get_NIL();
    if ((callbackURL == nil) && (callbackMethod == 0) && (method_return_result)) {
        resValue = [methodResult toRuby];
    }
    [methodResult release];
    return resValue;
}


VALUE rb_OidcNative_setProperties(int argc, VALUE *argv, VALUE obj) {

    id<IOidcNative> item = OidcNative_makeInstanceByRubyObject(obj);
    return rb_OidcNative_setProperties_Obj(argc, argv, item);

}

VALUE rb_s_OidcNative_def_setProperties(int argc, VALUE *argv) {
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    id<IOidcNative> item = [factory getOidcNativeByID:defID];
    return rb_OidcNative_setProperties_Obj(argc, argv, item);
}







VALUE rb_OidcNative_s_default(VALUE klass)
{
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    NSString* defID = [singleton getDefaultID];

    return rho_ruby_create_object_with_id( klass, [defID UTF8String] );
}

VALUE rb_OidcNative_s_setDefault(VALUE klass, VALUE valObj)
{
    const char* szID = rho_ruby_get_object_id( valObj );
    id<IOidcNativeFactory> factory = [OidcNativeFactorySingleton getOidcNativeFactoryInstance];
    id<IOidcNativeSingleton> singleton = [factory getOidcNativeSingleton];

    [singleton setDefaultID:[NSString stringWithUTF8String:szID]];

    return rho_ruby_get_NIL();
}



