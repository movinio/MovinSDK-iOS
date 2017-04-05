//
// GeoMultiPoint.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoShape.h"

@class GeoLatLng;

/**
 * Represents a collection of geographical points.
 */
@interface GeoMultiPoint : GeoShape
/**
 * Contains the points of this collection.
 */
@property(readonly, nonnull) NSArray<GeoLatLng*>* points;

/**
 * Initializes a GeoMultiPoint with the specified points.
 *
 * @param points The points to initialize the collection with.
 * @return A GeoMultiPoint object containing the specified collection of points.
 */
- (nonnull id)initWithPoints:(nonnull NSArray<GeoLatLng*>*)points;

/**
 * Returns a value indicating whether this instance and the specified GeoMultiPoint.
 *
 * @param multiPoint The other GeoMultiPoint.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToMultiPoint:(nonnull GeoMultiPoint*)multiPoint;
@end