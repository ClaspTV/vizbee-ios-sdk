#import <Foundation/Foundation.h>
#import "VZBScreen.h"
#import "VZBVideoClient.h"
#import "VZBVolumeClient.h"
#import "VZBCustomEventHandler.h"

@class VZBDeviceInstance;

@interface VZBSession : NSObject

@property (nonatomic, readonly, strong, nonnull) VZBScreen* vizbeeScreen;
@property (nonatomic, readonly, strong, nonnull) VZBVolumeClient* volumeClient;
@property (nonatomic, readonly, strong, nonnull) VZBVideoClient* videoClient;

- (nonnull instancetype)initWithDevice:(nonnull VZBDeviceInstance *)device;

/**
 * @brief Sends a custom message to receiver device.
 * @param name event name.
 * @param data payload sent to receiver device. Expected as JSON.
*/
- (void)sendEventWithName:(nonnull NSString *)name
                  andData:(nonnull NSDictionary *)data;

/// Registers custom event name with the callback
/// @param eventName Name of the custom event
/// @param eventHandler Callback method to trigger on event receive
- (void)registerForEvent:(nonnull NSString *)eventName eventHandler:(nonnull id<VZBCustomEventHandler>)eventHandler;

/// Unregisters custom event name with the callback
/// @param eventName Name of the custom event
/// @param eventHandler Callback method of the event
- (void)unregisterForEvent:(nonnull NSString *)eventName eventHandler:(nonnull id<VZBCustomEventHandler>)eventHandler;

/// Called when a custom event is received
/// @param event custom event object
- (void)onEvent:(nonnull VZBCustomEvent *)event;

@end
