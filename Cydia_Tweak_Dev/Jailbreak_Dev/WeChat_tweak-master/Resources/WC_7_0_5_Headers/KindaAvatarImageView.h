//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKAvatarImageView.h"

@class MMHeadImageView, NSString;

@interface KindaAvatarImageView : KindaView <MMKAvatarImageView>
{
    MMHeadImageView *_m_headImageView;
    NSString *_m_userName;
}

- (void).cxx_destruct;
- (id)getUsername;
- (id)getView;
- (id)init;
@property(retain, nonatomic) MMHeadImageView *m_headImageView; // @synthesize m_headImageView=_m_headImageView;
@property(retain, nonatomic) NSString *m_userName; // @synthesize m_userName=_m_userName;
- (void)setHeight:(float)arg1;
- (void)setUsername:(id)arg1;
- (void)setWidth:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
