//
//  VZBCardViewModel.h
//  VizbeeKit
//
//  Copyright © Vizbee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VZBCardIdentifiers.h"

NS_ASSUME_NONNULL_BEGIN

/// Header of a card: title + optional subtitle.
@interface VZBHeaderViewModel : NSObject

/// Card title, e.g. "Connecting to James Fire TV".
@property (nonatomic, copy, nullable) NSString *title;

/// Card subtitle, e.g. "Install Sample App on your Fire TV".
@property (nonatomic, copy, nullable) NSString *subtitle;

@end

/// The card's call-to-action; a nil title means the card has no such action
/// in its current state. What the action does is named on the card's own
/// view model, e.g. VZBDeviceStatusCardViewModel.onDisconnect.
@interface VZBActionViewModel : NSObject

/// Action title, e.g. "Cancel" / "Install".
@property (nonatomic, copy, nullable) NSString *title;

@end

/// Refresh/retry row of the card; nil fields when the stage has no such row.
@interface VZBRefreshActionViewModel : NSObject

/// Body text of the row, e.g. "Install screen not shown on your TV?".
@property (nonatomic, copy, nullable) NSString *labelText;

/// Action title, e.g. "Refresh" / "Retry".
@property (nonatomic, copy, nullable) NSString *actionTitle;

@end

/// The selected device shown on a card.
@interface VZBDeviceViewModel : NSObject

/// Friendly name, e.g. "James Fire TV".
@property (nonatomic, copy, nullable) NSString *friendlyName;

/// Device type identifier, e.g. "firetv".
@property (nonatomic, copy, nullable) NSString *type;

/// Icon representing the device type.
@property (nonatomic, strong, nullable) UIImage *icon;

@end

/**
 * Snapshot of everything a card needs to render.
 * Built by the hosting card controller on every state change and pushed
 * to the card via -[VZBUICard bindViewModel:].
 *
 * The base carries only what every card has — its identity and the close
 * action; everything a card renders lives in grouped fields on its
 * subclass — e.g. VZBDeviceStatusCardViewModel.
 */
@interface VZBCardViewModel : NSObject

/// Card this state belongs to.
@property (nonatomic, copy) VZBCardID cardID;

/// Dismiss the card (the close "X"). Set by the hosting card controller;
/// the SDK's close button invokes it internally when tapped, a card built
/// from custom views calls it directly.
@property (nonatomic, copy, nullable) void (^onClose)(void);

@end

NS_ASSUME_NONNULL_END
