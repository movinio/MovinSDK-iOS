//
// MovinFloor.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//


#import <Foundation/Foundation.h>

/**
 * Represents a single floor in a MovinMap.
 */
@interface MovinFloor : NSObject

/**
 * Gets the numeric representation of this floor.
 */
@property(readonly) double floorNumber;
/**
 * Gets the translation key for the abbreviation of this floor.
 */
@property(readonly, nonnull) NSString* abbreviatedName;
/**
 * Gets the translation key for the name of this floor.
 */
@property(readonly, nonnull) NSString* name;
/**
 * Gets the translation key for the articled name of this floor.
 */
@property(readonly, nonnull) NSString* articledName;
/**
 * Gets the translated abbreviation of this floor.
 */
@property(readonly, nonnull) NSString* abbreviatedNameTranslated;
/**
 * Gets the translated name of this floor.
 */
@property(readonly, nonnull) NSString* nameTranslated;
/**
 * Gets the translated articled name of this floor.
 */
@property(readonly, nonnull) NSString* articledNameTranslated;

/**
 * This class should not be manually initialized.
 * :nodoc:
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

@end