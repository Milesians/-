//
//  EMProgressLoopView.h
//  EMTips
//
//  Created by huangtao on 17/6/20.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class EMProgressInfo;
static CGFloat defaultWidth = 38;

@interface EMProgressLoopView : UIView 

@property (nonatomic, strong) EMProgressInfo *progressInfo;

@property (nonatomic, strong) UIColor *baseTrackColor;
@property (nonatomic, strong) UIColor *progressColor;
@property (nonatomic, assign) CGFloat progress;//0~1之间的数
@property (nonatomic, assign) CGFloat progressWidth;
@property (nonatomic, assign) CGFloat duration;
@property (nonatomic, strong) UIImage *defaultImage;

+ (instancetype)defaultProgressLoopView;


@end
