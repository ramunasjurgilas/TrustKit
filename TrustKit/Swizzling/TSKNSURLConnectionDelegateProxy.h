//
//  TSKNSURLConnectionDelegateProxy.h
//  TrustKit
//
//  Created by Alban Diquet on 10/7/15.
//  Copyright © 2015 TrustKit. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@class TrustKit;

@interface TSKNSURLConnectionDelegateProxy : NSObject<NSURLConnectionDelegate>

// Initalize our hooks
+ (void)swizzleNSURLConnectionConstructors:(TrustKit *)trustKit;

- (instancetype)init NS_UNAVAILABLE;

- (instancetype _Nullable)initWithTrustKit:(TrustKit *)trustKit connectionDelegate:(id<NSURLConnectionDelegate> _Nullable)delegate NS_DESIGNATED_INITIALIZER;

- (void)connection:(NSURLConnection *)connection willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)challenge;

@end

NS_ASSUME_NONNULL_END
