#import <Sentry/Sentry.h>

NS_ASSUME_NONNULL_BEGIN

@interface SentryHub (Private)

- (SentryId *)captureCrash:(SentryEvent *)event withScope:(SentryScope *_Nullable)scope;

@end

NS_ASSUME_NONNULL_END
