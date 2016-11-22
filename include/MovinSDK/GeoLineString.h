//
// Created by Tim Potze on 02/03/16.
// Copyright (c) 2016 Movin. All rights reserved.
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
 * Initializes a GeoLinearRing with the specified points.
 *
 * @param points The points to initialize the ring with.
 * @return A GeoLinearRing object containing the specified points.
 */
- (nonnull id)initWithPoints:(nonnull NSArray<GeoLatLng*>*)points;

/**
 * Returns a value indicating whether this instance and the specified GeoLineString.
 *
 * @param lineString The other GeoLineString.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToLineString:(nonnull GeoLineString*)lineString;
@end