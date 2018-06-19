//
//  UIImage+Additions.m
//  emark
//
//  Created by huangtao on 2018/6/240.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import "UIImage+Additions.h"

@implementation UIImage (Additions)

- (UIImage *)aspectResizeWithWidth:(CGFloat)width
{
    CGFloat height = self.size.height * width / self.size.width;
    UIGraphicsBeginImageContext(CGSizeMake(width, height));
    [self drawInRect:CGRectMake(0, 0, width, height)];
    UIImage *scaledImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    
    return scaledImage;
}

@end
