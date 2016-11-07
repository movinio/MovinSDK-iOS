//
// Created by Tim Potze on 17/10/2016.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovinDataObject.h"


@interface MovinScaledPOIUrl : MovinDataObject
/**
 * @abstract Gets the scale of the POI image which can be found at the URL.
 */
@property (readonly)double scale;
/**
 * @abstract Gets the URL of of the POI image.
 */
@property (readonly)NSString* url;

/**
 * @abstract Gets the image this MovinScaledPOIUrl represents.
 * @param callback The callback to invoke once the image has been loaded.
 */
- (void)getImage:(void (^)(UIImage*, NSError*))callback;
@end