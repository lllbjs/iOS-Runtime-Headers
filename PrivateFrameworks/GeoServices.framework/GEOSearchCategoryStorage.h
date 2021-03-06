/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchCategoryStorage : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry * _autocompleteEntry;
    GEOPDBrowseCategory * _browseCategory;
}

@property (nonatomic, retain) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, retain) GEOPDBrowseCategory *browseCategory;
@property (nonatomic, readonly) BOOL hasAutocompleteEntry;
@property (nonatomic, readonly) BOOL hasBrowseCategory;

- (id)autocompleteEntry;
- (id)browseCategory;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAutocompleteEntry;
- (BOOL)hasBrowseCategory;
- (unsigned int)hash;
- (id)initWithSearchCategory:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAutocompleteEntry:(id)arg1;
- (void)setBrowseCategory:(id)arg1;
- (void)writeTo:(id)arg1;

@end
