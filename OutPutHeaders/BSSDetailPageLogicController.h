/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IBrandServiceSearchExt.h"

@class BSBusinessContent, NSString;
@protocol BSSDetailPageLogicControllerDelegate;

@interface BSSDetailPageLogicController : XXUnknownSuperclass <IBrandServiceSearchExt> {
	BOOL _isNewSearch;
	BOOL _isLastSearchSuccess;
	id<BSSDetailPageLogicControllerDelegate> _delegate;
	BSBusinessContent* _curContent;
	NSString* _keyword;
	int _resultType;
	unsigned long _entrySrc;
	unsigned _responseTime;
	unsigned long _requestEventID;
	unsigned long long _businessType;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long requestEventID;
@property(assign, nonatomic) unsigned responseTime;
@property(assign, nonatomic) BOOL isLastSearchSuccess;
@property(assign, nonatomic) BOOL isNewSearch;
@property(assign, nonatomic) unsigned long entrySrc;
@property(assign, nonatomic) int resultType;
@property(assign, nonatomic) unsigned long long businessType;
@property(retain, nonatomic) NSString* keyword;
@property(retain, nonatomic) BSBusinessContent* curContent;
@property(assign, nonatomic) __weak id<BSSDetailPageLogicControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)onGetSearchDetailPageResponse:(id)response eventID:(unsigned long)anId;
-(void)handleMovieServiceSelectWithIndexPath:(id)indexPath;
-(void)handleJobServiceSelectWithIndexPath:(id)indexPath;
-(void)handleHouseServiceSecectWithIndexPath:(id)indexPath;
-(void)handleMusicServiceSelectWithIndexPath:(id)indexPath;
-(void)handleUrlTypeServiceSelectWithIndexPath:(id)indexPath;
-(void)handleBrandContactSelectWithIndexPath:(id)indexPath;
-(void)handleProductSelectWithIndexPath:(id)indexPath;
-(void)sendDetailPageDataRequest;
-(void)resetData;
-(void)handleSearchWithKeyWord:(id)keyWord;
-(void)handleTableViewSelecttionWithIndexPath:(id)indexPath;
-(void)handleResultViewLoadMore;
-(BOOL)hasMoreResultData;
-(id)getKeywordList;
-(id)getResultItemAtIndexPath:(id)indexPath;
-(int)numberOfRowsInResult;
-(id)initBSSDetailPageLogicControllerWithResultType:(int)resultType andBusinessType:(unsigned long long)type andKeyword:(id)keyword andLocation:(id)location andEntrySrc:(unsigned long)src;
-(void)dealloc;
@end

