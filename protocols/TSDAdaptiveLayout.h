/* Generated by RuntimeBrowser.
 */

@protocol TSDAdaptiveLayout

@required

- (struct CGPoint { float x1; float x2; })applyAdaptiveLayoutTo:(TSDLayout *)arg1 info:(NSObject<TSDInfo> *)arg2 offset:(struct CGPoint { float x1; float x2; })arg3;
- (void)beginDynamicAdaptiveLayout;
- (void)endDynamicAdaptiveLayout;
- (BOOL)isSavedShiftForInfo:(NSObject<TSDInfo> *)arg1 equalToOffset:(struct CGPoint { float x1; float x2; })arg2;
- (void)resetLayout:(TSDLayout *)arg1 forInfo:(NSObject<TSDInfo> *)arg2;
- (void)updateRootLayoutShiftFor:(NSObject<TSDInfo> *)arg1 offset:(struct CGPoint { float x1; float x2; })arg2;

@end
