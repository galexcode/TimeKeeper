//
//  Project.h
//  Timekeeper
//
//  Created by David Beck on 1/9/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Work;

@interface Project :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * Name;
@property (nonatomic, retain) NSSet* work;
@property (nonatomic, retain) Work * currentWork;

@end


@interface Project (CoreDataGeneratedAccessors)
- (void)addWorkObject:(Work *)value;
- (void)removeWorkObject:(Work *)value;
- (void)addWork:(NSSet *)value;
- (void)removeWork:(NSSet *)value;

@end

