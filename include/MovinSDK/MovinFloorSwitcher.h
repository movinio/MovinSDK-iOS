//
//  MovinFloorSwitcher.h
//  MovinSDK
//
//  Created by Tim Potze on 25/04/16.
//  Copyright © 2016 Movin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MovinTileProvider;

/**
 * @class MovinFloorSwitcher
 * @brief A graphical interface of a floor switcher button.
 */
@interface MovinFloorSwitcher : UIView
/**
 * @brief Gets or sets the background color of the current floor indicator and the floor switcher button.
 */
@property UIColor* focusedBackgroundColor;
/**
 * @brief Gets or sets the font color of the current floor.
 */
@property UIColor* focusedForegroundColor;
/**
 * @brief Gets or sets the background color of the floors list.
 */
@property UIColor* unfocusedBackgroundColor;
/**
 * @brief Gets or sets the font color of floors in the floors list.
 */
@property UIColor* unfocusedForegroundColor;
/**
 * @brief Gets or sets the font used within the floor switcher.
 */
@property UIFont* font;
/**
 * @brief Gets or sets the maximum height of the floor switcher.
 */
@property float maxHeight;
/**
 * @brief Gets or sets the height of every item in the floors list.
 */
@property float itemHeight;
/**
 * @brief Gets or sets the corner radius of the floor switcher.
 */
@property float cornerRadius;
/**
 * @brief Gets or sets the margin between the floor switcher button and the floors list.
 */
@property float margin;
/**
 * @brief Gets or sets the duration of the floors list.
 */
@property float animationDuration;
/**
 * @brief Gets or sets the tile provider this instance will switch the floor of.
 */
@property MovinTileProvider* tileProvider;
/**
 * @brief Gets or sets a value indicating whether the floors list is visible (YES) or hidden (NO).
 */
@property BOOL isOpen;
/**
 * @brief Gets or sets a value indicating whether the floor switcher is enabled and visible.
 */
@property BOOL enabled;
/**
 * @brief Initializes a new MovinFloorSwitcher object with the specified tile provider.
 * @param tileProvider The tile provider to switch the floor of.
 * @return A MovinFloorSwitcher object with the specified tile provider.
 */
- (id)initWithTileProvider:(MovinTileProvider*)tileProvider;
@end
