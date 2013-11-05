/*   Copyright 2013 APPNEXUS INC
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define AN_MOBILE_HOSTNAME @"mediation.adnxs.com/mob"
#define AN_MOBILE_HOSTNAME_INSTALL @"mediation.adnxs.com/install"
#define AN_ERROR_DOMAIN @"com.appnexus.sdk"
#define AN_ERROR_TABLE @"errors"

#define AN_DEBUG_MODE				1

#define AN_DEFAULT_PLACEMENT_ID		@"default_placement_id"
#define AN_SDK_VERSION              @"1.0"

#define APPNEXUS_BANNER_SIZE			CGSizeMake(320, 50)
#define APPNEXUS_MEDIUM_RECT_SIZE		CGSizeMake(300, 250)
#define APPNEXUS_LEADERBOARD_SIZE		CGSizeMake(728, 90)
#define APPNEXUS_WIDE_SKYSCRAPER_SIZE	CGSizeMake(160, 600)

#define kAppNexusRequestTimeoutInterval 30.0
#define kAppNexusAnimationDuration 0.4f
#define kAppNexusDefaultInterstitialTimeoutInterval 15.0
#define kAppNexusDefaultInterstitialCloseButtonInterval 10.0
#define kAppNexusMediationNetworkTimeoutInterval 15.0

NSString *ANUserAgent(void);
NSString *ANDeviceModel(void);
BOOL ANAdvertisingTrackingEnabled(void);
BOOL CGSizeLargerThanSize(CGSize firstSize, CGSize secondSize);
BOOL isFirstLaunch(void);
NSString *ANUdidParameter(void);
NSString *ANErrorString(NSString *key);