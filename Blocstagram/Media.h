//
//  Media.h
//  Blocstagram
//
//  Created by Ira Auerbach on 3/15/15.
//  Copyright (c) 2015 Ira Auerbach. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, MediaDownloadState) {
    MediaDownloadStateNeedsImage = 0,
    MediaDownloadStateDownloadInProgress = 1,
    MediaDownloadStateNonRecoverableError = 2,
    MediaDownloadStateStateHadImage = 3
};

@class User;

@interface Media : NSObject <NSCoding>


@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) User *user;
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) NSArray *comments;
@property (nonatomic, assign) MediaDownloadState downloadState;

 - (instancetype) initWithDictionary:(NSDictionary *)mediaDictionary;

@end
