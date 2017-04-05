//
// MovinI18N.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//


#import <Foundation/Foundation.h>

/**
 * Represents the internationalization manager for routing and maps.
 */
@interface MovinI18N : NSObject
// TODO: Load language
// TODO: Select active language
/**
 * Translates the specified key with the specified parameters.
 *
 * @param key The key to translate.
 * @param parameters The parameters to replace replacement tokens (%1, %2, ...) with. Values must be of type NSNumber or NSString.
 * @return The translated string.
 */
- (NSString*)translate:(NSString*)key
        withParameters:(NSArray*)parameters;

/**
 * Gets a value indicating whether the translation for the specified key has support for plural values.
 *
 * @param key The key to check for.
 * @return YES if the translation has support for plural values; NO otherwise.
 */
- (BOOL)isPluralKey:(NSString*)key;
@end