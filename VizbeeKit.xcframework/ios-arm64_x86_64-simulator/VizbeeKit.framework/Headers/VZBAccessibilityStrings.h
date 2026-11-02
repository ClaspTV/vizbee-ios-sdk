//
// VZBAccessibilityStrings.h
// VizbeeKit
//
// Copyright © Vizbee. All rights reserved.
//
// Single source of truth for all VoiceOver / accessibility strings in VizbeeKit.
//
// USAGE IN CODE
// -------------
// Call VZBAccessibilityLocalizedString(key) wherever you need a resolved,
// locale-appropriate string:
//
//   button.accessibilityLabel = VZBAccessibilityLocalizedString(kVZBAcc_CastButton_Label);
//
// USAGE IN THEME CONFIGS
// ----------------------
// Prefix any accessibility value with "@loc:" and VZBUIViewStyler will
// resolve it automatically:
//
//   @"accessibilityLabel" : @"@loc:acc_castButton_label"
//
// This keeps theme configs declarative while full i18n stays in this file.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// ---------------------------------------------------------------------------
#pragma mark - Convenience macro
// ---------------------------------------------------------------------------

/// Resolves a localization key through the VizbeeKit bundle.
/// Falls back to the key itself if no translation is found.
#define VZBAccessibilityLocalizedString(key) \
    [VZBAccessibilityStrings localizedStringForKey:(key)]

/// Prefix that marks a theme-config accessibility value as a localization key.
/// VZBUIViewStyler strips this prefix and passes the remainder to
/// VZBAccessibilityLocalizedString() for resolution.
///
/// Resolution order (first match wins):
///   1. VizbeeKit bundle  — VZBAccessibilityLocalizable table  (SDK built-ins)
///   2. Host app bundle   — VZBAccessibilityLocalizable table  (customer overrides)
///   3. Host app bundle   — Localizable table                  (customer convenience)
static NSString * const kVZBAccessibilityLocPrefix = @"@loc:";


// ---------------------------------------------------------------------------
#pragma mark - Cast button
// ---------------------------------------------------------------------------

static NSString * const kVZBAcc_CastButton_Label             = @"acc_castButton_label";
static NSString * const kVZBAcc_CastButton_Connected_Value   = @"acc_castButton_connected_value";
static NSString * const kVZBAcc_CastButton_Connected_Hint    = @"acc_castButton_connected_hint";
static NSString * const kVZBAcc_CastButton_Disconnected_Hint = @"acc_castButton_disconnected_hint";

// ---------------------------------------------------------------------------
#pragma mark - Common UI classes  (maps to VZBCommonThemeConfig "classes" section)
// ---------------------------------------------------------------------------

static NSString * const kVZBAcc_TitledImageView_TitleLabel_Label = @"acc_titledImageView_titleLabel_label";
static NSString * const kVZBAcc_PositionLabel_Hint               = @"acc_positionLabel_hint";
static NSString * const kVZBAcc_DurationLabel_Hint               = @"acc_durationLabel_hint";
static NSString * const kVZBAcc_LiveStreamLabel_Hint             = @"acc_liveStreamLabel_hint";
static NSString * const kVZBAcc_OverlayCloseButton_Label         = @"acc_overlayCloseButton_label";
static NSString * const kVZBAcc_MinimumTrackButton_Label         = @"acc_minimumTrackButton_label";
static NSString * const kVZBAcc_MaximumTrackButton_Label         = @"acc_maximumTrackButton_label";

// ---------------------------------------------------------------------------
#pragma mark - App install card
// ---------------------------------------------------------------------------

static NSString * const kVZBAcc_AppInstall_InstallButton_Label = @"acc_appInstall_installButton_label";

// ---------------------------------------------------------------------------
#pragma mark - Player card
// ---------------------------------------------------------------------------

static NSString * const kVZBAcc_PlayerCard_DeviceNameLabel_Hint      = @"acc_playerCard_deviceNameLabel_hint";
static NSString * const kVZBAcc_PlayerCard_PlayButton_Label          = @"acc_playerCard_playButton_label";
static NSString * const kVZBAcc_PlayerCard_PlayButton_Hint           = @"acc_playerCard_playButton_hint";
static NSString * const kVZBAcc_PlayerCard_PauseButton_Label         = @"acc_playerCard_pauseButton_label";
static NSString * const kVZBAcc_PlayerCard_PauseButton_Hint          = @"acc_playerCard_pauseButton_hint";
static NSString * const kVZBAcc_PlayerCard_StopButton_Label          = @"acc_playerCard_stopButton_label";
static NSString * const kVZBAcc_PlayerCard_StopButton_Hint           = @"acc_playerCard_stopButton_hint";
static NSString * const kVZBAcc_PlayerCard_RewindButton_Label        = @"acc_playerCard_rewindButton_label";
static NSString * const kVZBAcc_PlayerCard_RewindButton_Value        = @"acc_playerCard_rewindButton_value";
static NSString * const kVZBAcc_PlayerCard_FfwdButton_Label          = @"acc_playerCard_ffwdButton_label";
static NSString * const kVZBAcc_PlayerCard_FfwdButton_Value          = @"acc_playerCard_ffwdButton_value";
static NSString * const kVZBAcc_PlayerCard_CaptionsButtonEnabled_Label = @"acc_playerCard_captionsButtonEnabled_label";
static NSString * const kVZBAcc_PlayerCard_CaptionsButtonEnabled_Hint  = @"acc_playerCard_captionsButtonEnabled_hint";
static NSString * const kVZBAcc_PlayerCard_CaptionsButton_Label      = @"acc_playerCard_captionsButton_label";
static NSString * const kVZBAcc_PlayerCard_CaptionsButton_Hint       = @"acc_playerCard_captionsButton_hint";
static NSString * const kVZBAcc_PlayerCard_AudioTrackButton_Label    = @"acc_playerCard_audioTrackButton_label";
static NSString * const kVZBAcc_PlayerCard_AudioTrackButton_Hint     = @"acc_playerCard_audioTrackButton_hint";

// ---------------------------------------------------------------------------
#pragma mark - Unextended player card
// ---------------------------------------------------------------------------

static NSString * const kVZBAcc_UnextendedPlayerCard_ExtendButton_Label = @"acc_unextendedPlayerCard_extendButton_label";

// ---------------------------------------------------------------------------
#pragma mark - Cast bar (mini player)
// ---------------------------------------------------------------------------

static NSString * const kVZBAcc_CastBar_PlayButton_Label  = @"acc_castBar_playButton_label";
static NSString * const kVZBAcc_CastBar_PlayButton_Hint   = @"acc_castBar_playButton_hint";
static NSString * const kVZBAcc_CastBar_PauseButton_Label = @"acc_castBar_pauseButton_label";
static NSString * const kVZBAcc_CastBar_PauseButton_Hint  = @"acc_castBar_pauseButton_hint";
static NSString * const kVZBAcc_CastBar_StopButton_Label  = @"acc_castBar_stopButton_label";
static NSString * const kVZBAcc_CastBar_StopButton_Hint   = @"acc_castBar_stopButton_hint";

// ---------------------------------------------------------------------------
#pragma mark - Resolver class
// ---------------------------------------------------------------------------

/// Thin wrapper around NSLocalizedStringFromTableInBundle that targets the
/// VizbeeKit bundle.  All other code should use the macro above rather than
/// calling this directly.
@interface VZBAccessibilityStrings : NSObject

+ (NSString *)localizedStringForKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
