//
//  CKontactCell.h
//  Quantum
//
//  Created by John Blaine on 5/3/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CKontactCell : UICollectionViewCell
@property (nonatomic, retain) UIButton *filter;
//@property (nonatomic, retain) UIImageView *img;
- (void)set:(NSString *)pth  date:(NSString*)d  loca:(NSString*)fn;
@end

NS_ASSUME_NONNULL_END
