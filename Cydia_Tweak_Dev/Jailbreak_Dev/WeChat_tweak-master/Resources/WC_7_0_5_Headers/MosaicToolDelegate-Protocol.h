//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@protocol MosaicToolDelegate <NSObject>
@property(nonatomic) _Bool _isNeedRedrawMosaicImage;
@property(retain, nonatomic) id _mosaicImage;
- (UIColor *)colorOfPoint:(struct CGPoint)arg1;
- (void)renderLayerInContext;
@end
