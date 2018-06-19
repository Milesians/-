
#import <Foundation/Foundation.h>

@protocol EMBaseDataProvider <NSObject>

//子类需要重写
@property (nonatomic, readonly) NSString  *name;
@property (nonatomic, readonly) NSInteger version;

@end


@interface EMBaseDataProvider : NSObject<EMBaseDataProvider>

@end
