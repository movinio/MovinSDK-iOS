//
// MovinFloorSwitcher.h
// MovinSDK
//
// Copyright © 2016 Movin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MovinTileProvider;

/**
 * A graphical interface of a floor switcher button.
 */
@interface MovinFloorSwitcher : UIView
/**
 * Gets or sets the background color of the current floor indicator and the floor switcher button.
 */
@property UIColor* focusedBackgroundColor;
/**
 * Gets or sets the font color of the current floor.
 */
@property UIColor* focusedForegroundColor;
/**
 * Gets or sets the background color of the floors list.
 */
@property UIColor* unfocusedBackgroundColor;
/**
 * Gets or sets the font color of floors in the floors list.
 */
@property UIColor* unfocusedForegroundColor;
/**
 * Gets or sets the font used within the floor switcher.
 */
@property UIFont* font;
/**
 * Gets or sets the maximum height of the floor switcher.
 */
@property float maxHeight;
/**
 * Gets or sets the height of every item in the floors list.
 */
@property float itemHeight;
/**
 * Gets or sets the corner radius of the floor switcher.
 */
@property float cornerRadius;
/**
 * Gets or sets the margin between the floor switcher button and the floors list.
 */
@property float margin;
/**
 * Gets or sets the duration of the floors list.
 */
@property float animationDuration;
/**
 * Gets or sets the tile provider this instance will switch the floor of.
 */
@property MovinTileProvider* tileProvider;
/**
 * Gets or sets a value indicating whether the floors list is visible (YES) or hidden (NO).
 */
@property BOOL isOpen;
/**
 * Gets or sets a value indicating whether the floor switcher is enabled and visible.
 */
@property BOOL enabled;
/**
 * Initializes a new MovinFloorSwitcher object with the specified tile provider.
 *
 * @param tileProvider The tile provider to switch the floor of.
 * @return A MovinFloorSwitcher object with the specified tile provider.
 */
- (id)initWithTileProvider:(MovinTileProvider*)tileProvider;
@end
