//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Ira Auerbach on 3/16/15.
//  Copyright (c) 2015 Ira Auerbach. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media, MediaTableViewCell, ComposeCommentView;

@protocol MediaTableViewCellDelegate <NSObject>

- (void) cell:(MediaTableViewCell *)cell didTapImageView:(UIImageView *)imageView;
- (void) cell:(MediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;
- (void) cell:(MediaTableViewCell *)cell didTapWithTwoFingers:(UIImageView *)imageView;
- (void) cellDidPressLikeButton:(MediaTableViewCell *)cell;
- (void) getNumberLikesForMediaCell:(MediaTableViewCell *)cell;
- (void) cellWillStartComposingComment:(MediaTableViewCell *)cell;
- (void) cell:(MediaTableViewCell *)cell didComposeComment:(NSString *)comment;

@end


@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;
@property (nonatomic, weak) id <MediaTableViewCellDelegate> delegate;
@property (nonatomic, strong) UILabel *numberLikesLabel;
@property (nonatomic, strong, readonly) ComposeCommentView *commentView;
//@property (nonatomic, strong) UIImageView *mediaImageView;
//@property (nonatomic, strong) UILabel *usernameAndCaptionLabel;
//@property (nonatomic, strong) UILabel *commentLabel;

+(CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

//get the media item
-(Media *) mediaItem;

//set a new media item
-(void)setMediaItem:(Media *)mediaItem;

- (void) stopComposingComment;

@end
