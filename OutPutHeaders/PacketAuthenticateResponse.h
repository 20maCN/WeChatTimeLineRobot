/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSData, NSString;

@interface PacketAuthenticateResponse : WXPBGeneratedMessage {
}
@property(assign, nonatomic) int type;
@property(assign, nonatomic) int version;
@property(retain, nonatomic) NSData* data;
@property(retain, nonatomic) NSString* id;
@property(assign, nonatomic) int status;
@property(assign, nonatomic) int step;
+(void)initialize;
@end

