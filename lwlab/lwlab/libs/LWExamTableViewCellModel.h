//
//  LWExamTableViewCellModel.h
//  lwlab
//  
//  Created by 程恒盛 on 2018/4/13.
//  Copyright © 2018年 Herson. All rights reserved.
//

#import <lwui/lwui.h>

@interface LWExamTableViewCellModel : LWFormElement
@property(strong, nonatomic) NSArray <NSString *>* examStrings;

- (instancetype)initWithExamStrings:(NSArray <NSString *>*) strings name:(NSString *)name;
@end
