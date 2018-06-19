

#import <Foundation/Foundation.h>
#import "EMBigDayHandler.h"

@interface EMBigDayManager : NSObject

+ (instancetype)sharedManager;

- (void)fetchBigDayInfosWithStartIndex:(NSInteger)startIndex
                            totalCount:(NSInteger)totalCount
                                result:(EMResultBlock)resultBlock;

- (void)cacheBigDayInfo:(EMBigDayInfo *)bigDayInfo result:(void (^)(void))resultBlock;

- (void)deleteBigDayInfo:(EMBigDayInfo *)bigDayInfo result:(void (^)(void))resultBlock;

@end
