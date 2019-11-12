//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

#import "BrandTimelineBaseHeaderViewDelegate-Protocol.h"

@class BrandTimelineBaseHeaderView, BrandTimelineBaseViewModel, NSString, UIView;
@protocol BrandTimelineBaseCellViewDelegate;

@interface BrandTimelineBaseCellView : MMTableViewCell <BrandTimelineBaseHeaderViewDelegate>
{
    UIView *_containerView;
    BrandTimelineBaseHeaderView *_headerView;
    BrandTimelineBaseViewModel *_viewModel;
    id <BrandTimelineBaseCellViewDelegate> _delegate;
}

@property(nonatomic) __weak id <BrandTimelineBaseCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BrandTimelineBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) BrandTimelineBaseHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)onFavorite:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onDebug:(id)arg1;
- (id)debugMenuItem;
- (id)favoriteMenuItem;
- (id)forwardMenuItem;
- (void)onRemoveContact;
- (void)onClickHeaderRemoveContact;
- (void)onClickHeaderProfile;
- (void)onClickHeaderUnTopContact;
- (void)onClickHeaderTopContact;
- (void)onClickContact:(id)arg1;
- (id)getWebViewController:(id)arg1 url:(id)arg2 forPeek:(_Bool)arg3;
- (void)ShowReader:(id)arg1;
- (void)jumpWeappOpWrap:(id)arg1;
- (_Bool)shouldGoToEmoticonDetail:(id)arg1;
- (void)openReaderWrap:(id)arg1;
- (void)openMessageWrap:(id)arg1;
- (void)onEnterWebView:(id)arg1 withContact:(id)arg2;
- (void)openBrandContactHistory:(id)arg1;
- (void)openBrandContactSession:(id)arg1;
- (void)openUrlWithBizClientID:(id)arg1;
- (void)updateTimeLabel;
- (void)initHeader;
- (void)initContainerView;
- (_Bool)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)updateViewModel:(id)arg1;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
