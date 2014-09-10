//
//  XLiOSKit.h
//  XLiOSKit
//
// Copyright (c) 2013 Xmartlabs (http://xmartlabs.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.



#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "NSString+XLAdditions.h"
#import "NSError+XLAdditions.h"
#import "UIColor+XLAdditions.h"
#import "UIDevice+XLAdditions.h"
#import "NSObject+XLAdditions.h"

#define IOS_6 (floor(NSFoundationVersionNumber) <= NSFoundationVersionNumber_iOS_6_1)

#define IS_IPHONE_5 ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )568 ) < DBL_EPSILON )

#define UIDeviseOrientationIsPortrait \
    ([[UIDevice currentDevice] orientation] == UIInterfaceOrientationPortrait || \
    [[UIDevice currentDevice] orientation] == UIInterfaceOrientationPortraitUpsideDown)

#define UIDeviseOrientationIsLandscape \
    ([[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeLeft || \
    [[UIDevice currentDevice] orientation] == UIInterfaceOrientationLandscapeRight)


#define UIDeviseOrientationIsPortraitOrLandscape    (UIDeviseOrientationIsPortrait | UIDeviseOrientationIsLandscape)

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define SHOW_DEBUG_MESSAGES NO

#ifdef DEBUG

#if SHOW_DEBUG_MESSAGES

#define DBLog(fmt, ...) NSLog((@"%s:%d, " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#else

#define DBLog(...)

#endif

#else

#define DBLog(...)

#endif



@interface XLKit : NSObject


@end
