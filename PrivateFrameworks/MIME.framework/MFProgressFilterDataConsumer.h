/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface MFProgressFilterDataConsumer : MFBaseFilterDataConsumer {
    unsigned int _currentBytes;
    unsigned int _expectedSize;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;

}

@property(readonly) unsigned int expectedSize;
@property(copy) id progressBlock;

- (int)appendData:(id)arg1;
- (void)dealloc;
- (unsigned int)expectedSize;
- (id)initWithConsumer:(id)arg1 expectedSize:(unsigned int)arg2;
- (id)initWithConsumers:(id)arg1 expectedSize:(unsigned int)arg2;
- (id)progressBlock;
- (void)setProgressBlock:(id)arg1;

@end
