//
// MovinFlooredFeatureObject.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "MovinFeatureObject.h"

/**
 * Represents a data object with a geometric shape and a floor.
 */
@interface MovinFlooredFeatureObject : MovinFeatureObject

/**
 * Gets the floor number of this instance.
 */
@property(readonly) double floor;
@end