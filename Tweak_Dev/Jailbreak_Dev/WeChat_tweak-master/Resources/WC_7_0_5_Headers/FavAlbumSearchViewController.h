//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavBaseSearchViewController.h"

#import "FavFullScreenImageViewControllerDelegate.h"
#import "MsgFastBrowseViewDelegate.h"

@class MsgFastBrowseView, NSMutableArray, NSString;

@interface FavAlbumSearchViewController : FavBaseSearchViewController <MsgFastBrowseViewDelegate, FavFullScreenImageViewControllerDelegate>
{
    _Bool _bMultiSelecting;
    MsgFastBrowseView *_msgFastBrowseView;
    NSMutableArray *_arrImgInfo;
    double _browseTableViewHeight;
}

- (void).cxx_destruct;
- (void)OnForwardDone;
@property(retain, nonatomic) NSMutableArray *arrImgInfo; // @synthesize arrImgInfo=_arrImgInfo;
@property(nonatomic) _Bool bMultiSelecting; // @synthesize bMultiSelecting=_bMultiSelecting;
@property(nonatomic) double browseTableViewHeight; // @synthesize browseTableViewHeight=_browseTableViewHeight;
- (void)deleteData:(id)arg1;
- (double)getContentViewY;
- (void)initFastBrowserView;
- (void)initNavigationBar;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
@property(retain, nonatomic) MsgFastBrowseView *msgFastBrowseView; // @synthesize msgFastBrowseView=_msgFastBrowseView;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (_Bool)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (void)onForwardData;
- (void)onMultiSelect;
- (void)onMultiSelectDone;
- (void)onReloadData;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)processSearchResultDone;
- (void)setImageTableViewBottomInset:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
