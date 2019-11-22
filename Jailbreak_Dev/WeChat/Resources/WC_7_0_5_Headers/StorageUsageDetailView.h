//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMUILabel, StorageUsageDetailModel, UIActivityIndicatorView, UIButton;

@interface StorageUsageDetailView : UIView
{
    MMUILabel *m_titleLabel;
    MMUILabel *m_sizeLabel;
    MMUILabel *m_subTitleLabel;
    UIButton *m_actionButton;
    UIActivityIndicatorView *m_loadingView;
    StorageUsageDetailModel *m_model;
    id <StorageUsageDetailViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StorageUsageDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initActionButton;
- (void)initLoadingView;
- (void)initSizeLabel;
- (void)initSubTitleLabel;
- (void)initSubview;
- (void)initTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layout;
- (void)layoutSubviews;
@property(retain, nonatomic) StorageUsageDetailModel *model; // @synthesize model=m_model;
- (void)onClearCacheButtonClicked:(id)arg1;
- (void)onManageChatLogButtonClicked:(id)arg1;
- (void)showLoading;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateSizeAfterCleaning:(unsigned long long)arg1;

@end
