//
//  Comment.h
//  Blocstagram
//
//  Created by Ira Auerbach on 3/15/15.
//  Copyright (c) 2015 Ira Auerbach. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class User;

@interface Comment : NSObject


@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

@end
