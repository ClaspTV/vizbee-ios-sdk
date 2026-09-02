//
//  VZBUICard.h
//  VizbeeKit
//
//  Copyright © Vizbee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VZBCardIdentifiers.h"
#import "VZBCardViewModel.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The complete UI of a slot-based card, provided by VizbeeCards and hosted by
 * a VizbeeKit card view controller. The host owns all card logic and pushes
 * state snapshots down; the card view owns all layout and rendering.
 */
@protocol VZBUICard <NSObject>

/// Root view; the host pins it to its own bounds.
- (UIView *)view;

/// Called on every card state change; re-bind the given snapshot. User
/// actions report back through the snapshot's callbacks, which the card
/// wires to its own views; the SDK's close button fires onClose itself.
- (void)bindViewModel:(VZBCardViewModel *)viewModel NS_SWIFT_NAME(bind(with:));

@end

NS_ASSUME_NONNULL_END
