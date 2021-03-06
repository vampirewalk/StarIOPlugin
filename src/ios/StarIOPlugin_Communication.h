//
//  Communication.h
//  mPOP SDK
//
//  Created by Yuji on 2015/06/10.
//  Copyright (c) 2015年 Star Micronics. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <StarIO/SMPort.h>

@interface StarIOPlugin_Communication : NSObject

+ (BOOL)sendCommands                   :(NSData *)commands port:(SMPort *)port;
+ (BOOL)sendCommandsDoNotCheckCondition:(NSData *)commands port:(SMPort *)port;

+ (BOOL)sendCommands                   :(NSData *)commands portName:(NSString *)portName portSettings:(NSString *)portSettings timeout:(NSInteger)timeout;
+ (BOOL)sendCommandsDoNotCheckCondition:(NSData *)commands portName:(NSString *)portName portSettings:(NSString *)portSettings timeout:(NSInteger)timeout;

@end
