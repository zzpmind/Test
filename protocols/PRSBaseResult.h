/* Generated by RuntimeBrowser.
 */

@protocol PRSBaseResult <NSObject, NSCopying, PRSPredictionSupport>

@required

- (NSString *)fbr;
- (NSString *)resultIdentifier;
- (float)resultScore;
- (NSString *)section_header;
- (void)setFbr:(NSString *)arg1;
- (void)setResultIdentifier:(NSString *)arg1;
- (void)setResultScore:(float)arg1;
- (void)setSection_header:(NSString *)arg1;
- (void)setTemplateName:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)templateName;
- (NSString *)title;

@optional

- (NSString *)adam_id;
- (<PRSApp> *)app;
- (NSString *)bundle_id;
- (NSString *)geoUserSessionIDString;
- (unsigned int)geoUserSessionSequenceNumber;
- (double)geoUserSessionStartTime;
- (BOOL)isQuickGlance;
- (int)max_age;
- (int)media_kind;
- (int)placement;
- (BOOL)playable;
- (unsigned int)rank;
- (NSString *)resultBundleID;
- (NSURL *)resultURL;
- (unsigned int)score;
- (void)setAdam_id:(NSString *)arg1;
- (void)setApp:(id <PRSApp>)arg1;
- (void)setBundle_id:(NSString *)arg1;
- (void)setGeoUserSessionIDString:(NSString *)arg1;
- (void)setGeoUserSessionSequenceNumber:(unsigned int)arg1;
- (void)setGeoUserSessionStartTime:(double)arg1;
- (void)setIsQuickGlance:(BOOL)arg1;
- (void)setMax_age:(int)arg1;
- (void)setMedia_kind:(int)arg1;
- (void)setPlacement:(int)arg1;
- (void)setPlayable:(BOOL)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setResultBundleID:(NSString *)arg1;
- (void)setResultURL:(NSURL *)arg1;
- (void)setScore:(unsigned int)arg1;
- (void)setTopHitScore:(int)arg1;
- (void)setType:(NSString *)arg1;
- (int)topHitScore;
- (NSString *)type;

@end
