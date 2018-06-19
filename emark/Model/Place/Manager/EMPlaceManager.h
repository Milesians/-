//
//  EMPlaceManager.h
//  emark
//
//  Created by huangtao on 2018/6/21.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMPlaceHandler.h"

@interface EMPlaceManager : NSObject

+ (instancetype)sharedManager;

- (void)fetchPlaceInfosWithStartIndex:(NSInteger)startIndex
                            totalCount:(NSInteger)totalCount
                                result:(EMResultBlock)resultBlock;

- (void)cachePlaceInfo:(EMPlaceInfo *)placeInfo result:(void (^)(void))resultBlock;

- (void)deletePlaceInfo:(EMPlaceInfo *)placeInfo result:(void (^)(void))resultBlock;

@end
