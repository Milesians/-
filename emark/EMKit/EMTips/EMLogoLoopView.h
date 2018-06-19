//
//  EMLogoLoopView.h
//  emark
//
//  Created by huangtao on 2018/6/20.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, EMLogoLoopViewStyle) {
    kLogoLoopGray,
    kLogoLoopWhite,
};

@interface EMLogoLoopView : UIView

- (instancetype)initWithStyle:(EMLogoLoopViewStyle)style;

- (void)startAnimating;

@end
