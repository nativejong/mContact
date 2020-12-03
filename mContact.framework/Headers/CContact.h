//
//  CContact.h
//  Quantum
//
//  Created by John Blaine on 4/30/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "CQRRead.h"
#import "CQRGen.h"
#import "CKontact.h"

NS_ASSUME_NONNULL_BEGIN

@interface CContact : UIView
    @property (nonatomic, retain) MKMapView *mapView;
    @property (nonatomic, retain) CQRRead *qrRead;
    @property (nonatomic, retain) CQRGen *qrGen;
    @property (nonatomic, retain) UISegmentedControl *customSC;

    @property (nonatomic, retain) CKontact *kontact;
    - (void)setIt:(NSMutableDictionary*)r;
    - (void)refresh;
    - (void)clear;
    - (void) showQR;

@end

NS_ASSUME_NONNULL_END
