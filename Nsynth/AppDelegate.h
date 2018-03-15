//
//  AppDelegate.h
//  Nsynth
//
//  Created by Adam Salberg on 3/14/18.
//  Copyright © 2018 Adam Salberg. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

