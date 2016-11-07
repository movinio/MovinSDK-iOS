//
// Created by Tim Potze on 06/09/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CLHeading;
@class MovinSmoothCompass;
@protocol MovinSmoothCompassDelegate;

/**
 * @enum MovinCompassOffset
 * @brief Contains the offsets at which the smooth compass can operate.
 */
typedef enum MovinCompassOffset {
    /// No compass offset.
    MovinCompassOffsetNone,
    /// An offset of the compass heading based on the orientation of the status bar UI.
    MovinCompassOffsetStatusBar,
    /// An offset of the compass heading based on the orientation of the current device.
    MovinCompassOffsetDevice,
} MovinCompassOffset;

/**
 * @class MovinSmoothCompass
 * @brief Represents a compass which rotates smoothly.
 */
@interface MovinSmoothCompass : NSObject
/**
 * @brief Gets or sets the interval at which the heading of the compass will be updated.
 */
@property NSTimeInterval updateInterval;
/**
 * @brief Gets or sets the delegate to which events will be broadcasted.
 */
@property id <MovinSmoothCompassDelegate> delegate;

/**
 * @brief Gets or sets the offset at which this smooth canvas will operate.
 */
@property MovinCompassOffset offset;

/**
 * @brief Gets or sets the minimum heading offset of the compass for this instance to report a change.
 */
@property CLLocationDirection headingThreshold;
/**
 * @brief Gets or sets the speed in degrees per second this instance will change its heading.
 */
@property CLLocationDirection turnSpeed;
/**
 * @brief Gets or sets the maximum duration in seconds a turn may take.
 */
@property double maxTurnDuration;
@end