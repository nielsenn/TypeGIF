//
//  SecondViewController.h
//  TypeGIF
//
//  Created by Natasja Nielsen on 3/26/15.
//  Copyright (c) 2015 EECS493. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AXCCollectionViewCell.h"

@interface SecondViewController : UIViewController

@property (nonatomic, strong) IBOutlet UITableView *myTableView;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *addCollectionButton;
@property (nonatomic, retain) NSMutableArray *tableData;

@end

