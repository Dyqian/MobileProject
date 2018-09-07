//
//  UtilsMacros.h
//  CustomSet
//
//  Created by aokente on 2018/9/7.
//  Copyright © 2018年 aokente. All rights reserved.
//
//  工具类

#ifndef UtilsMacros_h
#define UtilsMacros_h

// 主题颜色
#define ThemeColor UIColorFromHex(0x1784d9)


// 色值
#define kRGBColor(r, g, b)     [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0]
#define UIColorFromHex(s)      [UIColor colorWithRed:(((s & 0xFF0000) >> 16 )) / 255.0 green:((( s & 0xFF00 ) >> 8 )) / 255.0 blue:(( s & 0xFF )) / 255.0 alpha:1.0]


// 信息打印
#ifdef DEBUG
#define NSLog( s, ... ) printf("class: <%p %s:(%d) > method: %s \n%s\n", self, [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, __PRETTY_FUNCTION__, [[NSString stringWithFormat:(s), ##__VA_ARGS__] UTF8String] );
#else
#define NSLog( s, ... )
#endif


#endif /* UtilsMacros_h */
