//
//  RTCControlLink.h
//  RTCControlLink
//
//  Created by SailorGa on 2024/5/21.
//  Copyright © 2024 SailorGa. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<RTCControlLink/RTCControlLink.h>)
#import <RTCControlLink/RTCControlLinkDefine.h>
#import <RTCControlLink/RTCControlLinkObjects.h>
#import <RTCControlLink/RTCControlLinkDelegate.h>
#else
#import "RTCControlLinkDefine.h"
#import "RTCControlLinkObjects.h"
#import "RTCControlLinkDelegate.h"
#endif

NS_ASSUME_NONNULL_BEGIN

#pragma mark - RTCControlLink
@interface RTCControlLink : NSObject

+ (instancetype)new __attribute__((unavailable("use sharedInstance instead.")));
- (instancetype)init __attribute__((unavailable("use sharedInstance instead.")));


#pragma mark - ------------ 核心基础接口 ------------
#pragma mark 创建 RTCControlLink 实例
/// 创建 RTCControlLink 实例
+ (RTCControlLink *)sharedInstance;



@end

NS_ASSUME_NONNULL_END
