//
// MovinBeacon.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinPositionedDataObject.h"

@class MovinBeaconGroup;
@class GeoLatLng;
@class FloorPosition;
@class BeaconIdentifier;
@class MovinMap;

/**
 * Represents a single beacon.
 */
@interface MovinBeacon : MovinPositionedDataObject

/**
 * Gets the reference id of this instance.
 */
@property(readonly) int referenceId;
/**
 * Gets the group this instance is a member of.
 */
@property(readonly, weak, nullable) MovinBeaconGroup* group;
/**
 * Gets the map this instance is a member of.
 */
@property(readonly, nonnull) MovinMap* map;
/**
 * Gets the beacon code of this instance.
 */
@property(readonly, nonnull) NSString* beaconCode;
/**
 * Gets the UUID, major and minor of this instance.
 */
@property(readonly, nullable) BeaconIdentifier* identifier;
/**
 * Gets the status of this instance.
 */
@property(readonly, nonnull) NSString* status;
/**
 * Gets the type of this instance.
 */
@property(readonly, nonnull) NSString* type;
/**
 * Gets a value indicating whether or not the beacon's UUID, major and minor are shuffled.
 */
@property(readonly) BOOL shuffled;
/**
 * Gets the beacon identifiers that this beacon has broadcasted, is broadcasting and/or will broadcast in the future.
 */
@property(readonly, nullable) NSArray<BeaconIdentifier*>* shuffledIds;
/**
 * The ProximityUUID with which this beacon will broadcast if secure suffling is turned on.
 */
@property(readonly, nullable) NSUUID* secureUuid;

@end
