//
// Created by Tim Potze on 26/09/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovinDataObject.h"

@class MovinTileStyleLayer;
@class MovinMap;
@class MovinEntitySubType;

/**
 * @class MovinTileStyle
 * @brief Represents a tile style.
 */
@interface MovinTileStyle : MovinDataObject
/**
 * @brief Gets the layers of this tile style.
 */
@property(readonly, nonnull) NSArray<MovinTileStyleLayer*>* layers;

/**
 * @brief Gets the layer for the specified sub type.
 * @param subType The sub type to find the layer for.
 * @returns The found layer or nil if no layer could be found.
 */
-(nullable MovinTileStyleLayer*) getLayerForSubType:(nonnull MovinEntitySubType*)subType;
@end