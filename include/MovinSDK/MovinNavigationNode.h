//
// MovinNavigationNode.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "MovinPositionedDataObject.h"

@class FloorPosition;
@class MovinMap;

/**
 * Represents a node in a navigation grid.
 */
@interface MovinNavigationNode : MovinPositionedDataObject
/**
 * Gets the map this navigation node is a member of.
 */
@property (nonnull, readonly) MovinMap* map;
/**
 * Gets the neighboring navigation nodes.
 */
@property (nonnull, readonly) NSArray<MovinNavigationNode*>* neighbors;

/**
 * Initializes a new MovinNavigationNode object with the specified JSON data.
 *
 * @param jsonData The JSON data.
 * @param map The map.
 * @return A MovinNavigationNode object with the specified JSON data.
 */
- (nonnull id)initWithJson:(nonnull NSDictionary*)jsonData
                    andMap:(nonnull MovinMap*) map;
@end
