//
//  VZBCastButton.h
//  VizbeeKit
//
//  Copyright (c) Vizbee Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VZBCastIconProxy.h"
#import "VZBCurrentVideoDelegate.h"

typedef NS_ENUM(NSInteger, VZBCastButtonType) {
    VZBCastButtonTypeDefault,
    VZBCastButtonTypeFloating
};

@interface VZBCastButton : UIButton

@property (nonatomic, assign) VZBCastingState castState;

@property (nonatomic, weak) UIViewController* associatedViewController;

@property (nonatomic, weak) id<VZBCurrentVideoDelegate> delegate;

@property (nonatomic, assign) VZBCastButtonType castButtonType;

@property (nonatomic, strong) UIColor *unavailableColor;
@property (nonatomic, strong) UIColor *disconnectedColor;
@property (nonatomic, strong) UIColor *connectedColor;

-(void) performTap;

-(void) performTapWithViewController:(UIViewController *)viewController;

-(void) performTapWithVideo:(id)video andPosition:(NSTimeInterval)position;

-(void) performTapWithVideo:(id)video
               withPosition:(NSTimeInterval)position
          andViewController:(UIViewController *)viewController;

//--------------------------------
#pragma mark - Cast authorization
//--------------------------------

-(void) hideOnNoAuthorizationToCast;
-(void) hideOnNoAvailableDevices;

-(BOOL) isAuthorizedToCast;

@end
