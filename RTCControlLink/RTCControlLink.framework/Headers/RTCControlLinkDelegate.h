//
//  RTCControlLinkDelegate.h
//  RTCControlLink
//
//  Created by SailorGa on 2024/5/21.
//  Copyright © 2024 SailorGa. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class RTCControlLink;

#pragma mark - 通用集控引擎事件回调
@protocol RTCControlLinkDelegate <NSObject>
#pragma mark 可选实现代理方法
@optional

#pragma mark - ----- Core Delegate Methods -----
#pragma mark 应用更新通知
/// 应用更新通知
/// @param controlLink 集控实例
/// @param downloadUrl 下载地址
- (void)controlLink:(RTCControlLink *)controlLink onInstallApplication:(NSString *)downloadUrl;

#pragma mark 切换服务器通知
/// 切换服务器通知
/// @param controlLink 集控实例
/// @param serverHost 服务器地址
- (void)controlLink:(RTCControlLink *)controlLink onChangeServerHost:(NSString *)serverHost;

#pragma mark 用户登录通知
/// 用户登录通知
/// @param controlLink 集控实例
- (void)controlLinkOnUserLogin:(RTCControlLink *)controlLink;

#pragma mark 用户退出通知
/// 用户退出通知
/// @param controlLink 集控实例
- (void)controlLinkOnUserLogout:(RTCControlLink *)controlLink;

#pragma mark 切换服务线路通知
/// 切换服务线路通知
/// @param controlLink 集控实例
/// @param lineId 服务标识
- (void)controlLink:(RTCControlLink *)controlLink onChangeServerLine:(NSString *)lineId;

#pragma mark 切换企业通知
/// 切换企业通知
/// @param controlLink 集控实例
/// @param corporationId 企业标识
- (void)controlLink:(RTCControlLink *)controlLink onChangeCorporation:(NSString *)corporationId;

#pragma mark 加入会议通知
/// 加入会议通知
/// @param controlLink 集控实例
/// @param roomNo 会议号码
/// @param cameraState 摄像头状态
/// @param microphoneState 麦克风状态
/// @param speakerState 扬声器状态
/// @param webinarRole 研讨会角色
- (void)controlLink:(RTCControlLink *)controlLink onEnterRoomNo:(NSString *)roomNo cameraState:(BOOL)cameraState microphoneState:(BOOL)microphoneState speakerState:(BOOL)speakerState webinarRole:(NSInteger)webinarRole;

#pragma mark 离开会议通知
/// 离开会议通知
/// @param controlLink 集控实例
- (void)controlLinkOnLeaveRoom:(RTCControlLink *)controlLink;

#pragma mark 变更语音激励状态通知
/// 变更语音激励状态通知
/// @param controlLink 集控实例
/// @param enable 启用状态
- (void)controlLink:(RTCControlLink *)controlLink onChangeAudioActiveMode:(BOOL)enable;

#pragma mark 变更语音模式状态通知
/// 变更语音模式状态通知
/// @param controlLink 集控实例
/// @param enable 启用状态
- (void)controlLink:(RTCControlLink *)controlLink onChangeAudioOnlyMode:(BOOL)enable;

#pragma mark 变更摄像头状态通知
/// 变更摄像头状态通知
/// @param controlLink 集控实例
/// @param cameraState 摄像头状态
- (void)controlLink:(RTCControlLink *)controlLink onChangeCameraState:(BOOL)cameraState;

#pragma mark 变更麦克风状态通知
/// 变更麦克风状态通知
/// @param controlLink 集控实例
/// @param microphoneState 麦克风状态
- (void)controlLink:(RTCControlLink *)controlLink onChangeMicrophoneState:(BOOL)microphoneState;

#pragma mark 变更扬声器状态通知
/// 变更扬声器状态通知
/// @param controlLink 集控实例
/// @param speakerState 扬声器状态
- (void)controlLink:(RTCControlLink *)controlLink onChangeSpeakerState:(BOOL)speakerState;

@end

NS_ASSUME_NONNULL_END
