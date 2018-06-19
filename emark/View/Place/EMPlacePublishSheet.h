//
//  EMPlacePublishSheet.h
//  emark
//
//  Created by huangtao on 2018/6/2.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMPlaceInfo.h"

@protocol EMPlacePublishSheetDelegate <NSObject>

- (void)confirmWithPlaceInfo:(EMPlaceInfo *)placeInfo;

@end

@interface EMPlacePublishSheet : NSObject

@property (nonatomic, weak) id<EMPlacePublishSheetDelegate> delegate;

- (void)show;

- (void)dismiss;

@end
