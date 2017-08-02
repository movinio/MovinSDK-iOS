///
// MovinTileStyleTextRule.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
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

/**
 * Gets the name of the property which contains the text which should be displayed by the text entity.
 */
@property(readonly) NSString* textProperty;
/**
 * Gets the name of the property which contains the translation key which should be displayed by the text entity.
 */
@property(readonly) NSString* translationKeyProperty;
@end
