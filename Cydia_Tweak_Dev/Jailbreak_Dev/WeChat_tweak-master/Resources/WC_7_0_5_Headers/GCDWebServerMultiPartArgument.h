//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCDWebServerMultiPart.h"

@class NSData, NSString;

@interface GCDWebServerMultiPartArgument : GCDWebServerMultiPart
{
    NSData *_data;
    NSString *_string;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)description;
- (id)initWithControlName:(id)arg1 contentType:(id)arg2 data:(id)arg3;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;

@end
