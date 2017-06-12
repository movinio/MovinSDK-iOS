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
 * Contains all available symbolizers.
 */
typedef enum MovinTileStyleSymbolizer {
    /// Do not draw the entity.
            MovinTileStyleSymbolizerNone = 0,
    /// Draw the entity as a polygon.
            MovinTileStyleSymbolizerPolygon = 1,
    /// Draw the entity as a line.
            MovinTileStyleSymbolizerLine = 2,
    /// Draw the entity as a single point.
            MovinTileStyleSymbolizerPoint = 3,
    /// Draw the entity as text.
            MovinTileStyleSymbolizerText = 4
} MovinTileStyleSymbolizer;

/**
 * Represents a single style rule for a layer in a tile style.
 */
@interface MovinTileStyleRule : MovinDataObject

/**
 * Gets a value indicating how to draw this rule.
 */
@property(readonly) MovinTileStyleSymbolizer symbolizer;
/**
 * Gets the minimum zoom level at which this rule is applied.
 */
@property(readonly, nullable) NSNumber* minZoom;
/**
 * Gets the maximum zoom level at which this rule is applied.
 */
@property(readonly, nullable) NSNumber* maxZoom;
/**
 * Gets the opacity with which to render entities. This is a value between 0.0 and 1.0. 0.0 is 100%
 * transparent, 1.0 is 100% opaque.
 */
@property(readonly) float opacity;
/**
 * Gets the fill color.
 */
@property(readonly, nullable) UIColor* fillColor;
/**
 * Gets the stroke color.
 */
@property(readonly, nullable) UIColor* strokeColor;
/**
 * Gets the stroke width.
 */
@property(readonly, nullable) NSNumber* strokeWidth;
/**
 * Gets a value indicating whether the stroke line is scaled based  on a certain zoom level. This zoom level is defined
 * in the [MovinTileStyleRule strokeZoomLevel] property.
 */
@property(readonly) BOOL strokeIsScaled;
/**
 * Gets the zoom level to which the stroked line is scaled.
 */
@property(readonly, nullable) NSNumber* strokeZoomLevel;
/**
 * Gets an array of dash sizes which describes the line to be rendered as a dashed line. The elements in this array
 * describe how to alternately draw a line and a dash. In this case a line of 5 pixels is followed by a 2 pixels gap
 * before it repeats. The array can be extended to any size. So a valid value can also be [5, 2, 10, 4, 20, 8] which
 * describes a line of 5 pixels with a 2 pixels gap followed by a line of 10 pixels followed by a 4 pixels gap followed
 * by a line of 20 pixels followed by a 8 pixels gap.
 */
@property(readonly, nullable) NSArray<NSNumber*>* dashArray;
/**
 * Gets the offset in pixels applied to the dashed line.
 */
@property(readonly, nullable) NSNumber* dashOffset;
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
@property(readonly) BOOL preRendered;

/**
 * This class should not be manually initialized.
 * :nodoc:
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

@end