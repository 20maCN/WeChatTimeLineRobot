/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "IMsgExt.h"
#import "MMService.h"

@class NewArrivalCountData, NSString;

@interface NewArrivalCountMgr : MMService <MMService, IMsgExt> {
	NewArrivalCountData* m_data;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnModMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnDelMsg:(id)msg;
-(void)OnAddMsg:(id)msg MsgWrap:(id)wrap;
-(void)lastMessageChange:(id)change MsgWrap:(id)wrap;
-(void)lastMessageChange:(id)change msgid:(unsigned long)msgid msg:(id)msg;
-(BOOL)clearQQNewArrivalCountByName:(id)name;
-(BOOL)zeroQQNewArrivalCount;
-(unsigned long)getQQNewArrivalCount;
-(id)getQQNewArrivalList;
-(BOOL)zeroSXNewArrivalCount;
-(unsigned long)getSXNewArrivalCount;
-(id)getSXNewArrivalList;
-(BOOL)zeroBottleNewArrivalCount;
-(BOOL)clearBottleNewArrivalCount:(id)count;
-(unsigned long)getBottleNewArrivalCount;
-(id)getBottleNewArrivalList;
-(void)dealloc;
-(id)init;
-(void)zeroQQNewArrivalMsgItem;
-(void)zeroSXNewArrivalMsgItem;
-(void)callExt:(id)ext;
-(void)callBottleExt;
-(void)callQQExt;
-(void)callSXExt;
-(BOOL)loadData;
-(id)getPath;
@end
