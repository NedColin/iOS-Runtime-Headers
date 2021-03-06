/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@class NSDate;

@interface SPComplicationData : NSObject <NSSecureCoding> {
    double _timeToLive;
    NSDate *_timestamp;
}

@property double timeToLive;
@property(retain) NSDate * timestamp;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTimeToLive:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (double)timeToLive;
- (id)timestamp;

@end
