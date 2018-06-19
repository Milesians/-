//
//  EMSettingViewController.h
//  emark
//
//  Created by huangtao on 2018/6/24.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import "UIView+EMTips.h"

typedef NS_ENUM(NSUInteger, EMSettingHeadImageType) {
    kEMSettingHeadImageTypeCamera,
    kEMSettingHeadImageTypeAlbum,
};

@interface EMSettingViewController : UIViewController

@end
