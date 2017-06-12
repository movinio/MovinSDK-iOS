//
// MovinFeatureObject.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
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

@end