//
//  EMPlaceHolderTextView.h
//  emark
//
//  Created by huangtao on 2018/6/21.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EMPlaceHolderTextView : UITextView

@property(nonatomic, copy) NSString *placeholder;

- (instancetype)initWithFrame:(CGRect)frame placeHolderPosition:(CGPoint)placeHolderPosition;

@end
