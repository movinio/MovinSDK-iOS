//
// BaseSpaceDetector.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "MovinSpaceDetector.h"

@class MovinMap;

/**
 * Represents an abstract base implementation of space detectors.
 */
@interface BaseSpaceDetector : NSObject<MovinSpaceDetector>
/**
 * Gets the map to detect spaces for.
 */
@property(readonly, nonnull) MovinMap* map;

@property(readonly, nullable) NSMutableDictionary<NSValue*, MovinEntity*>* spacePerListener;
@property(readonly, nonnull) NSMutableArray<id<MovinSpaceDetectorListener>>* listeners;

/**
 * Initializes a new BaseSpaceDetector object with the specified map.
 *
 * @param map The map to detect spaces with.
 * @return A BaseSpaceDetector object with the specified map.
 */
- (nonnull id)initWithMap:(nonnull MovinMap*)map;

/**
 * Called by the implementation whenever they detected new spaces where the user could be.
 * This method decides which of the provided entities will be used per listener (if any).
 * @param spaces The entities that were detected by the implementation, sorted from likely to less likely.
 */
- (void)selectedSpaces:(nullable NSArray<MovinEntity*>*)spaces;

/**
 * Method to be implemented by inheriting implementations if they need additional resources, apart from map and beacon data
 * @param listener The listener to inform
 */
- (void)loadCustomResources: (nullable void (^)(BOOL success, NSError* _Nullable error))listener;

/**
 * Called when the SpaceDetector needs to start.
 */
- (void)onStart;

/**
 * Called when the SpaceDetector needs to stop.
 */
- (void)onStop;
@end