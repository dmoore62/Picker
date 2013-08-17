//
//  BIDDependentComponentPickerViewController.h
//  Picker
//
//  Created by daniel moore on 8/10/13.
//  Copyright (c) 2013 daniel moore. All rights reserved.
//

#import <UIKit/UIKit.h>
#define kStateComponent 0
#define kZipComponent 1

@interface BIDDependentComponentPickerViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource>

@property (nonatomic, strong) IBOutlet UIPickerView *dependentPicker;
@property (nonatomic, strong) NSDictionary *stateZip;
@property (nonatomic, strong) NSArray *states;
@property (nonatomic, strong) NSArray *zips;

-(IBAction)buttonPressed;

@end
