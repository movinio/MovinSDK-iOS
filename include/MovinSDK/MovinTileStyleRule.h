//
// Created by Tim Potze on 26/09/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovinDataObject.h"

@class MovinTileStyleLayer;

// TODO: Add docs here.
typedef enum MovinTileStyleScaling {
    MovinTileStyleScalingFixed = 0,
    MovinTileStyleScalingScaled = 1,
} MovinTileStyleScaling;

typedef enum MovinTileStyleRotation {
    MovinTileStyleRotationHorizontal = 0,
    MovinTileStyleRotationRotated = 1,
    MovinTileStyleRotationRotatedFlipped = 2,
} MovinTileStyleRotation;

@interface MovinTileStyleRule : MovinDataObject
/**
 * @abstract Gets the minimum zoom level at which this rule is applied.
 */
@property(readonly) NSNumber* minZoom;
/**
 * @abstract Gets the maximum zoom level at which this rule is applied.
 */
@property(readonly) NSNumber* maxZoom;
/**
 * @abstract Gets the opacity with which to render entities. This is a value between 0.0 and 1.0. 0.0 is 100%
 * transparent, 1.0 is 100% opaque.
 */
@property(readonly) float opacity;
/**
 * @abstract Gets the fill color.
 */
@property(readonly) UIColor* fillColor;
/**
 * @abstract Gets the scaling style of the object.
 */
@property(readonly) MovinTileStyleScaling scalingType;
/**
 * @abstract Gets the rotation style of the object.
 */
@property(readonly) MovinTileStyleRotation rotationType;
/**
 * @abstract Gets the zoom level at which the object size is equal to the actual size of the image when the
 * `scalingStyle` property is set to MovinTileStyleScalingScaled.
 */
@property(readonly) int fixedZoomLevel;
/**
 * @abstract Gets a value indicating whether this rule is rendered on the server-side.
 */
@property(readonly)BOOL preRendered;
@end