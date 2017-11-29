//
//  MovinFloorDetector.h
//  MovinSDK
//
//  Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MovinMap;
@protocol MovinFloorDetectorListener;

@protocol MovinFloorDetector

/**
 * Gets whether or not this MovinFloorDetector is started
 */
@property(readonly) BOOL isStarted;

/**
 * Gets the current floor
 */
@property(nullable, readonly) NSNumber* currentFloor;

/**
 * Initializes the MovinFloorDetector.
 *
 * @param initializedBlock The block to invoke when the initialization finished.
 */
- (void)initialize:(nonnull void (^)(BOOL success, NSError* _Nullable error))initializedBlock;

/**
 * Starts the MovinFloorDetector.
 */
- (void)start;

/**
 * Starts the MovinFloorDetector and informs the given listener of each floor change.
 *
 * @param listener The listener to inform
 */
- (void)startWithListener:(nonnull id<MovinFloorDetectorListener>)listener;

/**
 * Stops the MovinFloorDetector.
 * The underlying system will only stop when all listeners have been stopped and [MovinFloorDetector stop] has been called as many times as [MovinFloorDetector start].
 */
- (void)stop;

/**
 * Stops informing the given listener of floor change events.
 * The underlying system will only stop when all listeners have been stopped and [MovinFloorDetector stop] has been called as many times as [MovinFloorDetector start].
 *
 * @param listener The listener to stop for.
 */
- (void)stopWithListener:(nonnull id<MovinFloorDetectorListener>)listener;

/**
 * Checks if the MovinFloorDetector is started for the given listener.
 *
 * @param listener The listener to check for.
 * @return Whether or not the MovinFloorDetector is started or not.
 */
- (bool)isStartedForListener:(nonnull id<MovinFloorDetectorListener>)listener;

@end
