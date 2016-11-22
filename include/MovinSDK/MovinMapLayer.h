//
// Created by Tim Potze on 05/07/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MovinMap;
@class MovinMapZoomLevel;
@class MovinTileProvider;
@class MovinMapStyle;
@class MovinTileManifest;

/**
 * Represents a tile layer of a map.
 */
@interface MovinMapLayer : NSObject
/**
 * Gets the tile manifest this layer is a member of.
 */
@property(nullable, readonly, weak) MovinTileManifest* tileManifest;
/**
 * Gets the name of this layer.
 */
@property(nonnull, readonly) NSString* name;
/**
 * Gets the width of the tiles in this layer.
 */
@property(readonly) int tileWidth;
/**
 * Gets the height of the tiles in this layer.
 */
@property(readonly) int tileHeight;
/**
 * Gets the zoom levels available in this layer.
 */
@property(nonnull, readonly) NSDictionary<NSNumber*, MovinMapZoomLevel*>* zoomLevels;
/**
 * Gets minimum zoom level available for this layer.
 */
@property(readonly) float minZoomLevel;
/**
 * Gets the maximum zoom level available for this layer.
 */
@property(readonly) float maxZoomLevel;
/**
 * Initializes a new MovinMapLayer object with the specified tile manifest, name, tile width, tile height and zoom levels.
 *
 * @param tileManifest The tile manifest the layer is a member of.
 * @param name The name of the layer.
 * @param tileWidth The width of the tiles in the layer.
 * @param tileHeight The height of the tiles in the layer.
 * @param zoomLevels The zoom levels available in the layer.
 * @return A MovinMapLayer object with the specified tile manifest, name, tile width, tile height and zoom levels.
 */
- (nonnull id)initWithTileManifest:(nonnull MovinTileManifest*)tileManifest
                           andName:(nonnull NSString*)name
                      andTileWidth:(int)tileWidth
                     andTileHeight:(int)tileHeight
                     andZoomLevels:(nonnull NSDictionary<NSNumber*, MovinMapZoomLevel*>*)zoomLevels;

/**
 * Create a MovinTileProvider for this layer with the specified style.
 */
- (nullable MovinTileProvider*)createTileProviderWithStyle:(nonnull MovinMapStyle*)style
                                                  andError:(NSError* _Nullable* _Nullable)error;

/**
 * Create a MovinTileProvider for this layer with the style with the specified name.
 */
- (nullable MovinTileProvider*)createTileProviderWithStyleName:(nonnull NSString*)styleName
                                                      andError:(NSError* _Nullable* _Nullable)error;
@end