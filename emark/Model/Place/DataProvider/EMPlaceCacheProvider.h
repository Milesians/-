//
//  EMPlaceCacheProvider.h
//  emark
//
//  Created by huangtao on 2018/6/21.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import "EMBaseDatabaseCommonProvider.h"
#import "EMPlaceInfo.h"

@interface EMPlaceCacheProvider : EMBaseDatabaseCommonProvider

- (NSArray<EMPlaceInfo *> *)selectPlaceInfosFromStart:(NSInteger)startIndex
                                           totalCount:(NSInteger)totalCount;

- (void)cachePlaceInfo:(EMPlaceInfo *)placeInfo;

- (void)deletePlaceInfo:(EMPlaceInfo *)placeInfo;

@end
