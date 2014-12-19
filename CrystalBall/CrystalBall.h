//
//  CrystalBall.h
//  CrystalBall
//
//  Created by Michael Valdez on 11/24/14.
//  Copyright (c) 2014 Michael Valdez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CrystalBall : NSObject {
    
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;
-(NSString *) randomPrediction;

@end
