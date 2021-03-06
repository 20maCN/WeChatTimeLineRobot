/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "IRsaCertMgrExt.h"
#import "IDCHostMgrExt.h"

@class NSString, NSMutableDictionary;
@protocol WCAccountBindPhoneForRegCGIDelegate;

@interface WCAccountBindPhoneForRegCGI : MMObject <IDCHostMgrExt, IRsaCertMgrExt> {
	id<WCAccountBindPhoneForRegCGIDelegate> _delegate;
	NSMutableDictionary* _dicEventID;
	int _accountRegMode;
	NSString* _clientSeqID;
	NSString* _currentUserName;
	unsigned long _nextAuthType;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* clientSeqID;
@property(retain, nonatomic) NSString* currentUserName;
-(void).cxx_destruct;
-(void)BindMobileAgain:(id)again;
-(void)RSAProtobufMessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)handleRespForBindMobile:(id)bindMobile;
-(BOOL)checkForgetPwdVerifyCode:(id)code verifyCode:(id)code2;
-(BOOL)checkSafeDeviceVerifyCode:(id)code authTicket:(id)ticket verifyCode:(id)code3;
-(BOOL)checkLoginVerifyCode:(id)code verifyCode:(id)code2;
-(BOOL)checkRegVerifyCode:(id)code verifyCode:(id)code2;
-(BOOL)getForgetPwdVoiceVerifyCode:(id)code languageCode:(id)code2;
-(BOOL)getSafeDeviceVoiceVerifyCode:(id)code authTicket:(id)ticket languageCode:(id)code3;
-(BOOL)getLoginVoiceVerifyCode:(id)code languageCode:(id)code2;
-(BOOL)getRegVoiceVerifyCode:(id)code languageCode:(id)code2;
-(BOOL)getForgetPwdVerifyCode:(id)code;
-(BOOL)getSafeDeviceVerifyCode:(id)code authTicket:(id)ticket;
-(BOOL)getLoginVerifyCode:(id)code;
-(BOOL)getRegVerifyCode:(id)code;
-(BOOL)checkLoginPhoneNumberStatus:(id)status tryCount:(unsigned long)count adjustRet:(unsigned long)ret;
-(BOOL)checkRegPhoneNumberStatus:(id)status tryCount:(unsigned long)count adjustRet:(unsigned long)ret;
-(BOOL)createBindMobileProtobufEvent:(id)event;
-(void)cancelAllEvent;
-(void)removeCGI:(int)cgi;
-(BOOL)isRunningForCGI:(int)cgi;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
@end

