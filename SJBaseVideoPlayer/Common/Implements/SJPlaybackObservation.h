//
//  SJPlaybackObservation.h
//  Pods
//
//  Created by 畅三江 on 2019/8/27.
//

#import <Foundation/Foundation.h>
@class SJBaseVideoPlayer;

NS_ASSUME_NONNULL_BEGIN

@interface SJPlaybackObservation : NSObject
- (instancetype)initWithPlayer:(__kindof SJBaseVideoPlayer *)player;

///
/// 播放状态改变后的回调
///
///     该block集合里以下3种回调
///     1.  timeControlStatusDidChangeExeBlock(播放控制改变的时候)
///     2.  assetStatusDidChangeExeBlock(资源状态改变的时候)
///     3.  didPlayToEndTimeExeBlock(播放完毕的时候)
///
@property (nonatomic, copy, nullable) void(^playbackStatusDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 资源状态改变的回调
///
@property (nonatomic, copy, nullable) void(^assetStatusDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 播放控制改变的回调
///
@property (nonatomic, copy, nullable) void(^timeControlStatusDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 播放完毕的回调
///
@property (nonatomic, copy, nullable) void(^didPlayToEndTimeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 调用了重播的回调
///
@property (nonatomic, copy, nullable) void(^didReplayExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 切换清晰度状态改变的回调
///
@property (nonatomic, copy, nullable) void(^definitionSwitchStatusDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 当前时间改变的回调
///
@property (nonatomic, copy, nullable) void(^currentTimeDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 播放时长改变的回调
///
@property (nonatomic, copy, nullable) void(^durationDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 缓冲时长改变的回调
///
@property (nonatomic, copy, nullable) void(^playableDurationDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 获取到 video presentation size 时的回调
///
@property (nonatomic, copy, nullable) void(^presentationSizeDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 获取到文件类型的回调
///
@property (nonatomic, copy, nullable) void(^playbackTypeDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 锁屏状态改变的回调
///
@property (nonatomic, copy, nullable) void(^screenLockStateDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 播放器的静音状态改变的回调
///
@property (nonatomic, copy, nullable) void(^mutedDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 播放器的声音改变的回调
///
@property (nonatomic, copy, nullable) void(^playerVolumeDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

///
/// 调速的回调
///
@property (nonatomic, copy, nullable) void(^rateDidChangeExeBlock)(__kindof SJBaseVideoPlayer *player);

@property (nonatomic, weak, readonly, nullable) __kindof SJBaseVideoPlayer *player;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
@end
NS_ASSUME_NONNULL_END
