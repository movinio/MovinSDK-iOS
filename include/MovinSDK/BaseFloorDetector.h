//
//  BaseFloorDetector.h
//  MovinSDK
//
//  Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinFloorDetector.h"

@interface BaseFloorDetector : NSObject<MovinFloorDetector>

/**
 * Gets the map to detect floors for.
 */
@property(readonly, nonnull) MovinMap* map;

/**
 * Gets the list that contains all listeners.
 */
@property(nonnull) NSMutableArray<id<MovinFloorDetectorListener>>* listeners;

/**
 * Gets the current floor, or nil if no floor has been determined yet.
 */
@property(readonly, nullable) NSNumber* currentFloor;

/**
 * Creates a new BaseFloorDetector.
 * @param The map for which to detect floors.
 */
- (nonnull id)initWithMap:(nonnull MovinMap*)map;

/**
 * Called by the implementations whenever they detect a new floor.
 * This method decides whether or not the listeners will be informed.
 * by comparing the new floor with the current floor.
 */
- (void)detectFloor:(double)newFloor;

/**
 * Method to be implemented by inheriting implementations if they need additional resources, apart from map and beacon data.
 * @param listener The listener to inform.
 */
- (void)loadCustomResources:(nonnull void (^)(BOOL success, NSError* _Nullable error))listener;

/**
 * Called when the FloorDetector needs to start.
 */
- (void)onStart;

/**
 * Called when the FloorDetector needs to stop.
 */
- (void)onStop;

@end
