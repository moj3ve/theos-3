//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonCustomAddLogicControllerDelegate.h"
#import "EmoticonDescMgrExt.h"
#import "EmoticonStoreCellDelegate.h"
#import "EmoticonStoreItemExt.h"
#import "IEmoticonDownloadExt.h"
#import "IMsgRevokeExt.h"
#import "IStoreEmotionDesignerInfoMgrExt.h"
#import "MMImgageBrowseViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WCActionSheetDelegate.h"

@class CEmoticonWrap, CMessageWrap, EmoticonCustomAddLogicController, EmoticonStoreItem, EmotionStoreDetailDesignerContainerView, MMImageBrowseView, MMStoreEmotionAllCell, NSMutableArray, NSString, UIButton, UILabel, UIView, WCActionSheet;

@interface MMEmotionMsgBrowseViewController : MMUIViewController <EmoticonStoreCellDelegate, UIGestureRecognizerDelegate, IStoreEmotionDesignerInfoMgrExt, EmoticonDescMgrExt, MMImgageBrowseViewDelegate, EmoticonCustomAddLogicControllerDelegate, WCActionSheetDelegate, EmoticonStoreItemExt, IEmoticonDownloadExt, IMsgRevokeExt>
{
    MMImageBrowseView *m_imageView;
    CMessageWrap *m_wrapMsg;
    CEmoticonWrap *m_wrapEmoticon;
    EmoticonStoreItem *m_item;
    WCActionSheet *m_actionSheet;
    UIView *_containerView;
    UILabel *m_descLabel;
    UIButton *m_fromSourceButton;
    MMStoreEmotionAllCell *_emotionCell;
    UIView *_lineView;
    EmotionStoreDetailDesignerContainerView *m_designerContainerView;
    EmoticonCustomAddLogicController *m_emoticonAddLogicController;
    NSMutableArray *m_operationTitles;
    long long _emotionScene;
    NSString *_sessionID;
}

- (void).cxx_destruct;
- (void)OnEmoticonDownload:(unsigned int)arg1 withMsgWrap:(id)arg2;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnShowAlertWithIKnow:(id)arg1;
- (void)OnShowAlertWithOK:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)OnStopLoading;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickDesignerCell;
- (void)configOperationTitles;
- (void)dealloc;
@property(nonatomic) long long emotionScene; // @synthesize emotionScene=_emotionScene;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)initDesignerContainerView;
- (void)initFromSourceButton;
- (void)initImageViewWithFrame:(struct CGRect)arg1;
- (void)initRightBarButtonItem;
- (id)initWithMsgWrap:(id)arg1;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
@property(retain, nonatomic) EmoticonStoreItem *m_item; // @synthesize m_item;
- (void)onClickEmotionCell:(id)arg1;
- (void)onDesignerInfoUpdated:(id)arg1;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 downloadFlag:(unsigned int)arg2 pid:(id)arg3;
- (void)onGetEmotionActivityForActivityId:(id)arg1 md5:(id)arg2 activity:(id)arg3;
- (void)onImageBrowseViewDidZoom;
- (void)onLongPressRightNavigationButton:(id)arg1;
- (void)onOperate:(id)arg1;
- (void)onSaveEmoticon:(id)arg1;
- (void)onSingleTapImageBrowseView;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)setFullScreen:(_Bool)arg1;
- (void)setupEmotionCell;
- (void)setupImageView;
- (void)setupStoreEmotionView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateEmoticonDescLabel;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
