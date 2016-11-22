//
// Created by Tim Potze on 26/09/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovinDataObject.h"

/**
 * Represents a font family.
 */
@interface MovinFontFamily : MovinDataObject
/**
 * Gets the URL of the font.
 */
@property(readonly, nullable) NSString* url;

/**
 * Returns the UIFont instance which this font family represents.
 *
 * @param callback The callback to invoke once the font has been loaded.
 */
- (void)getFont:(nonnull void (^)(UIFont* _Nullable))callback;
@end