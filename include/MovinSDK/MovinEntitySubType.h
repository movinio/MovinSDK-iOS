//
// Created by Tim Potze on 03/03/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinDataObject.h"

@class GeoLatLng;
@class MovinImagePoint;


@class UIImage;
@class MovinScaledPOIUrl;

/**
 * @class MovinEntitySubType
 * @brief Represents a (sub-)type of an entity.
 */
@interface MovinEntitySubType : MovinDataObject
/**
 * @brief Gets the base type of this sub type.
 */
@property(readonly, nonnull) NSString* baseType;
/**
 * @brief Gets the description of this sub type.
 */
@property(readonly, nullable) NSString* descriptionText;
/**
 * @brief Gets the point of interest image URL of this sub type.
 */
@property(readonly, nullable) NSString* poiUrl;
/**
 * @brief Gets the anchor location of the point of interest image specified in poiUrl. The x and y values range between 0.0 and 1.0.
 */
@property(readonly, nullable) MovinImagePoint* poiAnchor;
/**
 * @brief Gets the size of the point of interest image specified in poiUrl.
 */
@property(readonly, nullable) MovinImagePoint* poiSize;
/**
 * @brief Gets a value indicating whether this sub type has scaled POI values.
 */
@property(readonly) BOOL hasScaledPois;
/**
 * @brief Gets the URLs of the scaled POI images.
 */
@property(readonly, nullable) NSArray<MovinScaledPOIUrl*>* scaledPoiUrls;

/**
 * @brief Initializes a new MovinEntitySubType object with the specified name and base type name.
 * @param name The name of the sub type.
 * @param baseType The name of the base type.
 * @return A MovinEntitySubType object with the specified name and base type.
 */
- (nonnull id)initWithName:(nullable NSString*)name
               andBaseType:(nullable NSString*)baseType;

/**
 * @brief Returns the POI image of this sub type.
 * @param callback The callback which will be invoked once the POI image has been downloaded.
 */
- (void)getPoiImage:(nonnull void (^)(UIImage* _Nullable image, NSError* _Nullable error))callback;
@end