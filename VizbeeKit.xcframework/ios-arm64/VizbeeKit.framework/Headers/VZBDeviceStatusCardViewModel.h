//
//  VZBDeviceStatusCardViewModel.h
//  VizbeeKit
//
//  Copyright © Vizbee. All rights reserved.
//

#import "VZBCardViewModel.h"

NS_ASSUME_NONNULL_BEGIN

/// Connection status of the device status card.
typedef NS_ENUM(NSInteger, VZBDeviceStatus) {
    VZBDeviceStatusConnecting,
    VZBDeviceStatusLaunching,
    VZBDeviceStatusConnected,
};

/// Connection status shown on the card.
@interface VZBDeviceStatusViewModel : NSObject

@property (nonatomic, assign) VZBDeviceStatus state;

/// Short status text shown on the badge, e.g. "Connecting".
@property (nonatomic, copy, nullable) NSString *text;

@end

/// View model of the device status card (VZBCardIDDeviceStatus).
@interface VZBDeviceStatusCardViewModel : VZBCardViewModel

/// Header of the card.
@property (nonatomic, strong) VZBHeaderViewModel *header;

/// The selected device.
@property (nonatomic, strong) VZBDeviceViewModel *device;

/// The card's action in the current state.
@property (nonatomic, strong) VZBActionViewModel *action;

/// Connection status of the card.
@property (nonatomic, strong) VZBDeviceStatusViewModel *deviceStatus;

/// The card's action in every state (`action.title` defaults to "Cancel"
/// while connecting and "Disconnect" once connected; both disconnect).
@property (nonatomic, copy, nullable) void (^onDisconnect)(void);

@end

NS_ASSUME_NONNULL_END
