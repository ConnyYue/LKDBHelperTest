//
//  BaseEntity.h
//  LKDBHelperTest
//
//  Created by 岳琛 on 2017/2/22.
//  Copyright © 2017年 Enhance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LKDBHelper.h>

@interface BaseEntity : NSObject

- (instancetype)initWithDict:(NSDictionary *)dict;
+ (LKDBHelper *)getUsingLKDBHelper;

@end
