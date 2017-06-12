//
// MovinMapZoomLevel.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Represents a single available zoom level of a map.
 */
@interface MovinMapZoomLevel : NSObject

/**
 * Gets the minimum tile row number for this zoom level.
 */
@property(readonly) int rowMin;
/**
 * Gets the maximum tile row number for this zoom level.
 */
@property(readonly) int rowMax;
/**
 * Gets the minimum tile column number for this zoom level.
 */
@property(readonly) int columnMin;
/**
 * Gets the maximum tile column number for this zoom level.
 */
@property(readonly) int columnMax;

/**
 * This class should not be manually initialized.
 * :nodoc:
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

@end