

#import "EMBaseDataProvider.h"

@implementation EMBaseDataProvider

- (NSString *)name
{
    NSAssert(NO, @"name should not be nil!");
    return nil;
}


- (NSInteger)version
{
    return 1;
}


@end
