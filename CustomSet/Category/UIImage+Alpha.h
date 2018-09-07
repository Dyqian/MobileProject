//
//  UIImage+Alpha.h
//  CustomSet
//
//  Created by aokente on 2018/9/7.
//  Copyright © 2018年 aokente. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Alpha)

/**
 return true if the image has an alpha layer

 @return yes or no
 */
- (BOOL)hasAlpha;
- (UIImage *)imageWithAlpha;
- (UIImage *)transparentBorderImage:(NSUInteger)borderSize;

@end
