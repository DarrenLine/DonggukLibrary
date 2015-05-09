//
//  DRNNetwork.h
//  DonggukLibrary
//
//  Created by 1001246 on 2015. 5. 9..
//  Copyright (c) 2015년 USAIU. All rights reserved.
//

#import <Foundation/Foundation.h>

#define URL     @"http://api.darrenline.tk/dongguk_library"
#define URL_ROOM_LIST           URL "/room_list.php"
#define URL_ROOM_STATUS(val)    URL "/menu_section_list.php?number=val"

typedef void (^DRNNetworkSuccessHandler) (id responseObject);
typedef void (^DRNNetworkSuccessArrayHandler) (NSArray *responseObject);
typedef void (^DRNNetworkSuccessDictionaryHandler) (NSDictionary *responseObject);
typedef void (^DRNNetworkFailureHandler) (NSError *error);

@class AFHTTPRequestOperationManager;

@interface DRNNetwork : NSObject

+ (AFHTTPRequestOperationManager *)requestManager;
+ (void)getRoomListWithSuccess:(DRNNetworkSuccessArrayHandler)success failure:(DRNNetworkFailureHandler)failure;

@end