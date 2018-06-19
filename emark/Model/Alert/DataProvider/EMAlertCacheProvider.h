
#import "EMBaseDatabaseCommonProvider.h"
#import "EMAlertInfo.h"

@interface EMAlertCacheProvider : EMBaseDatabaseCommonProvider

- (NSArray<EMAlertInfo *> *)selectAlertInfos;

- (NSArray<EMAlertInfo *> *)selectUnJoinedAlertInfos;

- (EMAlertInfo *)selectAlertInfoWithAlertId:(NSInteger)alertId;

- (void)cacheAlertInfo:(EMAlertInfo *)alertInfo;

- (void)deleteAlertInfo:(EMAlertInfo *)alertInfo;

- (void)updateAlertIsjoined:(BOOL)isJoined alertId:(NSInteger)alertId;

- (void)updateAlertIsFinishedWithAlertId:(NSInteger)alertId;

- (void)updateAlertIsCompleteWithAlertId:(NSInteger)alertId;

- (void)autoCheckToMarkFinish;

@end
