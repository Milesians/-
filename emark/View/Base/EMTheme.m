//
//  EMTheme.m
//  emark
//
//  Created by huangtao on 2018/6/248.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import "EMTheme.h"

@implementation EMTheme

- (instancetype)init
{
    self = [super init];
    if (self) {
        _navBarBGColor = UIColorFromHexRGB(0x38383B);
        _navTintColor = [UIColor whiteColor];
        _mainBGColor = UIColorFromHexRGB(0xEEEEF4);
        _navTitleFont = [UIFont boldSystemFontOfSize:18.0];
        _dividerColor = UIColorFromHexRGB(0xD8D9D8);
    }
    
    return self;
}

#pragma mark - Public

+ (instancetype)currentTheme
{
    static EMTheme *_theme = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _theme = [[self alloc] init];
    });
    
    return _theme;
}


UIColor * UIColorFromHexARGB(CGFloat alpha, NSInteger hexRGB)
{
    return [UIColor colorWithRed:((float)((hexRGB & 0xFF0000) >> 16))/255.0
                           green:((float)((hexRGB & 0xFF00) >> 8))/255.0
                            blue:((float)(hexRGB & 0xFF))/255.0
                           alpha:alpha];
}


UIColor * UIColorFromHexRGB(NSInteger hexRGB)
{
    return UIColorFromHexARGB(1, hexRGB);
}

@end
