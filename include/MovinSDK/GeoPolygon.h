//
// Created by Tim Potze on 02/03/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoShape.h"

@class GeoLinearRing;

/**
 * @class GeoPolygon
 * @brief Represents a geographical polygon.
 */
@interface GeoPolygon : GeoShape
/**
 * @brief Contains the rings of this polygon.
 */
@property(readonly, nonnull) NSArray<GeoLinearRing*>* rings;

/**
 * @brief Initializes a GeoPolygon with the specified rings.
 * @param rings The rings to initialize the ring with.
 * @return A GeoPolygon object containing the specified rings.
 */
- (nonnull id)initWithRings:(nonnull NSArray<GeoLinearRing*>*)rings;

/**
 * @brief Returns a value indicating whether this instance and the specified GeoPolygon.
 * @param polygon The other GeoPolygon.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToPolygon:(nonnull GeoPolygon*)polygon;
@end