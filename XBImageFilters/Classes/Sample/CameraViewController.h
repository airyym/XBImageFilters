//
//  CameraViewController.h
//  XBImageFilters
//
//  Created by xiss burg on 3/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XBFilteredCameraView.h"
#import "CameraTargetView.h"

@interface CameraViewController : UIViewController <XBFilteredCameraViewDelegate>

@property (weak, nonatomic) IBOutlet XBFilteredCameraView *cameraView;
@property (weak, nonatomic) IBOutlet CameraTargetView *cameraTargetView;

- (IBAction)takeAPictureButtonTouchUpInside:(id)sender;
- (IBAction)changeFilterButtonTouchUpInside:(id)sender;

@end
