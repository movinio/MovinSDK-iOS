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
 * @class MovinPositioner
 * @brief Represents a position provider.
 */
@interface MovinPositioner : NSObject

- (void)onStart;

- (void)onStop;

/**
 * @brief Starts the MovinPositioner
 */
- (void)start;

/**
 * @brief Stops the MovinPositioner
 */
- (void)stop;

/**
 * @brief Returns whether or not the MovinPositioner is started
 * @return If the positioner is started or not
 */
- (BOOL)isStarted;

/**
 * @brief Adds a positioning listener
 * @param listener Any class instance that has implemented the MovinPositioningListener protocol
 */
- (void)addPositioningListener:(nonnull id <MovinPositioningListener>)listener;

/**
 * @brief Removes an earlier added positioning listener
 * @param listener The earlier added listener to remove
 */
- (void)removePositioningListener:(nonnull id <MovinPositioningListener>)listener;

- (void)callInitialized:(BOOL)success
                  error:(nullable NSError*)error;

- (void)callUpdatePosition:(nonnull FloorPosition*)position;

- (void)callUnknownLocation;

- (void)callLostConnection;

- (nonnull NSArray*)getPositioningListeners;
@end
