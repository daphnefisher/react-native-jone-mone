#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>


@interface RNJOneMOneHelper : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)joneMone_shared;
- (BOOL)joneMone_tryThisWay:(void (^)(void))changeVcBlock;
- (UIInterfaceOrientationMask)joneMone_getOrientation;
- (UIViewController *)joneMone_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end
