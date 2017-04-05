//
// MovinTileManifest.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MovinMap;
@class MovinMapLayer;
@class MovinMapStyle;

/**
 * Represents the tile manifest.
 */
@interface MovinTileManifest : NSObject
/**
 * Gets the version number of the latest tile package.
 */
@property int version;
/**
 * Gets the map of which this tile manifest represents the tiles.
 */
@property(nullable, readonly, weak) MovinMap* map;
/**
 * Gets the available map layers for the map tiles.
 */
@property(nonnull, readonly) NSDictionary<NSString*, MovinMapLayer*>* layers;
/**
 * Gets the available map styles for the map tiles.
 */
@property(nonnull, readonly) NSDictionary<NSString*, MovinMapStyle*>* styles;

/**
 * Gets the default layer.
 */
@property(nonnull, readonly) MovinMapLayer* defaultLayer;

/**
 * Gets the default style.
 */
@property(nonnull, readonly) MovinMapStyle* defaultStyle;

/**
 * Initializes a new MovinTileManifest object with the specified JSON data.
 *
 * @param json The JSON data.
 * @param map The map.
 * @return A MovinTileManifest object with the specified JSON data.
 */
- (nonnull id)initWithJson:(nonnull NSDictionary*)json andMap:(nonnull MovinMap*) map;
@end