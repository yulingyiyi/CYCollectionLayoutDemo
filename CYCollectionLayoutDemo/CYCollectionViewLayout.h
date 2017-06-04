//
//  CYCollectionViewLayout.h
//  CYCollectionLayoutDemo
//
//  Created by SX on 2017/6/4.
//  Copyright © 2017年 YULING. All rights reserved.
//

#import <UIKit/UIKit.h>

//瀑布流
@interface CYCollectionViewLayout : UICollectionViewFlowLayout
//圆形布局
//@interface CYCollectionViewLayout : UICollectionViewLayout
/**
 cell数量
 */
@property (nonatomic, assign) NSInteger itemCount;

@end
