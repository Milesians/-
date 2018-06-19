//
//  EMMonthBillLegend.h
//  emark
//
//  Created by huangtao on 2018/6/8.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EMBillMonthInfo.h"

@interface EMMonthBillLegend : UIView

- (void)updateViewWithType:(NSString *)type billInfo:(EMBillMonthInfo *)info;

@end
