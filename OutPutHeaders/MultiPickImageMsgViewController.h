/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MultiPickImagePanelDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WeChat-Structs.h"
#import "MultiImageScrollViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "MMFullScreenViewController.h"

@class MultiPickImagePanel, NSDictionary, MMLoadingView, NSString, MultiImageScrollView, NSMutableArray, NSData;
@protocol ImageBrowseDelegate;

@interface MultiPickImageMsgViewController : MMFullScreenViewController <MultiImageScrollViewDelegate, MultiPickImagePanelDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, WCActionSheetDelegate, UIAlertViewDelegate> {
	MultiImageScrollView* pagingScrollView;
	MultiPickImagePanel* m_vPickImagePanel;
	NSDictionary* m_oInitInfo;
	NSData* m_dtImg;
	id<ImageBrowseDelegate> m_delegate;
	MMLoadingView* m_loadingView;
	NSMutableArray* m_arrImageScrollView;
	BOOL _canSendOriginalImage;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL canSendOriginalImage;
@property(assign, nonatomic) __weak id<ImageBrowseDelegate> m_delegate;
-(void).cxx_destruct;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)MultiPickImagePanelDidCancel:(unsigned long)multiPickImagePanel;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)MultiPickImagePanelAddImage;
-(void)MultiPickImagePanelDidFinishPickingImages:(id)multiPickImagePanel;
-(id)GetOriginImage;
-(id)GetImageByIndex:(unsigned long)index;
-(void)AddMediaInfo:(id)info;
-(void)multiImageScrollViewWillBeginDragging;
-(void)onSingleTap:(id)tap;
-(id)imageAtPage:(unsigned long)page;
-(id)viewAtPage:(unsigned long)page frame:(CGRect)frame;
-(void)onSelectPhoto:(id)photo;
-(void)onOperate:(id)operate;
-(void)doCancel;
-(void)showStatusBar;
-(void)stopImageLoading;
-(void)startImageLoading;
-(void)doSelectPhoto;
-(BOOL)interactivePopGestureRecognizerShouldBegin:(id)interactivePopGestureRecognizer;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)initData;
-(void)initView;
-(void)initLoadingView;
-(void)UpdateScrollView;
-(void)initScrollView;
-(void)initNavigationBar;
-(void)OnReturn;
-(BOOL)isCurHDImage;
-(BOOL)isLongOriginImage;
-(id)getImageData;
-(BOOL)isShowHDImageAlert;
-(void)dealloc;
-(id)initWithImageInfo:(id)imageInfo;
@end

