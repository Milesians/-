

#import "EMAutoCoding.h"

@interface EMBigDayInfo : EMAutoCoding

@property (nonatomic, assign) NSInteger bigDayId;
@property (nonatomic, copy)   NSString  *bigDayName;
@property (nonatomic, copy)   NSString  *bigDayType;
@property (nonatomic, copy)   NSString  *bigDayDate;
@property (nonatomic, copy)   NSString  *bigDayRemark;
@property (nonatomic, assign) BOOL      showDelete;

@end
