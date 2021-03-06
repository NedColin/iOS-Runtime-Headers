/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSError, NSObject<OS_xpc_object>, PLXPCTransaction;

@interface PLDaemonJob : NSObject {
    NSObject<OS_xpc_object> *_connection;
    PLXPCTransaction *_transaction;
    NSObject<OS_xpc_object> *_xpcReply;
}

@property(readonly) BOOL clientWantsReply;
@property(retain,readonly) NSObject<OS_xpc_object> * connection;
@property(retain,readonly) NSError * replyError;
@property(readonly) BOOL replyIsError;
@property NSObject<OS_xpc_object> * xpcReply;

+ (void)runDaemonSideWithXPCEvent:(id)arg1 connection:(id)arg2;

- (void)archiveXPCToDisk:(id)arg1;
- (BOOL)clientWantsReply;
- (id)connection;
- (long long)daemonOperation;
- (void)dealloc;
- (void)encodeToXPCObject:(id)arg1;
- (void)handleReply;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (id)replyError;
- (BOOL)replyIsError;
- (void)run;
- (void)runDaemonSide;
- (void)sendToAssetsd;
- (void)sendToAssetsdWithReply;
- (void)setXpcReply:(id)arg1;
- (BOOL)shouldArchiveXPCToDisk;
- (id)xpcReply;

@end
