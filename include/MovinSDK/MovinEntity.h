//
// MovinEntity.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinFlooredFeatureObject.h"

@class GeoShape;
@class MovinBuilding;
@class MovinEntitySubType;

/**
 * Represents an entity of a map.
 */
@interface MovinEntity : MovinFlooredFeatureObject

/**
 * Gets the building this instance is a member of.
 */
@property(readonly, nullable, weak) MovinBuilding* building;
/**
 * Gets the sub type of this instance.
 */
@property(readonly, nonnull) MovinEntitySubType* subType;

@end