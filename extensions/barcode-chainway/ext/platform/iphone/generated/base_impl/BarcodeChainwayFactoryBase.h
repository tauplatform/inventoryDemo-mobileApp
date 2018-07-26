
#import "IBarcodeChainway.h"

@interface BarcodeChainwayFactoryBase : NSObject<IBarcodeChainwayFactory> {
    NSMutableDictionary* mBarcodeChainwayInstances;
    id<IBarcodeChainwaySingleton> mBarcodeChainwaySingleton;
}

-(id)init;

-(id<IBarcodeChainwaySingleton>) getBarcodeChainwaySingleton;
-(id<IBarcodeChainway>) getBarcodeChainwayByID:(NSString*)ID;

-(void) destroyObjectByID:(NSString*)ID;

-(id<IBarcodeChainway>)createBarcodeChainwayByID:(NSString*)ID;

-(NSArray*) enumerateBarcodeChainwayInstances;

-(void)dealloc;

@end