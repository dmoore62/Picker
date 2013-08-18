//
//  BIDCustomPickerViewController.h
//  Picker
//
//  Created by daniel moore on 8/10/13.
//  Copyright (c) 2013 daniel moore. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDCustomPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>

@property (nonatomic, strong) IBOutlet UIPickerView *picker;
@property (nonatomic, strong) IBOutlet UILabel *winLabel;
@property (nonatomic, strong) NSArray *images;

-(IBAction)spin;

@end
