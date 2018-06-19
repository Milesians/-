

#import "EMBaseDataProvider.h"
#import "YYCache.h"

@interface EMBaseLRUCacheProvider : EMBaseDataProvider

@property (nonatomic, readonly) YYCache *yyCache;

- (instancetype)initWithName:(NSString *)name;

@end
