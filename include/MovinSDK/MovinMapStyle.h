//
// MovinMapStyle.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MovinTileManifest;
@class MovinTileProvider;
@class MovinMapLayer;
@class MovinTileStyle;

/**
 * Represents a tile style of a map.
 */
@interface MovinMapStyle : NSObject

/**
 * Gets the tile manifest this layer is a member of.
 */
@property(nullable, readonly, weak) MovinTileManifest* tileManifest;

/**
 * Gets the associated map style.
 */
@property(nullable, readonly) MovinTileStyle* tileStyle;

/**
 * Gets the name of this layer.
 */
@property(nonnull, readonly) NSString* name;

/**
 * Create a MovinTileProvider for the specified layer with this style.
 */
- (nullable MovinTileProvider*)createTileProviderWithLayer:(nonnull MovinMapLayer*)layer
                                                  andError:(NSError* _Nullable* _Nullable)error;

/**
 * Create a MovinTileProvider for the layer with the specified name with this style.
 */
- (nullable MovinTileProvider*)createTileProviderWithLayerName:(nonnull NSString*)layerName
                                                      andError:(NSError* _Nullable* _Nullable)error;

/**
 * This class should not be manually initialized.
 * :nodoc:
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

@end