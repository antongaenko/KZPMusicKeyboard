//
//  KZPMusicPitchData.h
//  KZPMusicKeyboard
//
//  Created by Matthew Rankin on 6/12/2015.
//  Copyright © 2015 Sudoseng. All rights reserved.
//

#import <Foundation/Foundation.h>
@import KZPUtilities;

@interface KZPMusicPitchData : NSObject

- (instancetype)initWithNoteData:(NSArray *)noteData spellingData:(NSArray *)spellingData;
- (void)addPitch:(NSUInteger)pitch withSpelling:(NSNumber *)spelling;

//
// Access these arrays for processed pitch data generated by the keyboard
//
@property (strong, readonly) NSArray *spellings;
@property (strong, readonly) NSArray *noteValues;
@property (strong, readonly) NSArray *sciNotations;

@end
