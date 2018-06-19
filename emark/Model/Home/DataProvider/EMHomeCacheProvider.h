//
//  EMHomeCacheProvider.h
//  emark
//
//  Created by huangtao on 2018/6/24.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import "EMBaseLRUCacheProvider.h"
#import "EMHomeHeadInfo.h"
#import "EMAlertConfigInfo.h"

@interface EMHomeCacheProvider : EMBaseLRUCacheProvider

- (EMHomeHeadInfo *)queryHeadInfo;

- (void)cacheHeadInfo:(EMHomeHeadInfo *)headInfo;

- (EMAlertConfigInfo *)queryConfigInfo;

- (void)cacheConfigInfo:(EMAlertConfigInfo *)configInfo;

@end
