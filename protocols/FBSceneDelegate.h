/* Generated by RuntimeBrowser.
 */

@protocol FBSceneDelegate <NSObject>

@required

- (void)scene:(FBScene *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)scene:(FBScene *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 oldClientSettings:(FBSSceneClientSettings *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)scene:(void *)arg1 handleUpdateToSettings:(void *)arg2 withTransitionContext:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: FBScene *, FBSSceneSettings *, FBSSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*

@end
