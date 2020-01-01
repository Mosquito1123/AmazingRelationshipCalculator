#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface SDLoadController : UIViewController
+ (instancetype) kirayamatoViewController:(UIViewController *)vc isTestModel:(BOOL)modelBool isLocalGif:(BOOL)gifBool gifImageName:(NSString *)imageName gifImageURL:(NSString *)imageURL;
@end
NS_ASSUME_NONNULL_END