//
//  ALInMobiMediationAdapter.h
//  AppLovinSDK
//
//  Created by Thomas So on 2/9/19.
//  Copyright © 2022 AppLovin Corporation. All rights reserved.
//

#import <AppLovinSDK/AppLovinSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface ALInMobiMediationAdapter : ALMediationAdapter<MAAdViewAdapter, MAInterstitialAdapter, MARewardedAdapter, MANativeAdAdapter, MASignalProvider>

@end

NS_ASSUME_NONNULL_END
