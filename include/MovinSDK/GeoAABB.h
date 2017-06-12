//
// GeoAABB.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
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
 * Use initWithOrigin:andWidth:andHeight: instead.
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

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
 * Initializes a new GeoAABB object with the specified corners.
 *
 * @param corner1 A corner position.
 * @param corner2 A corner position.
 * @return A GeoAABB object with the specified corners.
 */
- (nonnull id)initWithCorner:(nonnull GeoLatLng*)corner1
                   andCorner:(nonnull GeoLatLng*)corner2;

/**
 * Returns a newly created axis aligned bounding box with the specified corners.
 *
 * @param corner1 A corner position.
 * @param corner2 A corner position.
 * @return A newly created axis aligned bounding box with the specified corners.
 */
+ (nonnull GeoAABB*)aabbWithCorner:(nonnull GeoLatLng*)corner1
                         andCorner:(nonnull GeoLatLng*)corner2;

/**
 * Returns a newly created axis aligned bounding box with the specified origin and size.
 *
 * @param origin The origin.
 * @param width The width.
 * @param height The height.
 * @return A newly created axis aligned bounding box with the specified origin and size.
 */
+ (nonnull GeoAABB*)aabbWithOrigin:(nonnull GeoLatLng*)origin
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