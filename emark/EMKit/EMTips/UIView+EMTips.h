//
//  UIView+EMTips.h
//  emark
//
//  Created by huangtao on 2018/6/20.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EMLogoLoopView.h"

@interface UIView (EMTips)

/**
 *  带文字的loading，黑底，不能穿透
 *
 */
- (void)showMaskLoadingTips:(NSString *)tips style:(EMLogoLoopViewStyle)style;

- (void)showMultiLineMessage:(NSString *)message;

- (void)hideManualTips;

@end
