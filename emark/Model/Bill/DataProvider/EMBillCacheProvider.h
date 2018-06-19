

#import "EMBaseDatabaseCommonProvider.h"
#import "EMBillInfo.h"

@interface EMBillCacheProvider : EMBaseDatabaseCommonProvider

- (NSArray<EMBillInfo *> *)selectBillInfosBeforeDate:(NSDate *)date
                                          totalCount:(NSInteger)totalCount;

- (void)cacheBillInfo:(EMBillInfo *)BillInfo;

- (void)deleteBillInfo:(EMBillInfo *)BillInfo;


- (NSArray<EMBillInfo *> *)selectBillInfosBetween:(NSDate *)fromDate and:(NSDate *)toDate;

@end
