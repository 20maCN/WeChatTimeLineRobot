/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FBSDKURLConnectionDelegate.h"

@class FBSDKURLConnection, NSMutableArray, NSOperationQueue, NSHTTPURLResponse, NSString, FBSDKGraphRequestMetadata;
@protocol FBSDKGraphRequestConnectionDelegate;

@interface FBSDKGraphRequestConnection : XXUnknownSuperclass <FBSDKURLConnectionDelegate> {
	NSString* _overrideVersionPart;
	FBSDKGraphRequestMetadata* _recoveringRequestMetadata;
	unsigned _expectingResults;
	NSOperationQueue* _delegateQueue;
	id<FBSDKGraphRequestConnectionDelegate> _delegate;
	NSHTTPURLResponse* _URLResponse;
	FBSDKURLConnection* _connection;
	NSMutableArray* _requests;
	unsigned _state;
	unsigned long _requestStartTime;
	double _timeout;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long requestStartTime;
@property(assign, nonatomic) unsigned state;
@property(retain, nonatomic) NSMutableArray* requests;
@property(retain, nonatomic) FBSDKURLConnection* connection;
@property(readonly, retain, nonatomic) NSHTTPURLResponse* URLResponse;
@property(assign, nonatomic) double timeout;
@property(assign, nonatomic) id<FBSDKGraphRequestConnectionDelegate> delegate;
+(id)userAgent;
-(void).cxx_destruct;
-(void)facebookURLConnection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;
-(id)accessTokenWithRequest:(id)request;
-(id)errorWithCode:(int)code statusCode:(int)code2 parsedJSONResponse:(id)response innerError:(id)error message:(id)message;
-(id)errorFromResult:(id)result;
-(void)processResultBody:(id)body error:(id)error metadata:(id)metadata;
-(void)completeWithResults:(id)results networkError:(id)error;
-(id)parseJSONOrOtherwise:(id)otherwise error:(id*)error;
-(id)parseJSONResponse:(id)response error:(id*)error statusCode:(int)code;
-(void)completeFBSDKURLConnectionWithResponse:(id)response data:(id)data networkError:(id)error;
-(id)urlStringForSingleRequest:(id)singleRequest forBatch:(BOOL)batch;
-(id)requestWithBatch:(id)batch timeout:(double)timeout;
-(void)appendJSONRequests:(id)requests toBody:(id)body andNameAttachments:(id)attachments;
-(void)appendAttachments:(id)attachments toBody:(id)body addFormData:(BOOL)data;
-(void)addRequest:(id)request toBatch:(id)batch attachments:(id)attachments batchToken:(id)token;
-(void)setDelegateQueue:(id)queue;
-(void)start;
-(void)cancel;
-(void)addRequest:(id)request completionHandler:(id)handler batchParameters:(id)parameters;
-(void)addRequest:(id)request completionHandler:(id)handler batchEntryName:(id)name;
-(void)addRequest:(id)request completionHandler:(id)handler;
-(void)dealloc;
-(id)init;
@end

