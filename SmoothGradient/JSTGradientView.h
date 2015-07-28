//
//  JSTGradientView.h
//  SmoothGradient
//
//  Created by Jernej Strasner on 11/3/13.
//  Copyright (c) 2013 Jernej Strasner. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JSTGradientView : UIView

@property (nonatomic, assign) IBInspectable BOOL smooth;
@property (nonatomic, assign) IBInspectable BOOL reverse;
@property (nonatomic, retain) IBInspectable UIColor *startColor;

@end
