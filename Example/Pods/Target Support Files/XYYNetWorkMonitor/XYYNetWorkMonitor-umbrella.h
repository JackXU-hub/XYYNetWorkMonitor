#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NetworkMonitor.h"
#import "NetworkMonitorDef.h"
#import "NSURL+NM.h"
#import "XYYConfig.h"
#import "XYYManager.h"

FOUNDATION_EXPORT double XYYNetWorkMonitorVersionNumber;
FOUNDATION_EXPORT const unsigned char XYYNetWorkMonitorVersionString[];

