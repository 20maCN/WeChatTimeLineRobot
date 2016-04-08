/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "IPreEnterWechatLogicExt.h"

@class NSURL, NSString;

@interface JumpToBizWebviewHandler : MMObject <IPreEnterWechatLogicExt> {
	NSString* _appID;
	NSString* _bundleID;
	NSURL* _infoUrl;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)cancelJumpToBizWebview;
-(void)createWechatJumpToBizWebview;
-(void)onPreEnterWechatDone;
-(void)dealloc;
-(void)startJumpToBizWebview:(id)bizWebview BundleID:(id)anId Info:(id)info;
@end
