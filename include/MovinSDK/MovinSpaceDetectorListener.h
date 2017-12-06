//
// MovinSpaceDetectorListener.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//


#import <Foundation/Foundation.h>

@protocol MovinSpaceDetector;
@class MovinEntity;

/**
 * Defines methods that a listener of MovinSpaceDetector can implement.
 */
@protocol MovinSpaceDetectorListener<NSObject>
/**
 * Is called when the MovinSpaceDetector determined that the space has been changed.
 * @param spaceDetector The space detector.
 * @param space The space the user walked into, or null if the system could not determine the current space.
 */
- (void) spaceDetector: (nonnull id<MovinSpaceDetector>) spaceDetector
        didDetectSpace: (nullable MovinEntity*)space;

/**
 * Checks whether the specified MovinEntity is a valid space which can be used as a location.
 * @param spaceDetector The space detector.
 * @param space The space to check.
 * @return A value indicating whether the space is valid.
 */
- (BOOL) spaceDetector: (nonnull id<MovinSpaceDetector>) spaceDetector
          isValidSpace: (nonnull MovinEntity*)space;
@end