/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IMsgExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "MMService.h"

@class NSMutableArray, NSLocale, NSString, NSMutableDictionary, AddressBookArchive;

@interface MMAddressBookMgr : MMService <MessageObserverDelegate, MMService, IMsgExt> {
	NSMutableArray* m_phoneContacts;
	NSMutableDictionary* m_phoneAddressBooks;
	NSMutableDictionary* m_emailAddressBooks;
	AddressBookArchive* m_addressBookArchive;
	BOOL m_isSyningAddressBook;
	BOOL m_isFirstSync;
	BOOL m_bLocalAddressBookChanged;
	BOOL m_bShouldResponeAddressBookChange;
	NSLocale* m_curLocale;
	NSMutableArray* m_countryCodes;
	BOOL m_bTempCanSyncAddressBook;
	void* m_addressBook;
	BOOL m_bHasLoadAddressBook;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_bTempCanSyncAddressBook;
@property(assign, nonatomic) BOOL m_bShouldResponeAddressBookChange;
+(BOOL)isMobileVerifiedForStatic;
+(BOOL)isBindMobile;
+(BOOL)isPhoneUploaded:(id)uploaded;
+(void)InternalLoadMobile:(id)mobile Email:(id)email PhoneContacts:(id)contacts;
+(void)InternalLoadFromDB:(void*)db Mobile:(id)mobile Email:(id)email PhoneContacts:(id)contacts;
+(id)validEmail:(id)email;
+(id)validPhoneNumber:(id)number;
-(void).cxx_destruct;
-(void)BlockLoadAddressMobile:(id)mobile Email:(id)email Status:(unsigned*)status;
-(void*)newBlockAddressBook:(unsigned*)book;
-(id)newContactStore:(unsigned*)store;
-(unsigned long)getAddressBookStatus;
-(void)applicationWillEnterForeground:(id)application;
-(void)OnGetNewXmlMsg:(id)msg Type:(id)type MsgWrap:(id)wrap;
-(void)dealloc;
-(id)getCurCountryCode;
-(id)findCountryWrapFromISOCountryCode:(id)isocountryCode;
-(id)findCountryWrapFromCountryCode:(id)countryCode WithLocaleIdentifier:(id)localeIdentifier;
-(id)getAllCountryCodeForLocaleIdentifier:(id)localeIdentifier;
-(id)findCountryWrapFromCountryCode:(id)countryCode;
-(id)getAllCountryCode;
-(void)setCanSyncAddressBook:(BOOL)book;
-(BOOL)canSyncAddressBook;
-(BOOL)isMobileVerified;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(void)revertLocalAddressBook;
-(void)checkReloadByLocalAddressBookChanged;
-(void)setLocalAddressBookChanged;
-(void)clearLocalSnapshot;
-(void)trySyncAddressBook;
-(void)uploadNewPhones:(id)phones withNewMD5Emails:(id)newMD5Emails;
-(id)getNewMD5Emails;
-(id)getNewPhones;
-(void)updateUploadedList;
-(void)LoadAddressBookArchive;
-(BOOL)SaveAddressBookArchive;
-(id)getPhoneAddressBooks;
-(id)getAddressBooks;
-(id)getPhoneContacts;
-(id)getNickNameForPhone:(id)phone;
-(BOOL)CheckPhoneInAddressBook:(id)addressBook;
-(id)getAddressBookForPhone:(id)phone;
-(void)onServiceInit;
-(id)init;
-(void)removeNotificationCenterObservers;
-(void)addNotificationCenterObservers;
-(void)tryLoad;
-(void)onContactStoreDidChange:(id)onContactStore;
-(void)load;
-(void)doLoadFromDB:(void*)db useBlock:(BOOL)block;
-(void)addToCacheInMainThreadWithPhone:(id)phone email:(id)email phoneContacts:(id)contacts;
-(BOOL)isAddressBookLoaded;
-(void*)newAddressBook;
-(id)newContactStore;
@end
