//
// Created by Tim Potze on 04/03/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoShape.h"

/**
 * Represents a geographical axis aligned bounding box.
 */
@interface GeoAABB : GeoShape
/**
 * Gets the origin of this axis aligned bounding box.
 */
@property(readonly, nonnull) GeoLatLng* origin;
/**
 * Gets the width of this axis aligned bounding box.
 */
@property(readonly) double width;
/**
 * Gets the height of this axis aligned bounding box.
 */
@property(readonly) double height;
/**
 * Gets the leftmost longitude coordinate.
 */
@property(readonly) double leftLng;
/**
 * Gets the rightmost longitude coordinate.
 */
@property(readonly) double rightLng;
/**
 * Gets the topmost latitude coordinate.
 */
@property(readonly) double topLat;
/**
 * Gets the bottommost latitude coordinate.
 */
@property(readonly) double bottomLat;
/**
 * Gets the size of this box.
 */
@property(readonly) double size;
/**
 * Gets the top-left coordinates.
 */
@property(readonly, nonnull) GeoLatLng* topLeft;
/**
 * Gets the top-right coordinates.
 */
@property(readonly, nonnull) GeoLatLng* topRight;
/**
 * Gets the bottom-left coordinates.
 */
@property(readonly, nonnull) GeoLatLng* bottomLeft;
/**
 * Gets the bottom-right coordinates.
 */
@property(readonly, nonnull) GeoLatLng* bottomRight;

/**
 * Initializes a new GeoAABB object with the specified origin and size.
 *
 * @param origin The origin.
 * @param width The width.
 * @param height The height.
 * @returns An GeoAABB object with the specified origin and size.
 */
- (nonnull id)initWithOrigin:(nonnull GeoLatLng*)origin
                    andWidth:(double)width
                   andHeight:(double)height;

/**
 * Gets a value indicating whether the specified box intersects with this instance.
 */
- (BOOL)intersectsWithAABB:(nonnull GeoAABB*)box;

/**
 * Returns a value indicating whether this instance and the specified GeoAABB.
 *
 * @param aabb The other GeoAABB.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToAABB:(nonnull GeoAABB*)aabb;
@end