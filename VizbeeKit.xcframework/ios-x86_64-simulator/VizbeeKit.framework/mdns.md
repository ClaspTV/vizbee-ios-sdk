### How to test/verify logs of MDNSScanner when there are no devices to be discovered by MDNS(Bonjour):
* Install `Discovery` app from AppStore on your iPhone or `Service Browser` from PlayStore on your Android phone
* Open System Preferences on your MAC machine and go to Sharing, then enable "Remote Login"
* Open Discovery app on iPhone or `Service Browser` on Android
* Find the service `_ssh._tcp`. (SSH Remote Login)
* Update the service list in VZBMDNSScanner
        
        _mdnsSearchStringsAndBrowsers = [NSMutableDictionary dictionaryWithDictionary:@{
                                          [VZBServiceType AIRPLAY].searchString :  [[NSNetServiceBrowser alloc] init],
                                          [VZBServiceType VIZIOCAST].searchString : [[NSNetServiceBrowser alloc] init]
                                          "_ssh._tcp." : [[NSNetServiceBrowser alloc] init]
                                          }];`
                                          
* Monitor the logs from Console by filtering with VZBDiscoveryManager VZBMDNSScanner VZBDeviceCache
