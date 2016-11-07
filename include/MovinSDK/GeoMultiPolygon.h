//
// Created by Tim Potze on 03/03/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoShape.h"

@class GeoPolygon;


@interface GeoMultiPolygon : GeoShape
/**
 * @abstract Contains the polygons of this collection.
 */
@property(readonly, nonnull) NSArray<GeoPolygon*>* polygons;

/**
 * @abstract Initializes a GeoMultiPolygon with the specified polygons.
 * @param polygons The polygons to initialize the collection with.
 * @return A GeoMultiPolygon object containing the specified collection of polygons.
 */
- (nonnull id)initWithPolygons:(nonnull NSArray<GeoPolygon*>*)polygons;

/**
 * @abstract Returns a value indicating whether this instance and the specified GeoMultiPolygon.
 * @param multiPolygon The other GeoMultiPolygon.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToMultiPolygon:(nonnull GeoMultiPolygon*)multiPolygon;
@end