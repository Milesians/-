//
//  EMSettingActionSheet.h
//  emark
//
//  Created by huangtao on 2018/6/20.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol EMSettingActionSheetDelegate <NSObject>

- (void)takePhoto;
- (void)searchFromAlbum;

@end

@interface EMSettingActionSheet : NSObject

@property (nonatomic, weak) id<EMSettingActionSheetDelegate> delegate;

- (void)show;

@end
