
#import <Foundation/Foundation.h>
#import "EMBillHandler.h"

@interface EMBillManager : NSObject

+ (instancetype)sharedManager;

- (void)fetchBillInfosBeforeDate:(NSDate *)date
                      totalCount:(NSInteger)totalCount
                          result:(EMResultBlock)resultBlock;

- (void)cacheBillInfo:(EMBillInfo *)billInfo result:(void (^)(void))resultBlock;

- (void)deleteBillInfo:(EMBillInfo *)billInfo result:(void (^)(void))resultBlock;

- (void)fetchMonthBillInMonth:(NSString *)month result:(EMResultBlock)resultBlock;

@end
