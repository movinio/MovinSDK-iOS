//
//  MovinLocationManager.h
//  libMovinSDK
//
//  Created by Movin Software on 09/03/16.
//  Copyright © 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

/**
 * @class MovinLocationManager
 * @brief Represents a shared CLLocationManager instance.
 */
@interface MovinLocationManager : CLLocationManager

/**
 * @brief Sets or gets the value that will be passed when the CLLocationManager asks to show heading calibration. Defaults to true
 */
@property (nonatomic) BOOL shouldDisplayHeadingCalibration;

/**
 * @brief Returns the singleton instance of the MovinLocationManager
 * @return The singleton instance.
 */
+(nonnull MovinLocationManager *) instance;

/**
 * @brief Adds a delegate to the MovinLocationManager
 * @param delegate The delegate to add
 */
-(void) addDelegate:(nonnull id<CLLocationManagerDelegate>) delegate;
/**
 * @brief Removes a delegate from the MovinLocationManager
 * @param delegate The delegate to remove
 */
-(void) removeDelegate:(nonnull id<CLLocationManagerDelegate>) delegate;

@end
