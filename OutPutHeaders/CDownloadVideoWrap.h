/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSString;

@interface CDownloadVideoWrap : XXUnknownSuperclass {
	NSString* m_nsFromUsrName;
	NSString* m_nsToUsrName;
	unsigned long m_uiLocalID;
	long long m_n64SvrID;
	unsigned long m_uiVideoTotalLen;
	unsigned long m_uiVideoStartPos;
	NSData* m_dtVideo;
	unsigned long m_uiNetwork;
}
@property(assign, nonatomic) unsigned long m_uiNetwork;
@property(retain, nonatomic) NSData* m_dtVideo;
@property(assign, nonatomic) unsigned long m_uiVideoStartPos;
@property(assign, nonatomic) unsigned long m_uiVideoTotalLen;
@property(assign, nonatomic) long long m_n64SvrID;
@property(assign, nonatomic) unsigned long m_uiLocalID;
@property(retain, nonatomic) NSString* m_nsToUsrName;
@property(retain, nonatomic) NSString* m_nsFromUsrName;
-(void).cxx_destruct;
-(id)description;
-(id)init;
@end

