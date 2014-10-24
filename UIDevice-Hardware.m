/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook, 6.x Edition
 BSD License, Use at your own risk
 */

// Thanks to Emanuele Vulcano, Kevin Ballard/Eridius, Ryandjohnson, Matt Brown, etc.

#include <sys/socket.h> // Per msqr
#include <sys/sysctl.h>
#include <net/if.h>
#include <net/if_dl.h>

#import "UIDevice-Hardware.h"

// Add support for subscripting to the iOS 5 SDK.
// reference from http://stackoverflow.com/questions/11658669/how-to-enable-the-new-objective-c-object-literals-on-ios
// also found from github https://github.com/tewha/iOS-Subscripting

#if __IPHONE_OS_VERSION_MAX_ALLOWED < 60000
@interface NSDictionary(subscripts)
- (id)objectForKeyedSubscript:(id)key;
@end

@interface NSMutableDictionary(subscripts)
- (void)setObject:(id)obj forKeyedSubscript:(id <NSCopying>)key;
@end

@interface NSArray(subscripts)
- (id)objectAtIndexedSubscript:(NSUInteger)idx;
@end

@interface NSMutableArray(subscripts)
- (void)setObject:(id)obj atIndexedSubscript:(NSUInteger)idx;
@end

@implementation NSDictionary(subscripts)
- (id)objectForKeyedSubscript:(id)key;
{
    return [self objectForKey:key];
}
@end

#endif


@implementation UIDevice (Hardware)

static NSDictionary * machineModelNameMapping = nil;
static NSDictionary * machineProductNameMapping = nil;

+ (void)initialize {
    machineModelNameMapping = @{
                                UNKNOWN: UNKNOWN_MODEL_NAME,

                                IPHONE_1_1: IPHONE_1_1_MODEL_NAME,
                                IPHONE_1_2: IPHONE_1_2_MODEL_NAME,
                                IPHONE_2_1: IPHONE_2_1_MODEL_NAME,
                                IPHONE_3_1: IPHONE_3_1_MODEL_NAME,
                                IPHONE_3_2: IPHONE_3_2_MODEL_NAME,
                                IPHONE_3_3: IPHONE_3_3_MODEL_NAME,
                                IPHONE_4_1: IPHONE_4_1_MODEL_NAME,
                                IPHONE_5_1: IPHONE_5_1_MODEL_NAME,
                                IPHONE_5_2: IPHONE_5_2_MODEL_NAME,
                                IPHONE_5_3: IPHONE_5_3_MODEL_NAME,
                                IPHONE_5_4: IPHONE_5_4_MODEL_NAME,
                                IPHONE_6_1: IPHONE_6_1_MODEL_NAME,
                                IPHONE_6_2: IPHONE_6_2_MODEL_NAME,
                                IPHONE_7_1: IPHONE_7_1_MODEL_NAME,
                                IPHONE_7_2: IPHONE_7_2_MODEL_NAME,

                                IPOD_1_1: IPOD_1_1_MODEL_NAME,
                                IPOD_2_1: IPOD_2_1_MODEL_NAME,
                                IPOD_3_1: IPOD_3_1_MODEL_NAME,
                                IPOD_4_1: IPOD_4_1_MODEL_NAME,
                                IPOD_5_1: IPOD_5_1_MODEL_NAME,

                                IPAD_1_1: IPAD_1_1_MODEL_NAME,
                                IPAD_2_1: IPAD_2_1_MODEL_NAME,
                                IPAD_2_2: IPAD_2_2_MODEL_NAME,
                                IPAD_2_3: IPAD_2_3_MODEL_NAME,
                                IPAD_2_4: IPAD_2_4_MODEL_NAME,
                                IPAD_2_5: IPAD_2_5_MODEL_NAME,
                                IPAD_2_6: IPAD_2_6_MODEL_NAME,
                                IPAD_2_7: IPAD_2_7_MODEL_NAME,
                                IPAD_3_1: IPAD_3_1_MODEL_NAME,
                                IPAD_3_2: IPAD_3_2_MODEL_NAME,
                                IPAD_3_3: IPAD_3_3_MODEL_NAME,
                                IPAD_3_4: IPAD_3_4_MODEL_NAME,
                                IPAD_3_5: IPAD_3_5_MODEL_NAME,
                                IPAD_3_6: IPAD_3_6_MODEL_NAME,
                                IPAD_4_1: IPAD_4_1_MODEL_NAME,
                                IPAD_4_2: IPAD_4_2_MODEL_NAME,
                                IPAD_4_3: IPAD_4_3_MODEL_NAME,
                                IPAD_4_4: IPAD_4_4_MODEL_NAME,
                                IPAD_4_5: IPAD_4_5_MODEL_NAME,
                                IPAD_4_6: IPAD_4_6_MODEL_NAME,

                                SIMULATOR_386: SIMULATOR_386_MODEL_NAME,
                                SIMULATOR_X86_64: SIMULATOR_X86_64_MODEL_NAME,
                                };

    machineProductNameMapping = @{
                                  UNKNOWN: UNKNOWN_PRODUCT_NAME,

                                  IPHONE_1_1: IPHONE_1_1_PRODUCT_NAME,
                                  IPHONE_1_2: IPHONE_1_2_PRODUCT_NAME,
                                  IPHONE_2_1: IPHONE_2_1_PRODUCT_NAME,
                                  IPHONE_3_1: IPHONE_3_1_PRODUCT_NAME,
                                  IPHONE_3_2: IPHONE_3_2_PRODUCT_NAME,
                                  IPHONE_3_3: IPHONE_3_3_PRODUCT_NAME,
                                  IPHONE_4_1: IPHONE_4_1_PRODUCT_NAME,
                                  IPHONE_5_1: IPHONE_5_1_PRODUCT_NAME,
                                  IPHONE_5_2: IPHONE_5_2_PRODUCT_NAME,
                                  IPHONE_5_3: IPHONE_5_3_PRODUCT_NAME,
                                  IPHONE_5_4: IPHONE_5_4_PRODUCT_NAME,
                                  IPHONE_6_1: IPHONE_6_1_PRODUCT_NAME,
                                  IPHONE_6_2: IPHONE_6_2_PRODUCT_NAME,
                                  IPHONE_7_1: IPHONE_7_1_PRODUCT_NAME,
                                  IPHONE_7_2: IPHONE_7_2_PRODUCT_NAME,

                                  IPOD_1_1: IPOD_1_1_PRODUCT_NAME,
                                  IPOD_2_1: IPOD_2_1_PRODUCT_NAME,
                                  IPOD_3_1: IPOD_3_1_PRODUCT_NAME,
                                  IPOD_4_1: IPOD_4_1_PRODUCT_NAME,
                                  IPOD_5_1: IPOD_5_1_PRODUCT_NAME,

                                  IPAD_1_1: IPAD_1_1_PRODUCT_NAME,
                                  IPAD_2_1: IPAD_2_1_PRODUCT_NAME,
                                  IPAD_2_2: IPAD_2_2_PRODUCT_NAME,
                                  IPAD_2_3: IPAD_2_3_PRODUCT_NAME,
                                  IPAD_2_4: IPAD_2_4_PRODUCT_NAME,
                                  IPAD_2_5: IPAD_2_5_PRODUCT_NAME,
                                  IPAD_2_6: IPAD_2_6_PRODUCT_NAME,
                                  IPAD_2_7: IPAD_2_7_PRODUCT_NAME,
                                  IPAD_3_1: IPAD_3_1_PRODUCT_NAME,
                                  IPAD_3_2: IPAD_3_2_PRODUCT_NAME,
                                  IPAD_3_3: IPAD_3_3_PRODUCT_NAME,
                                  IPAD_3_4: IPAD_3_4_PRODUCT_NAME,
                                  IPAD_3_5: IPAD_3_5_PRODUCT_NAME,
                                  IPAD_3_6: IPAD_3_6_PRODUCT_NAME,
                                  IPAD_4_1: IPAD_4_1_PRODUCT_NAME,
                                  IPAD_4_2: IPAD_4_2_PRODUCT_NAME,
                                  IPAD_4_3: IPAD_4_3_PRODUCT_NAME,
                                  IPAD_4_4: IPAD_4_4_PRODUCT_NAME,
                                  IPAD_4_5: IPAD_4_5_PRODUCT_NAME,
                                  IPAD_4_6: IPAD_4_6_PRODUCT_NAME,

                                  SIMULATOR_386: SIMULATOR_386_PRODUCT_NAME,
                                  SIMULATOR_X86_64: SIMULATOR_X86_64_PRODUCT_NAME,
                                  };
}

#pragma mark sysctlbyname utils
- (NSString *) getSysInfoByName:(char *)typeSpecifier
{
    size_t size;
    sysctlbyname(typeSpecifier, NULL, &size, NULL, 0);

    char *answer = malloc(size);
    sysctlbyname(typeSpecifier, answer, &size, NULL, 0);

    NSString *results = @(answer);

    free(answer);
    return results;
}

- (NSString *) machine
{
    return [self getSysInfoByName:"hw.machine"];
}


// Thanks, Tom Harrington (Atomicbird)
- (NSString *) hwmodel
{
    return [self getSysInfoByName:"hw.model"];
}

- (UIDevicePlatform) platform {
    NSString* const machine = self.machine;

    if ([machine isEqualToString: IPHONE_1_1]) return IPHONE_1_1_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_1_2]) return IPHONE_1_2_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_2_1]) return IPHONE_2_1_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_3_1]) return IPHONE_3_1_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_3_2]) return IPHONE_3_2_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_3_3]) return IPHONE_3_3_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_4_1]) return IPHONE_4_1_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_5_1]) return IPHONE_5_1_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_5_2]) return IPHONE_5_2_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_5_3]) return IPHONE_5_3_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_5_4]) return IPHONE_5_4_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_6_1]) return IPHONE_6_1_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_6_2]) return IPHONE_6_2_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_7_1]) return IPHONE_7_1_ENUM_VAL;
    if ([machine isEqualToString: IPHONE_7_2]) return IPHONE_7_2_ENUM_VAL;

    if ([machine isEqualToString: IPOD_1_1])   return IPOD_1_1_ENUM_VAL;
    if ([machine isEqualToString: IPOD_2_1])   return IPOD_2_1_ENUM_VAL;
    if ([machine isEqualToString: IPOD_3_1])   return IPOD_3_1_ENUM_VAL;
    if ([machine isEqualToString: IPOD_4_1])   return IPOD_4_1_ENUM_VAL;
    if ([machine isEqualToString: IPOD_5_1])   return IPOD_5_1_ENUM_VAL;

    if ([machine isEqualToString: IPAD_1_1])   return IPAD_1_1_ENUM_VAL;
    if ([machine isEqualToString: IPAD_2_1])   return IPAD_2_1_ENUM_VAL;
    if ([machine isEqualToString: IPAD_2_2])   return IPAD_2_2_ENUM_VAL;
    if ([machine isEqualToString: IPAD_2_3])   return IPAD_2_3_ENUM_VAL;
    if ([machine isEqualToString: IPAD_2_4])   return IPAD_2_4_ENUM_VAL;
    if ([machine isEqualToString: IPAD_2_5])   return IPAD_2_5_ENUM_VAL;
    if ([machine isEqualToString: IPAD_2_6])   return IPAD_2_6_ENUM_VAL;
    if ([machine isEqualToString: IPAD_2_7])   return IPAD_2_7_ENUM_VAL;
    if ([machine isEqualToString: IPAD_3_1])   return IPAD_3_1_ENUM_VAL;
    if ([machine isEqualToString: IPAD_3_2])   return IPAD_3_2_ENUM_VAL;
    if ([machine isEqualToString: IPAD_3_3])   return IPAD_3_3_ENUM_VAL;
    if ([machine isEqualToString: IPAD_3_4])   return IPAD_3_4_ENUM_VAL;
    if ([machine isEqualToString: IPAD_3_5])   return IPAD_3_5_ENUM_VAL;
    if ([machine isEqualToString: IPAD_3_6])   return IPAD_3_6_ENUM_VAL;
    if ([machine isEqualToString: IPAD_4_1])   return IPAD_4_1_ENUM_VAL;
    if ([machine isEqualToString: IPAD_4_2])   return IPAD_4_2_ENUM_VAL;
    if ([machine isEqualToString: IPAD_4_3])   return IPAD_4_3_ENUM_VAL;
    if ([machine isEqualToString: IPAD_4_4])   return IPAD_4_4_ENUM_VAL;
    if ([machine isEqualToString: IPAD_4_5])   return IPAD_4_5_ENUM_VAL;
    if ([machine isEqualToString: IPAD_4_6])   return IPAD_4_6_ENUM_VAL;

    if ([machine isEqualToString: SIMULATOR_386])      return SIMULATOR_386_ENUM_VAL;
    if ([machine isEqualToString: SIMULATOR_X86_64])   return SIMULATOR_X86_64_ENUM_VAL;

    return UNKNOWN_ENUM_VAL;
}

- (NSString*) modelName {
    return machineModelNameMapping[self.machine];
}

- (NSString*)productName {
    return machineProductNameMapping[self.machine];
}

- (UIDeviceFamily) deviceFamily {
    return ENUM_VAL_TO_DEVICE_FAMILY(self.platform);
}

#pragma mark sysctl utils
- (NSUInteger) getSysInfo: (uint) typeSpecifier
{
    size_t size = sizeof(NSInteger);
    NSInteger results;
    int mib[2] = {CTL_HW, typeSpecifier};
    sysctl(mib, 2, &results, &size, NULL, 0);
    return results;
}

- (NSUInteger) busFrequency
{
    return [self getSysInfo:HW_BUS_FREQ];
}

- (NSUInteger) cpuCount
{
    return [self getSysInfoByName:"hw.physicalcpu_max"].integerValue;
}

- (NSUInteger) totalMemory
{
    return [self getSysInfo:HW_PHYSMEM];
}

- (NSUInteger) userMemory
{
    return [self getSysInfo:HW_USERMEM];
}

- (NSUInteger) maxSocketBufferSize
{
    return [self getSysInfo:KIPC_MAXSOCKBUF];
}

#pragma mark file system -- Thanks Joachim Bean!

- (NSNumber *) totalDiskSpace
{
    NSDictionary *fattributes = [[NSFileManager defaultManager] attributesOfFileSystemForPath:NSHomeDirectory() error:nil];
    return fattributes[NSFileSystemSize];
}

- (NSNumber *) freeDiskSpace
{
    NSDictionary *fattributes = [[NSFileManager defaultManager] attributesOfFileSystemForPath:NSHomeDirectory() error:nil];
    return fattributes[NSFileSystemFreeSize];
}

- (NSUInteger) ppi {
    const UIDevicePlatform platform = self.platform;

    if (platform == UNKNOWN_ENUM_VAL) return UNKNOWN_PPI;
    if (platform == SIMULATOR_386_ENUM_VAL) return SIMULATOR_386_PPI;
    if (platform == SIMULATOR_X86_64_ENUM_VAL) return SIMULATOR_X86_64_PPI;

    if (platform == IPHONE_1_1_ENUM_VAL) return IPHONE_1_1_PPI;
    if (platform == IPHONE_1_2_ENUM_VAL) return IPHONE_1_2_PPI;
    if (platform == IPHONE_2_1_ENUM_VAL) return IPHONE_2_1_PPI;
    if (platform == IPHONE_3_1_ENUM_VAL) return IPHONE_3_1_PPI;
    if (platform == IPHONE_3_2_ENUM_VAL) return IPHONE_3_2_PPI;
    if (platform == IPHONE_3_3_ENUM_VAL) return IPHONE_3_3_PPI;
    if (platform == IPHONE_4_1_ENUM_VAL) return IPHONE_4_1_PPI;
    if (platform == IPHONE_5_1_ENUM_VAL) return IPHONE_5_1_PPI;
    if (platform == IPHONE_5_2_ENUM_VAL) return IPHONE_5_2_PPI;
    if (platform == IPHONE_5_3_ENUM_VAL) return IPHONE_5_3_PPI;
    if (platform == IPHONE_5_4_ENUM_VAL) return IPHONE_5_4_PPI;
    if (platform == IPHONE_6_1_ENUM_VAL) return IPHONE_6_1_PPI;
    if (platform == IPHONE_6_2_ENUM_VAL) return IPHONE_6_2_PPI;
    if (platform == IPHONE_7_1_ENUM_VAL) return IPHONE_7_1_PPI;
    if (platform == IPHONE_7_1_ENUM_VAL) return IPHONE_7_1_PPI;

    if (platform == IPOD_1_1_ENUM_VAL) return IPOD_1_1_PPI;
    if (platform == IPOD_2_1_ENUM_VAL) return IPOD_2_1_PPI;
    if (platform == IPOD_3_1_ENUM_VAL) return IPOD_3_1_PPI;
    if (platform == IPOD_4_1_ENUM_VAL) return IPOD_4_1_PPI;
    if (platform == IPOD_5_1_ENUM_VAL) return IPOD_5_1_PPI;

    if (platform == IPAD_1_1_ENUM_VAL) return IPAD_1_1_PPI;
    if (platform == IPAD_2_1_ENUM_VAL) return IPAD_2_1_PPI;
    if (platform == IPAD_2_2_ENUM_VAL) return IPAD_2_2_PPI;
    if (platform == IPAD_2_3_ENUM_VAL) return IPAD_2_3_PPI;
    if (platform == IPAD_2_4_ENUM_VAL) return IPAD_2_4_PPI;
    if (platform == IPAD_2_5_ENUM_VAL) return IPAD_2_5_PPI;
    if (platform == IPAD_2_6_ENUM_VAL) return IPAD_2_6_PPI;
    if (platform == IPAD_2_7_ENUM_VAL) return IPAD_2_7_PPI;
    if (platform == IPAD_3_1_ENUM_VAL) return IPAD_3_1_PPI;
    if (platform == IPAD_3_2_ENUM_VAL) return IPAD_3_2_PPI;
    if (platform == IPAD_3_3_ENUM_VAL) return IPAD_3_3_PPI;
    if (platform == IPAD_3_4_ENUM_VAL) return IPAD_3_4_PPI;
    if (platform == IPAD_3_5_ENUM_VAL) return IPAD_3_5_PPI;
    if (platform == IPAD_3_6_ENUM_VAL) return IPAD_3_6_PPI;
    if (platform == IPAD_4_1_ENUM_VAL) return IPAD_4_1_PPI;
    if (platform == IPAD_4_2_ENUM_VAL) return IPAD_4_2_PPI;
    if (platform == IPAD_4_3_ENUM_VAL) return IPAD_4_3_PPI;
    if (platform == IPAD_4_4_ENUM_VAL) return IPAD_4_4_PPI;
    if (platform == IPAD_4_5_ENUM_VAL) return IPAD_4_5_PPI;
    if (platform == IPAD_4_6_ENUM_VAL) return IPAD_4_6_PPI;

    return UNKNOWN_PPI;
}

- (NSUInteger) cpuFrequency {
    const UIDevicePlatform platform = self.platform;

    if (platform == UNKNOWN_ENUM_VAL) return [self getSysInfo:HW_CPU_FREQ] / 1000 / 1000;
    if (platform == SIMULATOR_386_ENUM_VAL) return [self getSysInfo:HW_CPU_FREQ] / 1000 / 1000;
    if (platform == SIMULATOR_X86_64_ENUM_VAL) return [self getSysInfo:HW_CPU_FREQ] / 1000 / 1000;

    if (platform == IPHONE_1_1_ENUM_VAL) return IPHONE_1_1_FREQ;
    if (platform == IPHONE_1_2_ENUM_VAL) return IPHONE_1_2_FREQ;
    if (platform == IPHONE_2_1_ENUM_VAL) return IPHONE_2_1_FREQ;
    if (platform == IPHONE_3_1_ENUM_VAL) return IPHONE_3_1_FREQ;
    if (platform == IPHONE_3_2_ENUM_VAL) return IPHONE_3_2_FREQ;
    if (platform == IPHONE_3_3_ENUM_VAL) return IPHONE_3_3_FREQ;
    if (platform == IPHONE_4_1_ENUM_VAL) return IPHONE_4_1_FREQ;
    if (platform == IPHONE_5_1_ENUM_VAL) return IPHONE_5_1_FREQ;
    if (platform == IPHONE_5_2_ENUM_VAL) return IPHONE_5_2_FREQ;
    if (platform == IPHONE_5_3_ENUM_VAL) return IPHONE_5_3_FREQ;
    if (platform == IPHONE_5_4_ENUM_VAL) return IPHONE_5_4_FREQ;
    if (platform == IPHONE_6_1_ENUM_VAL) return IPHONE_6_1_FREQ;
    if (platform == IPHONE_6_2_ENUM_VAL) return IPHONE_6_2_FREQ;
    if (platform == IPHONE_7_1_ENUM_VAL) return IPHONE_7_1_FREQ;
    if (platform == IPHONE_7_1_ENUM_VAL) return IPHONE_7_1_FREQ;
    if (platform == IPOD_1_1_ENUM_VAL) return IPOD_1_1_FREQ;
    if (platform == IPOD_2_1_ENUM_VAL) return IPOD_2_1_FREQ;
    if (platform == IPOD_3_1_ENUM_VAL) return IPOD_3_1_FREQ;
    if (platform == IPOD_4_1_ENUM_VAL) return IPOD_4_1_FREQ;
    if (platform == IPOD_5_1_ENUM_VAL) return IPOD_5_1_FREQ;
    if (platform == IPAD_1_1_ENUM_VAL) return IPAD_1_1_FREQ;
    if (platform == IPAD_2_1_ENUM_VAL) return IPAD_2_1_FREQ;
    if (platform == IPAD_2_2_ENUM_VAL) return IPAD_2_2_FREQ;
    if (platform == IPAD_2_3_ENUM_VAL) return IPAD_2_3_FREQ;
    if (platform == IPAD_2_4_ENUM_VAL) return IPAD_2_4_FREQ;
    if (platform == IPAD_2_5_ENUM_VAL) return IPAD_2_5_FREQ;
    if (platform == IPAD_2_6_ENUM_VAL) return IPAD_2_6_FREQ;
    if (platform == IPAD_2_7_ENUM_VAL) return IPAD_2_7_FREQ;
    if (platform == IPAD_3_1_ENUM_VAL) return IPAD_3_1_FREQ;
    if (platform == IPAD_3_2_ENUM_VAL) return IPAD_3_2_FREQ;
    if (platform == IPAD_3_3_ENUM_VAL) return IPAD_3_3_FREQ;
    if (platform == IPAD_3_4_ENUM_VAL) return IPAD_3_4_FREQ;
    if (platform == IPAD_3_5_ENUM_VAL) return IPAD_3_5_FREQ;
    if (platform == IPAD_3_6_ENUM_VAL) return IPAD_3_6_FREQ;
    if (platform == IPAD_4_1_ENUM_VAL) return IPAD_4_1_FREQ;
    if (platform == IPAD_4_2_ENUM_VAL) return IPAD_4_2_FREQ;
    if (platform == IPAD_4_3_ENUM_VAL) return IPAD_4_3_FREQ;
    if (platform == IPAD_4_4_ENUM_VAL) return IPAD_4_4_FREQ;
    if (platform == IPAD_4_5_ENUM_VAL) return IPAD_4_5_FREQ;
    if (platform == IPAD_4_6_ENUM_VAL) return IPAD_4_6_FREQ;

    return [self getSysInfo:HW_CPU_FREQ] / 1000 / 1000;
}

#pragma mark MAC addy
// Return the local MAC addy
// Courtesy of FreeBSD hackers email list
// Accidentally munged during previous update. Fixed thanks to mlamb.
- (NSString *) macaddress
{
    int                 mib[6];
    size_t              len;
    char                *buf;
    unsigned char       *ptr;
    struct if_msghdr    *ifm;
    struct sockaddr_dl  *sdl;

    mib[0] = CTL_NET;
    mib[1] = AF_ROUTE;
    mib[2] = 0;
    mib[3] = AF_LINK;
    mib[4] = NET_RT_IFLIST;

    if ((mib[5] = if_nametoindex("en0")) == 0) {
        printf("Error: if_nametoindex error\n");
        return NULL;
    }

    if (sysctl(mib, 6, NULL, &len, NULL, 0) < 0) {
        printf("Error: sysctl, take 1\n");
        return NULL;
    }

    if ((buf = malloc(len)) == NULL) {
        printf("Error: Memory allocation error\n");
        return NULL;
    }

    if (sysctl(mib, 6, buf, &len, NULL, 0) < 0) {
        printf("Error: sysctl, take 2\n");
        free(buf); // Thanks, Remy "Psy" Demerest
        return NULL;
    }

    ifm = (struct if_msghdr *)buf;
    sdl = (struct sockaddr_dl *)(ifm + 1);
    ptr = (unsigned char *)LLADDR(sdl);
    NSString *outstring = [NSString stringWithFormat:@"%02X:%02X:%02X:%02X:%02X:%02X",
                           *ptr, *(ptr+1), *(ptr+2), *(ptr+3), *(ptr+4), *(ptr+5)];
    // NSString *outstring = [NSString stringWithFormat:@"%02X%02X%02X%02X%02X%02X",
    //                       *ptr, *(ptr+1), *(ptr+2), *(ptr+3), *(ptr+4), *(ptr+5)];
    free(buf);
    return outstring;
}

// Illicit Bluetooth check -- cannot be used in App Store
/*
 Class  btclass = NSClassFromString(@"GKBluetoothSupport");
 if ([btclass respondsToSelector:@selector(bluetoothStatus)])
 {
 printf("BTStatus %d\n", ((int)[btclass performSelector:@selector(bluetoothStatus)] & 1) != 0);
 bluetooth = ((int)[btclass performSelector:@selector(bluetoothStatus)] & 1) != 0;
 printf("Bluetooth %s enabled\n", bluetooth ? "is" : "isn't");
 }
 */
@end