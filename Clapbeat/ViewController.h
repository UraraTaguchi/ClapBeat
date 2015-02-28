//
//  ViewController.h
//  Clapbeat
//
//  Created by 田口うらら on 2015/02/28.
//  Copyright (c) 2015年 田口うらら. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Clap.h"

@interface ViewController : UIViewController
<UIPickerViewDataSource, UIPickerViewDelegate>

{
    Clap *clapInstance;
    IBOutlet UIPickerView *clapPickerView;
    NSString *repeatNumbersForPicker [10];
    int repeatCount;
}
- (IBAction)play:(id)sender;

@end

