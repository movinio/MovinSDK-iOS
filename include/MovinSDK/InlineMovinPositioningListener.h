//
// Created by Tim Potze on 01/11/2016.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinPositioningListener.h"

/**
 * Inline positioning listener.
 */
@interface InlineMovinPositioningListener : NSObject<MovinPositioningListener>

/**
 * Initializes a new InlineMovinPositioningListener object.
 *
 * @param initializedBlock Block to invoke once the positioner has been initialized.
 * @param updatedPositionBlock Block to invoke once the position has been updated.
 * @param lostConnectionBlock Block to invoke once the the connection has been lost.
 * @param unknownLocationBlock Block to invoke when the MovinPositioner can no longer determine your position, because
 * you are no longer in the supported venue.
 * @return An InlineMovinPositioningListener object.
 */
- (nonnull id)initWithInitializedBlock:(nullable void (^)(BOOL success, NSError* _Nullable error))initializedBlock
               andUpdatedPositionBlock:(nullable void (^)(FloorPosition* _Nonnull position))updatedPositionBlock
                andLostConnectionBlock:(nullable void (^)())lostConnectionBlock
               andUnknownLocationBlock:(nullable void (^)())unknownLocationBlock;
@end