// 
//  Work.m
//  Timekeeper
//
//  Created by David Beck on 1/9/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "Work.h"

#import "Project.h"

@implementation Work 

@dynamic startTime;
@dynamic endTime;
@dynamic project;

+ (NSSet *)keyPathsForValuesAffectingDuration
{
	return [NSSet setWithObjects:@"startTime", @"endTime", nil];
}

- (NSNumber *)duration
{
	return [NSNumber numberWithDouble:[self.endTime timeIntervalSinceDate:self.startTime]];
}

- (void)awakeFromInsert
{
	self.startTime = [NSDate date];
	
	[super awakeFromInsert];
}

@end
