
#import "BarcodeChainwayFactoryBase.h"
#import "BarcodeChainway.h"
#import "BarcodeChainwaySingleton.h"



@implementation BarcodeChainwayFactoryBase

-(id)init {
    self = [super init];
    mBarcodeChainwayInstances = [[NSMutableDictionary dictionaryWithCapacity:4] retain];
    mBarcodeChainwaySingleton = nil;
    return self;
}

-(id<IBarcodeChainway>) getBarcodeChainwayByID:(NSString*)ID {
    id<IBarcodeChainway> obj = (BarcodeChainway*)[mBarcodeChainwayInstances objectForKey:ID];
    if (obj == nil) {
        obj = [self createBarcodeChainwayByID:ID];
        [mBarcodeChainwayInstances setObject:obj forKey:ID];
    }
    return obj;
}

-(void) destroyObjectByID:(NSString*)ID {
    BarcodeChainway* obj = [mBarcodeChainwayInstances objectForKey:ID];
    if (obj != nil) {
        [mBarcodeChainwayInstances removeObjectForKey:ID];
    }
}


-(id<IBarcodeChainway>)createBarcodeChainwayByID:(NSString*)ID {
    BarcodeChainway* obj = [[BarcodeChainway alloc] init];

    [obj setProperty:@"ID" propertyValue:ID methodResult:nil];

    return obj;
}


-(id<IBarcodeChainwaySingleton>) getBarcodeChainwaySingleton {
    if (mBarcodeChainwaySingleton == nil) {
        mBarcodeChainwaySingleton = [[BarcodeChainwaySingleton alloc] init];
    }
    return mBarcodeChainwaySingleton;
}

-(NSArray*) enumerateBarcodeChainwayInstances {
    return [mBarcodeChainwayInstances allKeys];
}

-(void)dealloc {
    [mBarcodeChainwayInstances release];
    [super dealloc];
}


@end