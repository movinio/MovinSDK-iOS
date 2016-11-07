//
// Created by Tim Potze on 01/11/2016.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@class MovinSmoothCompass;

/**
 * @protocol MovinSmoothCompassDelegate
 * @brief Defines methods that a delegate of MovinSmoothCompass must optionally implement to use the results of
 * a MovinSmoothCompass.
 */
@protocol MovinSmoothCompassDelegate<NSObject>

/**
 * @brief Is called when the smooth canvas heading has been updated.
 * @param smoothCompass The smooth compass of which the heading has been updated.
 * @param newHeading The new heading of the smooth compass
 */
- (void)smoothCompass:(MovinSmoothCompass*)smoothCompass
     didUpdateHeading:(CLLocationDirection)newHeading;
@end