//
//  EMPublishBigDayTableViewCell.h
//  emark
//
//  Created by huangtao on 2018/6/23.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EMBigDayItemInfo.h"

@interface EMPublishBigDayTableViewCell : UITableViewCell

- (void)updateCellWithItemInfo:(EMBigDayItemInfo *)info;

@end
