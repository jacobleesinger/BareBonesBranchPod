//
//  AppDelegate.h
//  BareBonesBranchPod
//
//  Created by Jacob Singer on 1/13/20.
//  Copyright © 2020 Jacob Singer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

