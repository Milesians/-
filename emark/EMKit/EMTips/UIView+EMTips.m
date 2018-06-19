//
//  UIView+EMTips.m
//  emark
//
//  Created by huangtao on 2018/6/20.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import "UIView+EMTips.h"

@implementation UIView (EMTips)

- (void)showMaskLoadingTips:(NSString *)tips style:(EMLogoLoopViewStyle)style
{
    EMLogoLoopView *loopView = [[EMLogoLoopView alloc] initWithStyle:style];
    [loopView setFrame:CGRectMake(0, 0, 50, 50)];
    [EMTips showLoading:loopView message:tips inView:self interaction:NO];
    [loopView startAnimating];
}


- (void)showMultiLineMessage:(NSString *)message
{
    [EMTips showTitle:nil message:message inView:self duration:2 complete:nil];
}


- (void)hideManualTips
{
    EMTipsView *currTips = [EMTips sharedTips].manualTipsView;
    if ([currTips currentSuperview] == self) {
        [EMTips hideTips];
    }
}

@end
