//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class NSString, UIScreenEdgePanGestureRecognizer, WAContact;

@interface WALoadingViewController : MMUIViewController
{
    _Bool m_isBlackStatusBar;
    _Bool _isViewDidAppear;
    _Bool _isPopMyselfAfterDidAppear;
    _Bool _isCallPopMySelf;
    _Bool _isStartLoading;
    _Bool _isLoadingAnimationDone;
    UIScreenEdgePanGestureRecognizer *_panGesture;
    _Bool _isCallReturn;
    WAContact *_contact;
    id <WALoadingViewControllerDelegate> _delegate;
    id <WAMinimizeDelegate> _minimizeDelegate;
    NSString *_pagePath;
    NSString *_navTitle;
    NSString *_backColorStr;
    CDUnknownBlockType _viewDidAppearCallback;
}

- (void).cxx_destruct;
- (void)addPanGesture;
@property(copy, nonatomic) NSString *backColorStr; // @synthesize backColorStr=_backColorStr;
- (void)callOnLoadingAnimationDoneAfterViewDidAppear;
- (void)changeStatusBarToBlack:(_Bool)arg1;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (void)dealloc;
@property(nonatomic) __weak id <WALoadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissSelfAndMinimizeIfNeed;
- (void)handleScreenEdgesPanGesture:(id)arg1;
- (id)initWithContact:(id)arg1 pagePath:(id)arg2;
@property(nonatomic) _Bool isCallReturn; // @synthesize isCallReturn=_isCallReturn;
- (_Bool)isViewDidAnimate;
- (_Bool)isViewDidAppear;
- (id)loadCacheLoadingConfig:(id)arg1;
- (void)markLoadingAnimationDone;
@property(nonatomic) __weak id <WAMinimizeDelegate> minimizeDelegate; // @synthesize minimizeDelegate=_minimizeDelegate;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
- (void)onReturn;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
- (void)popMyselfAfterViewDidAppear;
- (void)popMyselfViewController;
- (void)removeMyselfInViewControllers;
- (void)removePanGesture;
- (void)setThumbImage:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType viewDidAppearCallback; // @synthesize viewDidAppearCallback=_viewDidAppearCallback;
- (void)showDownloadingProgressView;
- (void)startEnterAppAnimation;
- (void)updateLeftBarItemWithNavMode:(int)arg1;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end
