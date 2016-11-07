//
// Created by Tim Potze on 26/09/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinDataObject.h"

@class MovinTileStyleRule;
@class MovinEntitySubType;
@class MovinTileStyle;

@interface MovinTileStyleLayer : MovinDataObject
/**
 * @abstract Gets the sub type this layer contains the rules of.
 */
@property(readonly) MovinEntitySubType* subType;
/**
 * @abstract Gets the rules associated with this layer.
 */
@property(readonly) NSArray<MovinTileStyleRule*>* rules;
@end