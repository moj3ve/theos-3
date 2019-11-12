//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class UIButton, WCPayPwdCtrlPanelView;

@interface WCPayPayPwdViewController : WCPayBaseViewController
{
    UIButton *m_footerButton;
    WCPayPwdCtrlPanelView *m_VerifyView;
    WCPayPwdCtrlPanelView *m_FirstView;
    WCPayPwdCtrlPanelView *m_SecondView;
    WCPayPwdCtrlPanelView *m_currentView;
    id <WCPayPayPwdViewControllerDelegate> m_delegate;
    long long _vcTag;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)becomeInputViewFirstResponse;
- (void)clearPwdInput;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)leftBarButtonClick;
- (void)onNext;
- (void)refreshViewWithData:(id)arg1;
- (void)resignInputViewFirstResponse;
- (void)setDelegate:(id)arg1;
- (void)setFooterBtnTitle:(id)arg1;
- (void)setNavigationBarTitle:(id)arg1 Stype:(unsigned long long)arg2;
- (void)setTitle:(id)arg1;
@property(nonatomic) long long vcTag; // @synthesize vcTag=_vcTag;
- (void)showSecondPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 withShowFooterButton:(_Bool)arg3;
- (void)showSetPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 fromError:(_Bool)arg3;
- (void)showSetPwdCtrlWithTitle:(id)arg1 WithTip:(id)arg2;
- (void)showVerifyPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2;
- (void)showVerifyPwdCtrlWithTitle:(id)arg1 Tip:(id)arg2 withShowFooterButton:(_Bool)arg3;
- (void)showViewWithCurrentView:(id)arg1 NextView:(id)arg2;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
