//
//  GrowingResourceCustomEvent.h
//  GrowingAnalytics-Autotracker-AutotrackerCore-Tracker-TrackerCore
//
//  Created by sheng on 2020/11/24.
//  Copyright (C) 2017 Beijing Yishu Technology Co., Ltd.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import "GrowingCustomEvent.h"

NS_ASSUME_NONNULL_BEGIN
@class GrowingResourceCustomBuilder;
@interface GrowingResourceCustomEvent : GrowingCustomEvent

@property (nonatomic, strong, readonly) NSDictionary *resourceItem;

+ (GrowingResourceCustomBuilder *)builder;

@end

@interface GrowingResourceCustomBuilder : GrowingCustomBuilder

@property (nonatomic, strong, readonly) NSDictionary *resourceItem;

- (GrowingResourceCustomBuilder *(^)(NSDictionary *value))setResourceItem;

//override
- (GrowingResourceCustomBuilder *(^)(NSString *value))setEventName;
- (GrowingResourceCustomBuilder *(^)(NSDictionary <NSString *, NSObject *>*value))setAttributes;
@end

NS_ASSUME_NONNULL_END
