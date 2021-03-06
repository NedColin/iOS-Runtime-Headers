/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPIdentifier, CKDPShareIdentifier, NSData;

@interface CKDPLikedId : PBCodable <NSCopying> {
    CKDPIdentifier *_commentIdentifier;
    NSData *_itemId;
    CKDPShareIdentifier *_shareIdentifier;
}

@property(retain) CKDPIdentifier * commentIdentifier;
@property(readonly) BOOL hasCommentIdentifier;
@property(readonly) BOOL hasItemId;
@property(readonly) BOOL hasShareIdentifier;
@property(retain) NSData * itemId;
@property(retain) CKDPShareIdentifier * shareIdentifier;

- (void).cxx_destruct;
- (id)commentIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCommentIdentifier;
- (BOOL)hasItemId;
- (BOOL)hasShareIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)itemId;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCommentIdentifier:(id)arg1;
- (void)setItemId:(id)arg1;
- (void)setShareIdentifier:(id)arg1;
- (id)shareIdentifier;
- (void)writeTo:(id)arg1;

@end
