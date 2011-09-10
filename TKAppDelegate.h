//
//  Timekeeper_AppDelegate.h
//  Timekeeper
//
//  Created by David Beck on 1/9/11.
//  Copyright __MyCompanyName__ 2011 . All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface TKAppDelegate : NSObject 
{
    NSWindow *window;
	
	NSButton *startStopButton;
	NSTextField *timerLabel;
    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
	
	NSArrayController *projectArrayController;
	NSArrayController *workArrayController;
}

@property (nonatomic, retain) IBOutlet NSWindow *window;

@property (nonatomic, retain) IBOutlet NSButton *startStopButton;
@property (nonatomic, retain) IBOutlet NSTextField *timerLabel;

@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, retain) IBOutlet NSArrayController *projectArrayController;
@property (nonatomic, retain) IBOutlet NSArrayController *workArrayController;

- (IBAction)saveAction:sender;

- (IBAction)startStopWork:(id)sender;

- (void)updateTimer;

@end
