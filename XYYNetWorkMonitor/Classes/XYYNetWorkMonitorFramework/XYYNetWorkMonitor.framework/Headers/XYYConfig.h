//
//  XYYConfig.h
//  NetworkMonitor
//
//  Created by jackxu on 2019/10/11.
//  Copyright © 2019年 jackxu. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 @class XYYConfig
 @abstract NetworkMonitor配置项
 */
@interface XYYConfig : NSObject

/**
 是否开启监控，默认为NO;
 */
@property (nonatomic, assign)BOOL enableNetworkMonitor;

/**
 是否开启log，默认为YES;
 */
@property (nonatomic, assign)BOOL enableLog;

/**
 是否开启干扰模式，默认为NO;
 非干扰模式下，记录结束时间由SDK决定;
 干扰模式下，记录结束由开发者手动触发
 */
@property (nonatomic, assign)BOOL enableInterferenceMode;

/**
 排除在监控之外的url列表
 */
@property (nonatomic, strong)NSArray *urlWhiteList;

/**
 排除在监控之外的cmd列表
 */
@property (nonatomic, strong)NSArray *cmdWhiteList;


/**
 上报时间间隔
 */
@property (nonatomic, assign)NSInteger reportTimeInterval;

/**
 网络耗时监控阈值( 响应结束时刻 - 请求开始时刻 ) > 5000ms 默认为 5000 ms
 */
@property (nonatomic, assign)NSInteger networkDurationThreshold;

/**
 网络流量监控阈值 ( 请求字节数 + 响应字节数 ) > 300 千字节 默认为 300 KB
 */
@property (nonatomic, assign)NSInteger networkDataSizeThreshold;

//用户id;
@property (nonatomic, copy)NSString *uid;


@end
