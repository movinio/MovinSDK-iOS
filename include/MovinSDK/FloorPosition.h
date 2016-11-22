//
//  MovinPosition.h
//  MovinCore
//
//  Created by Movin Software on 17/03/15.
//  Copyright (c) 2015 Movin Software. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GeoLatLng;

/**
 * Represents a geographical position in combination with a floor number.
 */
@interface FloorPosition : NSObject <NSCopying>

/**
 * The geographical position.
 */
@property(readonly, nonnull) GeoLatLng* position;

/**
 * The floor the position is on.
 */
@property double floor;

/**
 * Initializes a new FloorPosition for the given position and floor.
 *
 * @param position The position of this FloorPosition.
 * @param floor The floor of this FloorPosition.
 * @return A new instance of FloorPosition.
 */
- (nonnull id)initWithGeoLatLng:(nonnull GeoLatLng*)position
                       andFloor:(double)floor;

/**
 * Returns a JSON representation of this FloorPosition.
 */
- (nonnull NSDictionary*)toJSON;

/**
 * Creates a FloorPosition instance from the given JSON data.
 */
+ (nullable id)fromJson:(nullable NSDictionary*)jsonData;
@end
