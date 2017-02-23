//
//  UserEntity.h
//  LKDBHelperTest
//
//  Created by 岳琛 on 2017/2/22.
//  Copyright © 2017年 Enhance. All rights reserved.
//

#import "BaseEntity.h"

@interface CompanyEntity : NSObject

@property (nonatomic,copy) NSString *companyNo;
@property (nonatomic,copy) NSString *companyJob;

@end

@interface UserEntity : BaseEntity

@property (nonatomic,  copy) NSString *mobile;        
@property (nonatomic,  copy) NSString *ID;
@property (nonatomic,  copy) NSString *user_name;
@property (nonatomic,strong) CompanyEntity *company;
@end
