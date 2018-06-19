//
//  EMPlaceInfo.h
//  emark
//
//  Created by huangtao on 2018/6/2.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import "EMAutoCoding.h"

@interface EMPlaceInfo : EMAutoCoding

@property (nonatomic, assign) NSInteger placeId;
@property (nonatomic, strong) NSString  *placeName;
@property (nonatomic, strong) NSString  *goodsName;

@end
