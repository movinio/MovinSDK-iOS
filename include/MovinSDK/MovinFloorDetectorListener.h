//
//  MovinFloorDetectorListener.h
//  MovinSDK
//
//  Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MovinFloorDetectorListener

/**
 * Is called when the MovinFloorDetector detected a floor change.
 *
 * @param floorDetector The floor detector.
 * @param previousFloor The previously selected floor, or nil if a floor is selected for the first time.
 * @param newFloor The floor that is detected.
 */
- (void)   floorDetector:(nonnull id<MovinFloorDetector>)floorDetector
didDetectChangeFromFloor:(nullable NSNumber*)previousFloor
                 toFloor:(double)newFloor;

@end
