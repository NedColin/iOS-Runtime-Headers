/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKShareID, NSData, NSString;

@interface CKDModifyShareTokenInfo : NSObject {
    NSString *_baseToken;
    NSData *_encryptedFullTokenData;
    CKShareID *_shareID;
    NSData *_shortSharingTokenHashData;
}

@property(retain) NSString * baseToken;
@property(retain) NSData * encryptedFullTokenData;
@property(retain) CKShareID * shareID;
@property(retain) NSData * shortSharingTokenHashData;

- (void).cxx_destruct;
- (id)baseToken;
- (id)encryptedFullTokenData;
- (void)setBaseToken:(id)arg1;
- (void)setEncryptedFullTokenData:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setShortSharingTokenHashData:(id)arg1;
- (id)shareID;
- (id)shortSharingTokenHashData;

@end
