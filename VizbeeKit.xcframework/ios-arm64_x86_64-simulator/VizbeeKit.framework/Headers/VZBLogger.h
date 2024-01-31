//
// VZBLogger.h
// VizbeeKit
//
// Copyright © Vizbee. All rights reserved.
//

#import <Foundation/Foundation.h>

/// Empty methods for each log level for release version dummy class
@interface VZBLogger : NSObject

+ (void)e:(NSString * )tag withMessage:(NSString *)message;
+ (void)d:(NSString * )tag withMessage:(NSString *)message;
+ (void)v:(NSString * )tag withMessage:(NSString *)message;
+ (void)w:(NSString * )tag withMessage:(NSString *)message;
+ (void)i:(NSString * )tag withMessage:(NSString *)message;

@end
