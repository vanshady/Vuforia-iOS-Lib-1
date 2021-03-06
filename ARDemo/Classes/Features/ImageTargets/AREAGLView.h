//
//  AREAGLView.h
//  ARDemo
//
//  Created by CharlyZhang on 16/7/13.
//  Copyright © 2016年 CharlyZhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Vuforia/UIGLViewProtocol.h>
#import "SampleApplicationSession.h"

@protocol ARGLResourceHandler;

@interface AREAGLView : UIView <UIGLViewProtocol, ARGLResourceHandler> 

/*/
 @{@"targetName" : @"modelPath"}
/*/
- (id)initWithFrame:(CGRect)frame appSession:(SampleApplicationSession *) app;
- (void) loadModels:(NSArray *)modelsCfg;

- (void)finishOpenGLESCommands;
- (void)freeOpenGLESResources;
- (void)setUpApp3D;
- (void)freeApp3D;

- (void) setOffTargetTrackingMode:(BOOL) enabled;

- (void) rotateWithX:(float)x Y:(float)y;
- (void) moveWithX:(float)x Y:(float)y;
- (void) scale:(float)s;
- (void) reset;
@end
