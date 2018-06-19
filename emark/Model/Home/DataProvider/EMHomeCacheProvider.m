//
//  EMHomeCacheProvider.m
//  emark
//
//  Created by huangtao on 2018/6/24.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import "EMHomeCacheProvider.h"

static NSString *homeHeadInfoKey = @"homeHeadInfoKey";
static NSString *alertNotifiHasClearKey = @"alertNotifiHasClearKey";

@implementation EMHomeCacheProvider

- (EMHomeHeadInfo *)queryHeadInfo
{
    return (EMHomeHeadInfo *)[self.yyCache objectForKey:homeHeadInfoKey];
}


- (void)cacheHeadInfo:(EMHomeHeadInfo *)headInfo
{
    [self.yyCache setObject:headInfo forKey:homeHeadInfoKey];
}


- (EMAlertConfigInfo *)queryConfigInfo
{
    return (EMAlertConfigInfo *)[self.yyCache objectForKey:alertNotifiHasClearKey];
}


- (void)cacheConfigInfo:(EMAlertConfigInfo *)configInfo
{
    [self.yyCache setObject:configInfo forKey:alertNotifiHasClearKey];
}

@end
