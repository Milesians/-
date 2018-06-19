

#import "EMBaseDatabaseCommonProvider.h"
#import "EMBigDayInfo.h"

@interface EMBigDayCacheProvider : EMBaseDatabaseCommonProvider

- (NSArray<EMBigDayInfo *> *)selectBigDayInfosFromStart:(NSInteger)startIndex
                                             totalCount:(NSInteger)totalCount;

- (void)cacheBigDayInfo:(EMBigDayInfo *)bigDayInfo;

- (void)deleteBigDayInfo:(EMBigDayInfo *)bigDayInfo;

@end
