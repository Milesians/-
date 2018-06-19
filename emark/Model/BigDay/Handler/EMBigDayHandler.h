

#import "EMBaseHandler.h"
#import "EMBigDayCacheProvider.h"

@interface EMBigDayHandler : EMBaseHandler

- (void)fetchBigDayInfosWithStartIndex:(NSInteger)startIndex
                            totalCount:(NSInteger)totalCount
                                result:(EMResultBlock)resultBlock;

- (void)cacheBigDayInfo:(EMBigDayInfo *)bigDayInfo result:(void (^)(void))resultBlock;

- (void)deleteBigDayInfo:(EMBigDayInfo *)bigDayInfo result:(void (^)(void))resultBlock;

@end
