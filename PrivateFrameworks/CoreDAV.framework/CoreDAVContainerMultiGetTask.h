/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask {
    Class _appSpecificDataItemClass;
    char *_appSpecificDataProp;
    char *_appSpecificMultiGetCommand;
    char *_appSpecificNamespace;
    NSSet *_hrefs;
}

@property <CoreDAVContainerMultiGetTaskDelegate> *delegate;

- (id)_initWithHREFs:(id)arg1 atRelativeURI:(id)arg2 appSpecificDataItemClass:(Class)arg3;
- (void)dealloc;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithHREFs:(id)arg1 atRelativeURI:(id)arg2 appSpecificDataItemClass:(Class)arg3;
- (BOOL)processData:(id)arg1 withParser:(id)arg2;
- (id)requestBody;

@end