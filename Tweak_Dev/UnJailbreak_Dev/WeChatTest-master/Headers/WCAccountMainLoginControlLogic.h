//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "WCAccountMainLoginViewControllerDelegate-Protocol.h"
#import "WCAccountManualAuthControlLogicDelegate-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"

@class NSString, WCAccountManualAuthControlLogic;

@interface WCAccountMainLoginControlLogic : WCAccountBaseControlLogic <WCAccountManualAuthControlLogicDelegate, WCAccountMainLoginViewControllerDelegate, WCBaseControlMgrExt>
{
    WCAccountBaseControlLogic *m_subFBLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    unsigned int m_uiCurrentLoginType;
}

- (void).cxx_destruct;
- (void)onMainLoginUseBothDevice;
- (void)onMainLoginFacebookConnect;
- (void)onMainLoginProblem;
- (void)onMainLoginGoToFreeze;
- (void)onMainLoginGoToHelpCenter;
- (void)onMainLoginGotoSecurityCenter;
- (void)onMainLoginBack;
- (void)onMainLoginUserName:(id)arg1 Pwd:(id)arg2;
- (void)onMainLoginNext:(id)arg1 phoneNumber:(id)arg2;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)loginAccount:(_Bool)arg1 data:(id)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onGoToSecurityCenter:(unsigned int)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)pause;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
