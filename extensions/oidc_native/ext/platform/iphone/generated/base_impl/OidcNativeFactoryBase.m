
#import "OidcNativeFactoryBase.h"
#import "OidcNative.h"
#import "OidcNativeSingleton.h"



@implementation OidcNativeFactoryBase

-(id)init {
    self = [super init];
    mOidcNativeInstances = [[NSMutableDictionary dictionaryWithCapacity:4] retain];
    mOidcNativeSingleton = nil;
    return self;
}

-(id<IOidcNative>) getOidcNativeByID:(NSString*)ID {
    id<IOidcNative> obj = (OidcNative*)[mOidcNativeInstances objectForKey:ID];
    if (obj == nil) {
        obj = [self createOidcNativeByID:ID];
        [mOidcNativeInstances setObject:obj forKey:ID];
    }
    return obj;
}

-(void) destroyObjectByID:(NSString*)ID {
    OidcNative* obj = [mOidcNativeInstances objectForKey:ID];
    if (obj != nil) {
        [mOidcNativeInstances removeObjectForKey:ID];
    }
}


-(id<IOidcNative>)createOidcNativeByID:(NSString*)ID {
    OidcNative* obj = [[OidcNative alloc] init];

    [obj setProperty:@"ID" propertyValue:ID methodResult:nil];

    return obj;
}


-(id<IOidcNativeSingleton>) getOidcNativeSingleton {
    if (mOidcNativeSingleton == nil) {
        mOidcNativeSingleton = [[OidcNativeSingleton alloc] init];
    }
    return mOidcNativeSingleton;
}

-(NSArray*) enumerateOidcNativeInstances {
    return [mOidcNativeInstances allKeys];
}

-(void)dealloc {
    [mOidcNativeInstances release];
    [super dealloc];
}


@end