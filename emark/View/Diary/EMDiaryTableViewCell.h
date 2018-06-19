//
//  EMDiaryTableViewCell.h
//  emark
//
//  Created by huangtao on 2018/6/21.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EMDiaryInfo.h"

@interface EMDiaryTableViewCell : UITableViewCell

- (void)updateCellWithDiaryInfo:(EMDiaryInfo *)diaryInfo;

@end
