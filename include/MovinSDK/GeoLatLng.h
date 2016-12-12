//
// GeoLatLng.h
// MovinSDK
//
// Copyright © 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "GeoShape.h"

/**
 * Represents a geographical point.
 */
@interface GeoLatLng : GeoShape
/**
 * Gets the latitude of this geo coordinate.
 */
@property(readonly) double lat;
/**
 * Gets the longitude of this geo coordinate.
 */
@property(readonly) double lng;
/**
 * Gets a CLLocationCoordinate2D instance representing the same geographical coordinate.
 */
@property(readonly) CLLocationCoordinate2D CLLocation;

/**
 * Initializes a new GeoLatLng coordinate with a latitude and longitude values.
 *
 * @param lat The latitude.
 * @param lng The longitude.
 * @return A GeoLatLng object with the specified latitude and longitude values.
 */
- (nonnull id)initWithLat:(double)lat
                   andLng:(double)lng;

/**
 * Returns a value indicating whether this instance and the specified GeoLatLng.
 *
 * @param latLng The other GeoLatLng.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToLatLng:(nullable GeoLatLng*)latLng;

/**
 * Returns a newly created point with the specified latitude and longitude.
 *
 * @param lat The latitude of the point.
 * @param lng The longitude of the point.
 * @return A newly created point with the specified latitude and longitude.
 */
+ (nonnull GeoLatLng*)pointWithLat:(double)lat
                            andLng:(double)lng;
@end

