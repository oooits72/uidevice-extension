/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook, 6.x Edition
 BSD License, Use at your own risk
 */

#import <UIKit/UIKit.h>

#define IFPGA_NAMESTRING                @"iFPGA"

#define IPHONE_1_NAMESTRING             @"iPhone 1"
#define IPHONE_3G_NAMESTRING            @"iPhone 3G"
#define IPHONE_3GS_NAMESTRING           @"iPhone 3GS"
#define IPHONE_4_NAMESTRING             @"iPhone 4"
#define IPHONE_4S_NAMESTRING            @"iPhone 4S"
#define IPHONE_5_NAMESTRING             @"iPhone 5"
#define IPHONE_5C_NAMESTRING            @"iPhone 5C"
#define IPHONE_5S_NAMESTRING            @"iPhone 5S"
#define IPHONE_6_NAMESTRING             @"iPhone 6"
#define IPHONE_6_PLUS_NAMESTRING        @"iPhone 6 Plus"
#define IPHONE_UNKNOWN_NAMESTRING       @"Unknown iPhone"

#define IPOD_1_NAMESTRING               @"iPod touch 1"
#define IPOD_2_NAMESTRING               @"iPod touch 2"
#define IPOD_3_NAMESTRING               @"iPod touch 3"
#define IPOD_4_NAMESTRING               @"iPod touch 4"
#define IPOD_5_NAMESTRING               @"iPod touch 5"
#define IPOD_UNKNOWN_NAMESTRING         @"Unknown iPod"

#define IPAD_1_NAMESTRING               @"iPad 1"
#define IPAD_2_NAMESTRING               @"iPad 2"
#define THE_NEW_IPAD_NAMESTRING         @"The new iPad"
#define IPAD_4G_NAMESTRING              @"iPad 4G"
#define IPAD_AIR_NAMESTRING             @"iPad Air (WiFi)"
#define IPAD_AIR_LTE_NAMESTRING         @"iPad Air (LTE)"

#define IPAD_MINI_NAMESTRING            @"iPad mini"
#define IPAD_UNKNOWN_NAMESTRING         @"Unknown iPad"

#define APPLETV_2G_NAMESTRING           @"Apple TV 2"
#define APPLETV_3G_NAMESTRING           @"Apple TV 3"
#define APPLETV_4G_NAMESTRING           @"Apple TV 4"
#define APPLETV_UNKNOWN_NAMESTRING      @"Unknown Apple TV"

#define IOS_FAMILY_UNKNOWN_DEVICE       @"Unknown iOS device"

#define IPHONE_SIMULATOR_NAMESTRING         @"iPhone Simulator"
#define IPHONE_SIMULATOR_IPHONE_NAMESTRING  @"iPhone Simulator"
#define IPHONE_SIMULATOR_IPAD_NAMESTRING    @"iPad Simulator"
#define SIMULATOR_APPLETV_NAMESTRING    @"Apple TV Simulator"


#define PPI_UNKNOWN             9999

#define IFPGA_PPI                PPI_UNKNOWN

#define IPHONE_1_PPI             163
#define IPHONE_3G_PPI            163
#define IPHONE_3GS_PPI           163
#define IPHONE_4_PPI             326
#define IPHONE_4S_PPI            326
#define IPHONE_5_PPI             326
#define IPHONE_5C_PPI            326
#define IPHONE_5S_PPI            326
#define IPHONE_6_PPI             326
#define IPHONE_6_PLUS_PPI        401
#define IPHONE_UNKNOWN_PPI       PPI_UNKNOWN

#define IPOD_1_PPI               163
#define IPOD_2_PPI               163
#define IPOD_3_PPI               163
#define IPOD_4_PPI               326
#define IPOD_5_PPI               326
#define IPOD_UNKNOWN_PPI         PPI_UNKNOWN

#define IPAD_1_PPI               132
#define IPAD_2_PPI               132
#define THE_NEW_IPAD_PPI         264
#define IPAD_4G_PPI              264
#define IPAD_AIR_PPI             264
#define IPAD_AIR_LTE_PPI         264

#define IPAD_MINI_PPI            163
#define IPAD_UNKNOWN_PPI         PPI_UNKNOWN

#define APPLETV_2G_PPI           PPI_UNKNOWN
#define APPLETV_3G_PPI           PPI_UNKNOWN
#define APPLETV_4G_PPI           PPI_UNKNOWN
#define APPLETV_UNKNOWN_PPI      PPI_UNKNOWN

#define IOS_FAMILY_UNKNOWN_DEVICE_PPI       PPI_UNKNOWN

#define IPHONE_SIMULATOR_PPI         PPI_UNKNOWN
#define IPHONE_SIMULATOR_IPHONE_PPI  PPI_UNKNOWN
#define IPHONE_SIMULATOR_IPAD_PPI    PPI_UNKNOWN
#define SIMULATOR_APPLETV_PPI    PPI_UNKNOWN


#define FREQ_UNKNOWN             9999

#define IFPGA_FREQ                FREQ_UNKNOWN

#define IPHONE_1_FREQ             412
#define IPHONE_3G_FREQ            412
#define IPHONE_3GS_FREQ           600
#define IPHONE_4_FREQ             800
#define IPHONE_4S_FREQ            800
#define IPHONE_5_FREQ             1300
#define IPHONE_5C_FREQ            1300
#define IPHONE_5S_FREQ            1300
#define IPHONE_6_FREQ             1400
#define IPHONE_6_PLUS_FREQ        1400
#define IPHONE_UNKNOWN_FREQ       FREQ_UNKNOWN

#define IPOD_1_FREQ               412
#define IPOD_2_FREQ               533
#define IPOD_3_FREQ               600
#define IPOD_4_FREQ               800
#define IPOD_5_FREQ               800
#define IPOD_UNKNOWN_FREQ         FREQ_UNKNOWN

#define IPAD_1_FREQ               1000
#define IPAD_2_FREQ               1000
#define THE_NEW_IPAD_FREQ         1000
#define IPAD_4G_FREQ              1400
#define IPAD_AIR_FREQ             1400
#define IPAD_AIR_LTE_FREQ         IPAD_AIR_FREQ

#define IPAD_MINI_FREQ            1000
#define IPAD_UNKNOWN_FREQ         FREQ_UNKNOWN

#define APPLETV_2G_FREQ           1000
#define APPLETV_3G_FREQ           1000
#define APPLETV_4G_FREQ           1000
#define APPLETV_UNKNOWN_FREQ      FREQ_UNKNOWN

#define IOS_FAMILY_UNKNOWN_DEVICE_FREQ       FREQ_UNKNOWN

#define IPHONE_SIMULATOR_FREQ         FREQ_UNKNOWN
#define IPHONE_SIMULATOR_IPHONE_FREQ  FREQ_UNKNOWN
#define IPHONE_SIMULATOR_IPAD_FREQ    FREQ_UNKNOWN
#define SIMULATOR_APPLETV_FREQ    FREQ_UNKNOWN

typedef NS_ENUM(NSUInteger, UIDevicePlatform) {
    UIDeviceUnknown,

    UIDeviceiPhoneSimulator,
    UIDeviceiPhoneSimulatoriPhone, // both regular and iPhone 4 devices
    UIDeviceiPhoneSimulatoriPad,
    UIDeviceSimulatorAppleTV,

    UIDeviceiPhone1,
    UIDeviceiPhone3G,
    UIDeviceiPhone3GS,
    UIDeviceiPhone4,
    UIDeviceiPhone4GSM,
    UIDeviceiPhone4GSMRevA,
    UIDeviceiPhone4CDMA,
    UIDeviceiPhone4S,
    UIDeviceiPhone5,
    UIDeviceiPhone5GSM,
    UIDeviceiPhone5CDMA,
    UIDeviceiPhone5CGSM,
    UIDeviceiPhone5CGSMCDMA,
    UIDeviceiPhone5SGSM,
    UIDeviceiPhone5SGSMCDMA,
    UIDeviceiPhone6GSMCDMA,
    UIDeviceiPhone6PlusGSMCDMA,

    UIDeviceiPod1,
    UIDeviceiPod2,
    UIDeviceiPod3,
    UIDeviceiPod4,
    UIDeviceiPod5,

    UIDeviceiPad1,
    UIDeviceiPad2,
    UIDeviceTheNewiPad,
    UIDeviceiPad4G,
    UIDeviceiPadAir,
    UIDeviceiPadAirLTE,
    UIDeviceiPadMini,

    UIDeviceAppleTV2,
    UIDeviceAppleTV3,
    UIDeviceAppleTV4,

    UIDeviceUnknowniPhone,
    UIDeviceUnknowniPod,
    UIDeviceUnknowniPad,
    UIDeviceUnknownAppleTV,
    UIDeviceIFPGA,
};

typedef NS_ENUM(NSUInteger, UIDeviceFamily) {
    UIDeviceFamilyiPhone,
    UIDeviceFamilyiPod,
    UIDeviceFamilyiPad,
    UIDeviceFamilyAppleTV,
    UIDeviceFamilyUnknown,
};

@interface UIDevice (Hardware)
- (NSString *) platform;
- (NSString *) hwmodel;
- (NSUInteger) platformType;
- (NSString *) platformString;

- (NSUInteger) cpuFrequency;
- (NSUInteger) busFrequency;
- (NSUInteger) cpuCount;
- (NSUInteger) totalMemory;
- (NSUInteger) userMemory;

- (NSNumber *) totalDiskSpace;
- (NSNumber *) freeDiskSpace;

- (NSString *) macaddress;

+ (NSUInteger) platformTypeForString:(NSString *)platform;
+ (NSString *) platformStringForType:(NSUInteger)platformType;
+ (NSString *) platformStringForPlatform:(NSString *)platform;
+ (NSUInteger) ppiForPlatformType:(NSUInteger)platformType;
+ (NSUInteger) cpuFreqForPlatformType:(NSUInteger)platformType;

+ (BOOL) hasRetinaDisplay;
+ (BOOL) has4InchDisplay;

- (UIDeviceFamily) deviceFamily;
@end