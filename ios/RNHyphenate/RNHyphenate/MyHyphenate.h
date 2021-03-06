//
//  MyHy.h
//  myPlugin
//
//  Created by Zoey on 2017/12/26.
//  Copyright © 2017年 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "EMSDK.h"

#define WelcomeWords @"WelcomeWords"
#define HeadImagePath @"HeadImagePath"
#define SendLog @"SendLog"
#define MessagesDidReceive @"MessagesDidReceive"
#define InitMessage @"initMessage"

#ifdef NSFoundationVersionNumber_iOS_9_x_Max
#import <UserNotifications/UserNotifications.h>
#endif

#define UnreadFeedBackMessageCount @"UnreadFeedBackMessageCount"

@interface MyHyphenate : NSObject<UNUserNotificationCenterDelegate, EMClientDelegate, EMChatManagerDelegate>
+ (instancetype)shared;

+ (void)setupWithAppKey:(NSString *)appkey imUser:(NSString *)imUser userName:(NSString *)userName Password:(NSString *)password ApnsCertName:(NSString *)certName AutoMessage:(BOOL)autoMessage;

+ (void)setupWithAppKey:(NSString *)appkey imUser:(NSString *)imUser userName:(NSString *)userName Password:(NSString *)password ApnsCertName:(NSString *)certName ServiceHeadImagePath:(NSString *) path andWelcomeWords:(NSString *)words AutoMessage:(BOOL)autoMessage;

+ (void)present:(UIViewController *)vc;

+ (int)getUnreadMessageCount;

+ (void)logoutUser;

+ (EMConversation *)getCurrentConversation:(BOOL)markAllAsRead;
@end
