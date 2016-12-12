//
// GeoGeometryCollection.h
// MovinSDK
//
// Copyright © 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoShape.h"

/**
 * Represents a collection of geometries.
 */
@interface GeoGeometryCollection : GeoShape
/**
 * Contains the geometries of this geometry collection.
 */
@property(readonly, nonnull) NSArray<GeoShape*>* geometries;

/**
 * Initializes a GeoGeometryCollection with the specified geometries.
 *
 * @param geometries The geometries to initialize the collection with.
 * @return A GeoGeometryCollection object containing the specified collection of geometries.
 */
- (nonnull id)initWithGeometries:(nonnull NSArray<GeoShape*>*)geometries;

/**
 * Returns a value indicating whether this instance and the specified GeoGeometryCollection.
 *
 * @param geometryCollection The other GeoGeometryCollection.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToGeometryCollection:(nonnull GeoGeometryCollection*)geometryCollection;
@end