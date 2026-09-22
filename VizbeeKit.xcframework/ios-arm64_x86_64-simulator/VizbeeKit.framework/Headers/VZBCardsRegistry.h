//
//  VZBCardsRegistry.h
//  VizbeeKit
//
//  Copyright © Vizbee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VZBCardIdentifiers.h"
#import "VZBUICard.h"

NS_ASSUME_NONNULL_BEGIN

/// Creates a fresh card. Registered instead of an instance so every
/// presentation gets a new card (no UI state leaks between showings).
typedef id<VZBUICard> _Nonnull (^VZBCardBuilder)(void);

/**
 * Registry of replaceable cards. Apps register a card per card id to replace
 * VizbeeKit's built-in one entirely (last registration wins); nothing
 * registered means nothing changes.
 */
@interface VZBCardsRegistry : NSObject

+ (void)registerCard:(VZBCardBuilder)cardBuilder
           forCardID:(VZBCardID)cardID;

@end

NS_ASSUME_NONNULL_END
