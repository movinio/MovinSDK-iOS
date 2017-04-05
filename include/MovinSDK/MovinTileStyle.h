//
// MovinTileStyle.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovinDataObject.h"

@class MovinTileStyleLayer;
@class MovinMap;
@class MovinEntitySubType;

/**
 * Represents a tile style.
 */
@interface MovinTileStyle : MovinDataObject
/**
 * Gets the layers of this tile style.
 */
@property(readonly, nonnull) NSArray<MovinTileStyleLayer*>* layers;

/**
 * Gets the layer for the specified sub type.
 *
 * @param subType The sub type to find the layer for.
 * @returns The found layer or nil if no layer could be found.
 */
-(nullable MovinTileStyleLayer*) getLayerForSubType:(nonnull MovinEntitySubType*)subType;
@end