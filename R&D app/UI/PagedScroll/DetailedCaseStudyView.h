//
//  DetailedCaseStudyView.h
//  R&D app
//
//  Created by AlexCheetah on 8/13/16.
//  Copyright © 2016 softserve. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UiUtil.h"

@class CaseStudy;

@interface DetailedCaseStudyView : UIView

- (id)initWithCaseStudy:(CaseStudy *)caseStudy;

- (void)updateConstraintsForOrientation:(Orientation)orientation;

@end
