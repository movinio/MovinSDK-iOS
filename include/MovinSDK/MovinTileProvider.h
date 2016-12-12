//
// MovinTileProvider.h
// MovinSDK
//
// Copyright © 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIImage.h>

@class MovinMap;
@protocol MovinFloorChangedListener;
@class MovinTileManifest;
@class MovinMapLayer;
@class MovinMapStyle;

/**
 * Provides tile images.
 */
@interface MovinTileProvider : NSObject
/**
 * Gets the style of this tile provider.
 */
@property(nonnull, readonly) MovinMapStyle* style;
/**
 * Gets the layer of this tile provider.
 */
@property(nonnull, readonly) MovinMapLayer* layer;
/**
 * Gets or sets the floor the tile provider is currently providing tiles for.
 */
@property double floor;
/**
 * Gets or sets whether this tile provider will follow the floor the device is currently located at.
 */
@property BOOL followFloor;

/**
 * Initializes a new MovinTileProvider object with the specified layer and style.
 *
 * @param layer The map layer to provide tiles for.
 * @param style The map style to provide tiles for.
 * @return A MovinTileProvider object with the specified layer and style.
 */
- (nonnull id)initWithLayer:(nonnull MovinMapLayer*)layer
                   andStyle:(nonnull MovinMapStyle*)style;

/**
 * Adds the specified floor changed listener to this instance. Once the active floor has changed, the
 * listener will be notified.
 *
 * @param listener An instance which implements the MovinFloorChangedListener protocol.
 */
- (void)addFloorChangedListener:(nonnull id <MovinFloorChangedListener>)listener;

/**
 * Removes the specified floor changed listener from this instance.
 *
 * @param listener An instance which implements the MovinFloorChangedListener protocol.
 */
- (void)removeFloorChangedListener:(nonnull id <MovinFloorChangedListener>)listener;

/**
 * Gets the tile at the specified x, y and zoom. Once the tile has been loaded, the specified callback will
 * be invokes with the tile image or an error if the image failed to load. The tile image will be nil when no image is
 * available for the specified location or an error occurred.
 *
 * @param x The X-coordinate of the tile.
 * @param y The Y-coordinate of the tile.
 * @param z The zoom level of the tile.
 * @param callback The callback to invoke once the tile has been loaded.
 */
- (void)getTileWithX:(int)x
                andY:(int)y
                andZ:(int)z
         andCallback:(nonnull void (^)(UIImage* _Nullable, NSError* _Nullable))callback;
@end