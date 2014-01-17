//
//  YUGLViewControllerTransitionSwapFilter.h
//  YUGLViewControllerTransitionDemo
//
//  Created by YuAo on 1/17/14.
//  Copyright (c) 2014 YuAo. All rights reserved.
//

#import "GPUImageTwoInputFilter.h"
#import "YUGLViewControllerTransitionFilter.h"

@interface YUGLViewControllerTransitionSwapFilter : GPUImageTwoInputFilter <YUGLViewControllerTransitionFilter>
@property (nonatomic) CGFloat progress;
@property (nonatomic) CGFloat reflection;
@property (nonatomic) CGFloat perspective;
@property (nonatomic) CGFloat depth;
@end
