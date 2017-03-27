//
//  AppDelegate.h
//  ASTest
//
//  Created by AS on 2017/3/27.
//  Copyright © 2017年 Adam Sue. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

