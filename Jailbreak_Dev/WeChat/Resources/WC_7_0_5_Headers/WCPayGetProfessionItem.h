//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseInfoItem.h"

#import "WCPayGetProfessionViewControllerDelegate.h"

@class NSArray, NSString, UILabel, WCPayProfession;

@interface WCPayGetProfessionItem : WCBaseInfoItem <WCPayGetProfessionViewControllerDelegate>
{
    id <WCPayGetProfessionItemDelegate> _delegate;
    NSArray *_professions;
    UILabel *_professionLabel;
    WCPayProfession *_profession;
}

- (void).cxx_destruct;
- (void)becomeFirstResponder;
@property(nonatomic) __weak id <WCPayGetProfessionItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getProfessionViewController:(id)arg1 didSelectedProfession:(id)arg2;
- (id)getValue;
- (void)initView:(struct CGRect)arg1;
@property(retain, nonatomic) WCPayProfession *profession; // @synthesize profession=_profession;
@property(retain, nonatomic) UILabel *professionLabel; // @synthesize professionLabel=_professionLabel;
- (id)professionString;
@property(retain, nonatomic) NSArray *professions; // @synthesize professions=_professions;
- (void)updateProfession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
