//
// MovinEntitySubType.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MovinDataObject.h"

@class GeoLatLng;
@class MovinImagePoint;

@class UIImage;
@class MovinScaledPOIUrl;

/**
 * Represents a (sub-)type of an entity.
 */
@interface MovinEntitySubType : MovinDataObject

/**
 * Gets the base type of this sub type.
 */
@property(readonly, nonnull) NSString* baseType;
/**
 * Gets the description of this sub type.
 */
@property(readonly, nullable) NSString* descriptionText;
/**
 * Gets the point of interest image URL of this sub type.
 */
@property(readonly, nullable) NSString* poiUrl;
/**
 * Gets the anchor location of the point of interest image specified in poiUrl. The x and y values range between 0.0 and 1.0.
 */
@property(readonly, nullable) MovinImagePoint* poiAnchor;
/**
 * Gets the size of the point of interest image specified in poiUrl.
 */
@property(readonly, nullable) MovinImagePoint* poiSize;
/**
 * Gets a value indicating whether this sub type has scaled POI values.
 */
@property(readonly) BOOL hasScaledPois;
/**
 * Gets the URLs of the scaled POI images.
 */
@property(readonly, nullable) NSArray<MovinScaledPOIUrl*>* scaledPoiUrls;

/**
 * Returns the POI image of this sub type.
 *
 * @param callback The callback which will be invoked once the POI image has been downloaded.
 */
- (void)getPoiImage:(nonnull void (^)(UIImage* _Nullable image, NSError* _Nullable error))callback;
@end