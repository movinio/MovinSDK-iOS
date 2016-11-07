//
//  MovinBeaconScanner.h
//  libMovinSDK
//
//  Created by Movin Software on 07/03/16.
//  Copyright © 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MovinMap;
@class MovinBeacon;
@class MovinRangedBeacon;
@class MovinBeaconScanner;
@protocol MovinBeaconScannerListener;

/**
 * @class MovinBeaconScanner
 * @brief Scans for beacons in the area.
 */
@interface MovinBeaconScanner : NSObject

/**
 * @brief Adds a map to the MovinBeaconScanner to scan for. The UUID's of the beacons in the map are necessary to start
 * scanning. The beacons found in the MovinMap will automatically be connected to the ranged beacons.
 * @param map The MovinMap of which the beacons should be scanned for.
 */
- (void)addMap:(nonnull MovinMap*)map;

/**
 * @brief Adds a map to the MovinBeaconScanner to scan for. The UUID's of the beacons in the map are necessary to start
 * scanning. The beacons found in the MovinMap will automatically be connected to the ranged beacons. To this method a
 * callback is given, which will be informed once the map was successfully added or not. If the map has successfully
 * retrieved its beacon data, but in the meantime the map was removed from the MovinBeaconScanner, the listener will not
 * be called.
 * @param map The MovinMap of which the beacons should be scanned for.
 * @param listener A listener block that will be informed if the beacons of the map were be successfully added or not.
 */
- (void)     addMap:(nonnull MovinMap*)map
withSuccessListener:(nullable void (^)(BOOL success, NSError* _Nullable error))listener;

/**
 * @brief Removes a map from the MovinBeaconScanner, the UUID's only found in this map will no longer be scanned for.
 * Beacons found in this MovinMap will no longer be automatically connected to the ranged beacons.
 * @param map The MovinMap of which the beacons no longer should be scanned for.
 */
- (void)removeMap:(nonnull MovinMap*)map;

/**
 * @brief Starts the MovinBeaconScanner and calls the given listener. Only the first time this method is called the
 * internal MovinLocationManager will be started.
 * @param listener The listener that will receive the events.
 */
- (void)startWithListener:(nonnull id <MovinBeaconScannerListener>)listener;

/**
 * @brief Stops the MovinBeaconScanner for the given listener. Only when no more listeners remain this method will
 * actually stop the MovinLocationManager.
 * @param listener The listener that will no longer receive events.
 */
- (void)stopWithListener:(nonnull id <MovinBeaconScannerListener>)listener;

/**
 * @brief Adds a silent listener which will be informed of its implemented events. Adding such a listener will not
 * affect whether or not the MovinBeaconScanner starts or stops.
 * @param listener The listener to add.
 */
- (void)addSilentListener:(nonnull id <MovinBeaconScannerListener>)listener;

/**
 * @brief Removes a silent listener. Removing such a listener will not affect whether or not the MovinBeaconScanner
 * starts or stops.
 * @param listener The listener to remove.
 */
- (void)removeSilentListener:(nonnull id <MovinBeaconScannerListener>)listener;

/**
 * @brief Sets background scanning enabled. To enable background scanning (ranging), Apple requires that also regular
 * location updates are started using startUpdatingLocation. To waste as little battery as possible, the
 * CLLocationAccuracy will be set to 3km, and the distance filter is set to 100000000m. The default background enabled
 * value is false.
 * @warning When using background scanning enabled, the appropriate background mode needs to be enabled (background mode
 * location). Also the NSAlwaysUsageDescription should be set in the info.plist and method
 * [CLLocationManager requestAlwaysAuthorization]; must be granted for this to work.
 * @warning When submitting an app that uses background scanning, you have to persuade the reviewers that your app
 * actually needs background scanning, since it consumes more power than apple would like.
 */
- (void)setBackgroundEnabled:(BOOL)enabled;

/**
 * @brief Gets the background enabled value.
 * @return The background enabled value.
 */
- (BOOL)getBackgroundEnabled;

@end
