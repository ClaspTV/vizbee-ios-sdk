//
// VZBCustomEventHandler.h
// VizbeeKit
//
// Copyright © Vizbee. All rights reserved.
//
#import "VZBCustomEvent.h"

@protocol VZBCustomEventHandler <NSObject>

- (void)onEvent:(VZBCustomEvent *)event;

@end
