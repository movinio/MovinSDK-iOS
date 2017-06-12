//
// MovinImagePoint.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

/**
 * Represents a point on an image.
 */
@interface MovinImagePoint : NSObject

/**
 * Gets the X-coordinate of this point.
 */
@property(readonly) double x;
/**
 * Gets the Y-coordinate of this point.
 */
@property(readonly) double y;

/**
 * Gets a CGPoint object representing the same value as this point.
 */
@property(readonly) CGPoint CGPoint;

/**
 * Use initWithX:andY: instead.
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 * Initializes a new MovinImagePoint object with the specified x and y coordinates.
 *
 * @param x The X-coordinate.
 * @param y The Y-coordinate.
 * @return A MovinImagePoint object with the specified x and y coordinates.
 */
- (nonnull id)initWithX:(double)x
                   andY:(double)y;

/**
 * Parses the specified data into an instance of MovinImagePoint.
 *
 * @param jsonData The JSON data to parse.
 * @returns An MovinImagePoint object with the values specified in the json data.
 */
+ (nullable MovinImagePoint*)fromJson:(nonnull NSArray*)jsonData;
@end