//
//  User.h
//  SimpleMoney
//
//  Created by Arthur Pang on 3/11/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <RestKit/RestKit.h>

@class Transaction;

@interface User : NSManagedObject

@property (nonatomic, retain) NSDecimalNumber * balance;
@property (nonatomic, retain) NSString * email;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * password;
@property (nonatomic, retain) NSNumber * userID;
@property (nonatomic, retain) NSString * avatarURL;
@property (nonatomic, retain) NSString * avatarURLsmall;
@property (nonatomic, retain) Transaction *transaction;

@end