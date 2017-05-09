/* Generated by RuntimeBrowser.
 */

@protocol SKUIJSITunesStore <JSExport>

@required

- (int)applicationIconBadgeNumber;
- (void)approveInPerson:(NSNumber *)arg1 :(JSValue *)arg2;
- (void)attemptLocalAskToBuyApproval:(NSNumber *)arg1;
- (void)buy:(NSDictionary *)arg1;
- (void)clearToggleStateItems;
- (void)download:(NSDictionary *)arg1;
- (void)exit:(NSDictionary *)arg1;
- (void)findApps:(NSArray *)arg1 :(JSValue *)arg2 :(NSDictionary *)arg3;
- (void)findLibraryItems:(NSArray *)arg1 :(JSValue *)arg2 :(NSDictionary *)arg3;
- (void)findToggleStateForItem:(NSString *)arg1 :(JSValue *)arg2;
- (void)getAdminStatus:(NSDictionary *)arg1 :(JSValue *)arg2;
- (void)getBookSample:(NSDictionary *)arg1;
- (void)getProfilePermissions:(NSDictionary *)arg1 :(JSValue *)arg2;
- (NSString *)hostApp;
- (void)isRemovedSystemApp:(NSString *)arg1 :(JSValue *)arg2;
- (void)launchICloudFamilySettings;
- (void)loadGratisContent:(JSValue *)arg1;
- (void)log:(NSString *)arg1;
- (SKUIJSAppleAccount *)primaryAppleAccount;
- (void)resetStateForActiveDocument;
- (BOOL)resourceExists:(NSString *)arg1;
- (void)restoreRemovedSystemApp:(NSString *)arg1 :(JSValue *)arg2;
- (SKUIJSRestrictions *)restrictions;
- (void)setApplicationIconBadgeNumber:(int)arg1;
- (void)setPreviewOverlay:(IKDOMDocument *)arg1 :(NSDictionary *)arg2;
- (void)updateToggleStateForItem:(NSString *)arg1 toggled:(BOOL)arg2 :(JSValue *)arg3;

@end
