
#import "IBarcodeChainway.h"
#import "BarcodeChainwaySingletonBase.h"

@interface BarcodeChainwaySingleton : BarcodeChainwaySingletonBase<IBarcodeChainwaySingleton> {
}


-(NSString*)getInitialDefaultID;


-(void) enumerate:(id<IMethodResult>)methodResult;




@end