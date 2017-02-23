//
//  ViewController.h
//  LKDBHelperTest
//
//  Created by 岳琛 on 2017/2/22.
//  Copyright © 2017年 Enhance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextViewDelegate>

@property(strong,nonatomic)NSMutableString* ms;

@property (weak, nonatomic) IBOutlet UITextView  *etxvTable;
@property (weak, nonatomic) IBOutlet UITextField *etxfUserName;
@property (weak, nonatomic) IBOutlet UITextField *etxfUserID;
@property (weak, nonatomic) IBOutlet UITextField *etxfUserMobile;
@property (weak, nonatomic) IBOutlet UITextField *etxfUserJob;

@end

