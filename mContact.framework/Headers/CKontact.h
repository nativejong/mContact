//
//  CKontact.h
//  Quantum
//
//  Created by John Blaine on 5/3/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CKontact : UIView<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>
    @property (nonatomic, retain) UICollectionView *cview;
    @property (nonatomic, retain) UIPageControl *page;

    @property (nonatomic, strong) NSMutableArray *myData;


    @property (nonatomic, assign) NSInteger ktact;

    - (void)clear;
    -(void)display:(NSInteger) i;
    - (void)setIt:(NSMutableDictionary*)r;
    - (void)taskWithName:(NSInteger)name position:(void(^)(NSString *nm, NSString *lat, NSString *lng))cpos;
    @property (copy, nonatomic) void (^positionCB)(NSString *nm, NSString *lat, NSString *lng);

@end

NS_ASSUME_NONNULL_END
