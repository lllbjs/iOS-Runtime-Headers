/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDemoDynamicViewWidget : NSObject <PXWidget> {
    float  __preferredHeightPhase;
    UIView * __view;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (setter=_setPreferredHeight:, nonatomic) float _preferredHeightPhase;
@property (nonatomic, readonly) UIView *_view;
@property (nonatomic, readonly) BOOL allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) int contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) int contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceModeEnabled, nonatomic) BOOL faceModeEnabled;
@property (nonatomic, readonly) BOOL hasContentForCurrentInput;
@property (nonatomic, readonly) BOOL hasLoadedContentData;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (getter=isSelecting, nonatomic) BOOL selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsFaceMode;
@property (nonatomic, readonly) BOOL supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;

- (void).cxx_destruct;
- (void)_heartBeatIncreaseHeightPhase:(BOOL)arg1;
- (void)_loadView;
- (float)_preferredHeightPhase;
- (void)_setPreferredHeight:(float)arg1;
- (void)_setPreferredHeightPhase:(float)arg1;
- (id)_view;
- (id)contentView;
- (BOOL)hasContentForCurrentInput;
- (id)localizedTitle;
- (float)preferredContentHeightForWidth:(float)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (id)widgetDelegate;

@end
