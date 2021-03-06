/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface AssetCollectionInfo : NSObject <NSSecureCoding> {
    NSString * _GUID;
    NSNumber * _height;
    BOOL  _isDeletable;
    BOOL  _isMine;
    BOOL  _isPhotoIris;
    BOOL  _isVideo;
    NSDictionary * _metaData;
    NSString * _personID;
    NSDate * _timestamp;
    NSNumber * _width;
}

@property (nonatomic, readonly, retain) NSString *GUID;
@property (nonatomic, readonly, retain) NSNumber *height;
@property (nonatomic, readonly) BOOL isDeletable;
@property (nonatomic, readonly) BOOL isMine;
@property (nonatomic, readonly) BOOL isPhotoIris;
@property (nonatomic, readonly) BOOL isVideo;
@property (nonatomic, readonly, retain) NSDictionary *metaData;
@property (nonatomic, readonly, retain) NSString *personID;
@property (nonatomic, readonly, retain) NSDate *timestamp;
@property (nonatomic, readonly, retain) NSNumber *width;

+ (BOOL)supportsSecureCoding;

- (id)GUID;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)height;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDeletable;
- (BOOL)isMine;
- (BOOL)isPhotoIris;
- (BOOL)isVideo;
- (id)metaData;
- (id)personID;
- (id)timestamp;
- (id)width;

@end
