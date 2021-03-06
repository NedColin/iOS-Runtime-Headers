/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLLocation, CLPlacemarkInternal, CLRegion, NSArray, NSDictionary, NSString;

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding> {
    CLPlacemarkInternal *_internal;
}

@property(copy,readonly) NSString * ISOcountryCode;
@property(copy,readonly) NSDictionary * addressDictionary;
@property(copy,readonly) NSString * administrativeArea;
@property(copy,readonly) NSArray * areasOfInterest;
@property(copy,readonly) NSString * country;
@property(copy,readonly) NSString * inlandWater;
@property(copy,readonly) NSString * locality;
@property(copy,readonly) CLLocation * location;
@property(copy,readonly) NSString * name;
@property(copy,readonly) NSString * ocean;
@property(copy,readonly) NSString * postalCode;
@property(copy,readonly) CLRegion * region;
@property(copy,readonly) NSString * subAdministrativeArea;
@property(copy,readonly) NSString * subLocality;
@property(copy,readonly) NSString * subThoroughfare;
@property(copy,readonly) NSString * thoroughfare;

+ (id)placemarkWithGEOMapItem:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)ISOcountryCode;
- (id)_geoMapItem;
- (id)_initWithGeoMapItem:(id)arg1;
- (id)addressDictionary;
- (id)administrativeArea;
- (id)areasOfInterest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedAddressLines;
- (id)fullThoroughfare;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)initWithPlacemark:(id)arg1;
- (id)inlandWater;
- (id)locality;
- (id)location;
- (id)name;
- (id)ocean;
- (id)postalCode;
- (id)region;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;

@end
