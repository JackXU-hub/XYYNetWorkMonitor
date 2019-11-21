//
//  XYYViewController.m
//  XYYNetWorkMonitor
//
//  Created by xudaquan on 11/20/2019.
//  Copyright (c) 2019 xudaquan. All rights reserved.
//

#import "XYYViewController.h"
#import <XYYNetWorkMonitor/NetworkMonitor.h>
#define kAppleUrlToCheckNetStatus @"https://meuserapi.test.ybm100.com/api/appVersion/getTime"
@interface XYYViewController ()

@end

@implementation XYYViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSString *urlString = kAppleUrlToCheckNetStatus;
    NSURLRequest *request = [NSURLRequest requestWithURL:[NSURL URLWithString:urlString]];
    [[[NSURLSession sharedSession] dataTaskWithRequest:request completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error) {
        
    }] resume];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
