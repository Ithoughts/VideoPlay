
#import <UIKit/UIKit.h>
#import "SampleGLResourceHandler.h"

@interface VideoPlaybackAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (assign, nonatomic) id <SampleGLResourceHandler> glResourceHandler;

@end
