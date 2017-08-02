//
// Route.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FloorPosition;
@class MovinRouteInstruction;

/**
 * Represents a set of route instructions.
 */
@interface MovinRoute : NSObject

/**
 * Gets the path (a list of way points) of this route.
 */
@property(nonnull, readonly) NSArray<FloorPosition*>* path;

/**
 * Gets a set of human readable instructions of this route.
 */
@property(nonnull, readonly) NSArray<MovinRouteInstruction*>* instructions;

/**
 * Gets the distance of this route in meters.
 */
@property(readonly) double distance;

/**
 * Snaps a position to the path of this route.
 *
 * @param position The position to snap.
 * @param meter The threshold in meters.
 * @return The position snapped to the route.
 */
- (nonnull FloorPosition*)snapToRoute:(nonnull FloorPosition*)position
                        withThreshold:(double)meter;

/**
 * Snaps a position to the path of this route.
 *
 * @param position The position to snap.
 * @param meter The threshold in meters.
 * @parm index The index of the path node the position snapped to.
 * @return The position snapped to the route.
 */
- (nonnull FloorPosition*)snapToRoute:(nonnull FloorPosition*)position
                        withThreshold:(double)meter
                         andPathIndex:(nullable uint*)index;

/**
 * This class should not be manually initialized.
 * :nodoc:
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
