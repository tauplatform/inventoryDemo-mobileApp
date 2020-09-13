
#import "IOidcNative.h"
#import "OidcNativeFactoryBase.h"

static OidcNativeFactoryBase* ourOidcNativeFactory = nil;

@implementation OidcNativeFactorySingleton

+(id<IOidcNativeFactory>) getOidcNativeFactoryInstance {
    if (ourOidcNativeFactory == nil) {
        ourOidcNativeFactory = [[OidcNativeFactoryBase alloc] init];
    }
    return ourOidcNativeFactory;
}

@end