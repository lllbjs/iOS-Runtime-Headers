/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIWordSearch : NSObject <TIKeyboardActivityObserving> {
    BOOL  _autoCorrects;
    NSCache * _candidatesCache;
    TIInputMode * _inputMode;
    TIMecabraEnvironment * _mecabraEnvironment;
    TIMecabraWrapper * _mecabraWrapper;
    TIWordSearchOperationGetCandidates * _operation;
    BOOL  _shouldLearnAcceptedCandidate;
    id  _userDictionaryObserver;
}

@property BOOL autoCorrects;
@property (nonatomic, retain) NSCache *candidatesCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) TIInputMode *inputMode;
@property (readonly) struct __Mecabra { }*mecabra;
@property (nonatomic, retain) TIMecabraEnvironment *mecabraEnvironment;
@property (nonatomic, readonly) int mecabraLanguage;
@property (retain) TIMecabraWrapper *mecabraWrapper;
@property (retain) TIWordSearchOperationGetCandidates *operation;
@property BOOL shouldLearnAcceptedCandidate;
@property (readonly) Class superclass;

+ (id)configureUserDictionaryObserver:(id)arg1 previousObserver:(id)arg2;
+ (id)mecabraLearningDictionaryDirectory;
+ (id)newMecabraWrapperWithType:(int)arg1 creationOptions:(unsigned long)arg2;
+ (id)sharedOperationQueue;

- (void)_addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2;
- (void)adaptOfflineToParagraph:(id)arg1 adaptationContext:(id)arg2 timeStamp:(double)arg3;
- (BOOL)addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2;
- (void)adjustEnvironmentOnAction:(int)arg1;
- (BOOL)autoCorrects;
- (id)cachedCandidatesForOperation:(id)arg1;
- (void)cancel;
- (id)candidatesCache;
- (id)candidatesCacheKeyForOperation:(id)arg1;
- (id)candidatesForOperation:(id)arg1;
- (void)clearCache;
- (void)clearLearningDictionary;
- (void)clearLeftDocumentContext;
- (void)clearObservers;
- (void)commitPunctuationSurface:(id)arg1;
- (void)commitSurface:(id)arg1;
- (void)completeOperationsInQueue;
- (void)dealloc;
- (void)declareEndOfSentence;
- (void)dynamicDictionariesRemoved:(id)arg1;
- (void)endInputSession;
- (void)flushDynamicData;
- (void)handleMemoryPressureLevel:(unsigned int)arg1 excessMemoryInBytes:(unsigned int)arg2;
- (id)initTIWordSearchWithInputMode:(id)arg1;
- (id)initTIWordSearchWithInputMode:(id)arg1 mecabraWrapper:(id)arg2;
- (id)inputMode;
- (BOOL)isCancelled;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)lastAcceptedCandidateCorrected;
- (struct __Mecabra { }*)mecabra;
- (unsigned long)mecabraCreationOptions;
- (id)mecabraEnvironment;
- (int)mecabraInputMethodType;
- (int)mecabraLanguage;
- (id)mecabraWrapper;
- (id)operation;
- (void)performAccept:(void*)arg1 isPartial:(BOOL)arg2;
- (void)performOperationAsync:(id)arg1;
- (void)performOperationAsync:(id)arg1 withBackgroundActivityAssertion:(BOOL)arg2;
- (void)releaseBackgroundActivityAssertion;
- (void)resetMecabraEnvironment;
- (void)resetPreviousWord;
- (void)saveLearningDictionary;
- (void)setAutoCorrects:(BOOL)arg1;
- (void)setCandidatesCache:(id)arg1;
- (void)setLanguageModelAdaptationContext:(id)arg1;
- (void)setLanguageModelAdaptationContextWithClientIdentifier:(id)arg1 recipientIdentifier:(id)arg2;
- (void)setLeftDocumentContext:(id)arg1 rightDocumentContext:(id)arg2;
- (void)setMecabraEnvironment:(id)arg1;
- (void)setMecabraWrapper:(id)arg1;
- (void)setOperation:(id)arg1;
- (void)setShouldLearnAcceptedCandidate:(BOOL)arg1;
- (BOOL)shouldLearnAcceptedCandidate;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (void)updateMecabraState;
- (void)updateUserWordEntries;

@end
