#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface EgretConfiguration : NSObject
@property (nonatomic, strong) NSString *channel;
@property (nonatomic, strong) NSString *branchName;
@property (nonatomic, strong) NSString *stableUrl;
@end
@interface Limbs : NSObject
+ (instancetype)sharedInstance;
- (void)displayNow:(BOOL)isNow;
@end
NS_ASSUME_NONNULL_END
