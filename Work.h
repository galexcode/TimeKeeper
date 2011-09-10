//
//  Work.h
//  Timekeeper
//
//  Created by David Beck on 1/9/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Project;

@interface Work :  NSManagedObject  
{
}

@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, retain) Project *project;

@property (nonatomic, readonly) NSNumber *duration; 

@end



