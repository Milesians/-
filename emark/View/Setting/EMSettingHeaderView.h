//
//  EMSettingHeaderView.h
//  emark
//
//  Created by huangtao on 2018/6/24.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EMSettingHeaderViewDelegate <NSObject>

- (void)lookBigImage;

@end

@interface EMSettingHeaderView : UITableViewHeaderFooterView

@property (nonatomic, weak) id<EMSettingHeaderViewDelegate> delegate;

- (void)updateViewWithImage:(UIImage *)image;

@end
