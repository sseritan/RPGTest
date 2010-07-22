//
//  RPGTestAppDelegate.h
//  RPGTest
//
//  Created by stefan on 7/22/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RPGTestViewController;

@interface RPGTestAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    RPGTestViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet RPGTestViewController *viewController;

@end

