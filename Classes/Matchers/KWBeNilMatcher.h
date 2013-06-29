//
//  KWBeNilMatcher.h
//  iOSFalconCore
//
//  Created by Luke Redpath on 14/01/2011.
//  Copyright 2011 LJR Software Limited. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KWMatcher.h"

@interface KWBeNilMatcher : KWMatcher

- (void)beNil;

- (void)beNil:(BOOL)matcherHasSubject;
+ (BOOL)verifyNilSubject;

@end
