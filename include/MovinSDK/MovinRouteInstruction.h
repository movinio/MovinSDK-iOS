//
// MovinRouteInstruction.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//


#import <Foundation/Foundation.h>

@class MovinTranslatableString;

/**
 * A list of route instruction indicators. These can be used to display specific icons for specific instructions.
 */
typedef NS_ENUM(NSInteger, MovinRouteInstructionIndicator) {
    /** No indicator available. */
    MovinRouteInstructionIndicatorNone,
    /** Take an elevator up. */
    MovinRouteInstructionIndicatorElevatorUp,
    /** Take an elevator down. */
    MovinRouteInstructionIndicatorElevatorDown,
    /** Take stairs up. */
    MovinRouteInstructionIndicatorStairsUp,
    /** Take stairs down. */
    MovinRouteInstructionIndicatorStairsDown,
    /** Walk to a certain location. */
    MovinRouteInstructionIndicatorGoTo,
};

/** Instruction feature for floor changers ("take elevator/stairs to X"). */
FOUNDATION_EXPORT NSString* _Nonnull const MovinRouteInstructionFeatureFloors;
/** Instruction feature for walking to floor changers ("walk to staircase X/elevator Y"). */
FOUNDATION_EXPORT NSString* _Nonnull const MovinRouteInstructionFeatureToFloorChanger;
/** Instruction feature for walking to destination room ("walk to room X"). */
FOUNDATION_EXPORT NSString* _Nonnull const MovinRouteInstructionFeatureToDestinationRoom;

/**
 * Represents a single instruction in a route.
 */
@interface MovinRouteInstruction : NSObject
/**
 * Gets the (feature) type of this instruction.
 */
@property(nonnull, readonly) NSString* type;
/**
 * Gets the indicator type for this instruction.
 */
@property(readonly) MovinRouteInstructionIndicator indicator;
/**
 * Gets the index of the way point in the route's path this instruction refers to.
 */
@property(readonly) uint pathIndex;
/**
 * Gets a (translatable) textual representation of this instruction.
 */
@property(nonnull, readonly) MovinTranslatableString* text;
/**
 * Initializes a new MovinRouteInstruction object with the specified JSON data.
 *
 * @param json The JSON data.
 * @return A MovinRouteInstruction object with the specified JSON data.
 */
- (nonnull id)initWithJson:(nonnull NSDictionary*)json;

/**
 * Initializes a new MovinRouteInstruction object with the specified type, indicator, path index and text.
 *
 * @param type The type of the instruction.
 * @param indicator The indicator for the instruction.
 * @param pathIndex The index of the way point within the path.
 * @param text The textual representation of the instruction.
 * @return A MovinRouteInstruction object with the specified type, indicator, path index and text.
 */
- (nonnull id)initWithType:(nonnull NSString*)type
              andIndicator:(MovinRouteInstructionIndicator)indicator
              andPathIndex:(uint)pathIndex
                   andText:(nonnull MovinTranslatableString*)text;
@end