//
//  OZLModelTracker.h
//  RedmineMobile
//
//  Created by lizhijie on 7/15/13.
//  Copyright (c) 2013 Lee Zhijie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OZLModelTracker : NSObject

@property(nonatomic) int index;
@property(nonatomic, strong) NSString* name;

-(id)initWithDictionary:(NSDictionary*)dic;

@end
