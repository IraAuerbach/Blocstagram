//
//  MediaFullScreenViewController.h
//  Blocstagram
//
//  Created by Ira Auerbach on 4/2/15.
//  Copyright (c) 2015 Ira Auerbach. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media, MediaFullScreenViewController, MediaTableViewCell;

@interface MediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype) initWithMedia:(Media *)media;

- (void) centerScrollView;

@end