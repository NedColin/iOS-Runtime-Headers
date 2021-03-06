/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor, UIImage, UIImageView, UIView;

@interface _UISwitchInternalViewNeueStyle1 : UIView <_UISwitchInternalViewProtocol> {
    BOOL _isAlwaysAccessible;
    UIImageView *_knobView;
    UIView *_leftSwitchWellContainerView;
    UIView *_leftSwitchWellView;
    UIImage *_offImage;
    BOOL _on;
    UIImage *_onImage;
    UIColor *_onTintColor;
    BOOL _pressed;
    BOOL _pressedIsHandledByGestureRecognizer;
    UIView *_switchWellContainerView;
    UIView *_switchWellImageViewContainer;
    UIImageView *_switchWellOffImageView;
    UIImageView *_switchWellOnImageView;
    UIView *_switchWellView;
    UIColor *_thumbTintColor;
    UIColor *_tintColor;
    BOOL _useAlternateColor;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL isAlwaysAccessible;
@property(retain) UIImage * offImage;
@property BOOL on;
@property(retain) UIImage * onImage;
@property(retain) UIColor * onTintColor;
@property BOOL pressedIsHandledByGestureRecognizer;
@property(readonly) Class superclass;
@property(retain) UIColor * thumbTintColor;
@property(retain) UIColor * tintColor;
@property BOOL useAlternateColor;

- (void)_accessibilitySettingChanged;
- (id)_accessibleOffImage;
- (id)_accessibleOnImage;
- (void)_cleanUpAfterAnimating;
- (id)_defaultOnTintColor;
- (id)_effectiveOffImage;
- (id)_effectiveOffImageTintColor;
- (id)_effectiveOffTextColor;
- (id)_effectiveOnImage;
- (id)_effectiveOnImageTintColor;
- (id)_effectiveOnTintColor;
- (id)_effectiveThumbImage;
- (id)_effectiveTintColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForLeftAlignmentOfView:(id)arg1;
- (void)_invalidateControl;
- (void)_invalidateKnob;
- (void)_invalidateOnOffImages;
- (void)_invalidateWell;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_knobBoundsPressed:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })_knobPositionOn:(BOOL)arg1 pressed:(BOOL)arg2 forBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)_labelOpacityAnimation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_leftSwitchWellContainerBoundsOn:(BOOL)arg1 pressed:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_leftSwitchWellContainerPositionOn:(BOOL)arg1 pressed:(BOOL)arg2;
- (id)_maskLayerForImageViews;
- (struct CGPoint { float x1; float x2; })_offImagePosition;
- (struct CGPoint { float x1; float x2; })_onImagePosition;
- (void)_orderSubviews;
- (void)_prepareForInteraction;
- (void)_setOn:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
- (void)_setPressed:(BOOL)arg1;
- (void)_setPressed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 shouldAnimateLabels:(BOOL)arg4 completion:(id)arg5;
- (void)_setProgress:(float)arg1;
- (void)_setProgress:(float)arg1 animated:(BOOL)arg2 withDuration:(float)arg3 force:(BOOL)arg4 sendAction:(BOOL)arg5;
- (BOOL)_shouldDrawAccessibly;
- (BOOL)_shouldUseLightTintOverColor:(id)arg1;
- (id)_switchSpringAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 pressed:(BOOL)arg4;
- (id)_switchTrackAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(BOOL)arg3;
- (id)_switchTrackColorAnimationWithFromValue:(id)arg1 toValue:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_switchWellContainerBoundsOn:(BOOL)arg1 pressed:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_switchWellContainerPositionOn:(BOOL)arg1 pressed:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_switchWellPositionOn:(BOOL)arg1 pressed:(BOOL)arg2;
- (void)_transitionImagesToPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_transitionKnobToOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_transitionKnobToPressed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_transitionKnobToPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_transitionWellViewToOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_transitionWellViewToPressed:(BOOL)arg1 animated:(BOOL)arg2;
- (float)_wellBorderWidthPressed:(BOOL)arg1 on:(BOOL)arg2;
- (struct CGColor { }*)_wellColorOn:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAlwaysAccessible;
- (id)offImage;
- (BOOL)on;
- (id)onImage;
- (id)onTintColor;
- (BOOL)pressedIsHandledByGestureRecognizer;
- (void)setIsAlwaysAccessible:(BOOL)arg1;
- (void)setOffImage:(id)arg1;
- (void)setOn:(BOOL)arg1;
- (void)setOnImage:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (void)setPressedIsHandledByGestureRecognizer:(BOOL)arg1;
- (void)setSendAction:(BOOL)arg1;
- (void)setThumbTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUseAlternateColor:(BOOL)arg1;
- (id)thumbTintColor;
- (id)tintColor;
- (BOOL)useAlternateColor;

@end
