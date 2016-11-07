//
// Created by Tim Potze on 10/03/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinDataObject.h"

@class MovinBeaconGroup;
@class GeoLatLng;
@class FloorPosition;
@class BeaconIdentifier;

/**
 * @class MovinBeacon
 * @brief Represents a single beacon.
 */
@interface MovinBeacon : MovinDataObject
/**
 * @brief Gets the reference id of this instance.
 */
@property(readonly, nonnull) NSString* referenceId;
/**
 * @brief Gets the group this instance is a member of.
 */
@property(readonly, weak, nullable) MovinBeaconGroup* group;
/**
 * @brief Gets the position of this instance.
 */
@property(readonly, nullable) FloorPosition* position;
/**
 * @brief Gets the beacon code of this instance.
 */
@property(readonly, nonnull) NSString* beaconCode;
/**
 * @brief Gets the UUID, Major and Minor of this instance.
 */
@property(readonly, nullable) BeaconIdentifier* identifier;
/**
 * @brief Gets the status of this instance.
 */
@property(readonly, nonnull) NSString* status;
/**
 * @brief Gets the type of this instance.
 */
@property(readonly, nonnull) NSString* type;
/**
 * @brief Gets whether or not the beacon's UUID, Major and Minor are shuffled.
 */
@property(readonly) BOOL shuffled;
/**
 * @brief Gets the beacon identifiers that this beacon has broadcasted, is broadcasting and/or will broadcast in the future.
 */
@property(readonly, nullable) NSArray<BeaconIdentifier*>* shuffledIds;
/**
 * @brief The ProximityUUID with which this beacon will broadcast if secure suffling is turned on.
 */
@property(readonly, nullable) NSUUID* secureUuid;

/**
 * @brief Initializes a new MovinDataObject object with the specified JSON data and beacon group.
 * @param group The beacon group.
 * @param json The JSON data.
 * @return A MovinDataObject object with the specified JSON data and beacon group.
 */
- (nonnull id)initWithGroup:(nonnull MovinBeaconGroup*)group
                    andJson:(nonnull NSDictionary*)json;
@end
