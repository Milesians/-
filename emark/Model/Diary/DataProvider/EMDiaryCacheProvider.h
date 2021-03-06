

#import "EMBaseDatabaseCommonProvider.h"
#import "EMDiaryInfo.h"

@interface EMDiaryCacheProvider : EMBaseDatabaseCommonProvider

- (NSArray<EMDiaryInfo *> *)selectDiaryInfosFromStart:(NSInteger)startIndex
                                           totalCount:(NSInteger)totalCount;

- (void)cacheDiaryInfo:(EMDiaryInfo *)diaryInfo;

- (void)updateDiaryInfo:(EMDiaryInfo *)diaryInfo;

- (void)deleteDiaryInfo:(EMDiaryInfo *)diaryInfo;

- (UIImage *)selectImageWithDiaryId:(NSInteger)diaryId;

@end
