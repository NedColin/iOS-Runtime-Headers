/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSNumber;

@interface SALocalSearchGetNavigationStatus : SABaseClientBoundCommand {
}

@property(copy) NSNumber * getRoute;
@property(copy) NSURL * targetAppId;

+ (id)getNavigationStatus;
+ (id)getNavigationStatusWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)getRoute;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setGetRoute:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;

@end