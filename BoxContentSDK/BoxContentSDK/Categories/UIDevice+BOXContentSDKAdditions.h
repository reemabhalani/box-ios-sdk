//
//  UIDevice+BOXAdditions.h
//  BoxContentSDK
//
//  Created on 3/21/16.
//  Copyright © 2016 Box. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, BOXiOSVersion) {
    BOXiOSVersionUnknown,
    BOXiOSVersionTooOld,
    BOXiOSVersion7,
    BOXiOSVersion7_1,
    BOXiOSVersion8,
    BOXiOSVersion9,
    BOXiOSVersion10,
    BOXiOSVersionLatest
};

@interface UIDevice (BOXContentSDKAdditions)

+ (BOXiOSVersion)iOSVersion;

+ (BOOL)isSingleCore;
- (BOOL)isIpad;
- (BOOL)isIphone;
- (BOOL)isRunningiOS71;
- (BOOL)isRunningiOS7xOrEarlier;

- (NSString *)deviceName;

- (NSString *)modelID;
- (NSString *)deviceTypeString;
- (NSString *)detailedModelName;
+ (BOOL)isRunningiOS10xOrLater;

@end
