//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Ira Auerbach on 3/16/15.
//  Copyright (c) 2015 Ira Auerbach. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media, MediaTableViewCell;

@protocol MediaTableViewCellDelegate <NSObject>

- (void) cell:(MediaTableViewCell *)cell didTapImageView:(UIImageView *)imageView;
- (void) cell:(MediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;
- (void) cell:(MediaTableViewCell *)cell didTapWithTwoFingers:(UIImageView *)imageView;

@end


@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;
@property (nonatomic, weak) id <MediaTableViewCellDelegate> delegate;
//@property (nonatomic, strong) UIImageView *mediaImageView;
//@property (nonatomic, strong) UILabel *usernameAndCaptionLabel;
//@property (nonatomic, strong) UILabel *commentLabel;

+(CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

//get the media item
-(Media *) mediaItem;

//set a new media item
-(void)setMediaItem:(Media *)mediaItem;

@end
