//
// BeaconIdentifier.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CLBeacon;

/**
 * Represents the identifier of a beacon.
 */
@interface BeaconIdentifier : NSObject <NSCopying>
/**
 * Initializes a BeaconIdentifier with only an UUID, which will compare to all Beacons with the same UUID, regardless
 * of their major and minor values.
 *
 * @param uuid The ProximityUUID of the BeaconIdentifier.
 * @return An instance of BeaconIdentifier.
 */
-(nonnull id) initWithUUID:(nonnull NSUUID *)uuid;
/**
 * Initializes the BeaconIdentifier with an UUID and major, which will compare to all Beacons with the same UUID and
 * major, regardless of their minor values.
 *
 * @param uuid The ProximityUUID of the BeaconIdentifier.
 * @param major The major value of the BeaconIdentifier.
 * @return An instance of BeaconIdentifier.
 */
-(nonnull id) initWithUUID:(nonnull NSUUID *)uuid andMajor:(int) major;
/**
 * Initializes the BeaconIdentifier with an UUID, major and minor, which will only compare to Beacons with the same
 * UUID, major and minor.
 *
 * @param uuid The ProximityUUID of the BeaconIdentifier.
 * @param major The major value of the BeaconIdentifier.
 * @param minor The minor value of the BeaconIdentifier.
 * @return An instance of BeaconIdentifier
 */
-(nonnull id) initWithUUID:(nonnull NSUUID *)uuid andMajor:(int) major andMinor:(int) minor;
/**
 * Initializes the BeaconIdentifier with the contents of a CLBeacon provided by the CoreLocation framework. A
 * BeaconIdentifier with all values (UUID, major and minor) will be created, so the BeaconIdentifier compares only to
 * Beacons with the same UUID, major and minor.
 * @param beacon The CLBeacon as provided by the CoreLocation framework.
 * @return An instance of BeaconIdentifier.
 */
-(nonnull id) initWithBeacon:(nonnull CLBeacon *) beacon;

/**
 * Creates a JSON representation of this BeaconIdentifier.
 *
 * @return The JSON representation as an NSDictionary.
 */
-(nonnull NSDictionary *) toJSON;
/**
 * Creates a BeaconIdentifier from the given JSON data.
 *
 * @return An instance of BeaconIdentifier, based on the given JSON data.
 */
+(nullable id) fromJson:(nonnull NSDictionary*) jsonData;

/**
 * Compares the given CLBeacon to this BeaconIdentifier. Based on how the BeaconIdentifier is initialized a certain
 * level op equality is required.
 *
 * @param beacon The beacon to compare to this BeaconIdentifier.
 * @return Whether or not the Beacon is conform the BeaconIdentifier (based on what properties are set).
 */
-(BOOL) compare:(nonnull CLBeacon*) beacon;

/**
 * Gets the UUID of the BeaconIdentifier.
 */
@property (readonly, nonnull) NSUUID* uuid;

/**
 * Gets the major value of the BeaconIdentifier.
 */
@property (readonly) int major;
/**
 * Gets the minor value of the BeaconIdentifier.
 */
@property (readonly) int minor;

/**
 * DEPRECATED: Use description instead.
 */
-(nonnull NSString*) toString DEPRECATED_MSG_ATTRIBUTE("Use description instead.");
@end
