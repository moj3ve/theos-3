//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TemplateScheduleOPWrap : NSObject
{
    _Bool _showAll;
    unsigned int _remindSubType;
    unsigned int _favID;
    unsigned int _favLocalID;
    NSString *_username;
    long long _mesSvrID;
    NSString *_nickname;
    NSString *_headimg;
    NSString *_content;
    NSString *_contentDesc;
    NSString *_time;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *contentDesc; // @synthesize contentDesc=_contentDesc;
@property(nonatomic) unsigned int favID; // @synthesize favID=_favID;
@property(nonatomic) unsigned int favLocalID; // @synthesize favLocalID=_favLocalID;
@property(retain, nonatomic) NSString *headimg; // @synthesize headimg=_headimg;
@property(nonatomic) long long mesSvrID; // @synthesize mesSvrID=_mesSvrID;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned int remindSubType; // @synthesize remindSubType=_remindSubType;
@property(nonatomic) _Bool showAll; // @synthesize showAll=_showAll;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end
