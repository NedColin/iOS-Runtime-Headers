/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class CPLRUDictionary, <MPImageCacheDelegate>, NSOperationQueue;

@interface MPImageCache : NSObject <MPImageRequestDelegate> {
    unsigned int _cacheSize;
    CPLRUDictionary *_cachedImages;
    struct dispatch_queue_s { } *_cachedImagesQueue;
    <MPImageCacheDelegate> *_delegate;
    NSOperationQueue *_operationQueue;
    int _retainCount;
}

@property unsigned int cacheSize;
@property <MPImageCacheDelegate> * delegate;
@property BOOL imageRequestsSuspended;

+ (id)sharedImageCache;

- (void)_cacheImage:(id)arg1 forKey:(id)arg2;
- (id)_cachedImageForKey:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_didReceiveMemoryWarningNotification:(id)arg1;
- (void)_enqueueRequest:(id)arg1;
- (id)_imageByApplyingModificationsForCachedImageForRequest:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)_zapCache;
- (void)_zapCachedPlaceholders;
- (unsigned int)cacheSize;
- (id)cachedImageForRequest:(id)arg1;
- (void)cancelAllImageRequests;
- (void)dealloc;
- (id)delegate;
- (id)imageForRequest:(id)arg1 error:(id*)arg2;
- (id)imageForRequest:(id)arg1 fetchIfNecessary:(BOOL)arg2 waitUntilFetched:(BOOL)arg3;
- (id)imageForRequest:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (void)imageRequest:(id)arg1 failedWithError:(id)arg2;
- (void)imageRequest:(id)arg1 loadedImage:(id)arg2;
- (BOOL)imageRequestsSuspended;
- (id)init;
- (void)loadImageForRequest:(id)arg1 asynchronously:(BOOL)arg2 completionHandler:(id)arg3;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setCacheSize:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageRequestsSuspended:(BOOL)arg1;

@end