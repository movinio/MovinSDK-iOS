//
// MovinTileStyleRule.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovinDataObject.h"

@class MovinTileStyleLayer;

/**
 * Contains all available scaling options of drawable components.
 */
typedef enum MovinTileStyleScaling {
    /// The size will always be equal to the image or font size. Effectively this means that if the user zooms out the
    /// POI/text will appear to become larger.
    MovinTileStyleScalingFixed = 0,
    /// The size will only be equal to the image or font size on the zoom level defined by a fixed zoom level.
    MovinTileStyleScalingScaled = 1,
} MovinTileStyleScaling;

/**
 * Contains all available rotation behaviours of drawable components.
 */
typedef enum MovinTileStyleRotation {
    /// The POI or text will always keep a horizontal orientation.
    MovinTileStyleRotationHorizontal = 0,
    /// The POI or text will rotate. In this mode the POI or text can appear up side down.
    MovinTileStyleRotationRotated = 1,
    /// The POI or text will rotate. Text will flip when viewed upside down.
    MovinTileStyleRotationRotatedCanFlip = 2,
} MovinTileStyleRotation;

/**
 * Represents a single style rule for a layer in a tile style.
 */
@interface MovinTileStyleRule : MovinDataObject
/**
 * Gets the minimum zoom level at which this rule is applied.
 */
@property(readonly) NSNumber* minZoom;
/**
 * Gets the maximum zoom level at which this rule is applied.
 */
@property(readonly) NSNumber* maxZoom;
/**
 * Gets the opacity with which to render entities. This is a value between 0.0 and 1.0. 0.0 is 100%
 * transparent, 1.0 is 100% opaque.
 */
@property(readonly) float opacity;
/**
 * Gets the fill color.
 */
@property(readonly) UIColor* fillColor;
/**
 * Gets the scaling style of the object.
 */
@property(readonly) MovinTileStyleScaling scalingType;
/**
 * Gets the rotation style of the object.
 */
@property(readonly) MovinTileStyleRotation rotationType;
/**
 * Gets the zoom level at which the object size is equal to the actual size of the image when the
 * `scalingStyle` property is set to MovinTileStyleScalingScaled.
 */
@property(readonly) int fixedZoomLevel;
/**
 * Gets a value indicating whether this rule is rendered on the server-side.
 */
@property(readonly)BOOL preRendered;
@end