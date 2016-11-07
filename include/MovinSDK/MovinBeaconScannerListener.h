//
// Created by Tim Potze on 01/11/2016.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MovinBeaconScanner;
@class MovinRangedBeacon;

/**
 * @protocol MovinBeaconScannerListener
 * @brief Defines methods that a listener of MovinBeaconScanner can optionally implement to use the results of a MovinBeaconScanner.
 */
@protocol MovinBeaconScannerListener<NSObject>

@optional
/**
 * @brief Method is called when the user entered the area for the provided UUID. This method is only called when
 * background scanning is active and the CLAuthorizationStatus equals kCLAuthorizationStatusAuthorizedAlways.
 * @param scanner The beacon scanner.
 * @param uuid The iBeacon ProximityUUID of the area that was entered.
 */
- (void)beaconScanner:(nonnull MovinBeaconScanner*)scanner
 didEnterAreaWithUUID:(nonnull NSUUID*)uuid;

/**
 * @brief Method is called when the user exited the area for the provided UUID. This method is only called when
 * background scanning is active and the CLAuthorizationStatus equals kCLAuthorizationStatusAuthorizedAlways.
 * @param scanner The beacon scanner.
 * @param uuid The iBeacon ProximityUUID of the area that was exited.
 */
- (void)beaconScanner:(nonnull MovinBeaconScanner*)scanner
  didExitAreaWithUUID:(nonnull NSUUID*)uuid;

/**
 * @brief Is called when the nearest beacon is changed or when the current nearest beacon is out of range.
 * @param scanner The beacon scanner.
 * @param beacon The new nearest beacon, or nil if the current nearest beacon is out of range.
 */
- (void) beaconScanner:(nonnull MovinBeaconScanner*)scanner
didChangeNearestBeacon:(nullable MovinRangedBeacon*)beacon;

/**
 * @brief When this method is implemented the onNearestBeaconChanged method only returns beacons that pass this method.
 * @param scanner The beacon scanner.
 * @param beacon The beacon that needs to be validated.
 * @return Whether the beacon is valid for the onNearestBeaconChanged result.
 */
- (BOOL)beaconScanner:(nonnull MovinBeaconScanner*)scanner
 isValidNearestBeacon:(nonnull MovinRangedBeacon*)beacon;

/**
 * @brief Is called when beacons are ranged.
 * @param scanner The beacon scanner.
 * @param beacons The beacons that were ranged.
 */
- (void)beaconScanner:(nonnull MovinBeaconScanner*)scanner
      didRangeBeacons:(nonnull NSArray<MovinRangedBeacon*>*)beacons;
@end