/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedCellHostViewExposure : PBCodable <NSCopying> {
    int  _feedCellHostType;
    struct { 
        unsigned int feedCellHostType : 1; 
    }  _has;
}

@property (nonatomic) int feedCellHostType;
@property (nonatomic) BOOL hasFeedCellHostType;

- (int)StringAsFeedCellHostType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedCellHostType;
- (id)feedCellHostTypeAsString:(int)arg1;
- (BOOL)hasFeedCellHostType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFeedCellHostType:(int)arg1;
- (void)setHasFeedCellHostType:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end