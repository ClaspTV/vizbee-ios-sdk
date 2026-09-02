//
//  VZBManualAppInstallCardViewModel.h
//  VizbeeKit
//
//  Copyright © Vizbee. All rights reserved.
//

#import "VZBCardViewModel.h"

NS_ASSUME_NONNULL_BEGIN

/// View model of the manual app install card (VZBCardIDManualAppInstall) —
/// shown for devices whose app store the SDK cannot drive (e.g. Xbox), so
/// the user installs the app themselves. One state.
@interface VZBManualAppInstallCardViewModel : VZBCardViewModel

/// Header of the card; `title` carries the install instructions.
@property (nonatomic, strong) VZBHeaderViewModel *header;

/// The selected device.
@property (nonatomic, strong) VZBDeviceViewModel *device;

/// The card's confirm action, e.g. "Ok, Got It!".
@property (nonatomic, strong) VZBActionViewModel *action;

/// Acknowledges the instructions and ends the flow. The card's only action.
@property (nonatomic, copy, nullable) void (^onConfirm)(void);

@end

NS_ASSUME_NONNULL_END
