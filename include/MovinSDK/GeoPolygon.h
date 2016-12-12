//
// GeoPolygon.h
// MovinSDK
//
// Copyright © 2016 Movin. All rights reserved.
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
 * Initializes a GeoPolygon with the specified rings.
 *
 * @param rings The rings to initialize the ring with.
 * @return A GeoPolygon object containing the specified rings.
 */
- (nonnull id)initWithRings:(nonnull NSArray<GeoLinearRing*>*)rings;

/**
 * Returns a value indicating whether this instance and the specified GeoPolygon.
 *
 * @param polygon The other GeoPolygon.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToPolygon:(nonnull GeoPolygon*)polygon;
@end