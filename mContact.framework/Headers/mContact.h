//
//  mContact.h
//  mContact
//
//  Created by John Blaine on 12/3/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "CQRRead.h"
#import "CQRGen.h"
#import "CKontact.h"

FOUNDATION_EXPORT double mContactVersionNumber;
FOUNDATION_EXPORT const unsigned char mContactVersionString[];

@interface mContact : UIView

@property (nonatomic, retain) MKMapView *mapView;
@property (nonatomic, retain) CQRRead *qrRead;
@property (nonatomic, retain) CQRGen *qrGen;
@property (nonatomic, retain) UISegmentedControl *customSC;

@property (nonatomic, retain) CKontact *kontact;
//- (void)setIt:(NSMutableDictionary*)r;
- (void)addIt:(NSString*)nm address:(NSString*)a city:(NSString*)c email:(NSString*)e lat:(NSString*)lt lng:(NSString*)lg phone:(NSString*)p web:(NSString*)w;

- (void)refresh;
- (void)clear;
- (void) showQR;

@end

