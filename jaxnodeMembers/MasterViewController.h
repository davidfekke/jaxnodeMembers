//
//  MasterViewController.h
//  jaxnodeMembers
//
//  Created by David P Fekke on 7/16/14.
//  Copyright (c) 2014 David Fekke L.L.C. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
