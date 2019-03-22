#import <LegacyComponents/LegacyComponents.h>

#import <SSignalKit/SSignalKit.h>

@class TGDialogListController;
@class TGContactsController;
@class TGAccountSettingsController;
@class TGRecentCallsController;
@class TGMainTabsController;
@class TGCallStatusBarView;
@class TGVolumeBarView;

@interface TGRootController : TGViewController

@property (nonatomic, strong, readonly) TGMainTabsController *mainTabsController;            ///maintab
@property (nonatomic, strong, readonly) TGDialogListController *dialogListController;       ///回话列表
@property (nonatomic, strong, readonly) TGContactsController *contactsController;          ///联系人列表
@property (nonatomic, strong) TGAccountSettingsController *accountSettingsController;     ///设置
@property (nonatomic, strong, readonly) TGRecentCallsController *callsController;
@property (nonatomic, strong, readonly) TGCallStatusBarView *callStatusBarView;
@property (nonatomic, strong, readonly) TGVolumeBarView *volumeBarView;

- (SSignal *)sizeClass;
- (bool)isSplitView;
- (bool)isSlideOver;
- (CGRect)applicationBounds;

- (bool)callStatusBarHidden;
/*!
 @method
 @abstract push到制定控制器
 @discussion
 @param contentController push的控制器
 @result void
 */
- (void)pushContentController:(UIViewController *)contentController;
/*!
 @method
 @abstract replace到制定控制器
 @discussion 通过setViewController
 @param contentController push的控制器
 @result void
 */
- (void)replaceContentController:(UIViewController *)contentController;
- (void)popToContentController:(UIViewController *)contentController;
- (void)clearContentControllers;
- (NSArray *)viewControllers;

- (void)resetControllers;

- (void)localizationUpdated;

- (bool)isRTL;

@end
