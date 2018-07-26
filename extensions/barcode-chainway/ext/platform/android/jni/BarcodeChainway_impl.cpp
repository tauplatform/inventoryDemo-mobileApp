#include "rhodes.h"
#include "BarcodeChainway.h"

#include "logging/RhoLog.h"
#undef DEFAULT_LOGCATEGORY
#define DEFAULT_LOGCATEGORY "BarcodeChainway_impl"

extern "C" void Init_BarcodeChainway_API(void);

extern "C" void Init_BarcodeChainway_extension(void)
{
    RAWTRACE(__FUNCTION__);

    RAWTRACE("Initializing API");

    Init_BarcodeChainway_API();

    RAWTRACE("Init_Barcode succeeded");
   
}
