/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class UIPDFView, UIScrollView;

@interface UIPDFDocumentLayout : NSObject {
    struct { struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } x1; struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPDFDocument { } *documentRef;
    } documentSize;
    UIPDFView *hostView;
    NSUInteger pageCount;
        } x2; } *pageInfoArray;
    UIScrollView *scrollView;
    NSUInteger zoomPageNumber;
    } zoomRect;
}

@property(readonly) CGSize documentSize;
@property(readonly) NSUInteger pageCount;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })borderRectForPage:(NSUInteger)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })displayRectForPage:(NSUInteger)arg1;
- (void)dispose;
- (struct CGSize { float x1; float x2; })documentSize;
- (void)finalize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fitRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fitWidth:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 atVertical:(float)arg2;
- (id)initWithDocumentRef:(struct CGPDFDocument { }*)arg1 inView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })moveWithinBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSUInteger)pageCount;
- (void)rectangleOfInterestAt:(struct CGPoint { float x1; float x2; })arg1;
- (void)reset;
- (void)setDocumentMetricsAndLayout;
- (void)setRectangles;
- (void)setScrollView:(id)arg1;

@end