//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GetBankCardInfoResponse, WCPayBaseNetworkingError;

@protocol WCPayGetBankCardInfoCgiDelegate <NSObject>
- (void)onWCPayGetBankCardInfoCgiNetworkError:(WCPayBaseNetworkingError *)arg1;
- (void)onWCPayGetBankCardInfoCgiResp:(GetBankCardInfoResponse *)arg1;
@end

