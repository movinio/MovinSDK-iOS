//
// MovinPositioningListener.h
// MovinSDK
//
// Copyright © 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MovinPositioner;
@class FloorPosition;

/**
 * Defines methods that a listener of MovinPositioner can optionally implement to use the results of a
 * MovinPositioner.
 */
@protocol MovinPositioningListener<NSObject>

@optional

/**
 * Optional method, called once the MovinPositioner finished initializing.
 *
 * @param engine The positioner.
 * @param success Whether or not the MovinPositioner was successfully initialized
 * @param error If the MovinPositioner failed to initialize, the error contains what went wrong
 */
- (void)positioningEngine:(nonnull MovinPositioner*)engine
            didInitialize:(BOOL)success
                    error:(nullable NSError*)error;

/**
 * Optional method, called when a new position is calculated.
 *
 * @param engine The positioner.
 * @param position The position that is calculated
 */
- (void)positioningEngine:(nonnull MovinPositioner*)engine
        didUpdatePosition:(nonnull FloorPosition*)position;

/**
 * Optional method, called when the MovinPositioner lost connection to the internet. This is only relevant
 * for online-positioning. Offline-positioning will never call this. The SDK will default to OfflinePositioning, but if
 * that is unavailable it will use OnlinePositioning.
 * @param engine The positioner.
 */
- (void)positioningEngineDidLoseConnection:(nonnull MovinPositioner*)engine;

/**
 * Optional method, called when the MovinPositioner can no longer determine your position, because you are no
 * longer in the supported venue.
 * @param engine The positioner.
 */
- (void)positioningEngineDidFindUnknownLocation:(nonnull MovinPositioner*)engine;
@end
