//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QMConnectionItemDelegate-Protocol.h"

@class NSString, QMObsoleteConfigDataManager;

@interface QMConfigDataManager : NSObject <QMConnectionItemDelegate>
{
    _Bool _hasCheckedUpdate;
    QMObsoleteConfigDataManager *_obsCfgMgr;
}

+ (id)sharedManager;
@property(nonatomic) _Bool hasCheckedUpdate; // @synthesize hasCheckedUpdate=_hasCheckedUpdate;
@property(retain, nonatomic) QMObsoleteConfigDataManager *obsCfgMgr; // @synthesize obsCfgMgr=_obsCfgMgr;
- (void).cxx_destruct;
- (void)connectionItem:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionItemDidFinish:(id)arg1;
- (void)launchResourceUpdate:(struct Package)arg1;
- (void)saveDataToFile:(id)arg1 filePath:(id)arg2 key:(id)arg3;
- (int)parsePacketData:(id)arg1 package:(struct Package *)arg2;
- (void)checkConfigUpdate;
- (id)mapIconKey;
- (id)poiIconKey;
- (id)mapcfgKey;
- (id)sdkVersion;
- (id)apiKey;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
