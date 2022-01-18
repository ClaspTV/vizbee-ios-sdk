#import <Foundation/Foundation.h>
#import "VZBScreen.h"
#import "VZBVideoClient.h"
#import "VZBVolumeClient.h"

@class VZBDeviceInstance;

@interface VZBSession : NSObject

@property (nonatomic, readonly, strong) VZBScreen* vizbeeScreen;
@property (nonatomic, readonly, strong) VZBVolumeClient* volumeClient;
@property (nonatomic, readonly, strong) VZBVideoClient* videoClient;

- (instancetype)initWithDevice:(VZBDeviceInstance *)device;

/**
 * @brief Sends a custom message to receiver device.
 * @param name event name.
 * @param data payload sent to receiver device. Expected as JSON.
*/
- (void)sendEventWithName:(nonnull NSString *)name
                  andData:(nonnull NSDictionary *)data;

@end
