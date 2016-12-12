//
// MovinLocationManager.h
// MovinSDK
//
// Copyright © 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

/**
 * Represents a shared CLLocationManager instance.
 */
@interface MovinLocationManager : CLLocationManager

/**
 * Sets or gets the value that will be passed when the CLLocationManager asks to show heading calibration. Default value
 * is true.
 */
@property (nonatomic) BOOL shouldDisplayHeadingCalibration;

/**
 * Returns the singleton instance of the MovinLocationManager.
 *
 * @return The singleton instance.
 */
+(nonnull MovinLocationManager *) instance;

/**
 * Adds a delegate to the MovinLocationManager.
 *
 * @param delegate The delegate to add.
 */
-(void) addDelegate:(nonnull id<CLLocationManagerDelegate>) delegate;
/**
 * Removes a delegate from the MovinLocationManager.
 *
 * @param delegate The delegate to remove.
 */
-(void) removeDelegate:(nonnull id<CLLocationManagerDelegate>) delegate;

@end
