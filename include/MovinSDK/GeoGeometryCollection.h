//
// GeoGeometryCollection.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
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
 * Use initWithGeometries: instead.
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 * Initializes a GeoGeometryCollection with the specified geometries.
 *
 * @param geometries The geometries to initialize the collection with.
 * @return A GeoGeometryCollection object containing the specified collection of geometries.
 */
- (nonnull id)initWithGeometries:(nonnull NSArray<GeoShape*>*)geometries;

/**
 * Returns a newly created GeoGeometryCollection object with the specified geometries.
 *
 * @param geometries The geometries to initialize the collection with.
 * @return A newly created GeoGeometryCollection object containing the specified collection of geometries.
 */
+ (nonnull GeoGeometryCollection*)collectionWithGeometries:(nonnull NSArray<GeoShape*>*)geometries;

/**
 * Returns a value indicating whether this instance and the specified GeoGeometryCollection.
 *
 * @param geometryCollection The other GeoGeometryCollection.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToGeometryCollection:(nonnull GeoGeometryCollection*)geometryCollection;
@end