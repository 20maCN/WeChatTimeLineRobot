/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSMutableData;

@interface FBSDKGraphRequestBody : XXUnknownSuperclass {
	NSMutableData* _data;
}
@property(readonly, retain, nonatomic) NSData* data;
+(id)mimeContentType;
-(void).cxx_destruct;
-(void)_appendWithKey:(id)key contentBlock:(id)block;
-(void)appendWithKey:(id)key formValue:(id)value;
-(void)appendUTF8:(id)a8;
-(id)init;
@end

