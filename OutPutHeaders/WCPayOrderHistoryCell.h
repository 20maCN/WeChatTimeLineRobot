/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIView, UILabel;

@interface WCPayOrderHistoryCell : XXUnknownSuperclass {
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _feeLabel;
	UILabel* _actualFeeLabel;
	UILabel* _timeLabel;
	UILabel* _stateLabel;
	UIView* _deleteView;
}
@property(retain, nonatomic) UIView* deleteView;
@property(retain, nonatomic) UILabel* stateLabel;
@property(retain, nonatomic) UILabel* timeLabel;
@property(retain, nonatomic) UILabel* actualFeeLabel;
@property(retain, nonatomic) UILabel* feeLabel;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIImageView* iconImageView;
+(float)height;
-(void).cxx_destruct;
-(void)setSomeThingHidenForEdit:(BOOL)edit;
-(void)layoutSubviews;
@end

