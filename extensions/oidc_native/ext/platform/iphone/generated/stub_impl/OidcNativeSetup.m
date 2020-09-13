#import <Foundation/Foundation.h>
#include "common/app_build_capabilities.h"

extern void Init_OidcNative_API();

void Init_OidcNative_extension()
{
    Init_OidcNative_API();
}
