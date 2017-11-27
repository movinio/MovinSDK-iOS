//
//  MovinFloorDetectorListener.h
//  MovinSDK
//
//  Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MovinFloorDetectorListener

/**
 * Is called when the MovinFloorDetector detected a floor change
 *
 * @param previousFloor The previous selected floor, or nil if a floor is selected for the first time
 * @param newFloor The floor that is detected
 */
- (void) didDetectFloor:(nullable NSNumber*) previousFloor andNewFloor:(nonnull NSNumber*) newFloor;

@end
