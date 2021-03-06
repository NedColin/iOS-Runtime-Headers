/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPVideoControllerProtocol>, MPInlineAudioTransportControls, NSString, UILabel, UIView;

@interface MPInlineAudioOverlay : MPPlaybackControlsView {
    UIView *_backgroundView;
    NSString *_playbackErrorDescription;
    UILabel *_playbackErrorDescriptionLabel;
    UILabel *_streamingLabel;
    int _style;
    MPInlineAudioTransportControls *_transportControls;
    <MPVideoControllerProtocol> *_videoViewController;
}

@property(copy) NSString * playbackErrorDescription;
@property int style;
@property <MPVideoControllerProtocol> * videoViewController;

- (void).cxx_destruct;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameInBackgroundViewForDescriptionLabel:(id)arg1;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (id)_newDescriptionLabel;
- (void)_updateVisiblePartsForAvailableRoutes;
- (void)dealloc;
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)newProgressIndicator;
- (id)playbackErrorDescription;
- (void)reloadView;
- (void)setCurrentTime:(double)arg1;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)setItem:(id)arg1;
- (void)setPlaybackErrorDescription:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setVideoViewController:(id)arg1;
- (int)style;
- (id)videoViewController;

@end
