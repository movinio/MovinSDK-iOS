//
// Created by Tim Potze on 02/03/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoShape.h"

@class GeoLatLng;

/**
 * Represents a single component (ring) of a polygon.
 */
@interface GeoLinearRing : GeoShape
/**
 * Contains the points of this ring.
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
 * Returns a value indicating whether this instance and the specified GeoLinearRing.
 *
 * @param linearRing The other GeoLinearRing.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToLinearRing:(nonnull GeoLinearRing*)linearRing;
@end