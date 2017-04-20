/* Generated by RuntimeBrowser.
 */

@protocol UIInputViewSetPlacementApplicator <NSObject>

@required

+ (<UIInputViewSetPlacementApplicator> *)applicatorForOwner:(id <UIInputViewSetPlacementOwner>)arg1 withPlacement:(UIInputViewSetPlacement *)arg2;

- (BOOL)allConstraintsActive;
- (void)applyChanges:(NSDictionary *)arg1;
- (NSArray *)constraints;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (UIView *)draggableView;
- (void)invalidate;
- (BOOL)isGesture:(UIGestureRecognizer *)arg1 inDraggableView:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })origin;
- (BOOL)preBeginGesture:(UIGestureRecognizer *)arg1 shouldBegin:(BOOL*)arg2;
- (void)prepare;

@end