/* Generated by RuntimeBrowser.
 */

@protocol HDDataCollectionManagerDelegate <NSObject>

@required

- (BOOL)healthDataReceived:(NSArray *)arg1 provenance:(HDDataOriginProvenance *)arg2 error:(id*)arg3;
- (NSArray *)pluginDataCollectorsForCollectionManager:(HDDataCollectionManager *)arg1;

@end
