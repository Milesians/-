

#import <UIKit/UIKit.h>
#import "EMDiaryInfo.h"

static NSString *diaryUpdateSuccessNotification = @"diaryUpdateSuccessNotification";

@interface EMDiaryEditViewController : UIViewController

@property (nonatomic, strong) EMDiaryInfo *diaryInfo;

@end
