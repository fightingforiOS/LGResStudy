//
//  DLGHttpPresenter.h
//  LGDicDemo
//
//  Created by 刘亚军 on 2018/4/4.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import "RLGPresenter.h"

@class RLGHttpClient;
@interface RLGHttpPresenter : RLGPresenter
@property (nonatomic,strong)RLGHttpClient *httpClient;
@end
