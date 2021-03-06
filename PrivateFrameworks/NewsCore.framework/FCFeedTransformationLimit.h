/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationLimit : NSObject <FCFeedTransforming> {
    unsigned int  _limit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int limit;
@property (readonly) Class superclass;

+ (id)transformationWithLimit:(unsigned int)arg1;

- (unsigned int)limit;
- (void)setLimit:(unsigned int)arg1;
- (id)transformFeedItems:(id)arg1;

@end
