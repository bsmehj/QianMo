//
//  UserInfoManager.h
//  QianMo
//
//  Created by 卢洋 on 16/10/11.
//  Copyright © 2016年 Myself. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UserInfo.h"
@interface UserInfoManager : NSObject

@property (nonatomic,strong)UserInfo *userInfo;

+ (UserInfoManager *)shareUserInfoManager;

@end
