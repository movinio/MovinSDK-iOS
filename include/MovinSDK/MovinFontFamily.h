//
// Created by Tim Potze on 26/09/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovinDataObject.h"

/**
 * @class MovinFontFamily
 * @brief Represents a font family.
 */
@interface MovinFontFamily : MovinDataObject
/**
 * @brief Gets the URL of the font.
 */
@property(readonly, nullable) NSString* url;

/**
 * @brief Returns the UIFont instance which this font family represents.
 * @param callback The callback to invoke once the font has been loaded.
 * @return The UIFont instance which this font family represents.
 */
- (void)getFont:(nonnull void (^)(UIFont* _Nullable))callback;
@end