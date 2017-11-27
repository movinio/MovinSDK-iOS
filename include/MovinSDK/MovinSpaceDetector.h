//
// MovinSpaceDetector.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "MovinSpaceDetectorListener.h"

@class MovinEntity;

@protocol MovinSpaceDetector<NSObject>

/**
 * Gets a value indicating whether or not the MovinSpaceDetector is running.
 */
@property(readonly) BOOL isStarted;

/**
 * Manually initializes the MovinSpaceDetector (happens automatically the first time it is started).
 * @param listener The listener to inform once the initialization has been completed.
 */
- (void)initialize:(nonnull void (^)(BOOL success, NSError* _Nullable error))listener;

/**
 * Starts the MovinSpaceDetector and informs the given listener of each space change. The underlying system will only start when the first listener is added.
 * @param listener The listener to inform.
 */
- (void)startWithListener:(nonnull id<MovinSpaceDetectorListener>)listener;

/**
 * Stops informing the given listener of space change events. The underlying system will only stop when all listeners have been stopped.
 * @param listener The listener to stop for.
 */
- (void)stopWithListener:(nonnull id<MovinSpaceDetectorListener>)listener;

/**
 * Returns a value indicating whether the MovinSpaceDetector is started for the specified listener.
 * @param listener The listener to check for.
 * @return A value indicating whether the MovinSpaceDetector is started for the specified listener.
 */
- (BOOL)isStartedForListener:(nonnull id<MovinSpaceDetectorListener>)listener;

/**
 * Gets the current space for the specified listener. Each listener determines their own valid spaces, which is why each listener can have a different space.
 * @param listener The listener to check for.
 * @return The current space for the specified listener or nil if no space was determined.
 */
- (nullable MovinEntity*)getCurrentSpaceForListener:(nonnull id<MovinSpaceDetectorListener>)listener;

@end