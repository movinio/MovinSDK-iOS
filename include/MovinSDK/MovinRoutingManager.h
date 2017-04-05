//
// MovinRoutingManager.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FloorPosition;
@class MovinRoute;
@class MovinMap;

/**
 * Handler for getting routes. The resulting route is supplied. If an error occurs, the route will be nil and an error is set.
 */
typedef void(^RoutingCallback)(MovinRoute* _Nullable route, NSError* _Nullable error);

/**
 * Represents the manager for route calculations.
 */
@interface MovinRoutingManager : NSObject
// TODO: Accessibility
/**
 * Gets the map used when calculating routes.
 */
@property(nonnull, readonly) MovinMap* map;

/**
 * Initializes a new MovinRoutingManager object with the specified map.
 *
 * @param map The map.
 * @return A MovinRoutingManager object with the specified map.
 */
- (nonnull id)initWithMap:(nonnull MovinMap*)map;

/**
 * Calculates a route from a certain point to a certain point with specific instruction features.
 *
 * @param from The point from which to calculate the route.
 * @param to The point to which to calculate the route.
 * @param instructionFeatures A collection of instruction features to be used.
 * @param callback The callback to invoke once the route has been calculated.
 */
- (void)   getRouteFrom:(nonnull FloorPosition*)from
                     to:(nonnull FloorPosition*)to
withInstructionFeatures:(nonnull NSArray<NSString*>*)instructionFeatures
               callback:(nonnull RoutingCallback)callback;
@end
