//
// MovinMap.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinFeatureObject.h"
#import "MovinSDKCore.h"

@class MovinEntitySubType;
@class MovinPositioningEngine;
@class GeoShape;
@class GeoLatLng;
@class MovinBeacon;
@class MovinBeaconGroup;
@class MovinEntity;
@class MovinBuilding;
@class MovinTileManifest;
@class MovinFloor;
@class MovinRoutingManager;
@class MovinNavigationNode;
@class FloorPosition;

/**
 * Handler for getting beacon groups. An array of the resulting beacon groups and an error is supplied. If an error
 * occurs, the array will be nil and an error is set.
 */
typedef void(^BeaconGroupsCallback)(NSArray<MovinBeaconGroup*>* _Nullable beaconGroups, NSError* _Nullable error);

/**
 * Handler for getting beacons. An array of the resulting beacons and an error is supplied. If an error occurs, the
 * array will be nil and an error is set.
 */
typedef void(^BeaconsCallback)(NSArray<MovinBeacon*>* _Nullable beacons, NSError* _Nullable error);

/**
 * Handler for getting a beacon. The resulting beacon and an error is supplied. If an error occurs, the beacon will be
 * nil and an error is set.
 */
typedef void(^BeaconCallback)(MovinBeacon* _Nullable beacon, NSError* _Nullable error);

/**
 * Handler for getting buildings. An array of the resulting buildings and an error is supplied. If an error occurs, the
 * array will be nil and an error is set.
 */
typedef void(^BuildingsCallback)(NSArray<MovinBuilding*>* _Nullable buildings, NSError* _Nullable error);

/**
 * Handler for getting entities. An array of the resulting entities and an error is supplied. If an error occurs, the
 * array will be nil and an error is set.
 */
typedef void(^EntitiesCallback)(NSArray<MovinEntity*>* _Nullable entities, NSError* _Nullable error);

/**
 * Handler for getting navigation nodes. An array of the resulting navigation nodes and an error is supplied. If an
 * error occurs, the array will be nil and an error is set.
 */
typedef void(^NavigationNodesCallback)(NSArray<MovinNavigationNode*>* _Nullable navigationNodes, NSError* _Nullable error);

/**
 * Handler for getting a navigation node. The resulting navigation node and an error is supplied. If an error occurs,
 * the node will be nil and an error is set.
 */
typedef void(^NavigationNodeCallback)(MovinNavigationNode* _Nullable navigationNode, NSError* _Nullable error);

/**
 * Handler for getting a tile manifest. The resulting tile manifest and an error is supplied. If an error occurs, the
 * tile manifest will be nil and an error is set.
 */
typedef void(^TileManifestCallback)(MovinTileManifest* _Nullable tileManifest, NSError* _Nullable error);

/**
 * Represents a map.
 */
@interface MovinMap : MovinFeatureObject

/**
 * Gets the description of this map.
 */
@property(readonly, nonnull) NSString* descriptionText;
/**
 * Gets the lowest floor number of this map.
 */
@property(readonly) double lowestFloorNumber;
/**
 * Gets the highest floor number of this map.
 */
@property(readonly) double highestFloorNumber;
/**
 * Gets a dictionary filled with the sub types available in this map.
 */
@property(readonly, nonnull) NSDictionary<NSString*, MovinEntitySubType*>* subTypes;
/**
 * Gets a value indicating whether the map is currently downloading map data.
 */
@property(readonly) BOOL isDownloadingMapData;
/**
 * Gets a value indicating whether the map is currently downloading beacon data.
 */
@property(readonly) BOOL isDownloadingBeaconData;
/**
 * Gets a value indicating whether the map is currently downloading the tile manifest.
 */
@property(readonly) BOOL isDownloadingTileManifest;
/**
 * Gets a value indicating whether the mis currently downloading the navigation nodes.
 */
@property(readonly) BOOL isDownloadingNavigationNodes;
/**
 * Gets all beacons available in this map. Returns nil if the beacon data has not yet been downloaded. Use
 * [MovinMap downloadBeaconDataWithCallback:] to download the beacon data. Use [MovinMap getBeaconsWithCallback:] to
 * receive all beacons once the beacon data has been downloaded.
 */
@property(nullable, readonly) NSArray<MovinBeacon*>* beacons;
/**
 * Gets all entities available in this map. Returns nil if the map data has not yet been downloaded. Use
 * [MovinMap downloadMapDataWithCallback:] to download the map data. Use [MovinMap getEntitiesWithCallback:] to
 * receive all entities once the map data has been downloaded.
 */
@property(nullable, readonly) NSArray<MovinEntity*>* entities;
/**
 * Gets all buildings available in this map. Returns nil if the map data has not yet been downloaded. Use
 * [MovinMap downloadMapDataWithCallback:] to download the map data. Use [MovinMap getBuildingsWithCallback:] to
 * receive all buildings once the map data has been downloaded.
 */
@property(nullable, readonly) NSArray<MovinBuilding*>* buildings;
/**
 * Gets all navigation nodes available in this map. Returns nil if the navigation nodes have not yet been downloaded.
 * Use [MovinMap downloadNavigationNodesWithCallback:] to download the nodes. Use
 * [MovinMap getNavigationNodesWithCallback:] to receive all navigation nodes once they has been downloaded.
 */
@property(nullable, readonly) NSArray<MovinNavigationNode*>* navigationNodes;
/**
 * Gets all floors available in this map.
 */
@property(nonnull, readonly) NSArray<MovinFloor*>* floors;
/**
 * Gets the tile manifest for this map. Returns nil if the tile manifest has not yet been downloaded. Use
 * [MovinMap downloadTileManifestWithcallback:] to download the tile manifest. Use [MovinMap getTileManifestWithCallback:]
 * to receive all buildings once the tile manifest has been downloaded.
 */
@property(nullable, readonly) MovinTileManifest* tileManifest;

/**
 * Attempts to create a positioning engine. If it succeeds, a MovinPositioningEngine is returned, otherwise
 * the given NSError pointer points to the NSError describing what went wrong.
 *
 * @param error A pointer to a NSError object. This error will be given a value if an error has occurred.
 * @return The MovinPositioningEngine for this map or nil if an error occurred.
 *
 * @code
 * NSError* error = nil;
 * MovinPositioningEngine* positioningEngine = [movinMap getPositioningEngine:&error];
 * if(error != nil) {
 *    NSLog(@"An error occurred when getting a MovinPositioningEngine: %@", [error localizedDescription]);
 * } else {
 *    // positioningEngine != nil
 *    NSLog(@"Successfully created a MovinPositioningEngine");
 * }
 * @endcode
 */
- (nullable MovinPositioningEngine*)getPositioningEngine:(NSError* _Nullable* _Nullable)error;

/**
 * Attempts to download the beacon data. After downloading the data the callback, if present, will be invoked.
 * If the data has already been loaded the callback will be invoked immediately.
 *
 * @param callback The callback to invoke once the downloading has been completed.
 */
- (void)downloadBeaconDataWithCallback:(nullable DownloadDataCallback)callback;

/**
 * Attempts to download the map data. After downloading the data, the callback, if present, will be invoked.
 * If the data has already been loaded the callback will be invoked immediately.
 *
 * @param callback The callback to invoke once the downloading has been completed.
 */
- (void)downloadMapDataWithCallback:(nullable DownloadDataCallback)callback;

/**
 * Attempts to download the tile manifest. After downloading the file, the callback, if present, will be
 * invoked. If the manifest has already been loaded the callback will be invoked immediately.
 *
 * @param callback The callback to invoke once the downloading has been completed.
 */
- (void)downloadTileManifestWithCallback:(nullable DownloadDataCallback)callback;

/**
 * Attempts to download the navigation nodes. After downloading the nodes, the callback, if present, will be invoked.
 * If the nodes have already been loaded the callback will be invoked immediately.
 *
 * @param callback The callback to invoke once the downloading has been completed.
 */
- (void)downloadNavigationNodesWithCallback:(nullable DownloadDataCallback)callback;

/**
 * Caches all image data associated with the sub types, map data and beacons.
 */
- (void)downloadImageData;

/**
 * Gets all beacons available in this map. The result is returned using a callback.
 *
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getBeaconsWithCallback:(nonnull BeaconsCallback)callback;

/**
 * DEPRECATED: Use getBeaconsWithCallback: instead.
 *
 * @param callback DEPRECATED
 */
- (void)getBeaconGroupsWithCallback:(nonnull BeaconGroupsCallback)callback DEPRECATED_MSG_ATTRIBUTE("Use getBeaconsWithCallback: instead.");

/**
 * Gets all beacons in this map within the specified shape and floor. The result is returned using a callback.
 *
 * @param shape The shape in which to search.
 * @param floor The floor on which to search.
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getBeaconsInShape:(nonnull GeoShape*)shape
                 andFloor:(double)floor
              andCallback:(nonnull BeaconsCallback)callback;

/**
 * Gets all beacons in this map within the specified shape and floor. If the beacon data has not yet been downloaded,
 * nil is returned.
 *
 * @param shape The shape in which to search.
 * @param floor The floor on which to search.
 * @return The found beacons or nil if the beacon data has not yet been downloaded.
 */
- (nullable NSArray<MovinBeacon*>*)getBeaconsInShape:(nonnull GeoShape*)shape
                                            andFloor:(double)floor;

/**
 * Gets the beacon nearest to the specified point on the specified floor. The result is returned using a callback.
 *
 * @param point The point near which to search.
 * @param floor The floor on which to search.
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getBeaconNearestToPoint:(nonnull GeoLatLng*)point
                        atFloor:(double)floor
                   withCallback:(nonnull BeaconCallback)callback;

/**
 * Gets the beacon nearest to the specified point on the specified floor. If the beacon data has not yet been
 * downloaded, nil is returned.
 *
 * @param point The point near which to search.
 * @param floor The floor on which to search.
 * @return The found beacon or nil if the beacon data has not yet been downloaded.
 */
- (nullable MovinBeacon*)getBeaconNearestToPoint:(nonnull GeoLatLng*)point
                                         atFloor:(double)floor;

/**
 * Gets the beacon nearest to the specified point. The result is returned using a callback.
 *
 * @param point The point near which to search.
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getBeaconNearestToPoint:(nonnull FloorPosition*)point
                   withCallback:(nonnull BeaconCallback)callback;

/**
 * Gets the beacon nearest to the specified point. If the beacon data has not yet been downloaded, nil is returned.
 *
 * @param point The point near which to search.
 * @return The found beacon or nil if the beacon data has not yet been downloaded.
 */
- (nullable MovinBeacon*)getBeaconNearestToPoint:(nonnull FloorPosition*)point;

/**
 * Gets all entities available in this map. The result is returned using a callback.
 *
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getEntitiesWithCallback:(nonnull EntitiesCallback)callback;

/**
 * Gets all entities in this map within the specified shape and floor. The result is returned using a callback.
 *
 * @param shape The shape in which to search.
 * @param floor The floor on which to search.
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getEntitiesInShape:(nonnull GeoShape*)shape
                  andFloor:(double)floor
               andCallback:(nonnull EntitiesCallback)callback;

/**
 * Gets all entities in this map within the specified shape and floor. If the map data has not yet been
 * downloaded, nil is returned.
 *
 * @param shape The shape in which to search.
 * @param floor The floor on which to search.
 * @return The found entities or nil if the map data has not yet been downloaded.
 */
- (nullable NSArray<MovinEntity*>*)getEntitiesInShape:(nonnull GeoShape*)shape
                                             andFloor:(double)floor;

/**
 * Gets all buildings available in this map. The result is returned using a callback.
 *
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getBuildingsWithCallback:(nonnull BuildingsCallback)callback;

/**
 * Gets all buildings in this map within the specified shape. The result is returned using a callback.
 *
 * @param shape The shape in which to search.
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getBuildingsInShape:(nonnull GeoShape*)shape
                andCallback:(nonnull BuildingsCallback)callback;

/**
 * Gets all buildings in this map within the specified shape . If the map data has not yet been
 * downloaded, nil is returned.
 *
 * @param shape The shape in which to search.
 * @return The found buildings or nil if the map data has not yet been downloaded.
 */
- (nullable NSArray<MovinBuilding*>*)getBuildingsInShape:(nonnull GeoShape*)shape;

/**
 * Gets all navigation nodes available in this map. The result is returned using a callback.
 *
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getNavigationNodesWithCallback:(nonnull NavigationNodesCallback)callback;

/**
 * Gets all navigation nodes in this map within the specified shape and floor. The result is returned using a callback.
 *
 * @param shape The shape in which to search.
 * @param floor The floor on which to search.
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getNavigationNodesInShape:(nonnull GeoShape*)shape
                         andFloor:(double)floor
                      andCallback:(nonnull NavigationNodesCallback)callback;

/**
 * Gets all navigation nodes in this map within the specified shape and floor. If the map data has not yet been
 * downloaded, nil is returned.
 *
 * @param shape The shape in which to search.
 * @param floor The floor on which to search.
 * @return The found navigation nodes or nil if the nodes have not yet been downloaded.
 */
- (nullable NSArray<MovinNavigationNode*>*)getNavigationNodesInShape:(nonnull GeoShape*)shape
                                                            andFloor:(double)floor;

/**
 * Gets the navigation node nearest to the specified point on the specified floor. The result is returned using a
 * callback.
 *
 * @param point The point near which to search.
 * @param floor The floor on which to search.
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getNavigationNodeNearestToPoint:(nonnull GeoLatLng*)point
                                atFloor:(double)floor
                           withCallback:(nonnull NavigationNodeCallback)callback;

/**
 * Gets the navigation node nearest to the specified point. The result is returned using a callback.
 *
 * @param point The point near which to search.
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getNavigationNodeNearestToPoint:(nonnull FloorPosition*)point
                           withCallback:(nonnull NavigationNodeCallback)callback;

/**
 * Gets the navigation node nearest to the specified point. If the map data has not yet been downloaded, nil is
 * returned.
 *
 * @param point The point near which to search.
 * @return The found navigation nodes or nil if the nodes have not yet been downloaded.
 */
- (nullable MovinNavigationNode*)getNavigationNodeNearestToPoint:(nonnull FloorPosition*)point;

/**
 * Gets the navigation node nearest to the specified point on the specified floor. If the map data has not yet been
 * downloaded, nil is returned.
 *
 * @param point The point near which to search.
 * @param floor The floor on which to search.
 * @return The found navigation nodes or nil if the nodes have not yet been downloaded.
 */
- (nullable MovinNavigationNode*)getNavigationNodeNearestToPoint:(nonnull GeoLatLng*)point
                                                         atFloor:(double)floor;

/**
 * Gets the tile manifest for this map. The result is returned using a callback.
 *
 * @param callback The callback to invoke once the result is ready.
 */
- (void)getTileManifestWithCallback:(nonnull TileManifestCallback)callback;

/**
 * Gets the Movin routing manager for this map.
 *
 * @param error A pointer to a NSError object. This error wil lbe given a value if an error has occurred.
 * @return A MovinRoutingManager object.
 */
- (nullable MovinRoutingManager*)getRouter:(NSError* _Nullable* _Nullable)error;

/**
 * Gets the floor associated with the specified floor number.
 *
 * @param floorNumber The floor number.
 * @return The floor associated with the specified floor number.
 */
- (nullable MovinFloor*)getFloor:(double)floorNumber;
@end
