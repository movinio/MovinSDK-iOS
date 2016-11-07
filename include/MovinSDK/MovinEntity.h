//
// Created by Tim Potze on 15/03/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinFeatureObject.h"

@class GeoShape;
@class MovinBuilding;
@class MovinEntitySubType;

/**
 * @class MovinEntity
 * @brief Represents an entity of a map.
 */
@interface MovinEntity : MovinFeatureObject
/**
 * @brief Gets the building this instance is a member of.
 */
@property(readonly, nullable, weak) MovinBuilding* building;
/**
 * @brief Gets the floor number of this instance.
 */
@property(readonly) double floor;
/**
 * @brief Gets the sub type of this instance.
 */
@property(readonly, nonnull) MovinEntitySubType* subType;

/**
 * @brief Initializes a new MovinEntity object with the specified building and JSON data.
 * @param building The building the entity is a member of.
 * @param json The JSON data.
 * @return A MovinMap object with the specified building and JSON data.
 */
- (nonnull id)initWithBuilding:(nonnull MovinBuilding*)building
                       andJson:(nonnull NSDictionary*)json;

@end