//
// Created by Tim Potze on 05/07/16.
// Copyright (c) 2016 Movin. All rights reserved.
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
 * Initializes a new MovinMapZoomLevel object with the specified row min, row max, column min and column max.
 *
 * @param rowMin The minimum tile row number for the zoom level.
 * @param rowMax The maximum tile row number for the zoom level.
 * @param columnMin The minimum tile column number for the zoom level.
 * @param columnMax The maximum tile column number for the zoom level.
 * @return A MovinMapZoomLevel object with the specified row min, row max, column min and column max.
 */
- (nonnull id)initWithRowMin:(int)rowMin
           andRowMax:(int)rowMax
        andColumnMin:(int)columnMin
        andColumnMax:(int)columnMax;
@end