//
//  DYCreditsTableViewCell.h
//  LoveMovie
//
//  Created by xudingyang on 16/5/26.
//  Copyright © 2016年 许定阳. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DYPerson;

@interface DYCreditsTableViewCell : UITableViewCell

/** DYPerson模型 */
@property (strong, nonatomic) DYPerson *person;

@end
