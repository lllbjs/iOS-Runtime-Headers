/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDebuggingSpecViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIDebuggingInformationViewController, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _flowLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    double  _originalOpacity;
    UIView * _spec;
    NSMutableArray * _specImages;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UICollectionViewFlowLayout *flowLayout;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic) double originalOpacity;
@property (nonatomic, retain) UIView *spec;
@property (nonatomic, retain) NSMutableArray *specImages;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)flowLayout;
- (void)gotDeleteGesture:(id)arg1;
- (void)gotPanGesture:(id)arg1;
- (void)hideImage;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGPoint { double x1; double x2; })origin;
- (float)originalOpacity;
- (void)prepareForMediaBrowser;
- (void)setCollectionView:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalOpacity:(float)arg1;
- (void)setSpec:(id)arg1;
- (void)setSpecImages:(id)arg1;
- (id)spec;
- (id)specImages;
- (BOOL)startMediaBrowserFromViewController:(id)arg1;
- (void)viewDidLoad;

@end