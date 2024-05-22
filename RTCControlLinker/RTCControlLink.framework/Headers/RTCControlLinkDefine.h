//
//  RTCControlLinkDefine.h
//  RTCControlLink
//
//  Created by SailorGa on 2024/5/21.
//  Copyright © 2024 SailorGa. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - 设备类型
/**
 设备类型

 - RTCLTerminalTypeUnknown: 未知设备
 - RTCLTerminalTypeWindows: Windows
 - RTCLTerminalTypeAndroid: Android
 - RTCLTerminalTypeiOS: iOS
 - RTCLTerminalTypeLinux: Linux
 - RTCLTerminalTypeMacOS: MacOS
 - RTCLTerminalTypeWebRTC: WebRTC
 - RTCLTerminalTypeWechat: 微信小程序
*/
typedef enum : NSInteger {
    
    RTCLTerminalTypeUnknown = 0,
    RTCLTerminalTypeWindows = 1,
    RTCLTerminalTypeAndroid = 2,
    RTCLTerminalTypeiOS = 3,
    RTCLTerminalTypeLinux = 4,
    RTCLTerminalTypeMacOS = 5,
    RTCLTerminalTypeWebRTC = 6,
    RTCLTerminalTypeWechat = 7
} RTCLTerminalType;

NS_ASSUME_NONNULL_END
