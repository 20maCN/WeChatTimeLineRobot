/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface WloginErrInfo : XXUnknownSuperclass {
	NSString* sErrorUserAccount;
	unsigned short wErrorCode;
	NSString* sErrorTitle;
	NSString* sErrorMsg;
	unsigned short wErrorAddType;
	NSString* sErrorAdd;
}
@property(copy) NSString* sErrorUserAccount;
@property(copy) NSString* sErrorAdd;
@property(assign) unsigned short wErrorAddType;
@property(copy) NSString* sErrorMsg;
@property(copy) NSString* sErrorTitle;
@property(assign) unsigned short wErrorCode;
-(void)dealloc;
@end

