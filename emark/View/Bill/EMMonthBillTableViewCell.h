//
//  EMMonthBillTableViewCell.h
//  emark
//
//  Created by huangtao on 2018/6/6.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EMBillMonthInfo.h"

@interface EMMonthBillTableViewCell : UITableViewCell

- (void)updateCellWithTitle:(NSString *)title monthInfo:(EMBillMonthInfo *)info;

@end
