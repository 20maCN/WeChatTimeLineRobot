/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class MMTableView, NSString, NSArray;

@interface BraceletRankLikeListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource> {
	MMTableView* _tableView;
	NSArray* _aryLikeUserList;
	BOOL _bFromMsg;
	BOOL _bHasLikeUser;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onLatestRank;
-(void)makeCell:(id)cell AtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)initView;
-(void)initData;
-(void)viewDidLoad;
-(id)initWithRankLikeList:(id)rankLikeList FromMsg:(BOOL)msg;
@end

