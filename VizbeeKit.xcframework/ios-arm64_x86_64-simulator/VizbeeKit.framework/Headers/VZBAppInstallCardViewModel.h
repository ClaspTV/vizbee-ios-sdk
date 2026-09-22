//
//  VZBAppInstallCardViewModel.h
//  VizbeeKit
//
//  Copyright © Vizbee. All rights reserved.
//

#import "VZBCardViewModel.h"

NS_ASSUME_NONNULL_BEGIN

/// Install status of the app install card (mirrors the install stages).
typedef NS_ENUM(NSInteger, VZBAppInstallCardStatus) {
    VZBAppInstallCardStatusPrompting,   // asking the user to start the install
    VZBAppInstallCardStatusLaunching,   // opening the app store on the device
    VZBAppInstallCardStatusConfirming,  // waiting for the user to confirm on the TV
    VZBAppInstallCardStatusWaiting,     // waiting for the install to finish on the device
    VZBAppInstallCardStatusCompleted,
    VZBAppInstallCardStatusFailed,
};

/// Install status shown on the card.
@interface VZBAppInstallStatusViewModel : NSObject

@property (nonatomic, assign) VZBAppInstallCardStatus state;

/// Short status badge text, e.g. "Installing…" / "Failed".
@property (nonatomic, copy, nullable) NSString *text;

@end

/// View model of the app install card (VZBCardIDAppInstall).
@interface VZBAppInstallCardViewModel : VZBCardViewModel

/// Header of the card.
@property (nonatomic, strong) VZBHeaderViewModel *header;

/// The selected device.
@property (nonatomic, strong) VZBDeviceViewModel *device;

/// The card's action in the current state.
@property (nonatomic, strong) VZBActionViewModel *action;

/// Refresh/retry row of the card.
@property (nonatomic, strong) VZBRefreshActionViewModel *refreshAction;

/// Install status of the card.
@property (nonatomic, strong) VZBAppInstallStatusViewModel *installStatus;

/// Starts the install: opens the app store on the device. The card's
/// action while prompting; nil in every other state.
@property (nonatomic, copy, nullable) void (^onInstall)(void);

/// Re-shows the install screen on the device, or re-confirms an install
/// that never started. The refresh/retry row's action.
@property (nonatomic, copy, nullable) void (^onRefresh)(void);

@end

NS_ASSUME_NONNULL_END
