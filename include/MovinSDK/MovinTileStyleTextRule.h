//
// Created by Tim Potze on 26/09/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinTileStyleRule.h"

@class MovinFontFamily;

/**
 * Represents a single text-style rule for a layer in a tile style.
 */
@interface MovinTileStyleTextRule : MovinTileStyleRule
/**
 * Gets font size. How to translate this font size in an actual size is dependent on the
 * `textScaling` property.
 */
@property(readonly) float fontSize;
/**
 * Gets the font family. This can either be a common font available on most devices or a font which must be
 * downloaded first.
 */
@property(readonly) MovinFontFamily* fontFamily;
/**
 * Gets a value indicating whether the font is bold.
 */
@property(readonly) BOOL isBold;
/**
 * Gets a value indicating whether the font is italic.
 */
@property(readonly) BOOL isItalics;
/**
 * Gets a value indicating whether the text has a text halo.
 */
@property(readonly) BOOL hasTextHalo;
/**
 * Gets the color of the text halo.
 */
@property(readonly) UIColor* textHaloColor;
/**
 * Gets the width or thickness of the text halo.
 */
@property(readonly) float textHaloWidth;

@end