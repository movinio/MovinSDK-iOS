//
// MovinBuilding.h
// MovinSDK
//
// Copyright © 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinFeatureObject.h"

@class GeoShape;
@class MovinEntity;
@class MovinMap;

/**
 * Represents a building.
 */
@interface MovinBuilding : MovinFeatureObject
/**
 * Gets the description of this building.
 */
@property(readonly, nonnull) NSString* descriptionText;

/**
 * Gets the entities located within this building.
 */
@property(readonly, nonnull) NSArray<MovinEntity*>* entities;

/**
 * Gets the map this instance is a member of.
 */
@property(readonly, nullable, weak) MovinMap* map;

/**
 * Initializes a new MovinBuilding object with the specified building and JSON data.
 *
 * @param map The map the building is a member of.
 * @param json The JSON data.
 * @return A MovinBuilding object with the specified building JSON data.
 */
- (nonnull id)initWithMap:(nonnull MovinMap*)map
                  andJson:(nonnull NSDictionary*)json;

@end