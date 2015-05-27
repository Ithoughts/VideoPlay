

#import <UIKit/UIKit.h>
#import "SampleAppMenu.h"
#import "VideoPlaybackEAGLView.h"
#import "SampleApplicationSession.h"
#import <QCAR/DataSet.h>

@interface VideoPlaybackViewController : UIViewController <SampleApplicationControl, SampleAppMenuCommandProtocol>
{
    CGRect viewFrame;
    VideoPlaybackEAGLView *eaglView;
    QCAR::DataSet *dataSet;
    SampleApplicationSession *vapp;
    
    BOOL fullScreenPlayerPlaying;
    UINavigationController *navController;
}

- (void)rootViewControllerPresentViewController:(UIViewController*)viewController inContext:(BOOL)currentContext;
- (void)rootViewControllerDismissPresentedViewController;
- (void)setNavigationController:(UINavigationController *) navController;

@end
