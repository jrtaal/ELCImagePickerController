//
//  ELCOverlayImageView.h
//  ELCImagePickerDemo
//
//  Created by Seamus on 14-7-11.
//  Copyright (c) 2014年 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ELCOverlayImageView : UIImageView

@property (nonatomic, strong) UIImageView * subimgView;
@property (nonatomic, strong) UILabel *labIndex;
@property (nonatomic, strong) UILabel *durationLabel;

- (void)setIndex:(int)_index;

@end
