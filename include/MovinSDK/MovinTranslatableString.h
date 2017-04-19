//
// MovinTranslatableValueSingular.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "MovinTranslatableString.h"

@class MovinI18N;

/** Creates a MovinTranslatableString with the specified key and parameters. */
#define MSTRING(key, parameters) ([MovinTranslatableString string:(key) withParameters: (parameters)])

/**
 * Represents a translatable string.
 */
@interface MovinTranslatableString : NSObject

/**
 * Gets the key used for translating this string.
 */
@property(nonnull, readonly) NSString* key;
/**
 * Gets the parameters of this string.
 */
@property(nullable, readonly) NSArray* parameters;
/**
 * Gets the translated value for this string using the language set to the MovinI18N instance.
 */
@property(nonnull, readonly) NSString* translated;

/**
 * Initializes a new MovinTranslatableString object with the specified key and parameters.
 *
 * @param key The translation key.
 * @param parameters The parameters for the translation.
 * @return A MovinTranslatableString object with the specified key and parameters.
 */
- (nonnull id)initWithKey:(nonnull NSString*)key
            andParameters:(nullable NSArray*)parameters;

/**
 * Returns a MovinTranslatableString object with the specified key and parameters.
 *
 * @param key The translation key.
 * @param parameters The translation parameters.
 * @return The created MovinTranslatableString object.
 */
+ (nonnull MovinTranslatableString*)string:(nonnull NSString*)key
                            withParameters:(nullable NSArray*)parameters;
@end