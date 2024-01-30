//
// VZBCustomEvent.h
// VizbeeKit
//
// Copyright © Vizbee. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VZBCustomEvent : NSObject

- (instancetype)initWithType:(NSString *)type andData:(NSDictionary *)data;

@property (nonatomic, copy, readonly) NSString *type;
@property (nonatomic, strong, readonly) NSDictionary *data;

@end

NS_ASSUME_NONNULL_END
