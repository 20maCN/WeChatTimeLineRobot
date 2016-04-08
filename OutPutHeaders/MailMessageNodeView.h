/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "BaseMessageNodeView.h"


@interface MailMessageNodeView : BaseMessageNodeView {
}
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void)onMenuItemWillHide;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(void)onClick;
-(void)onDelete:(id)aDelete;
-(void)onClearResource;
-(void)onDisappear;
-(void)updateStatus:(id)status;
-(id)getMoreMainInfomationAccessibilityDescription;
-(void)layoutSubviewsInternal;
-(CGSize)sizeForFrame:(CGRect)frame;
-(void)updateBkgImage:(BOOL)image;
@end
