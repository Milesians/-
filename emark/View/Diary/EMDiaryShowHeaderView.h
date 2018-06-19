//
//  EMDiaryShowHeaderView.h
//  emark
//
//  Created by huangtao on 2018/6/23.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EMDiaryInfo.h"

@interface EMDiaryShowHeaderView : UITableViewHeaderFooterView

- (void)updateViewWithDiaryInfo:(EMDiaryInfo *)diaryInfo;

@end
