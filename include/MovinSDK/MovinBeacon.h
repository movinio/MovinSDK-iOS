//
// MovinBeacon.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinDataObject.h"

@class MovinBeaconGroup;
@class GeoLatLng;
@class FloorPosition;
@class BeaconIdentifier;

/**
 * Represents a single beacon.
 */
@interface MovinBeacon : MovinDataObject
/**
 * Gets the reference id of this instance.
 */
@property(readonly) int referenceId;
/**
 * Gets the group this instance is a member of.
 */
@property(readonly, weak, nullable) MovinBeaconGroup* group;
/**
 * Gets the position of this instance.
 */
@property(readonly, nullable) FloorPosition* position;
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
 * Gets whether or not the beacon's UUID, major and minor are shuffled.
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

/**
 * Initializes a new MovinDataObject object with the specified JSON data and beacon group.
 *
 * @param group The beacon group.
 * @param json The JSON data.
 * @return A MovinDataObject object with the specified JSON data and beacon group.
 */
- (nonnull id)initWithGroup:(nonnull MovinBeaconGroup*)group
                    andJson:(nonnull NSDictionary*)json;
@end
