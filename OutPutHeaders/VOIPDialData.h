/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, CContact, NSData, NSString;

@interface VOIPDialData : XXUnknownSuperclass {
	NSData* mLocalPid;
	NSData* mLocalCapInfo;
	NSData* mRemotePid;
	NSData* mRemoteCapInfo;
	int mStrategy;
	int mRoomId;
	int mRoomMemberId;
	CContact* mContact;
	NSString* mCaller;
	int mLinkDisconnectHbInterval;
	int mLinkDisconnectHbCnt;
	int mEncryptLength;
	NSData* mClientSigns;
	int mARQStrategy;
	int mARQCacheLen;
	int mARQRttThreshold;
	int mARQUsedRateThreshold;
	int mARQRespRateThreshold;
	NSMutableArray* mRelaySvrIp;
	NSMutableArray* mRelaySvrPort;
	NSMutableArray* mPunchSvrIp;
	NSMutableArray* mPunchSvrPort;
	NSMutableArray* mTcpSvrIp;
	NSMutableArray* mTcpSvrPort;
	int _mDataChannelType;
	long long mRoomKey;
}
@property(assign, nonatomic) int mARQRespRateThreshold;
@property(assign, nonatomic) int mARQUsedRateThreshold;
@property(assign, nonatomic) int mARQRttThreshold;
@property(assign, nonatomic) int mARQCacheLen;
@property(assign, nonatomic) int mARQStrategy;
@property(retain, nonatomic) NSData* mClientSigns;
@property(assign, nonatomic) int mEncryptLength;
@property(assign, nonatomic) int mLinkDisconnectHbCnt;
@property(assign, nonatomic) int mLinkDisconnectHbInterval;
@property(assign, nonatomic) int mDataChannelType;
@property(retain, nonatomic) NSMutableArray* mTcpSvrPort;
@property(retain, nonatomic) NSMutableArray* mTcpSvrIp;
@property(retain, nonatomic) NSMutableArray* mPunchSvrPort;
@property(retain, nonatomic) NSMutableArray* mPunchSvrIp;
@property(retain, nonatomic) NSMutableArray* mRelaySvrPort;
@property(retain, nonatomic) NSMutableArray* mRelaySvrIp;
@property(retain, nonatomic) NSString* mCaller;
@property(retain, nonatomic) CContact* mContact;
@property(assign, nonatomic) long long mRoomKey;
@property(assign, nonatomic) int mRoomMemberId;
@property(assign, nonatomic) int mRoomId;
@property(assign, nonatomic) int mStrategy;
@property(retain, nonatomic) NSData* mRemoteCapInfo;
@property(retain, nonatomic) NSData* mRemotePid;
@property(retain, nonatomic) NSData* mLocalCapInfo;
@property(retain, nonatomic) NSData* mLocalPid;
-(void).cxx_destruct;
-(BOOL)isValidKey;
-(void)reset;
-(void)SetRoomKey:(long long)key;
-(void)SetRoomMemberId:(int)anId;
-(void)SetRoomId:(int)anId;
-(void)dealloc;
-(id)init;
@end
