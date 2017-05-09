/* Generated by RuntimeBrowser.
 */

@protocol FUChartDataSetDataSource <NSObject>

@required

- (<FUChartPoint> *)dataSet:(FUChartDataSet *)arg1 chartPointForIndex:(unsigned int)arg2;
- (unsigned int)numberOfDataPointsForDataSet:(FUChartDataSet *)arg1;

@optional

- (NSArray *)dataPointsForSet:(FUChartDataSet *)arg1;
- (NSArray *)labelsForSet:(FUChartDataSet *)arg1;

@end
