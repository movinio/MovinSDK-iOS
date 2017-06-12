//
// MovinBeaconGroup.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinDataObject.h"

@class MovinBeacon;
@class MovinMap;

/**
 * Represents a group of beacons.
 */
@interface MovinBeaconGroup : MovinDataObject

/**
 * Gets the beacons associated with this instance.
 */
@property(readonly, nullable) NSArray<MovinBeacon*>* beacons;
/**
 * Gets the map associated with this instance.
 */
@property(readonly, nullable, weak) MovinMap* map;

@end