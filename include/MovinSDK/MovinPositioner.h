//
//  MovinPositioner.h
//  MovinSDK
//
//  Created by Movin Software on 20/11/15.
//  Copyright © 2015 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MovinPositioningListener;

@class FloorPosition;

/**
 * Represents a position provider.
 */
@interface MovinPositioner : NSObject

/**
 * Internal method. Do not call.
 */
- (void)onStart;

/**
 * Internal method. Do not call.
 */
- (void)onStop;

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
@property (readonly) BOOL isStarted;

/**
 * Adds a positioning listener.
 *
 * @param listener Any class instance that has implemented the MovinPositioningListener protocol.
 */
- (void)addPositioningListener:(nonnull id <MovinPositioningListener>)listener;

/**
 * Removes an earlier added positioning listener.
 *
 * @param listener The earlier added listener to remove.
 */
- (void)removePositioningListener:(nonnull id <MovinPositioningListener>)listener;

/**
 * Internal method. Do not call.
 */
- (void)callInitialized:(BOOL)success
                  error:(nullable NSError*)error;

/**
 * Internal method. Do not call.
 */
- (void)callUpdatePosition:(nonnull FloorPosition*)position;

/**
 * Internal method. Do not call.
 */
- (void)callUnknownLocation;

/**
 * Internal method. Do not call.
 */
- (void)callLostConnection;

/**
 * Internal method. Do not call.
 */
- (nonnull NSArray*)getPositioningListeners;
@end
