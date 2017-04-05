//
// GeoMultiLineString.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoShape.h"

@class GeoLineString;

/**
 * Represents a collection of geographical line strings.
 */
@interface GeoMultiLineString : GeoShape
/**
 * Contains the line strings of this collection.
 */
@property(readonly, nonnull) NSArray<GeoLineString*>* lineStrings;

/**
 * Initializes a GeoMultiLineString with the specified line strings.
 *
 * @param lineStrings The line strings to initialize the collection with.
 * @return A GeoMultiLineString object containing the specified collection of line strings.
 */
- (nonnull id)initWithLineStrings:(nonnull NSArray<GeoLineString*>*)lineStrings;

/**
 * Returns a value indicating whether this instance and the specified GeoMultiLineString.
 *
 * @param multiLineString The other GeoMultiLineString.
 * @return YES if the values are equal, NO otherwise.
 */
- (BOOL)isEqualToMultiLineString:(nonnull GeoMultiLineString*)multiLineString;
@end