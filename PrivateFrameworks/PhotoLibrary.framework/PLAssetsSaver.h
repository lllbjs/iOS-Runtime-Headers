/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAssetsSaver : NSObject {
}

+ (id)publicAssetsLibraryErrorFromPrivateDomain:(id)arg1 withPrivateCode:(NSInteger)arg2;
+ (id)publicAssetsLibraryErrorFromPrivateError:(id)arg1;
+ (id)sharedAssetsSaver;

- (id)_createWriteImageCompletionBlockWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void*)arg4;
- (id)_createWriteVideoCompletionBlockWithVideoPath:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void*)arg4;
- (void)_requestAccess;
- (void)_requestSemiSynchronousImageFromAsset:(id)arg1 withFormat:(NSInteger)arg2 completionBlock:(id)arg3;
- (void)_saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(id)arg4;
- (void)_saveVideoAtPath:(id)arg1 completionBlock:(id)arg2;
- (void)_terminateAccess;
- (id)createCameraImageWithPath:(id)arg1 thumbnailImage:(id)arg2;
- (void)dealloc;
- (id)defaultExtensionForAssetType:(NSInteger)arg1;
- (id)pathForNewAssetOfType:(NSInteger)arg1 extension:(id)arg2;
- (void)processVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(id)arg3 createPreviewWellImage:(BOOL)arg4 progressStack:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg5 outVideo:(id*)arg6 requestEnqueuedBlock:(id)arg7 completionBlock:(id)arg8;
- (void)queueJobData:(id)arg1 completionBlock:(id)arg2;
- (void)queueJobData:(id)arg1 requestEnqueuedBlock:(id)arg2 completionBlock:(id)arg3 imagePort:(NSUInteger)arg4 previewImagePort:(NSUInteger)arg5;
- (void)regenerateVideoThumbnailsForVideo:(id)arg1 withCreationDate:(id)arg2 progressStack:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg3 completionBlock:(id)arg4;
- (void)requestAsynchronousImageFromAsset:(id)arg1 withFormat:(NSInteger)arg2 completionBlock:(id)arg3;
- (void)requestSynchronousImageFromAsset:(id)arg1 withFormat:(NSInteger)arg2 completionBlock:(id)arg3;
- (void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(id)arg4;
- (void)saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(id)arg4;
- (void)saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionTarget:(id)arg4 completionSelector:(SEL)arg5 contextInfo:(void*)arg6;
- (void)saveVideoAtPath:(id)arg1 completionBlock:(id)arg2;
- (void)saveVideoAtPath:(id)arg1 completionTarget:(id)arg2 completionSelector:(SEL)arg3 contextInfo:(void*)arg4;

@end