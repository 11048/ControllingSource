//
//  DetailViewController.h
//  ControllingSource
//
//  Created by zhouyi on 5/3/15.
//  Copyright (c) 2015 zhouyi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
