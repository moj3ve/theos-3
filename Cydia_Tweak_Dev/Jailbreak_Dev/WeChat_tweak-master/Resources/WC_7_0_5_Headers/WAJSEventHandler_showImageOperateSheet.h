//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "BaseScanLogicDelegate.h"
#import "WCActionSheetDelegate.h"

@class NSString, ScanQRCodeLogicController, WCActionSheetWithScanWXCode;

@interface WAJSEventHandler_showImageOperateSheet : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, BaseScanLogicDelegate>
{
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheetWithScanWXCode *m_actionSheet;
    _Bool _hasScanScreen;
    double _elementTop;
    double _elementLeft;
    double _elementWidth;
    double _elementHeight;
    NSString *_imageUrl;
    double _imageWidth;
    double _imageHeight;
    NSString *_base64DataString;
}

- (void).cxx_destruct;
- (void)PreScanQRCode:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addImgFavWithImageData:(id)arg1;
- (void)asyncGetImageData:(id)arg1 AndPerformSelector:(SEL)arg2;
@property(retain, nonatomic) NSString *base64DataString; // @synthesize base64DataString=_base64DataString;
- (void)dealloc;
@property(nonatomic) double elementHeight; // @synthesize elementHeight=_elementHeight;
@property(nonatomic) double elementLeft; // @synthesize elementLeft=_elementLeft;
@property(nonatomic) double elementTop; // @synthesize elementTop=_elementTop;
@property(nonatomic) double elementWidth; // @synthesize elementWidth=_elementWidth;
- (id)getImageData;
- (void)handleJSEvent:(id)arg1;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
- (void)onScanEnds;
- (void)saveImgWithImageData:(id)arg1;
- (void)sendMsgWithImageData:(id)arg1;
- (id)tryGetImageFromBase64Data;
- (id)tryGetLocalImage:(id)arg1;
- (void)tryScanImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
