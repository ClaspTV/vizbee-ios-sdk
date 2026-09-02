//
//  VZBCardIdentifiers.h
//  VizbeeKit
//
//  Copyright © Vizbee. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Identifier of a replaceable Vizbee card.
typedef NSString * VZBCardID NS_TYPED_ENUM;

/// Device status card ("Connecting to ..." interstitial).
FOUNDATION_EXPORT VZBCardID const VZBCardIDDeviceStatus;

/// App install card (install the target app on the selected device).
FOUNDATION_EXPORT VZBCardID const VZBCardIDAppInstall;

/// Prompt pairing card (confirm the pairing prompt on the TV).
FOUNDATION_EXPORT VZBCardID const VZBCardIDPairing;

/// Manual app install card (devices whose app store the SDK cannot drive,
/// e.g. Xbox — the user installs the app themselves).
FOUNDATION_EXPORT VZBCardID const VZBCardIDManualAppInstall;

NS_ASSUME_NONNULL_END
