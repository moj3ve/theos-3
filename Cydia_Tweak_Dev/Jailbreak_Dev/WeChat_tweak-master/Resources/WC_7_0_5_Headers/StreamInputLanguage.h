//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface StreamInputLanguage : NSObject
{
    unsigned int _languageType;
    NSString *_languageName;
    NSString *_voicetransIcon;
    NSString *_voicetransIconEnglish;
}

- (void).cxx_destruct;
- (id)initWithLanguageType:(unsigned int)arg1 LanguageName:(id)arg2;
- (id)initWithLanguageType:(unsigned int)arg1 LanguageName:(id)arg2 transIcon:(id)arg3 transIconEnglish:(id)arg4;
@property(retain, nonatomic) NSString *languageName; // @synthesize languageName=_languageName;
@property(nonatomic) unsigned int languageType; // @synthesize languageType=_languageType;
@property(retain, nonatomic) NSString *voicetransIcon; // @synthesize voicetransIcon=_voicetransIcon;
@property(retain, nonatomic) NSString *voicetransIconEnglish; // @synthesize voicetransIconEnglish=_voicetransIconEnglish;

@end
