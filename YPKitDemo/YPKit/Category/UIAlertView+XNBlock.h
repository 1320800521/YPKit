//
//  UIAlertView+XNBlock.h
//  XNKit
//
//  Created by yupeng on 2016/11/4.
//  Copyright © 2016年 yupeng. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^CompleteBlock) (NSInteger buttonIndex);

@interface UIAlertView (XNBlock)

// 用Block的方式回调，这时候会默认用self作为Delegate
- (void)showAlertViewWithCompleteBlock:(CompleteBlock) block;

@end
