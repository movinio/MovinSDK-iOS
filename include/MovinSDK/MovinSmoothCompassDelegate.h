//
// MovinSmoothCompassDelegate.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@class MovinSmoothCompass;

/**
 * Defines methods that a delegate of MovinSmoothCompass must optionally implement to use the results of
 * a MovinSmoothCompass.
 */
@protocol MovinSmoothCompassDelegate<NSObject>

/**
 * Is called when the smooth canvas heading has been updated.
 *
 * @param smoothCompass The smooth compass of which the heading has been updated.
 * @param newHeading The new heading of the smooth compass
 */
- (void)smoothCompass:(MovinSmoothCompass*)smoothCompass
     didUpdateHeading:(CLLocationDirection)newHeading;
@end