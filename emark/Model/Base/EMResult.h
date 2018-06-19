//
//  EMResult.h
//  emark
//
//  Created by huangtao on 2018/6/24.
//  Copyright © 2018年 huangtao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMResult<__covariant ObjectType> : NSObject

@property (nonatomic, strong) ObjectType    result;
@property (nonatomic, strong) NSError       *error;
@property (nonatomic, copy)   NSString      *message;

@end


typedef void (^EMResultBlock)(EMResult *result);
