//
//  TrainAppDelegate.m
//  Train
//
//  Created by 陈 志 on 11-5-5.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "TrainAppDelegate.h"
#import "AppDelegate.h"
#import "EAGLView.h"
#import "cocos2d.h"


@implementation TrainAppDelegate

@synthesize window;


#pragma mark -
#pragma mark Application lifecycle


static AppDelegate s_sharedApplication;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
	//Override point for customization after application launch.
		
	// Add the view controller's view to the window and display.
	window = [[UIWindow alloc] initWithFrame: [[UIScreen mainScreen] bounds]];
	EAGLView *__glView = [EAGLView viewWithFrame: [window bounds]
									 pixelFormat: kEAGLColorFormatRGBA8
									 depthFormat: GL_DEPTH_COMPONENT16_OES
							  preserveBackbuffer: NO
									  sharegroup: nil
								   multiSampling: NO
								 numberOfSamples:0 ];
	[window addSubview: __glView];
	[window makeKeyAndVisible];
	
	[[UIApplication sharedApplication] setStatusBarHidden: YES];
	
	cocos2d::CCApplication::sharedApplication().run();
	return YES;
	

}


- (void)applicationWillResignActive:(UIApplication *)application {
    /*
     Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
     Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
     */
	cocos2d::CCDirector::sharedDirector()->pause();
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    /*
     Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later. 
     If your application supports background execution, called instead of applicationWillTerminate: when the user quits.
     */
	cocos2d::CCDirector::sharedDirector()->stopAnimation();


}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    /*
     Called as part of  transition from the background to the inactive state: here you can undo many of the changes made on entering the background.
     */
	cocos2d::CCDirector::sharedDirector()->startAnimation();

}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    /*
     Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
     */
		cocos2d::CCDirector::sharedDirector()->resume();
}


- (void)applicationWillTerminate:(UIApplication *)application {
    /*
     Called when the application is about to terminate.
     See also applicationDidEnterBackground:.
     */
}


#pragma mark -
#pragma mark Memory management

- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application {
    /*
     Free up as much memory as possible by purging cached data objects that can be recreated (or reloaded from disk) later.
     */
}


- (void)dealloc {
    [window release];
    [super dealloc];
}


@end
