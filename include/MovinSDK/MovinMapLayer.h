//
// MovinMapLayer.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
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
 * Create a MovinTileProvider for this layer with the specified style.
 */
- (nullable MovinTileProvider*)createTileProviderWithStyle:(nonnull MovinMapStyle*)style
                                                  andError:(NSError* _Nullable* _Nullable)error;

/**
 * Create a MovinTileProvider for this layer with the style with the specified name.
 */
- (nullable MovinTileProvider*)createTileProviderWithStyleName:(nonnull NSString*)styleName
                                                      andError:(NSError* _Nullable* _Nullable)error;

/**
 * This class should not be manually initialized.
 * :nodoc:
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

@end