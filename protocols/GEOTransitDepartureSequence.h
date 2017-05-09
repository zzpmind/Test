/* Generated by RuntimeBrowser.
 */

@protocol GEOTransitDepartureSequence <NSObject>

@required

- (NSArray *)departuresValidForDate:(NSDate *)arg1;
- (NSString *)direction;
- (<GEOTransitDeparture> *)firstDepartureAfterDate:(NSDate *)arg1;
- (<GEOTransitDepartureFrequency> *)firstDepartureFrequencyOnOrAfterDate:(NSDate *)arg1;
- (<GEOTransitDeparture> *)firstDepartureOnOrAfterDate:(NSDate *)arg1;
- (<GEOTransitDeparture> *)firstDepartureValidForDate:(NSDate *)arg1;
- (NSDate *)firstOpenOperatingDateOnOrAfterDate:(NSDate *)arg1;
- (double)frequencyForSortingAtDate:(NSDate *)arg1;
- (<GEOTransitDepartureFrequency> *)frequencyToDescribeAtDate:(NSDate *)arg1;
- (BOOL)hasFrequencyAtDate:(NSDate *)arg1;
- (NSString *)headsign;
- (BOOL)isDepartureDateInactive:(NSDate *)arg1 withReferenceDate:(NSDate *)arg2;
- (BOOL)isLowFrequency;
- (BOOL)isValidForDate:(NSDate *)arg1 inTimeZone:(NSTimeZone *)arg2;
- (<GEOTransitLine> *)line;
- (NSSet *)nextStopIDs;
- (unsigned int)numberOfDeparturesAfterDate:(NSDate *)arg1;
- (NSArray *)operatingHours;
- (NSArray *)operatingHoursForDate:(NSDate *)arg1 inTimeZone:(NSTimeZone *)arg2;

@end
