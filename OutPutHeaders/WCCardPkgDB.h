/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WCDataBase, WCDataBaseTable;

@interface WCCardPkgDB : XXUnknownSuperclass {
	WCDataBase* m_db;
	WCDataBaseTable* m_tableCardInfo;
	WCDataBaseTable* m_tableMsgCenter;
}
@property(retain, nonatomic) WCDataBaseTable* m_tableMsgCenter;
@property(retain, nonatomic) WCDataBaseTable* m_tableCardInfo;
@property(retain, nonatomic) WCDataBase* m_db;
-(void).cxx_destruct;
-(void)fixBugForStateFlagInCardInfoTable;
-(void)saveDatabaseVersion:(unsigned)version;
-(unsigned)getDatabaseVersion;
-(id)pathForDatabaseVersion;
-(void)CloseDB;
-(void)FixDatabaseBug;
-(id)DBContext;
-(BOOL)initDB;
-(void)reloadDataBase;
-(void)dealloc;
-(id)init;
-(void)updateStateFlagWithLoacalId:(id)loacalId;
-(id)getAllWCCard;
-(id)getWCCardByCardID:(id)anId;
-(unsigned long)getAvailableWCCardCount;
-(unsigned long)getWCCardCount;
-(BOOL)getNeedBatchGetWCCardIdInfoList:(id)list byMinUpdateTime:(unsigned long)time;
-(BOOL)getNextPageNeedBatchGetWCCardIdInfoList:(id)list byCurMinUpdateTime:(unsigned long)time;
-(BOOL)getFirstPageNeedBatchGetWCCardIdInfoList:(id)list;
-(BOOL)getNextPageWCCardList:(id)list byCurMinUpdateTime:(unsigned long)time;
-(BOOL)getFirstPageWCCardList:(id)list;
-(BOOL)deleteWCCardByLocalCardID:(unsigned long)anId;
-(BOOL)deleteWCCardByCardID:(id)anId;
-(BOOL)insertOrUpdateWCCard:(id)card;
-(BOOL)insertOrUpdateWCCardByAddCardItem:(id)item;
-(BOOL)setConsumedMsgRead:(id)read;
-(BOOL)cleanAllMsg;
-(BOOL)setAllMsgRead;
-(id)getLastMsg;
-(unsigned long)insertWCCardPkgMsg:(id)msg XML:(id)xml;
-(BOOL)deleteWCCardMsgByLocalMsgID:(unsigned long)anId;
-(id)getNextPageMsgListByCurMinUpdateTime:(unsigned long)time HasSmaller:(BOOL*)smaller;
-(id)getFirstPageMsgList;
-(id)getUnreadMsgList;
-(unsigned long)getUnreadMessageCount;
-(unsigned long)getMessageCount;
@end
