

#import <UIKit/UIKit.h>

@class SampleAppLeftMenuViewController;

@interface SampleAppSlidingMenuController : UIViewController <UIGestureRecognizerDelegate>
{
    // we keep track of the gesture recognizer in order to be able to enable/disable them
    UITapGestureRecognizer * tapGestureRecognizer;
    UIPanGestureRecognizer * panGestureRecognizer;

    CGFloat kSlidingMenuWidth;
    BOOL ignoreDoubleTap;
    BOOL showingLeftMenu;
}
- (id) initWithRootViewController:(UIViewController*)controller;
- (void) shouldIgnoreDoubleTap;
- (void) showRootController:(BOOL)animated;
- (void) showLeftMenu:(BOOL)animated;
- (void) dismiss;

@end

