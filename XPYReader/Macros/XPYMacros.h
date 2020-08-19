//
//  XPYMacros.h
//  XPYMoments
//
//  Created by zhangdu_imac on 2020/6/1.
//  Copyright © 2020 xiang. All rights reserved.
//  宏文件

#import "XPYEnums.h"
#import "XPYBlocks.h"
#import "XPYConstant.h"

/// KeyWindow
#define XPYKeyWindow  [UIApplication sharedApplication].delegate.window

/// 以375宽度屏幕为基准自适应
#define XPYScreenScaleConstant(aConstant) CGRectGetWidth([UIScreen mainScreen].bounds) / 375 * aConstant

/// 屏幕宽度
#define XPYScreenWidth CGRectGetWidth([UIScreen mainScreen].bounds)

/// 屏幕高度
#define XPYScreenHeight CGRectGetHeight([UIScreen mainScreen].bounds)

/// statusbar高度
#define APP_STATUSBAR_HEIGHT CGRectGetHeight([UIApplication sharedApplication].statusBarFrame)

/// App Document文件夹路径
#define XPYDocumentDirectory NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).lastObject

/// 弱引用对象
#define weakify(object) autoreleasepool{} __weak __typeof__(object) weak##_##object = object;

/// 强引用对象
#define strongify(object) autoreleasepool{} __typeof__(object) object = weak##_##object;

/// 阅读器文字区域Rect
#define XPYReadViewBounds CGRectMake(0, 0, XPYScreenWidth - XPYReadViewLeftSpacing - XPYReadViewRightSpacing, XPYScreenHeight - XPYReadViewTopSpacing - XPYReadViewBottomSpacing)

#pragma mark - Font
#define FontBold(x) [UIFont fontWithName:@"PingFangSC-Semibold" size:x]
#define FontRegular(x) [UIFont fontWithName:@"PingFangSC-Regular" size:x]
#define FontMedium(x) [UIFont fontWithName:@"PingFangSC-Medium" size:x]
#define FontLight(x) [UIFont fontWithName:@"PingFangSC-Light" size:x]

