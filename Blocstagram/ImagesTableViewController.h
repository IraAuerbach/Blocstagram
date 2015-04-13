//
//  ImagesTableViewController.h
//  Blocstagram
//
//  Created by Ira Auerbach on 3/14/15.
//  Copyright (c) 2015 Ira Auerbach. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MediaTableViewCell;

//for deletion method
#import "DataSource.h"

@interface ImagesTableViewController : UITableViewController

- (void) cell:(MediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;
- (void) getNumberLikesForMediaCell:(MediaTableViewCell *)cell;

@end
