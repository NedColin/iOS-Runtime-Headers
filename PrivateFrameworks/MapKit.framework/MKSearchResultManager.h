/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapKit.framework/MapKit
 */

@class NSMutableArray;

@interface MKSearchResultManager : NSObject {
    NSMutableArray *_allSearchResults;
    id _delegate;
    float _viewPortHeight;
    float _viewPortWidth;
    NSMutableArray *_zoomLevelSearchResults;
}

@property id delegate; /* unknown property attribute: V_delegate */
@property float viewPortWidth; /* unknown property attribute: V_viewPortWidth */
@property float viewPortHeight; /* unknown property attribute: V_viewPortHeight */

- (NSInteger)_addSearchResultsToZoomLevels:(id)arg1;
- (void)_compactSearchResultsReferenceLongLat:(struct CGPoint { float x1; float x2; })arg1;
- (void)_filterExistingSearchResultsFromNewResults:(id)arg1;
- (id)addSearchResults:(id)arg1 centerLongLat:(struct CGPoint { float x1; float x2; })arg2 zoomLevel:(NSInteger)arg3;
- (void)clearResults;
- (void)dealloc;
- (id)delegate;
- (id)initWithViewPortSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)isSearchResult:(id)arg1 insideViewPortWithOrigin:(struct CGPoint { float x1; float x2; })arg2 zoomLevel:(NSInteger)arg3;
- (void)removeSearchResults:(id)arg1;
- (void)resultsDeltaForZoomLevel:(NSInteger)arg1 toZoomLevel:(NSInteger)arg2 addResults:(id*)arg3 removeResult:(id*)arg4;
- (id)resultsForZoomLevel:(NSInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewPortHeight:(float)arg1;
- (void)setViewPortWidth:(float)arg1;
- (float)viewPortHeight;
- (float)viewPortWidth;
- (id)visibleResultsInCenterLongLat:(struct CGPoint { float x1; float x2; })arg1 longLatSpan:(struct CGSize { float x1; float x2; })arg2 zoomLevel:(NSInteger)arg3;

@end