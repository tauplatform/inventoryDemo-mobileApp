
#import "IBarcodeChainway.h"
#import "BarcodeChainwayFactoryBase.h"

static BarcodeChainwayFactoryBase* ourBarcodeChainwayFactory = nil;

@implementation BarcodeChainwayFactorySingleton

+(id<IBarcodeChainwayFactory>) getBarcodeChainwayFactoryInstance {
    if (ourBarcodeChainwayFactory == nil) {
        ourBarcodeChainwayFactory = [[BarcodeChainwayFactoryBase alloc] init];
    }
    return ourBarcodeChainwayFactory;
}

@end