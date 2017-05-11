//
// MovinPositionedDataObject.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "MovinDataObject.h"

@class FloorPosition;

/**
 * Represents a data object with a position and a floor.
 */
@interface MovinPositionedDataObject : MovinDataObject
/**
 * Gets the position of this instance.
 */
@property(readonly, nullable) FloorPosition* position;
@end