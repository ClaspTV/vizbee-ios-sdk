//
//  VZBPairingCardViewModel.h
//  VizbeeKit
//
//  Copyright © Vizbee. All rights reserved.
//

#import "VZBCardViewModel.h"

NS_ASSUME_NONNULL_BEGIN

/// Prompt pairing status of the pairing card.
typedef NS_ENUM(NSInteger, VZBPairingPromptStatus) {
    VZBPairingPromptStatusWaiting,  // waiting for the user to confirm on the TV
    VZBPairingPromptStatusDenied,   // the user declined the prompt on the TV
    VZBPairingPromptStatusTimeout,  // the prompt timed out on the TV
};

/// Prompt pairing status shown on the card.
@interface VZBPairingPromptStatusViewModel : NSObject

@property (nonatomic, assign) VZBPairingPromptStatus state;

/// Short status text, e.g. "Connection declined".
@property (nonatomic, copy, nullable) NSString *text;

@end

/// View model of the prompt pairing card (VZBCardIDPairing).
@interface VZBPairingCardViewModel : VZBCardViewModel

/// Header of the card.
@property (nonatomic, strong) VZBHeaderViewModel *header;

/// The selected device.
@property (nonatomic, strong) VZBDeviceViewModel *device;

/// The card's action in the current state.
@property (nonatomic, strong) VZBActionViewModel *action;

/// Refresh/retry row of the card.
@property (nonatomic, strong) VZBRefreshActionViewModel *refreshAction;

/// Prompt pairing status of the card.
@property (nonatomic, strong) VZBPairingPromptStatusViewModel *pairingStatus;

/// Re-sends the pairing prompt to the device. Both the card's action
/// (Retry, once declined) and the refresh/retry row run it.
@property (nonatomic, copy, nullable) void (^onRetry)(void);

@end

NS_ASSUME_NONNULL_END
