

#import <Foundation/Foundation.h>

//---------------------------------------------------------------------------
#pragma SampleAppMenuCommandProtocol

@class SampleAppMenu;

@protocol SampleAppMenuCommandProtocol <NSObject>

- (bool) menuProcess:(SampleAppMenu *) menu command:(int) command value:(bool) value;

@end


#pragma SampleAppMenuItem

@interface SampleAppMenuItem : NSObject
@property (nonatomic, retain) NSString * text;
@property (nonatomic) int command;

- (bool) isON;
- (bool) isRadioButton;
- (bool) isCheckBox;
- (bool) isTextItem;
- (bool) swapSelection;

@end


#pragma SampleAppMenuGroup

@interface SampleAppMenuGroup : NSObject

- (NSString *) title;

- (void) addTextItem:(NSString *)text command:(int) command;

- (void) addSelectionItem:(NSString *)text command:(int) command isSelected:(bool)isSelected;

- (void) setActiveItem:(NSUInteger) indexItem;

- (NSUInteger) nbItems;

@end



#pragma SampleAppMenu

@interface SampleAppMenu : NSObject

@property(nonatomic,retain) NSString * title;

@property(nonatomic,assign) id <SampleAppMenuCommandProtocol> commandProtocol;

+ (SampleAppMenu *)instance;

+ (SampleAppMenu *) prepareWithCommandProtocol:(id<SampleAppMenuCommandProtocol>) commandProtocol title:(NSString *) title;

- (SampleAppMenuGroup *) addGroup:(NSString *) title;

- (SampleAppMenuGroup *) addSelectionGroup:(NSString *) title;

- (NSUInteger) nbGroups;

- (bool) notifyCommand:(int)command value:(bool) value;

- (void) clear;

- (bool)setSelectionValueForCommand:(int ) command value:(bool) value;

// for rendering purpose

- (NSUInteger) nbItemsInGroupIndex:(NSUInteger) index;

- (NSString *) titleForGroupIndex:(NSUInteger) index;

- (SampleAppMenuItem *) itemInGroup:(NSUInteger) indexGroup atIndex:(NSUInteger)indexItem;

- (SampleAppMenuGroup *) groupAtIndex:(NSUInteger) indexGroup;

@end
