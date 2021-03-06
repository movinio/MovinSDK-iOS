//
// GeoMultiPolygon.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoShape.h"

@class GeoPolygon;

/**
 * Represents a collection of geographical polygons.
 */
@interface GeoMultiPolygon : GeoShape

/**
 * Contains the polygons of this collection.
 */
@property(readonly, nonnull) NSArray<GeoPolygon*>* polygons;

/**
 * Use initWithPolygons: instead.
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 * Initializes a GeoMultiPolygon with the specified polygons.
 *
 * @param polygons The polygons to initialize the collection with.
 * @return A GeoMultiPolygon object containing the specified collection of polygons.
 */
- (nonnull id)initWithPolygons:(nonnull NSArray<GeoPolygon*>*)polygons;

/**
 * Returns a newly created GeoMultiPolygon object with the specified polygons.
 *
 * @param polygons The polygons to initialize the collection with.
 * @return A newly created GeoMultiPolygon object containing the specified collection of polygons.
 */
+ (nonnull GeoMultiPolygon*)multiPolygonWithPolygons:(nonnull NSArray<GeoPolygon*>*)polygons;

/**
 * Returns a value indicating whether this instance and the specified GeoMultiPolygon.
 *
 * @param multiPolygon The other GeoMultiPolygon.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToMultiPolygon:(nonnull GeoMultiPolygon*)multiPolygon;
@end