/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "BrandSessionMgrExt.h"
#import "BrandArticleSearchControllerDelegate.h"

@class BrandArticleSearchController, NSString, MMTableView;

@interface BrandSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, BrandArticleSearchControllerDelegate, BrandSessionMgrExt> {
	MMTableView* m_tableView;
	BrandArticleSearchController* m_articleSearchController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(id)viewControllerForBrandArticleSearch;
-(void)initSearchBar;
-(void)onBrandSessionAllDeleted;
-(void)handleAllBrandSessionDeleted;
-(void)handleAllBrandSessionDeletedStep2;
-(void)onBrandSessionsChanged;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)deleteSessionOnIndexPath:(id)path;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)viewDidBePoped:(BOOL)view;
-(void)viewDidPop:(BOOL)view;
-(void)viewWillBePoped:(BOOL)view;
-(void)viewWillBePushed:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)initTableView;
-(void)dealloc;
-(id)init;
@end
