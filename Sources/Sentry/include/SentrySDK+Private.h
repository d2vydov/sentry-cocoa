#import <Sentry/Sentry.h>

NS_ASSUME_NONNULL_BEGIN

@interface SentrySDK (Private)

+ (SentryId *)captureCrash:(SentryEvent *)event;

@end

NS_ASSUME_NONNULL_END
