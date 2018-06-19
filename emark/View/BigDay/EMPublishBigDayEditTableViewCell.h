//
//  EMPublishBigDayEditTableViewCell.h
//  emark
//
//  Created by huangtao on 2018/6/24.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EMBigDayItemInfo.h"

@interface EMPublishBigDayEditTableViewCell : UITableViewCell

@property (nonatomic, strong) UITextField *valueTextField;

- (void)updateCellWithItemInfo:(EMBigDayItemInfo *)info;

@end
