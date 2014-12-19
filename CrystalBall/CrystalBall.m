//
//  CrystalBall.m
//  CrystalBall
//
//  Created by Michael Valdez on 11/24/14.
//  Copyright (c) 2014 Michael Valdez. All rights reserved.
//

#import "CrystalBall.h"

@implementation CrystalBall
-(NSArray *) predictions {
    if (_predictions == nil) {
        _predictions = @[@"It is certain", @"It is decidedly so", @"All signs say yes", @"The stars are not aligned", @"Not a chance", @"It is doubtful", @"Better not to say", @"Concentrate and ask again", @"I genuinely do not know"];
    }
    return _predictions;
}

-(NSString *) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}
@end
