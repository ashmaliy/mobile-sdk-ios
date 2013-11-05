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

#import "ANTimeout.h"
#import "ANGlobal.h"

@implementation ANTimeout
@synthesize delegate;
@synthesize responseURLString;

#pragma mark ANCustomAdapterBanner

- (void)requestBannerAdWithSize:(CGSize)size
                serverParameter:(NSString *)parameterString
                       adUnitId:(NSString *)idString
                       location:(ANLocation *)location
{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW,
                                 (kAppNexusMediationNetworkTimeoutInterval + 1)
                                 * NSEC_PER_SEC),
                   dispatch_get_main_queue(), ^{
        [self.delegate adapterBanner:self didReceiveBannerAdView:[[UIView alloc] init]];
    });
}

@end