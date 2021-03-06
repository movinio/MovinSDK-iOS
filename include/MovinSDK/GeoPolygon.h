//
// GeoPolygon.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoShape.h"

@class GeoLinearRing;

/**
 * Represents a geographical polygon.
 */
@interface GeoPolygon : GeoShape

/**
 * Contains the rings of this polygon.
 */
@property(readonly, nonnull) NSArray<GeoLinearRing*>* rings;

/**
 * Use initWithRings: instead.
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 * Initializes a GeoPolygon with the specified rings.
 *
 * @param rings The rings to initialize the ring with.
 * @return A GeoPolygon object containing the specified rings.
 */
- (nonnull id)initWithRings:(nonnull NSArray<GeoLinearRing*>*)rings;

/**
 * Returns a newly created GeoPolygon object with the specified rings.
 *
 * @param rings The rings to initialize the ring with.
 * @return A newly created GeoPolygon object containing the specified rings.
 */
+ (nonnull GeoPolygon*)polygonWithRings:(nonnull NSArray<GeoLinearRing*>*)rings;

/**
 * Returns a value indicating whether this instance and the specified GeoPolygon.
 *
 * @param polygon The other GeoPolygon.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToPolygon:(nonnull GeoPolygon*)polygon;
@end