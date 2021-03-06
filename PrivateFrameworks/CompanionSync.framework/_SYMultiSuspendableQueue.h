/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYMultiSuspendableQueue : NSObject {
    NSMutableArray * _latestResumeBacktraces;
    NSMutableArray * _latestSuspendBacktraces;
    NSObject<OS_dispatch_queue> * _queue;
    int  _resumeCount;
    unsigned long long  _stateHandle;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int qosClass;
@property (getter=isSuspended, nonatomic, readonly) BOOL suspended;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;

- (void).cxx_destruct;
- (void)async:(id /* block */)arg1;
- (void)barrierAsync:(id /* block */)arg1;
- (void)barrierSync:(id /* block */)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (id)initWithName:(id)arg1 qosClass:(unsigned int)arg2 serial:(BOOL)arg3;
- (id)initWithName:(id)arg1 qosClass:(unsigned int)arg2 serial:(BOOL)arg3 target:(id)arg4;
- (BOOL)isSuspended;
- (id)name;
- (unsigned int)qosClass;
- (void)resume;
- (void)suspend;
- (void)sync:(id /* block */)arg1;
- (id)targetQueue;

@end
