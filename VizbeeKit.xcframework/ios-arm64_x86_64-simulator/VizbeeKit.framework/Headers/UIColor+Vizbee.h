//
//  UIColor+Vizbee.h
//  VizbeeKit
//
//  Created by Gary Kumfert on 6/30/15.
//  Copyright (c) 2015 Vizbee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIColor (Vizbee)

@property (nonatomic, readonly) NSString* hex;

/**
 * Convenience method.  Uses as UIColor* color = [UIColor colorWithRGBHex:0x333333];
 */
+(UIColor*) colorWithRGBHex:(NSUInteger)hex; 

+(UIColor*) colorWithRGBHex:(NSUInteger)hex andAlpha:(CGFloat)alpha;

// one of "#RGB" "#RGBA" "#RRGGBB" "#RRGGBBAA"
+(UIColor*) colorWithRGBHexString:(NSString*)string;

+ (UIColor *)colorWithHue:(CGFloat)hue saturation:(CGFloat)saturation lightness:(CGFloat)lightness alpha:(CGFloat)alpha;

- (BOOL)getHue:(CGFloat *)hue saturation:(CGFloat *)saturation lightness:(CGFloat *)lightness alpha:(CGFloat *)alpha;

- (UIColor *)saturate:(CGFloat)amount;

- (UIColor *)desaturate:(CGFloat)amount;

- (UIColor *)lighten:(CGFloat)amount;

- (UIColor *)darken:(CGFloat)amount;

- (UIColor *)spin:(CGFloat)angle;

- (UIColor *)tint:(CGFloat)percent;

- (UIColor*)shade:(CGFloat)percent;

@end
