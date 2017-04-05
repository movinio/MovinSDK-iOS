//
// MovinScaledPOIUrl.h
// MovinSDK
//
// Copyright © 2017 Movin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovinDataObject.h"

/**
 * Represents an URL of a POI image for a specific screen scale.
 */
@interface MovinScaledPOIUrl : MovinDataObject
/**
 * Gets the scale of the POI image which can be found at the URL.
 */
@property (readonly)double scale;
/**
 * Gets the URL of of the POI image.
 */
@property (readonly)NSString* url;

/**
 * Gets the image this MovinScaledPOIUrl represents.
 *
 * @param callback The callback to invoke once the image has been loaded.
 */
- (void)getImage:(void (^)(UIImage*, NSError*))callback;
@end