/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUI.framework/CalendarUI
 */

@class CalendarDayAllDayView, CalendarDayBanner, CalendarDayGrid, CalendarDayOccurrenceView, CalendarModel, UIScrollAnimation, UIScroller;

@interface CalendarDayView : UIView <CalendarView> {
    unsigned int _loadingOccurrences : 1;
    unsigned int _allowsOccurrenceSelection : 1;
    unsigned int _allowsDaySwitching : 1;
    unsigned int _putSelectionOnTop : 1;
    CalendarDayAllDayView *_allDayView;
    CalendarDayBanner *_banner;
    double _dayEndGMTOffset;
    double _dayStart;
    double _dayStartGMTOffset;
    CalendarDayGrid *_grid;
    CalendarModel *_model;
    UIScrollAnimation *_scrollAnimation;
    UIScroller *_scroller;
    CalendarDayOccurrenceView *_selectedOccurrenceView;
}

+ (id)navigationTitleForModel:(id)arg1;

- (void)_finishedScrollToSecond;
- (void)_handleOccurrenceViewClick:(id)arg1;
- (void)_occurrencesChanged:(id)arg1;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })_selectedDate;
- (void)_selectedDateChanged:(id)arg1;
- (void)_selectedOccurrenceChanged:(id)arg1;
- (void)calendarDayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2;
- (void)calendarDayBanner:(id)arg1 arrowClicked:(NSInteger)arg2;
- (void)calendarDayOccurrenceViewClicked:(id)arg1;
- (void)cleanUp;
- (void)dealloc;
- (void)filterInOccurrences:(id)arg1 animating:(BOOL)arg2;
- (void)finishedTransitionIn;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeAllOccurrences;
- (void)scrollToAbsoluteSecond:(NSInteger)arg1;
- (void)scrollToSecond:(NSInteger)arg1 animating:(BOOL)arg2;
- (void)setAllowsDaySwitching:(BOOL)arg1;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setModel:(id)arg1;
- (void)setShowsSelectionOnTop:(BOOL)arg1;

@end