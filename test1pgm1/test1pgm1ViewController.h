//
//  test1pgm1ViewController.h
//  test1pgm1
//
//  Created by Lewis Cooper on 1/24/14.
//  Copyright (c) 2014 Lewis Cooper. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface test1pgm1ViewController : UIViewController

- (IBAction)swap:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *myLabel;
@property (nonatomic, retain) UIColor *textColor;

@end
