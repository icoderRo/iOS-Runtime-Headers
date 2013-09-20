/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAMCameraRollSpec, DeferredFrameworkLoader;

@interface DeferredPUApplicationCameraViewController : PLApplicationCameraViewController {
    DeferredFrameworkLoader *_deferredLoader;
    CAMCameraRollSpec *_spec;
}

@property(retain) DeferredFrameworkLoader * deferredLoader;
@property(retain) CAMCameraRollSpec * spec;

- (id)_initWithSessionID:(id)arg1 usesCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3;
- (BOOL)_navigationControllerShouldCrossFadeBottomBars:(id)arg1;
- (void)dealloc;
- (id)deferredLoader;
- (BOOL)definesPresentationContext;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 startPreviewImmediately:(BOOL)arg2;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 usesCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3;
- (id)navigationController:(id)arg1 animatorForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerUsingAnimator:(id)arg2;
- (id)newAlbumNavigationControllerForAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1 withAlbum:(struct NSObject { Class x1; }*)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)setDeferredLoader:(id)arg1;
- (void)setSpec:(id)arg1;
- (id)spec;

@end