//
//  GeoLatLng.h
//  MovinCore
//
//  Created by Movin Software on 26/03/15.
//  Copyright (c) 2015 Movin Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "GeoShape.h"

/**
 * @class GeoLatLng
 * @brief Represents a geographical point.
 */
@interface GeoLatLng : GeoShape
/**
 * @brief Gets the latitude of this geo coordinate.
 */
@property(readonly) double lat;
/**
 * @brief Gets the longitude of this geo coordinate.
 */
@property(readonly) double lng;
/**
 * @brief Gets a CLLocationCoordinate2D instance representing the same geographical coordinate.
 */
@property(readonly) CLLocationCoordinate2D CLLocation;

/**
 * @brief Initializes a new GeoLatLng coordinate with a latitude and longitude values.
 * @param lat The latitude.
 * @param lng The longitude.
 * @return A GeoLatLng object with the specified latitude and longitude values.
 */
- (nonnull id)initWithLat:(double)lat
                   andLng:(double)lng;

/**
 * @brief Returns a value indicating whether this instance and the specified GeoLatLng.
 * @param latLng The other GeoLatLng.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToLatLng:(nullable GeoLatLng*)latLng;

/**
 * @brief Returns a newly created point with the specified latitude and longitude
 * @param lat The latitude of the point.
 * @param lng The longitude of the point.
 * @return A newly created point with the specified latitude and longitude
 */
+ (nonnull GeoLatLng*)pointWithLat:(double)lat
                            andLng:(double)lng;
@end

