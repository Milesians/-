

#import <UIKit/UIKit.h>

@protocol EMBillHeaderViewDelegate <NSObject>

- (void)enterMonthBillWithMonth:(NSString *)month;

@end

@interface EMBillHeaderView : UITableViewHeaderFooterView

@property (nonatomic, weak) id<EMBillHeaderViewDelegate> delegate;

- (void)updateViewWithTitle:(NSString *)title;

@end
