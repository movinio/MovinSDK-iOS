//
// MovinPositioner.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MovinPositioningListener;

@class FloorPosition;

/**
 * Represents an abstract base class for a position provider.
 */
@interface MovinPositioner : NSObject

/**
 * Starts the MovinPositioner.
 */
- (void)start;

/**
 * Stops the MovinPositioner.
 */
- (void)stop;

/**
 * Returns whether or not the MovinPositioner is started.
 */
@property(readonly) BOOL isStarted;

/**
 * Adds a positioning listener.
 *
 * @param listener Any class instance that has implemented the MovinPositioningListener protocol.
 */
- (void)addPositioningListener:(nonnull id<MovinPositioningListener>)listener;

/**
 * Removes an earlier added positioning listener.
 *
 * @param listener The earlier added listener to remove.
 */
- (void)removePositioningListener:(nonnull id<MovinPositioningListener>)listener;

@end
