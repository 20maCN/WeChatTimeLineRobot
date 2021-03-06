/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCActionSheetDelegate.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "MMImagePickerManagerDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString, MMTableView;

@interface ChatBackgroundEntranceViewController : MMUIViewController <WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, MMImagePickerManagerDelegate, UIAlertViewDelegate> {
	NSMutableArray* m_rowsData;
	MMTableView* m_tableView;
	NSString* m_username;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* m_username;
@property(retain, nonatomic) MMTableView* m_tableView;
@property(retain, nonatomic) NSMutableArray* m_rowsData;
-(void).cxx_destruct;
-(void)MMImagePickerManagerDidCancel:(id)mmimagePickerManager;
-(void)MMImagePickerManager:(id)manager didFinishPickingImageWithInfo:(id)info;
-(void)showImagePicker:(int)picker;
-(void)onFinishedSelectImage:(id)image fromSource:(int)source;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)popToMessageSessionView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)reloadRowData;
@end

