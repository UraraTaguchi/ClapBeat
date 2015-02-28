//
//  Clap.h
//  Clapbeat
//
//  Created by 田口うらら on 2015/02/28.
//  Copyright (c) 2015年 田口うらら. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <UIKit/UIKit.h>
#import "Clap.h"

@interface Clap : NSObject

+(id)initClap;
-(id)init;
-(void)setSound;
-(void)play;
-(void)repeatClap:(int)count;

@end



