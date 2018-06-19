
#import <UIKit/UIKit.h>
#import "EMAlertInfo.h"

@interface EMAlertTableViewCell : UITableViewCell

- (void)updateCellWithAlertInfo:(EMAlertInfo *)alertInfo color:(UIColor *)color;

@end
