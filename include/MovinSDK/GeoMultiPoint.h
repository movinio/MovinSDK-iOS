//
// Created by Tim Potze on 02/03/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoShape.h"

@class GeoLatLng;

@interface GeoMultiPoint : GeoShape
/**
 * @abstract Contains the points of this collection.
 */
@property(readonly, nonnull) NSArray<GeoLatLng*>* points;

/**
 * @abstract Initializes a GeoMultiPoint with the specified points.
 * @param points The points to initialize the collection with.
 * @return A GeoMultiPoint object containing the specified collection of points.
 */
- (nonnull id)initWithPoints:(nonnull NSArray<GeoLatLng*>*)points;

/**
 * @abstract Returns a value indicating whether this instance and the specified GeoMultiPoint.
 * @param multiPoint The other GeoMultiPoint.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToMultiPoint:(nonnull GeoMultiPoint*)multiPoint;
@end