//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CaptureVideoInfo, NSString;

@protocol IMessageWrapExt <NSObject>

@optional
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
+ (void)CreateExtendInfoWithUserName:(NSString *)arg1 retExtendInfo:(id *)arg2 retIsContinueDispatch:(_Bool *)arg3;
+ (void)CreateVideoMsg:(NSString *)arg1 ToUsr:(NSString *)arg2 VideoInfo:(CaptureVideoInfo *)arg3 MsgType:(unsigned int)arg4 retMessageWrap:(id *)arg5;
@end
