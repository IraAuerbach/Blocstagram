//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Ira Auerbach on 3/16/15.
//  Copyright (c) 2015 Ira Auerbach. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;
//@property (nonatomic, strong) UIImageView *mediaImageView;
//@property (nonatomic, strong) UILabel *usernameAndCaptionLabel;
//@property (nonatomic, strong) UILabel *commentLabel;

+(CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

//get the media item
-(Media *) mediaItem;

//set a new media item
-(void)setMediaItem:(Media *)mediaItem;

@end
