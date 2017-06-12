//
// MovinI18N.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinSDKCore.h"

/**
 * Represents the internationalization manager for routing and maps.
 */
@interface MovinI18N : NSObject

/**
 * Gets or sets the active language (e.g. en-US, en-us, en, nl-NL, nl-BE).
 */
@property (nonnull) NSString* activeLanguage;

/**
 * This class should not be manually initialized.
 * :nodoc:
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 * Translates the specified key with the specified parameters.
 *
 * @param key The key to translate.
 * @param parameters The parameters to replace replacement tokens (%1, %2, ...) with. Values must be of type NSNumber or NSString.
 * @return The translated string.
 */
- (nonnull NSString*)translate:(nonnull NSString*)key
                withParameters:(nullable NSArray*)parameters;

/**
 * Downloads the routing instructions translations. Once the translations have been downloaded, or if the download
 * fails, the specified callback is invoked.
 *
 * @param callback The callback invoked once the download has been completed or has failed.
 */
- (void)downloadRoutingTranslationsWithCallback:(nullable DownloadDataCallback)callback;

/**
 * Downloads the translations for the specified map.Once the translations have been downloaded, or if the download
 * fails, the specified callback is invoked.
 *
 * @param map The map to download the translations for.
 * @param callback The callback invoked once the download has been completed or has failed.
 */
- (void)downloadTranslationsForMap:(nonnull MovinMap*)map
                      withCallback:(nullable DownloadDataCallback)callback;

@end