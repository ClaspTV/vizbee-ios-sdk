//
//  VZBComponentStyling.h
//  VizbeeKit
//
//  Copyright © Vizbee. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VZBCardViewModel;

NS_ASSUME_NONNULL_BEGIN

/**
 * Adopted by card components that style themselves with flat theme classes,
 * so a hosting card controller can re-register them under scoped class
 * chains (e.g. "DeviceCard.ContentView.TitleLabel").
 */
@protocol VZBStyleableComponent <NSObject>

/// Style id the component registered itself with (e.g. "titleLabel").
@property (nonatomic, readonly) NSString *vzbStyleID;

/// Flat theme classes the component styled itself with (e.g. "TitleLabel").
@property (nonatomic, readonly) NSArray<NSString *> *vzbStyleClasses;

@end

/**
 * Adopted by the card-hosting view controllers. Components find their host
 * via the responder chain: they register through it for scoped styling when
 * they enter a window, and read the current view model to fire its action
 * callbacks when tapped.
 */
@protocol VZBComponentHost <NSObject>

- (void)registerCardComponent:(UIView<VZBStyleableComponent> *)component;

/// The last view model pushed to the hosted card; carries the action
/// callbacks components invoke.
@property (nonatomic, readonly, nullable) VZBCardViewModel *currentCardViewModel;

@end

NS_ASSUME_NONNULL_END
