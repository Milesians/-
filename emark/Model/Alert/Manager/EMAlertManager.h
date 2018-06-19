

#import <Foundation/Foundation.h>
#import "EMAlertHandler.h"

static NSString *alertStateChangedNotification = @"alertStateChangedNotification";

@interface EMAlertManager : NSObject

+ (instancetype)sharedManager;

- (void)fetchAlertInfosWithResult:(EMResultBlock)resultBlock;

- (void)cacheAlertInfo:(EMAlertInfo *)alertInfo result:(void (^)(void))resultBlock;

- (void)updateAlertIsJoined:(BOOL)isJoined
                    alertId:(NSInteger)alertId
                     result:(void (^)(void))resultBlock;

- (void)updateAlertIsCompleteWithAlertId:(NSInteger)alertId
                                  result:(void (^)(void))resultBlock;

- (void)deleteAlertInfo:(EMAlertInfo *)alertInfo result:(void (^)(void))resultBlock;


- (void)didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (void)didReceiveLocalNotification:(UILocalNotification *)notification;

@end
