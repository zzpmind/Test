/* Generated by RuntimeBrowser.
 */

@protocol TSCHSupportsRendering <NSObject>

@required

- (TSCHChartLayout *)chartLayout;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (BOOL)forceRenderBlankBackground;
- (TSDLayoutGeometry *)geometry;
- (BOOL)is2DRepFor3DChartRep;
- (BOOL)isDrawingIntoPDF;
- (BOOL)renderElements;
- (BOOL)renderElementsShadowOnly;
- (BOOL)renderElementsWithoutShadows;
- (BOOL)renderGrid;
- (BOOL)renderLabels;
- (BOOL)renderReferenceLines;
- (NSIndexSet *)renderSeriesIndexSet;
- (BOOL)renderTrendLinesForSeriesIndex:(unsigned int)arg1;
- (NSIndexSet *)renderValueIndexSetForSeries:(unsigned int)arg1;
- (BOOL)requireSeparateLabelLayer;
- (BOOL)shadowsEnabled;
- (float)viewScale;

@end
