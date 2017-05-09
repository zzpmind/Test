/* Generated by RuntimeBrowser.
 */

@protocol OKWidgetProtocol <NSObject>

@required

- (void)applyLayoutSettings;
- (void)applySettingsIfNeeded;
- (OKPageViewController *)pageViewController;
- (BOOL)prepareForDisplay;
- (void)prepareForMode:(unsigned int)arg1;
- (void)prepareForRefresh;
- (void)prepareForReload;
- (BOOL)prepareForUnload;
- (BOOL)prepareForWarmup;
- (void)setNeedsApplySettings;
- (void)setNeedsPrepare;
- (void)setPageViewController:(OKPageViewController *)arg1;

@optional

- (void)updateWithMotionTiltRotationX:(float)arg1 tiltRotationY:(float)arg2 tiltRotationZ:(float)arg3;
- (void)updateWithParallaxTranslationX:(float)arg1 translationY:(float)arg2;

@end
