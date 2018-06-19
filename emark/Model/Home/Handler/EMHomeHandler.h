//
//  EMHomeHandler.h
//  emark
//
//  Created by huangtao on 2018/6/24.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import "EMBaseHandler.h"
#import "EMHomeCacheProvider.h"

@interface EMHomeHandler : EMBaseHandler

- (void)fetchHeadInfoWithResultBlock:(EMResultBlock)resultBlock;

- (void)cacheHeadInfo:(EMHomeHeadInfo *)headInfo;

- (void)fetchConfigInfoWithResultBlock:(EMResultBlock)resultBlock;

- (void)cacheConfigInfo:(EMAlertConfigInfo *)configInfo;

@end
