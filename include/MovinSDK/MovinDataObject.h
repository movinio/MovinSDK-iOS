//
// MovinDataObject.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Represents an object which can be initialized with JSON data.
 */
@interface MovinDataObject : NSObject

/**
 * Gets the identifier of this instance.
 */
@property(readonly, nonnull) NSString* id;
/**
 * Gets the name of this instance.
 */
@property(readonly, nullable) NSString* name;

/**
 * Gets a collection of properties of this instance.
 */
@property(readonly, nonnull) NSDictionary* properties;

/**
 * This class should not be manually initialized.
 * :nodoc:
 */
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 * Sets a callback which can be invoked to determine which image files should be downloaded and cached for the
 * specified property key.
 *
 * @code
 * [building setCacheableImageExtractorForKey:@"buildingImage" andCallback: ^(NSString* value){
 *     NSArray* result;
 *     if([[value substringToIndex:4] isEqualToString:@"http"]) {
 *         result = @[value];
 *     }
 *    return result;
 * }];
 * @endcode
 */
- (void)setCacheableImageExtractorForKey:(nonnull NSString*)key
                             andCallback:(nonnull NSArray<NSString*>* _Nullable (^)(id _Nonnull value))callback;

@end