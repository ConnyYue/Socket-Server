//
//  ClientModel.h
//  TestServer
//
//  Created by 岳琛 on 2017/2/21.
//  Copyright © 2017年 Conny. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ClientModel : NSObject
@property (assign, nonatomic) int clientSocket;
@property (copy, nonatomic) NSString * clientName;
@end
