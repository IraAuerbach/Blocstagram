//
//  LikeButton.m
//  Blocstagram
//
//  Created by Ira Auerbach on 4/8/15.
//  Copyright (c) 2015 Ira Auerbach. All rights reserved.
//

#import "LikeButton.h"
#import "CircleSpinner.h"

#define kLikedStateImage @"heart-full"
#define kUnlikedStateImage @"heart-empty"

@interface LikeButton ()

@property (nonatomic, strong) CircleSpinner *spinnerView;

@end

@implementation LikeButton

//checkpoint 528 #2
-(instancetype) initWithCoder:(NSCoder *)aDecoder {
    self = [super init];
    
    if (self) {
        self.likeButtonState = [aDecoder decodeIntegerForKey:@"likeButtonState"];
    }
    
    return self;
}

-(void) encodeWithCoder:(NSCoder *)aCoder {
    //Do I need to call this function someplace when the likeButtonState changes? I believe it is called automatically but not positive
    [aCoder encodeInteger:self.likeButtonState forKey:@"likeButtonState"];
}
//end checkpoint 528 #2

- (instancetype) init {
    self = [super init];
    
    if (self) {
        self.spinnerView = [[CircleSpinner alloc] initWithFrame:CGRectMake(0, 0, 44, 44)];
        [self addSubview:self.spinnerView];
        
        self.imageView.contentMode = UIViewContentModeScaleAspectFit;
        
        self.contentEdgeInsets = UIEdgeInsetsMake(10, 10, 10, 10);
        self.contentVerticalAlignment = UIControlContentVerticalAlignmentTop;
        
        self.likeButtonState = LikeStateNotLiked;
    }
    
    return self;
}

-(void) layoutSubviews {
    [super layoutSubviews];
    self.spinnerView.frame = self.imageView.frame;
}

- (void) setLikeButtonState:(LikeState)likeState {
    _likeButtonState = likeState;
    
    NSString *imageName;
    
    switch (_likeButtonState) {
        case LikeStateLiked:
        case LikeStateUnliking:
            imageName = kLikedStateImage;
            break;
            
        case LikeStateNotLiked:
        case LikeStateLiking:
            imageName = kUnlikedStateImage;
    }
    
    switch (_likeButtonState) {
        case LikeStateLiking:
        case LikeStateUnliking:
            self.spinnerView.hidden = NO;
            self.userInteractionEnabled = NO;
            break;
            
        case LikeStateLiked:
        case LikeStateNotLiked:
            self.spinnerView.hidden = YES;
            self.userInteractionEnabled = YES;
    }
    
    
    [self setImage:[UIImage imageNamed:imageName] forState:UIControlStateNormal];
}

@end
