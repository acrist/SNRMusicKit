//
//  SMKAVQueuePlayer.h
//  SNRMusicKit
//
//  Created by Indragie Karunaratne on 2012-08-23.
//  Copyright (c) 2012 Indragie Karunaratne. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import "SMKPlayer.h"

/**
 SMKAVQeuuePlayer is a subclass of AVQueuePlayer
 
 It supports all the formats that OS X itself supports, including MP3, MPEG-4,
 AIFF, WAVE, and AAC as well as HTTP streaming of audio.
 */
@interface SMKAVQueuePlayer : AVQueuePlayer <SMKPlayer>

#pragma mark - SMKPlayer API
@property (nonatomic, copy) void (^finishedTrackBlock)(id<SMKPlayer> player, id<SMKTrack> track, NSError *error);
@property (nonatomic, assign) NSTimeInterval seekTimeInterval;
@property (nonatomic, assign, readonly) NSTimeInterval playbackTime;
@property (nonatomic, assign, readonly) BOOL playing;
@end