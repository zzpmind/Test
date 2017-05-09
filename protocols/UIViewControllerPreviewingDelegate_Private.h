/* Generated by RuntimeBrowser.
 */

@protocol UIViewControllerPreviewingDelegate_Private <NSObject>

@optional

- (void)animateRevealWithInteractionProgress:(UIInteractionProgress *)arg1 forPreviewingAtLocation:(struct CGPoint { float x1; float x2; })arg2 inSourceView:(UIView *)arg3 containerView:(UIView *)arg4;
- (void)animateRevealWithInteractionProgress:(UIInteractionProgress *)arg1 forPreviewingAtPosition:(struct CGPoint { float x1; float x2; })arg2 inSourceView:(UIView *)arg3;
- (UIViewController *)committedViewControllerForPreviewViewController:(UIViewController *)arg1;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(BOOL)arg2;
- (void)performCommitTransitionForPreviewViewController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<UIViewControllerTransitioningDelegate> *)previewPresentationTransitioningDelegateForPosition:(struct CGPoint { float x1; float x2; })arg1 inSourceView:(UIView *)arg2;
- (BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)willPresentPreviewViewController:(UIViewController *)arg1 forLocation:(struct CGPoint { float x1; float x2; })arg2 inSourceView:(UIView *)arg3;

@end
