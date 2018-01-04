//
//  AppDelegate.h
//  LLAutomaticPackaging
//
//  Created by Lilong on 2018/1/4.
//  Copyright © 2018年 第七代目. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


//com.HePai.HePaiiOS  使用公司的   （Bundle Identifier）
//原本的 com.liguanwen.LLAutomaticPackaging （Bundle Identifier）

