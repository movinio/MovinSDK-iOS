//
// Created by Tim Potze on 06/09/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CLHeading;
@class MovinSmoothCompass;

// Contains the offsets at which the smooth compass can operate.
typedef enum MovinCompassOffset {
    // No compass offset.
            MovinCompassOffsetNone,
    // An offset of the compass heading based on the orientation of the status bar UI.
            MovinCompassOffsetStatusBar,
    // An offset of the compass heading based on the orientation of the current device.
            MovinCompassOffsetDevice,
} MovinCompassOffset;

@protocol MovinSmoothCompassDelegate
/**
 * @abstract Is called when the smooth canvas heading has been updated.
 * @param smoothCompass The smooth compass of which the heading has been updated.
 * @param newHeading The new heading of the smooth compass
 */
- (void)smoothCompass:(MovinSmoothCompass*)smoothCompass
     didUpdateHeading:(CLLocationDirection)newHeading;
@end

@interface MovinSmoothCompass : NSObject
/**
 * @abstract Gets or sets the interval at which the heading of the compass will be updated.
 */
@property NSTimeInterval updateInterval;
/**
 * @abstract Gets or sets the delegate to which events will be broadcasted.
 */
@property id <MovinSmoothCompassDelegate> delegate;

/**
 * @abstract Gets or sets the offset at which this smooth canvas will operate.
 */
@property MovinCompassOffset offset;

/**
 * @abstract Gets or sets the minimum heading offset of the compass for this instance to report a change.
 */
@property CLLocationDirection headingThreshold;
/**
 * @abstract Gets or sets the speed in degrees per second this instance will change its heading.
 */
@property CLLocationDirection turnSpeed;
/**
 * @abstract Gets or sets the maximum duration in seconds a turn may take.
 */
@property double maxTurnDuration;
@end