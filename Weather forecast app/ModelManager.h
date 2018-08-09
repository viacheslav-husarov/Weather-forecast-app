//
//  ModelManager.h
//  Weather forecast app
//
//  Created by air on 08.08.18.
//  Copyright © 2018 Slavik Gusarov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Model.h"

@interface ModelManager : NSObject {
    //NSString *someProperty;
    Model *model;
}

@property (nonatomic, assign) Model *model;

+ (id)sharedManager;

@end