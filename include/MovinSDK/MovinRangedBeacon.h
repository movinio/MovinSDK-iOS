//
// MovinRangedBeacon.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@class MovinBeacon;
@class BeaconIdentifier;

/**
 * Represents a ranging result of a single beacon.
 */
@interface MovinRangedBeacon : NSObject

/**
 * Gets the associated MovinBeacon of this ranged beacon. Can be nil.
 */
@property(readonly, nullable) MovinBeacon* beacon;
/**
 * Gets the estimated distance in meters of the device to this beacon.
 */
@property(readonly) double distance;
/**
 * Gets the signal strength in dBm with which this beacon was measured.
 */
@property(readonly) int rssi;
/**
 * Gets the CLProximity of this beacon, this is one of IMMEDIATE, NEAR, FAR or UNKNOWN.
 */
@property(readonly) CLProximity proximity;
/**
 * Gets the beacon specific data, UUID, major and minor. Also accessible through the beacon property if that is not nil.
 */
@property(readonly, nonnull) BeaconIdentifier* beaconIdentifier;

/**
 * This class should not be manually initialized.
 * :nodoc:
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

@end
