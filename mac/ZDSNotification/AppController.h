//
//  AppController.h
//  ZDSNotification
//
//  Created by Odric Roux-Paris on 28/08/2014.
//  Copyright (c) 2014 Cirdo. All rights reserved.
//

#import <Foundation/Foundation.h>
@class PreferenceController;
@interface AppController : NSObject{
    PreferenceController *preferenceController;
}
- (IBAction)showPreferencePanel:(id)sender;

@end
