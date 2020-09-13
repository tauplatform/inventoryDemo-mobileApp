
#import "IOidcNative.h"

@interface OidcNativeFactoryBase : NSObject<IOidcNativeFactory> {
    NSMutableDictionary* mOidcNativeInstances;
    id<IOidcNativeSingleton> mOidcNativeSingleton;
}

-(id)init;

-(id<IOidcNativeSingleton>) getOidcNativeSingleton;
-(id<IOidcNative>) getOidcNativeByID:(NSString*)ID;

-(void) destroyObjectByID:(NSString*)ID;

-(id<IOidcNative>)createOidcNativeByID:(NSString*)ID;

-(NSArray*) enumerateOidcNativeInstances;

-(void)dealloc;

@end