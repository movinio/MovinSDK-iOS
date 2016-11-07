//
// Created by Tim Potze on 26/09/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinTileStyleRule.h"

@class MovinFontFamily;

/**
 * @class MovinTileStyleTextRule
 * @brief Represents a single text-style rule for a layer in a tile style.
 */
@interface MovinTileStyleTextRule : MovinTileStyleRule
/**
 * @brief Gets font size. How to translate this font size in an actual size is dependent on the
 * `textScaling` property.
 */
@property(readonly) float fontSize;
/**
 * @brief Gets the font family. This can either be a common font available on most devices or a font which must be
 * downloaded first.
 */
@property(readonly) MovinFontFamily* fontFamily;
/**
 * @brief Gets a value indicating whether the font is bold.
 */
@property(readonly) BOOL isBold;
/**
 * @brief Gets a value indicating whether the font is italic.
 */
@property(readonly) BOOL isItalics;
/**
 * @brief Gets a value indicating whether the text has a text halo.
 */
@property(readonly) BOOL hasTextHalo;
/**
 * @brief Gets the color of the text halo.
 */
@property(readonly) UIColor* textHaloColor;
/**
 * @brief Gets the width or thickness of the text halo.
 */
@property(readonly) float textHaloWidth;

@end