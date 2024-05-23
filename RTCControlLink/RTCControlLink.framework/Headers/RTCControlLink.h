//
//  RTCControlLink.h
//  RTCControlLink
//
//  Created by SailorGa on 2024/5/21.
//  Copyright © 2024 SailorGa. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<RTCControlLink/RTCControlLink.h>)
#import <RTCControlLink/RTCControlLinkDelegate.h>
#else
#import "RTCControlLinkDelegate.h"
#endif

NS_ASSUME_NONNULL_BEGIN

#pragma mark - 通用集控引擎
@interface RTCControlLink : NSObject

+ (instancetype)new __attribute__((unavailable("use sharedInstance instead.")));
- (instancetype)init __attribute__((unavailable("use sharedInstance instead.")));


#pragma mark - ------------ 核心基础接口 ------------
#pragma mark 创建集控引擎实例
/// 创建集控引擎实例
+ (RTCControlLink *)sharedInstance;

#pragma mark 集控引擎版本
///  集控引擎版本
- (NSString *)version;

#pragma mark 初始化集控引擎
/// 初始化集控引擎
/// @param delegate 代理回调
- (BOOL)initializeWithDelegate:(nullable id <RTCControlLinkDelegate>)delegate;

#pragma mark 销毁集控引擎实例
/// 销毁集控引擎实例
- (void)destroyInstance;

@end

NS_ASSUME_NONNULL_END
