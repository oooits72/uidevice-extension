/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook, 6.x Edition
 BSD License, Use at your own risk
 */

#import <UIKit/UIKit.h>
#import "UIDeviceConstants.h"

@interface UIDevice (Hardware)
- (NSString *) machine;
- (NSString *) hwmodel;

- (UIDevicePlatform) platform;
- (NSString*) modelName;
- (NSString*) productName;

- (UIDeviceFamily) deviceFamily;

- (NSUInteger) cpuFrequency;
- (NSUInteger) busFrequency;
- (NSUInteger) cpuCount;
- (NSUInteger) totalMemory;
- (NSUInteger) userMemory;

- (NSNumber *) totalDiskSpace;
- (NSNumber *) freeDiskSpace;

- (NSString *) macaddress;

- (NSUInteger) ppi;

@end