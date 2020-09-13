
#import "IOidcNative.h"
#import "OidcNativeSingletonBase.h"

@interface OidcNativeSingleton : OidcNativeSingletonBase<IOidcNativeSingleton> {
}


-(NSString*)getInitialDefaultID;


-(void) enumerate:(id<IMethodResult>)methodResult;




@end