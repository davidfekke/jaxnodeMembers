//
//  DetailViewController.h
//  jaxnodeMembers
//
//  Created by David P Fekke on 7/16/14.
//  Copyright (c) 2014 David Fekke L.L.C. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
