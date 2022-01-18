#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, VZBVideoPlayerState) {
    VZBVideoPlayerStateIdle,
    VZBVideoPlayerStateStarted,
    VZBVideoPlayerStatePlaying,
    VZBVideoPlayerStatePaused,
    VZBVideoPlayerStateBuffering,
};

@interface VZBVideoStatus : NSObject

@property (nonatomic, strong, readonly) NSString*_Nullable guid;
@property (nonatomic, strong, readonly) NSString*_Nullable title;
@property (nonatomic, strong, readonly) NSString*_Nullable subTitle;
@property (nonatomic, strong, readonly) NSString*_Nullable imageURL;
@property (nonatomic, assign, readonly) NSTimeInterval streamPosition;
@property (nonatomic, assign, readonly) NSTimeInterval streamDuration;
@property (nonatomic, assign, readonly) BOOL isStreamLive;
@property (nonatomic, assign, readonly) VZBVideoPlayerState playerState;
@property (nonatomic, assign, readonly) BOOL isAdPlaying;

- (instancetype _Nonnull )initWithGuid:(NSString*_Nullable)guid
                       title:(NSString*_Nullable)title
                    subtitle:(NSString*_Nullable)subtitle
                    imageURL:(NSString*_Nullable)imageURL
              streamPosition:(NSTimeInterval)streamPosition
              streamDuration:(NSTimeInterval)streamDuration
                isStreamLive:(BOOL)isStreamLive
                 playerState:(VZBVideoPlayerState)playerState
                 isAdPlaying:(BOOL)isAdPlaying;

@end
