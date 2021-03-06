//
//  UserEntity.m
//  LKDBHelperTest
//
//  Created by 岳琛 on 2017/2/22.
//  Copyright © 2017年 Enhance. All rights reserved.
//

#import "UserEntity.h"

@implementation CompanyEntity

@end

@implementation UserEntity

-(id)initWithDict:(NSDictionary *)dict{
    if (!dict) {
        return nil;
    }
    if(![[dict objectForKey:@"mobile"] isKindOfClass:[NSNull class]]){
        self.mobile = (NSString *)[dict objectForKey:@"mobile"];
    }
    if (![[dict objectForKey:@"ID"] isKindOfClass:[NSNull class]]) {
        self.ID = (NSString *)[dict objectForKey:@"ID"];
    }
    if (![[dict objectForKey:@"user_name"] isKindOfClass:[NSNull class]]) {
        self.user_name = (NSString *)[dict objectForKey:@"user_name"];
    }
    return self;
}

//主键
+(NSString *)getPrimaryKey {
    return @"ID";
}

+(NSString *)getTableName{
    
    return @"UserEntityTable";
}


@end
