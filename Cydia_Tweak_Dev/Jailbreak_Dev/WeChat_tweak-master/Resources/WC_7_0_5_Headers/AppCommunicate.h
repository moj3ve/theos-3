//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AppCommunicate : NSObject
{
}

+ (id)appCommunicateDataForAppID:(id)arg1;
+ (id)appCommunicateDataForAppIDForiOS7Plus:(id)arg1;
+ (id)fileDataForAppID:(id)arg1;
+ (id)getDataPasteboard;
+ (id)getDataPasteboardForiOS7Plus;
+ (id)getDataPasteboardName;
+ (id)getFilePasteboard;
+ (id)getFilePasteboardName;
+ (id)propertyListForAllApp;
+ (id)propertyListForAllAppForiOS7Plus;
+ (id)propertyListForAppID:(id)arg1;
+ (id)propertyListForAppIDForiOS7Plus:(id)arg1;
+ (_Bool)setAppCommunicateData:(id)arg1 forAppID:(id)arg2;
+ (_Bool)setAppCommunicateDataForiOS7Plus:(id)arg1 forAppID:(id)arg2;
+ (_Bool)setFileData:(id)arg1 forAppID:(id)arg2;
+ (_Bool)setPropertyList:(id)arg1 forAppID:(id)arg2;
+ (_Bool)setPropertyListForiOS7Plus:(id)arg1 forAppID:(id)arg2;
- (id)init;

@end
