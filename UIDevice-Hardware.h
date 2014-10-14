/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook, 6.x Edition
 BSD License, Use at your own risk
 */

#import <UIKit/UIKit.h>
#import "UIDeviceConstants.h"

@interface UIDevice (Hardware)

@property (nonatomic, strong, readonly) NSString* machine;
@property (nonatomic, strong, readonly) NSString* hwmodel;

@property (nonatomic, readonly) UIDevicePlatform platform;
@property (nonatomic, strong, readonly) NSString* modelName;
@property (nonatomic, strong, readonly) NSString* productName;

@property (nonatomic, readonly) UIDeviceFamily deviceFamily;

@property (nonatomic, readonly) NSUInteger cpuFrequency;
@property (nonatomic, readonly) NSUInteger busFrequency;
@property (nonatomic, readonly) NSUInteger cpuCount;
@property (nonatomic, readonly) NSUInteger totalMemory;
@property (nonatomic, readonly) NSUInteger userMemory;

@property (nonatomic, strong, readonly) NSNumber* totalDiskSpace;
@property (nonatomic, strong, readonly) NSNumber* freeDiskSpace;

@property (nonatomic, strong, readonly) NSString* macaddress;

@property (nonatomic, readonly) NSUInteger ppi;

@end