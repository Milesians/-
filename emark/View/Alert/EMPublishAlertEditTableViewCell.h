//
//  EMPublishAlertEditTableViewCell.h
//  emark
//
//  Created by huangtao on 2018/6/24.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EMAlertItemInfo.h"

@interface EMPublishAlertEditTableViewCell : UITableViewCell

@property (nonatomic, strong) UITextField *valueTextField;

- (void)updateCellWithItemInfo:(EMAlertItemInfo *)info;

@end
