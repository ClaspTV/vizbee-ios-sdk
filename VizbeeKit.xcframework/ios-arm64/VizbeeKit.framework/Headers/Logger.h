//
// Logger.h
// VizbeeKit
//
// Copyright © Vizbee. All rights reserved.
//

#import <Foundation/Foundation.h>

/// Empty methods for each log level for release version dummy class
@interface Logger : NSObject

+ (void)e:(NSString * )tag message:(NSString *)message;
+ (void)d:(NSString * )tag message:(NSString *)message;
+ (void)v:(NSString * )tag message:(NSString *)message;
+ (void)w:(NSString * )tag message:(NSString *)message;
+ (void)i:(NSString * )tag message:(NSString *)message;

@end
