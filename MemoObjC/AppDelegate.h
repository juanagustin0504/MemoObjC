//
//  AppDelegate.h
//  MemoObjC
//
//  Created by Webcash on 2020/04/03.
//  Copyright © 2020 Moonift. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

