//
//  XYYManager.h
//  NetworkMonitor
//
//  Created by jackxu on 2019/10/11.
//  Copyright © 2019年 jackxu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NetworkMonitorDef.h"
#import "XYYConfig.h"

@interface XYYManager : NSObject<NetworkMonitorProtocol>

/**
 监控数据输出block
 设置了该block，SDK每收集一条完整数据，就会通过该block回调出去
 如果不设置该block，SDK收集的数据将缓存在数据库中
 */
@property (nonatomic, copy)DataOutputBlock outputBlock;

/**
 获取单例
 
 @return 返回实例
 */
+ (instancetype)sharedXYYManager;

/**
 初始化配置
 
 @param config NetworkMonitor相关参数配置
 */
- (void)initConfig:(XYYConfig *)config;

/**
*外部传来的业务错误数据
@param request 请求信息 task.currentRequest
@param bizCode 错误码
@param bizDesc 错误描述
*/
- (void)setRequest:(NSURLRequest *)request bizCode:(NSString*)bizCode bizDesc:(NSString*)bizDesc;



@end
