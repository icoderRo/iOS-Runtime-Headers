/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying> {
    struct { 
        unsigned int minZoom : 1; 
    } _has;
    NSString *_labelLanguage;
    NSString *_labelText;
    unsigned int _minZoom;
}

@property (nonatomic, readonly) BOOL hasLabelLanguage;
@property (nonatomic, readonly) BOOL hasLabelText;
@property (nonatomic) BOOL hasMinZoom;
@property (nonatomic, retain) NSString *labelLanguage;
@property (nonatomic, retain) NSString *labelText;
@property (nonatomic) unsigned int minZoom;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLabelLanguage;
- (BOOL)hasLabelText;
- (BOOL)hasMinZoom;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)labelLanguage;
- (id)labelText;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minZoom;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMinZoom:(BOOL)arg1;
- (void)setLabelLanguage:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setMinZoom:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end