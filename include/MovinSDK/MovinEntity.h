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

/**
 * Initializes a new MovinEntity object with the specified building and JSON data.
 *
 * @param building The building the entity is a member of.
 * @param json The JSON data.
 * @return A MovinMap object with the specified building and JSON data.
 */
- (nonnull id)initWithBuilding:(nonnull MovinBuilding*)building
                       andJson:(nonnull NSDictionary*)json;

@end