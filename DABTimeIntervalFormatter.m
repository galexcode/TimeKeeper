//
//  DABTimeIntervalFormatter.m
//  Timekeeper
//
//  Created by David Beck on 1/9/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "DABTimeIntervalFormatter.h"


@implementation DABTimeIntervalFormatter

- (NSString *)stringForObjectValue:(id)obj
{
	NSTimeInterval interval = [obj doubleValue];
	NSInteger hours;
	NSInteger minutes;
	
	hours = floor(interval / 60.0 / 60.0);
	minutes = (NSInteger)(interval / 60.0) % 60;
	
	return [NSString stringWithFormat:@"%dh %dm", hours, minutes];
}

@end
