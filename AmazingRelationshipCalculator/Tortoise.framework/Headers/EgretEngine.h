#import "EgretNativeIOS.h"
NS_ASSUME_NONNULL_BEGIN
@interface EgretEngine : EgretNativeIOS <NSCoding>
+ (instancetype)sharedInstance;
@end
NS_ASSUME_NONNULL_END
