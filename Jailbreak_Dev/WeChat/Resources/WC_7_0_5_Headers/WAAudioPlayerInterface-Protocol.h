//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, NSURL;

@protocol WAAudioPlayerInterface <NSObject>
@property(readonly, nonatomic) NSString *audioId;
@property(readonly, nonatomic) double bufferTime;
@property(readonly, nonatomic) double curTime;
@property(readonly, nonatomic) double duration;
- (void)forcePause;
- (id)initWithAudioId:(NSString *)arg1 appId:(NSString *)arg2 delegate:(id <IWAAudioPlayerDelegate>)arg3;
- (_Bool)isIdle;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isSet;
- (_Bool)isWaiting;
- (void)pause;
- (void)play;
- (void)seekTo:(double)arg1;
- (void)setPlayerWithSrc:(NSString *)arg1 url:(NSURL *)arg2 startTime:(double)arg3 autoPlay:(_Bool)arg4 loop:(_Bool)arg5 obeyMuteSwitch:(_Bool)arg6 volume:(double)arg7 fileData:(NSData *)arg8;
@property(readonly, nonatomic) NSString *src;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) long long state;
- (void)stop;
@property(readonly, nonatomic) double volume;
@end
