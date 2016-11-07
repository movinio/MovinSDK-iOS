//
//  AnalyticsService.h
//  MovinSDK
//
//  Created by Movin Software on 16/10/15.
//  Copyright © 2015 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * @class AnalyticsService
 * @brief The analytics service which collects analytical data and sends it to the server.
 */
@interface AnalyticsService : NSObject
/**
 * @brief Gets the number of updates which still need to be sent to the server.
 */
@property(readonly) NSUInteger pendingUpdates;
/**
 * @brief Returns the shared instance of the AnalyticsService, or nil if the MovinSDK has not yet been initialized.
 */
+ (nullable AnalyticsService*)instance;
/**
 * @brief provides the AnalyticsID through the given callback. The callback will be invoked when the initialization of
 * the service has been finished. If the service has already been initialized, the callback is invoked immediately.
 * @param callback The callback to invoke once the AnalyticsService knows the analytics id.
 */
- (void)getAnalyticsIdWithCallback:(nullable void (^)(NSString* _Nullable analyticsId, NSError* _Nullable error))callback;
/**
 * @brief Sends all remaining updates to the server.
 */
-(void)flushPendingUpdates;
@end
