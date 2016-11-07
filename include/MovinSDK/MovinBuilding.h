//
// Created by Tim Potze on 04/03/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinFeatureObject.h"

@class GeoShape;
@class MovinEntity;
@class MovinMap;

/**
 * @class MovinBuilding
 * @brief Represents a building.
 */
@interface MovinBuilding : MovinFeatureObject
/**
 * @brief Gets the description of this building.
 */
@property(readonly, nonnull) NSString* descriptionText;

/**
 * @brief Gets the entities located within this building.
 */
@property(readonly, nonnull) NSArray<MovinEntity*>* entities;

/**
 * @brief Gets the map this instance is a member of.
 */
@property(readonly, nullable, weak) MovinMap* map;

/**
 * @brief Initializes a new MovinBuilding object with the specified building and JSON data.
 * @param map The map the building is a member of.
 * @param json The JSON data.
 * @return A MovinBuilding object with the specified building JSON data.
 */
- (nonnull id)initWithMap:(nonnull MovinMap*)map
                  andJson:(nonnull NSDictionary*)json;

@end