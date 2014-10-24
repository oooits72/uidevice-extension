// machine strings

#define UNKNOWN @""

#define IPHONE_1_1 @"iPhone1,1"
#define IPHONE_1_2 @"iPhone1,2"
#define IPHONE_2_1 @"iPhone2,1"
#define IPHONE_3_1 @"iPhone3,1"
#define IPHONE_3_2 @"iPhone3,2"
#define IPHONE_3_3 @"iPhone3,3"
#define IPHONE_4_1 @"iPhone4,1"
#define IPHONE_5_1 @"iPhone5,1"
#define IPHONE_5_2 @"iPhone5,2"
#define IPHONE_5_3 @"iPhone5,3"
#define IPHONE_5_4 @"iPhone5,4"
#define IPHONE_6_1 @"iPhone6,1"
#define IPHONE_6_2 @"iPhone6,2"
#define IPHONE_7_1 @"iPhone7,1"
#define IPHONE_7_2 @"iPhone7,2"

#define IPOD_1_1 @"iPod1,1"
#define IPOD_2_1 @"iPod2,1"
#define IPOD_3_1 @"iPod3,1"
#define IPOD_4_1 @"iPod4,1"
#define IPOD_5_1 @"iPod5,1"

#define IPAD_1_1 @"iPad1,1"
#define IPAD_2_1 @"iPad2,1"
#define IPAD_2_2 @"iPad2,2"
#define IPAD_2_3 @"iPad2,3"
#define IPAD_2_4 @"iPad2,4"
#define IPAD_2_5 @"iPad2,5"
#define IPAD_2_6 @"iPad2,6"
#define IPAD_2_7 @"iPad2,7"
#define IPAD_3_1 @"iPad3,1"
#define IPAD_3_2 @"iPad3,2"
#define IPAD_3_3 @"iPad3,3"
#define IPAD_3_4 @"iPad3,4"
#define IPAD_3_5 @"iPad3,5"
#define IPAD_3_6 @"iPad3,6"
#define IPAD_4_1 @"iPad4,1"
#define IPAD_4_2 @"iPad4,2"
#define IPAD_4_3 @"iPad4,3"
#define IPAD_4_4 @"iPad4,4"
#define IPAD_4_5 @"iPad4,5"
#define IPAD_4_6 @"iPad4,6"
#define IPAD_4_7 @"iPad4,7"
#define IPAD_4_8 @"iPad4,8"
#define IPAD_4_9 @"iPad4,9"
#define IPAD_5_3 @"iPad5,3"
#define IPAD_5_4 @"iPad5,4"

#define SIMULATOR_386 @"i386"
#define SIMULATOR_X86_64 @"x86_64"


// enum constants

#define DEVICE_FAMILY_UNKNOWN   000
#define DEVICE_FAMILY_IPHONE    100
#define DEVICE_FAMILY_IPOD      200
#define DEVICE_FAMILY_IPAD      300
#define DEVICE_FAMILY_SIMULATOR 400

#define ENUM_VAL_TO_DEVICE_FAMILY(ENUM_VAL) (ENUM_VAL / 100) * 100

#define UNKNOWN_ENUM_VAL (DEVICE_FAMILY_UNKNOWN + 0)

#define IPHONE_1_1_ENUM_VAL (DEVICE_FAMILY_IPHONE + 11)
#define IPHONE_1_2_ENUM_VAL (DEVICE_FAMILY_IPHONE + 12)
#define IPHONE_2_1_ENUM_VAL (DEVICE_FAMILY_IPHONE + 21)
#define IPHONE_3_1_ENUM_VAL (DEVICE_FAMILY_IPHONE + 31)
#define IPHONE_3_2_ENUM_VAL (DEVICE_FAMILY_IPHONE + 32)
#define IPHONE_3_3_ENUM_VAL (DEVICE_FAMILY_IPHONE + 33)
#define IPHONE_4_1_ENUM_VAL (DEVICE_FAMILY_IPHONE + 41)
#define IPHONE_5_1_ENUM_VAL (DEVICE_FAMILY_IPHONE + 51)
#define IPHONE_5_2_ENUM_VAL (DEVICE_FAMILY_IPHONE + 52)
#define IPHONE_5_3_ENUM_VAL (DEVICE_FAMILY_IPHONE + 53)
#define IPHONE_5_4_ENUM_VAL (DEVICE_FAMILY_IPHONE + 54)
#define IPHONE_6_1_ENUM_VAL (DEVICE_FAMILY_IPHONE + 61)
#define IPHONE_6_2_ENUM_VAL (DEVICE_FAMILY_IPHONE + 62)
#define IPHONE_7_1_ENUM_VAL (DEVICE_FAMILY_IPHONE + 71)
#define IPHONE_7_2_ENUM_VAL (DEVICE_FAMILY_IPHONE + 72)

#define IPOD_1_1_ENUM_VAL (DEVICE_FAMILY_IPOD + 11)
#define IPOD_2_1_ENUM_VAL (DEVICE_FAMILY_IPOD + 21)
#define IPOD_3_1_ENUM_VAL (DEVICE_FAMILY_IPOD + 31)
#define IPOD_4_1_ENUM_VAL (DEVICE_FAMILY_IPOD + 41)
#define IPOD_5_1_ENUM_VAL (DEVICE_FAMILY_IPOD + 51)

#define IPAD_1_1_ENUM_VAL (DEVICE_FAMILY_IPAD + 11)
#define IPAD_2_1_ENUM_VAL (DEVICE_FAMILY_IPAD + 21)
#define IPAD_2_2_ENUM_VAL (DEVICE_FAMILY_IPAD + 22)
#define IPAD_2_3_ENUM_VAL (DEVICE_FAMILY_IPAD + 23)
#define IPAD_2_4_ENUM_VAL (DEVICE_FAMILY_IPAD + 24)
#define IPAD_2_5_ENUM_VAL (DEVICE_FAMILY_IPAD + 25)
#define IPAD_2_6_ENUM_VAL (DEVICE_FAMILY_IPAD + 26)
#define IPAD_2_7_ENUM_VAL (DEVICE_FAMILY_IPAD + 27)
#define IPAD_3_1_ENUM_VAL (DEVICE_FAMILY_IPAD + 31)
#define IPAD_3_2_ENUM_VAL (DEVICE_FAMILY_IPAD + 32)
#define IPAD_3_3_ENUM_VAL (DEVICE_FAMILY_IPAD + 33)
#define IPAD_3_4_ENUM_VAL (DEVICE_FAMILY_IPAD + 34)
#define IPAD_3_5_ENUM_VAL (DEVICE_FAMILY_IPAD + 35)
#define IPAD_3_6_ENUM_VAL (DEVICE_FAMILY_IPAD + 36)
#define IPAD_4_1_ENUM_VAL (DEVICE_FAMILY_IPAD + 41)
#define IPAD_4_2_ENUM_VAL (DEVICE_FAMILY_IPAD + 42)
#define IPAD_4_3_ENUM_VAL (DEVICE_FAMILY_IPAD + 43)
#define IPAD_4_4_ENUM_VAL (DEVICE_FAMILY_IPAD + 44)
#define IPAD_4_5_ENUM_VAL (DEVICE_FAMILY_IPAD + 45)
#define IPAD_4_6_ENUM_VAL (DEVICE_FAMILY_IPAD + 46)
#define IPAD_4_7_ENUM_VAL (DEVICE_FAMILY_IPAD + 47)
#define IPAD_4_8_ENUM_VAL (DEVICE_FAMILY_IPAD + 48)
#define IPAD_4_9_ENUM_VAL (DEVICE_FAMILY_IPAD + 49)
#define IPAD_5_3_ENUM_VAL (DEVICE_FAMILY_IPAD + 53)
#define IPAD_5_4_ENUM_VAL (DEVICE_FAMILY_IPAD + 54)

#define SIMULATOR_386_ENUM_VAL (DEVICE_FAMILY_SIMULATOR + 00)
#define SIMULATOR_X86_64_ENUM_VAL (DEVICE_FAMILY_SIMULATOR + 01)


// enums

typedef NS_ENUM(NSUInteger, UIDeviceFamily) {
    UIDeviceFamilyUnknown = DEVICE_FAMILY_UNKNOWN,
    UIDeviceFamilyIPhone = DEVICE_FAMILY_IPHONE,
    UIDeviceFamilyIPod = DEVICE_FAMILY_IPOD,
    UIDeviceFamilyIPad = DEVICE_FAMILY_IPAD,
};

typedef NS_ENUM(NSUInteger, UIDevicePlatform) {
    UIDeviceUnknown = UNKNOWN_ENUM_VAL,

    UIDeviceiPhone1 = IPHONE_1_1_ENUM_VAL,
    UIDeviceiPhone3G = IPHONE_1_2_ENUM_VAL,
    UIDeviceiPhone3GS = IPHONE_2_1_ENUM_VAL,
    UIDeviceiPhone4GSM = IPHONE_3_1_ENUM_VAL,
    UIDeviceiPhone4GSMRevA = IPHONE_3_2_ENUM_VAL,
    UIDeviceiPhone4CDMA = IPHONE_3_3_ENUM_VAL,
    UIDeviceiPhone4S = IPHONE_4_1_ENUM_VAL,
    UIDeviceiPhone5GSM = IPHONE_5_1_ENUM_VAL,
    UIDeviceiPhone5CDMA = IPHONE_5_2_ENUM_VAL,
    UIDeviceiPhone5CGSM = IPHONE_5_3_ENUM_VAL,
    UIDeviceiPhone5CGSMCDMA = IPHONE_5_4_ENUM_VAL,
    UIDeviceiPhone5SGSM = IPHONE_6_1_ENUM_VAL,
    UIDeviceiPhone5SGSMCDMA = IPHONE_6_2_ENUM_VAL,
    UIDeviceiPhone6PlusGSMCDMA = IPHONE_7_1_ENUM_VAL,
    UIDeviceiPhone6GSMCDMA = IPHONE_7_2_ENUM_VAL,

    UIDeviceiPod1 = IPOD_1_1_ENUM_VAL,
    UIDeviceiPod2 = IPOD_2_1_ENUM_VAL,
    UIDeviceiPod3 = IPOD_3_1_ENUM_VAL,
    UIDeviceiPod4 = IPOD_4_1_ENUM_VAL,
    UIDeviceiPod5 = IPOD_5_1_ENUM_VAL,

    UIDeviceiPad1 = IPAD_1_1_ENUM_VAL,
    UIDeviceiPad2WiFi = IPAD_2_1_ENUM_VAL,
    UIDeviceiPad2GSM = IPAD_2_2_ENUM_VAL,
    UIDeviceiPad2CDMA = IPAD_2_3_ENUM_VAL,
    UIDeviceiPad2WiFiRevA = IPAD_2_4_ENUM_VAL,
    UIDeviceiPadMini1WiFi = IPAD_2_5_ENUM_VAL,
    UIDeviceiPadMini1GSM = IPAD_2_6_ENUM_VAL,
    UIDeviceiPadMini1GSMCDMA = IPAD_2_7_ENUM_VAL,
    UIDeviceiPad3WiFi = IPAD_3_1_ENUM_VAL,
    UIDeviceiPad3GSM = IPAD_3_2_ENUM_VAL,
    UIDeviceiPad3GSMCDMA = IPAD_3_3_ENUM_VAL,
    UIDeviceiPad4WiFi = IPAD_3_4_ENUM_VAL,
    UIDeviceiPad4GSM = IPAD_3_5_ENUM_VAL,
    UIDeviceiPad4GSMCDMA = IPAD_3_6_ENUM_VAL,
    UIDeviceiPadAirWiFi = IPAD_4_1_ENUM_VAL,
    UIDeviceiPadAirCellular = IPAD_4_2_ENUM_VAL,
    UIDeviceiPadAirCellularRevA = IPAD_4_3_ENUM_VAL,
    UIDeviceiPadMini2WiFi = IPAD_4_4_ENUM_VAL,
    UIDeviceiPadMini2Celluar = IPAD_4_5_ENUM_VAL,
    UIDeviceiPadMini2CelluarRevA = IPAD_4_6_ENUM_VAL,
    UIDeviceiPadMini3Wifi = IPAD_4_7_ENUM_VAL,
    UIDeviceiPadMini3WifiCelluar = IPAD_4_8_ENUM_VAL,
    UIDeviceiPadMini3WifiCelluarRevA = IPAD_4_9_ENUM_VAL,
    UIDeviceiPadAir2Wifi = IPAD_5_3_ENUM_VAL,
    UIDeviceiPadAir2WifiCelluar = IPAD_5_4_ENUM_VAL,
};


// product names

#define UNKNOWN_PRODUCT_NAME @"Unknown"

#define IPHONE_1_1_PRODUCT_NAME @"iPhone 1G"
#define IPHONE_1_2_PRODUCT_NAME @"iPhone 3G"
#define IPHONE_2_1_PRODUCT_NAME @"iPhone 3GS"
#define IPHONE_3_1_PRODUCT_NAME @"iPhone 4"
#define IPHONE_3_2_PRODUCT_NAME @"iPhone 4 rev. A"
#define IPHONE_3_3_PRODUCT_NAME @"Verizon iPhone 4"
#define IPHONE_4_1_PRODUCT_NAME @"iPhone 4S"
#define IPHONE_5_1_PRODUCT_NAME @"iPhone 5 (GSM)"
#define IPHONE_5_2_PRODUCT_NAME @"iPhone 5 (GSM+CDMA)"
#define IPHONE_5_3_PRODUCT_NAME @"iPhone 5C (GSM)"
#define IPHONE_5_4_PRODUCT_NAME @"iPhone 5C (GSM+CDMA)"
#define IPHONE_6_1_PRODUCT_NAME @"iPhone 5S (GSM)"
#define IPHONE_6_2_PRODUCT_NAME @"iPhone 5S (GSM+CDMA)"
#define IPHONE_7_1_PRODUCT_NAME @"iPhone 6 Plus"
#define IPHONE_7_2_PRODUCT_NAME @"iPhone 6"

#define IPOD_1_1_PRODUCT_NAME @"iPod Touch 1G"
#define IPOD_2_1_PRODUCT_NAME @"iPod Touch 2G"
#define IPOD_3_1_PRODUCT_NAME @"iPod Touch 3G"
#define IPOD_4_1_PRODUCT_NAME @"iPod Touch 4G"
#define IPOD_5_1_PRODUCT_NAME @"iPod Touch 5G"

#define IPAD_1_1_PRODUCT_NAME @"iPad"
#define IPAD_2_1_PRODUCT_NAME @"iPad 2 (WiFi)"
#define IPAD_2_2_PRODUCT_NAME @"iPad 2 (GSM)"
#define IPAD_2_3_PRODUCT_NAME @"iPad 2 (CDMA)"
#define IPAD_2_4_PRODUCT_NAME @"iPad 2 (WiFi)"
#define IPAD_2_5_PRODUCT_NAME @"iPad Mini (WiFi)"
#define IPAD_2_6_PRODUCT_NAME @"iPad Mini (GSM)"
#define IPAD_2_7_PRODUCT_NAME @"iPad Mini (GSM+CDMA)"
#define IPAD_3_1_PRODUCT_NAME @"iPad 3 (WiFi)"
#define IPAD_3_2_PRODUCT_NAME @"iPad 3 (GSM+CDMA)"
#define IPAD_3_3_PRODUCT_NAME @"iPad 3 (GSM)"
#define IPAD_3_4_PRODUCT_NAME @"iPad 4 (WiFi)"
#define IPAD_3_5_PRODUCT_NAME @"iPad 4 (GSM)"
#define IPAD_3_6_PRODUCT_NAME @"iPad 4 (GSM+CDMA)"
#define IPAD_4_1_PRODUCT_NAME @"iPad Air (WiFi)"
#define IPAD_4_2_PRODUCT_NAME @"iPad Air (Cellular)"
#define IPAD_4_3_PRODUCT_NAME @"iPad Air (Cellular) rev. A"
#define IPAD_4_4_PRODUCT_NAME @"iPad Mini 2G (WiFi)"
#define IPAD_4_5_PRODUCT_NAME @"iPad Mini 2G (Cellular)"
#define IPAD_4_6_PRODUCT_NAME @"iPad Mini 2G"
#define IPAD_4_7_PRODUCT_NAME @"iPad Mini 3G"
#define IPAD_4_8_PRODUCT_NAME @"iPad Mini 3G (WiFi)"
#define IPAD_4_9_PRODUCT_NAME @"iPad Mini 3G (Celluar)"
#define IPAD_5_3_PRODUCT_NAME @"iPad Air 2 (WiFi)"
#define IPAD_5_4_PRODUCT_NAME @"iPad Air 2 (Celluar)"

#define SIMULATOR_386_PRODUCT_NAME @"Simulator x386"
#define SIMULATOR_X86_64_PRODUCT_NAME @"Simulator x86_64"


// model names

#define UNKNOWN_MODEL_NAME @"Unknown"

#define IPHONE_1_1_MODEL_NAME @"iPhone 1G"
#define IPHONE_1_2_MODEL_NAME @"iPhone 3G"
#define IPHONE_2_1_MODEL_NAME @"iPhone 3GS"
#define IPHONE_3_1_MODEL_NAME @"iPhone 4"
#define IPHONE_3_2_MODEL_NAME @"iPhone 4"
#define IPHONE_3_3_MODEL_NAME @"iPhone 4"
#define IPHONE_4_1_MODEL_NAME @"iPhone 4S"
#define IPHONE_5_1_MODEL_NAME @"iPhone 5"
#define IPHONE_5_2_MODEL_NAME @"iPhone 5"
#define IPHONE_5_3_MODEL_NAME @"iPhone 5C"
#define IPHONE_5_4_MODEL_NAME @"iPhone 5C"
#define IPHONE_6_1_MODEL_NAME @"iPhone 5S"
#define IPHONE_6_2_MODEL_NAME @"iPhone 5S"
#define IPHONE_7_1_MODEL_NAME @"iPhone 6 Plus"
#define IPHONE_7_2_MODEL_NAME @"iPhone 6"

#define IPOD_1_1_MODEL_NAME @"iPod Touch 1G"
#define IPOD_2_1_MODEL_NAME @"iPod Touch 2G"
#define IPOD_3_1_MODEL_NAME @"iPod Touch 3G"
#define IPOD_4_1_MODEL_NAME @"iPod Touch 4G"
#define IPOD_5_1_MODEL_NAME @"iPod Touch 5G"

#define IPAD_1_1_MODEL_NAME @"iPad"
#define IPAD_2_1_MODEL_NAME @"iPad 2"
#define IPAD_2_2_MODEL_NAME @"iPad 2"
#define IPAD_2_3_MODEL_NAME @"iPad 2"
#define IPAD_2_4_MODEL_NAME @"iPad 2"
#define IPAD_2_5_MODEL_NAME @"iPad Mini"
#define IPAD_2_6_MODEL_NAME @"iPad Mini"
#define IPAD_2_7_MODEL_NAME @"iPad Mini"
#define IPAD_3_1_MODEL_NAME @"The new iPad"
#define IPAD_3_2_MODEL_NAME @"The new iPad"
#define IPAD_3_3_MODEL_NAME @"The new iPad"
#define IPAD_3_4_MODEL_NAME @"iPad 4"
#define IPAD_3_5_MODEL_NAME @"iPad 4"
#define IPAD_3_6_MODEL_NAME @"iPad 4"
#define IPAD_4_1_MODEL_NAME @"iPad Air"
#define IPAD_4_2_MODEL_NAME @"iPad Air"
#define IPAD_4_3_MODEL_NAME @"iPad Air"
#define IPAD_4_4_MODEL_NAME @"iPad Mini 2G"
#define IPAD_4_5_MODEL_NAME @"iPad Mini 2G"
#define IPAD_4_6_MODEL_NAME @"iPad Mini 2G"
#define IPAD_4_7_MODEL_NAME @"iPad Mini 3G"
#define IPAD_4_8_MODEL_NAME @"iPad Mini 3G"
#define IPAD_4_9_MODEL_NAME @"iPad Mini 3G"
#define IPAD_5_3_MODEL_NAME @"iPad Air 2"
#define IPAD_5_4_MODEL_NAME @"iPad Air 2"

#define SIMULATOR_386_MODEL_NAME @"Simulator x386"
#define SIMULATOR_X86_64_MODEL_NAME @"Simulator x86_64"


// ppi

#define UNKNOWN_PPI 999

#define IPHONE_1_1_PPI 163
#define IPHONE_1_2_PPI 163
#define IPHONE_2_1_PPI 163
#define IPHONE_3_1_PPI 326
#define IPHONE_3_2_PPI 326
#define IPHONE_3_3_PPI 326
#define IPHONE_4_1_PPI 326
#define IPHONE_5_1_PPI 326
#define IPHONE_5_2_PPI 326
#define IPHONE_5_3_PPI 326
#define IPHONE_5_4_PPI 326
#define IPHONE_6_1_PPI 326
#define IPHONE_6_2_PPI 326
#define IPHONE_7_1_PPI 401
#define IPHONE_7_2_PPI 326

#define IPOD_1_1_PPI 163
#define IPOD_2_1_PPI 163
#define IPOD_3_1_PPI 163
#define IPOD_4_1_PPI 326
#define IPOD_5_1_PPI 326

#define IPAD_1_1_PPI 132
#define IPAD_2_1_PPI 132
#define IPAD_2_2_PPI 132
#define IPAD_2_3_PPI 132
#define IPAD_2_4_PPI 132
#define IPAD_2_5_PPI 163
#define IPAD_2_6_PPI 163
#define IPAD_2_7_PPI 163
#define IPAD_3_1_PPI 264
#define IPAD_3_2_PPI 264
#define IPAD_3_3_PPI 264
#define IPAD_3_4_PPI 264
#define IPAD_3_5_PPI 264
#define IPAD_3_6_PPI 264
#define IPAD_4_1_PPI 264
#define IPAD_4_2_PPI 264
#define IPAD_4_3_PPI 264
#define IPAD_4_4_PPI 326
#define IPAD_4_5_PPI 326
#define IPAD_4_6_PPI 326
#define IPAD_4_7_PPI 326
#define IPAD_4_8_PPI 326
#define IPAD_4_9_PPI 326
#define IPAD_5_3_PPI 264
#define IPAD_5_4_PPI 264

#define SIMULATOR_386_PPI UNKNOWN_PPI
#define SIMULATOR_X86_64_PPI UNKNOWN_PPI


// frequency

#define UNKNOWN_FREQ 000

#define IPHONE_1_1_FREQ 412
#define IPHONE_1_2_FREQ 412
#define IPHONE_2_1_FREQ 600
#define IPHONE_3_1_FREQ 800
#define IPHONE_3_2_FREQ 800
#define IPHONE_3_3_FREQ 800
#define IPHONE_4_1_FREQ 800
#define IPHONE_5_1_FREQ 1300
#define IPHONE_5_2_FREQ 1300
#define IPHONE_5_3_FREQ 1300
#define IPHONE_5_4_FREQ 1300
#define IPHONE_6_1_FREQ 1300
#define IPHONE_6_2_FREQ 1300
#define IPHONE_7_1_FREQ 1400
#define IPHONE_7_1_FREQ 1400

#define IPOD_1_1_FREQ 412
#define IPOD_2_1_FREQ 533
#define IPOD_3_1_FREQ 600
#define IPOD_4_1_FREQ 800
#define IPOD_5_1_FREQ 800

#define IPAD_1_1_FREQ 1000
#define IPAD_2_1_FREQ 1000
#define IPAD_2_2_FREQ 1000
#define IPAD_2_3_FREQ 1000
#define IPAD_2_4_FREQ 1000
#define IPAD_2_5_FREQ 1000
#define IPAD_2_6_FREQ 1000
#define IPAD_2_7_FREQ 1000
#define IPAD_3_1_FREQ 1000
#define IPAD_3_2_FREQ 1000
#define IPAD_3_3_FREQ 1000
#define IPAD_3_4_FREQ 1400
#define IPAD_3_5_FREQ 1400
#define IPAD_3_6_FREQ 1400
#define IPAD_4_1_FREQ 1400
#define IPAD_4_2_FREQ 1400
#define IPAD_4_3_FREQ 1400
#define IPAD_4_4_FREQ 1300
#define IPAD_4_5_FREQ 1300
#define IPAD_4_6_FREQ 1300
#define IPAD_4_7_FREQ 1300
#define IPAD_4_8_FREQ 1300
#define IPAD_4_9_FREQ 1300
#define IPAD_5_3_FREQ 1500
#define IPAD_5_4_FREQ 1500

#define SIMULATOR_386_FREQ UNKNOWN_FREQ
#define SIMULATOR_X86_64_FREQ UNKNOWN_FREQ

