//
// VZBSmartHelpOptions.h
// VizbeeKit
//
// Copyright © Vizbee. All rights reserved.
//

#import <Foundation/Foundation.h>

// define the enum for SmartHelp options
typedef NS_OPTIONS(NSUInteger, VZBSmartHelpSubflow) {
    VZBSmartHelpSubflowCastAuthorization = 1 << 1,
    VZBSmartHelpSubflowCastIntroduction = 1 << 2,
    VZBSmartHelpSubflowSmartInstall = 1 << 3
};

NS_ASSUME_NONNULL_BEGIN

@interface VZBSmartHelpOptions : NSObject

@property (nonatomic, assign) VZBSmartHelpSubflow enabledSubflows;

@end

NS_ASSUME_NONNULL_END
