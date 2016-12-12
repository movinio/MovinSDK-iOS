//
// MovinFeatureObject.h
// MovinSDK
//
// Copyright © 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinDataObject.h"

@class GeoShape;

/**
 * Represents a data object with a geometric shape.
 */
@interface MovinFeatureObject : MovinDataObject
/**
 * Gets the geometric shape of this instance.
 */
@property(nonnull, readonly) GeoShape* geometry;

/**
 * Initializes a new MovinFeatureObject object with the specified JSON data.
 *
 * @param json The JSON data.
 * @return A MovinFeatureObject object with the specified JSON data.
 */
- (nonnull id)initWithJson:(nonnull NSDictionary*)json;
@end