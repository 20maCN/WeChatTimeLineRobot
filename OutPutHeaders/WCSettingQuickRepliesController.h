/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "WCWatchSettingCommonViewController.h"

@class UIView, NSString, MMTableView, NSArray, MMUILabel, NSMutableArray, UITextField, UITapGestureRecognizer, NSIndexPath;

@interface WCSettingQuickRepliesController : WCWatchSettingCommonViewController <WCActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UITextViewDelegate, WCActionSheetDelegate, UIGestureRecognizerDelegate> {
	MMTableView* _mainTableView;
	MMUILabel* _footerLabel;
	UIView* _replyAddedView;
	UITextField* _textField;
	CGRect _keyboardRect;
	BOOL _edited;
	UITapGestureRecognizer* _hideKeyboardGesture;
	NSArray* _defaultQuickReplies;
	NSIndexPath* _selectedIndexPath;
	float _lastContenOffsetY;
	BOOL _editing;
	NSMutableArray* _quickReplies;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* quickReplies;
-(void).cxx_destruct;
-(void)saveQuickRepliesInFileAndTransferToWatch;
-(void)updateTextField;
-(void)updateFooterLabel;
-(void)setDefaultReply;
-(void)initUI;
-(void)setNavItemWithTitle:(id)title action:(SEL)action;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardDidShow:(id)keyboard;
-(void)updateQuickReplies:(id)replies;
-(void)addQuickReplyAction:(id)action;
-(void)resetQuickRepliesAction:(id)action;
-(void)editingFinishedAction:(id)action;
-(void)editingBeginAction:(id)action;
-(void)hideKeyboardAction:(id)action;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidEndEditing:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(BOOL)textViewShouldBeginEditing:(id)textView;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)viewDidLoad;
-(void)dealloc;
-(id)init;
@end

