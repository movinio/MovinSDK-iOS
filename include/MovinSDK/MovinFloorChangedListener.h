//
// MovinFloorChangedListener.h
// MovinSDK
//
// Copyright © 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MovinTileProvider;

/**
 * Defines methods that a listener of MovinTileProvider would need to implement to listen to floor changes.
 */
@protocol MovinFloorChangedListener<NSObject>

/**
 * Method called when the floor of the specified tile provider has changed.
 *
 * @param tileProvider The tile provider whose floor has changed.
 * @param newFloor The floor to which te specified tile provider has changed.
 */
- (void)tileProvider:(nonnull MovinTileProvider*)tileProvider
      didChangeFloor:(double)newFloor;
@end