/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "MMPackageDownloadMgrExt.h"
#import "MMKernelExt.h"

@class NSDictionary, NSString, NSMutableDictionary, Package;

@interface MMPerformanceDataReportMgr : XXUnknownSuperclass <MMPackageDownloadMgrExt, MMKernelExt> {
	NSMutableDictionary* m_dicCostTimeItems;
	NSMutableDictionary* m_dicCostMemoryItems;
	NSDictionary* m_dicCostTimeReportIdKey;
	NSDictionary* m_dicCostMemoryReportIdKey;
	Package* m_packageDownload;
	unsigned m_uAllTotalCostTimeKey;
	unsigned m_uAllTotalCountKey;
	NSString* m_nsAllDes;
	unsigned m_uDeviceTotalCostTimeKey;
	unsigned m_uDeviceTotalCountKey;
	NSString* m_nsDeviceDes;
	BOOL m_bActive;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)shareInstance;
-(void).cxx_destruct;
-(void)onPackageDownloadFinish:(id)finish package:(id)package;
-(void)onPackageListUpdated:(id)updated;
-(void)onReceiveConfig:(id)config;
-(void)downloadPackage:(id)package;
-(void)onAuthOK;
-(void)updatePackageVersion:(int)version;
-(int)getCurrentPackageVersion;
-(id)getPackageVersionFile;
-(id)getXmlFilePath;
-(void)loadIdKeyInfo;
-(void)getKeyInfo:(XmlReaderNode_t*)info;
-(id)getReportIdKeyEx:(XmlReaderNode_t*)ex;
-(void)reportCostData:(unsigned)data ToIdKey:(unsigned)idKey ToMainKey:(unsigned)mainKey ToKeyRange:(id)keyRange ToRange:(id)range;
-(void)reportCostData:(unsigned)data ToIdKey:(unsigned)idKey ToKeyRange:(id)keyRange ToRange:(id)range;
-(void)reportCostData:(unsigned)data ToCaseId:(unsigned)caseId;
-(void)reportCostMemoryToIdKey:(unsigned)idKey caseID:(unsigned)anId;
-(void)reportCostTimeToIdKey:(unsigned)idKey caseID:(unsigned)anId;
-(void)reportCostMemoryOnKey:(id)key;
-(void)reportCostTimeOnKey:(id)key;
-(void)setCurrentMemoryOnCase:(unsigned)aCase withTag:(id)tag;
-(void)setCurrentTimeOnCase:(unsigned)aCase withTag:(id)tag;
-(void)endLogPerformanceData:(unsigned)data onCase:(unsigned)aCase withTag:(id)tag;
-(void)startLogPerformanceData:(unsigned)data onCase:(unsigned)aCase withTag:(id)tag;
-(void)dealloc;
-(void)registerExtension;
-(void)start;
-(void)stop;
-(void)didBecomeActive;
-(void)willSuspend;
-(id)init;
@end

