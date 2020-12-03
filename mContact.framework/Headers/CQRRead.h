//
//  CQRRead.h
//  Quantum
//
//  Created by John Blaine on 5/1/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CQRRead : UIView <AVCaptureMetadataOutputObjectsDelegate>
    @property (nonatomic, strong) AVCaptureSession *captureSession;
    @property (nonatomic, strong) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@end

NS_ASSUME_NONNULL_END
