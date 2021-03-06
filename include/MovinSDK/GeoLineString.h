//
// GeoLineString.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoShape.h"

@class GeoLatLng;

/**
 * Represents a string of geographical lines.
 */
@interface GeoLineString : GeoShape

/**
 * Contains the points of this line string.
 */
@property(readonly, nonnull) NSArray<GeoLatLng*>* points;

/**
 * Use initWithPoints: instead.
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 * Initializes a GeoLinearRing with the specified points.
 *
 * @param points The points to initialize the ring with.
 * @return A GeoLinearRing object containing the specified points.
 */
- (nonnull id)initWithPoints:(nonnull NSArray<GeoLatLng*>*)points;

/**
 * Returns a newly created GeoLinearRing object with the specified points.
 *
 * @param points The points to initialize the ring with.
 * @return A newly created GeoLinearRing object containing the specified points.
 */
+ (nonnull GeoLineString*)lineWithPoints:(nonnull NSArray<GeoLatLng*>*)points;

/**
 * Returns a value indicating whether this instance and the specified GeoLineString.
 *
 * @param lineString The other GeoLineString.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToLineString:(nonnull GeoLineString*)lineString;
@end