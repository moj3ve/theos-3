//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class DotLoadingView, MMUILabel, MMWebImageView, NSString, UIView, WAContact, WAWebViewController;

@interface WANavLoadingLayer : MMUIView
{
    NSString *m_appid;
    NSString *m_userName;
    NSString *m_navTitle;
    WAContact *m_contact;
    UIView *m_fakeNavBar;
    MMWebImageView *m_logoView;
    MMUILabel *m_titleLabel;
    DotLoadingView *m_loadingView;
    NSString *m_weappColorStr;
    int m_weappNavMode;
    _Bool m_isBlackStatusBar;
    NSString *m_weappBackgroundColorStr;
    _Bool m_isStartAnimate;
    _Bool _isLoading;
    WAWebViewController *_parentWebview;
}

- (void).cxx_destruct;
- (void)dismissWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)initContactTitle;
- (void)initLoadingView;
- (void)initLogoView;
- (void)initView;
- (id)initWithAppId:(id)arg1 userName:(id)arg2 navTitle:(id)arg3 parentWebView:(id)arg4;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak WAWebViewController *parentWebview; // @synthesize parentWebview=_parentWebview;
- (void)updateContactTitleWithNavMode:(int)arg1;
- (void)updateViewBaseOnWeAppViewConfig;

@end
