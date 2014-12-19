//
//  ViewController.h
//  CrystalBall
//
//  Created by Michael Valdez on 11/24/14.
//  Copyright (c) 2014 Michael Valdez. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CrystalBall;

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) CrystalBall *crystalBall;
-(void) makePrediction;
@end

