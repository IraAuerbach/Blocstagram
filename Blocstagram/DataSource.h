//
//  DataSource.h
//  Blocstagram
//
//  Created by Ira Auerbach on 3/15/15.
//  Copyright (c) 2015 Ira Auerbach. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class Media;

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

//-(void) deleteSelected:(NSUInteger)index;

-(void) deleteMediaItem:(Media *)item;

@end
