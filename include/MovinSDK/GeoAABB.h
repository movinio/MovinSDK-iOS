//
// Created by Tim Potze on 04/03/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoShape.h"

/**
 * @class GeoAABB
 * @brief Represents a geographical axis aligned bounding box.
 */
@interface GeoAABB : GeoShape
/**
 * @brief Gets the origin of this axis aligned bounding box.
 */
@property(readonly, nonnull) GeoLatLng* origin;
/**
 * @brief Gets the width of this axis aligned bounding box.
 */
@property(readonly) double width;
/**
 * @brief Gets the height of this axis aligned bounding box.
 */
@property(readonly) double height;
/**
 * @brief Gets the leftmost longitude coordinate.
 */
@property(readonly) double leftLng;
/**
 * @brief Gets the rightmost longitude coordinate.
 */
@property(readonly) double rightLng;
/**
 * @brief Gets the topmost latitude coordinate.
 */
@property(readonly) double topLat;
/**
 * @brief Gets the bottommost latitude coordinate.
 */
@property(readonly) double bottomLat;
/**
 * @brief Gets the size of this box.
 */
@property(readonly) double size;
/**
 * @brief Gets the top-left coordinates.
 */
@property(readonly, nonnull) GeoLatLng* topLeft;
/**
 * @brief Gets the top-right coordinates.
 */
@property(readonly, nonnull) GeoLatLng* topRight;
/**
 * @brief Gets the bottom-left coordinates.
 */
@property(readonly, nonnull) GeoLatLng* bottomLeft;
/**
 * @brief Gets the bottom-right coordinates.
 */
@property(readonly, nonnull) GeoLatLng* bottomRight;

/**
 * @brief Initializes a new GeoAABB object with the specified origin and size.
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
 * @brief Returns a value indicating whether this instance and the specified GeoAABB.
 * @param aabb The other GeoAABB.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToAABB:(nonnull GeoAABB*)aabb;
@end