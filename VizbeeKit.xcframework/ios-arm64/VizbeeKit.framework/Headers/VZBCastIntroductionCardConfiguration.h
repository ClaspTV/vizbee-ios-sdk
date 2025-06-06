//
// VZBCastIntroductionCardConfiguration.h
// VizbeeKit
//
// Copyright © Vizbee. All rights reserved.
//

#import "VZBCardConfiguration.h"

/**
* Configuration class for customizing the Cast Introduction card UI.
*
* This class extends VZBCardConfiguration to provide specific customization
* options for the card that introduces casting functionality to users. It inherits
* all basic customization properties (title, subtitle, ctaText) from its parent class.
*
* Use this configuration when you want to customize the appearance of the card
* that helps users understand casting features, typically shown to new users
* or when introducing casting capabilities.
*
* @note It is recommended to use cloud configuration instead of API customization
* for card content. API customization should only be used for specific use cases
* that require dynamic content. Cloud configuration provides more flexibility and
* doesn't require app updates for content changes.
*
* @note Important: When providing configuration through the API, all properties must be filled.
* Mixing values between API and cloud configuration is not supported, especially for primitive types.
* This ensures consistency and prevents unexpected behavior when retrieving values.
*
* Example usage:
* ```
* VZBCastIntroductionCardConfiguration *config = [[VZBCastIntroductionCardConfiguration alloc] init];
* config.title = @"Watch on TV";
* config.subtitle = @"Cast your content to the big screen";
* config.ctaText = @"Get Started";
* ```
*/
@interface VZBCastIntroductionCardConfiguration : VZBCardConfiguration

@end
