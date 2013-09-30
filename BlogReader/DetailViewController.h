//
//  DetailViewController.h
//  BlogReader
//
//  Created by Alex Doub on 9/30/13.
//  Copyright (c) 2013 Alex Doub. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
