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
 * Gets the identity of this instance.
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
 * Initializes a new MovinDataObject object with the specified JSON data.
 *
 * @param jsonData The JSON data.
 * @return A MovinDataObject object with the specified JSON data.
 */
- (nonnull id)initWithJson:(nonnull NSDictionary*)jsonData;

/**
 * Initializes a new MovinDataObject object with the specified JSON data and properties.
 *
 * @param json The JSON data.
 * @param properties The properties of the instance.
 * @return A MovinDataObject object with the specified JSON data and properties.
 */
- (nonnull id)initWithJson:(nonnull NSDictionary*)json
             andProperties:(nonnull NSDictionary*)properties;

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