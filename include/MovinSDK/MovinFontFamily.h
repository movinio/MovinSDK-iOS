//
// Created by Tim Potze on 26/09/16.
// Copyright (c) 2016 Movin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovinDataObject.h"

@interface MovinFontFamily : MovinDataObject
@property(readonly, nullable) NSString* url;

- (void) getFont:(nonnull void(^)(UIFont* _Nullable))callback;
@end