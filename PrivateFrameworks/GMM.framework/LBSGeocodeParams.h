/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGRectangle, LBSUserLocation, NSString;

@interface LBSGeocodeParams : PBCodable {
    NSInteger _addressLinesLimit;
    LBSGRectangle *_boundingBox;
    BOOL _hasAddressLinesLimit;
    BOOL _hasIncludeBoundingBoxes;
    BOOL _includeBoundingBoxes;
    LBSUserLocation *_location;
    NSInteger _numFeatureLimit;
    NSString *_resultLanguage;
}

@property(readonly) BOOL hasAddressLinesLimit; /* unknown property attribute: V_hasAddressLinesLimit */
@property NSInteger addressLinesLimit; /* unknown property attribute: V_addressLinesLimit */
@property(retain) LBSGRectangle *boundingBox; /* unknown property attribute: V_boundingBox */
@property(retain) LBSUserLocation *location; /* unknown property attribute: V_location */
@property(readonly) BOOL hasIncludeBoundingBoxes; /* unknown property attribute: V_hasIncludeBoundingBoxes */
@property BOOL includeBoundingBoxes; /* unknown property attribute: V_includeBoundingBoxes */
@property NSInteger numFeatureLimit; /* unknown property attribute: V_numFeatureLimit */
@property(retain) NSString *resultLanguage; /* unknown property attribute: V_resultLanguage */
@property(readonly) BOOL hasBoundingBox;
@property(readonly) BOOL hasLocation;

- (NSInteger)addressLinesLimit;
- (id)boundingBox;
- (void)dealloc;
- (id)description;
- (BOOL)hasAddressLinesLimit;
- (BOOL)hasBoundingBox;
- (BOOL)hasIncludeBoundingBoxes;
- (BOOL)hasLocation;
- (BOOL)includeBoundingBoxes;
- (id)init;
- (id)location;
- (NSInteger)numFeatureLimit;
- (BOOL)readFrom:(id)arg1;
- (id)resultLanguage;
- (void)setAddressLinesLimit:(NSInteger)arg1;
- (void)setBoundingBox:(id)arg1;
- (void)setIncludeBoundingBoxes:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setNumFeatureLimit:(NSInteger)arg1;
- (void)setResultLanguage:(id)arg1;
- (void)writeTo:(id)arg1;

@end