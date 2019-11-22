//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TXSVFrame : NSObject
{
    _Bool _mirror;
    _Bool _renderMirror;
    int _texture;
    struct opaqueCMSampleBuffer *_sampleBuffer;
    long long _frameIndex;
    long long _angle;
    long long _gravityAngel;
    long long _renderRotation;
    unsigned long long _timeStamp;
    struct CGSize _encodeSize;
    struct CGSize _textureSize;
    struct CGRect _cropRect;
}

@property(nonatomic) long long angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) struct CGSize encodeSize; // @synthesize encodeSize=_encodeSize;
@property(nonatomic) long long frameIndex; // @synthesize frameIndex=_frameIndex;
@property(nonatomic) long long gravityAngel; // @synthesize gravityAngel=_gravityAngel;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) _Bool renderMirror; // @synthesize renderMirror=_renderMirror;
@property(nonatomic) long long renderRotation; // @synthesize renderRotation=_renderRotation;
@property(nonatomic) struct opaqueCMSampleBuffer *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
@property(nonatomic) int texture; // @synthesize texture=_texture;
@property(nonatomic) struct CGSize textureSize; // @synthesize textureSize=_textureSize;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;

@end
