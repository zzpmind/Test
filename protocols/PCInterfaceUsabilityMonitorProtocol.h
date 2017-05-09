/* Generated by RuntimeBrowser.
 */

@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>

@required

- (<PCInterfaceUsabilityMonitorDelegate> *)delegate;
- (BOOL)isRadioHot;
- (void)setDelegate:(id <PCInterfaceUsabilityMonitorDelegate>)arg1;
- (void)setThresholdOffTransitionCount:(unsigned int)arg1;
- (void)setTrackUsability:(BOOL)arg1;
- (void)setTrackedTimeInterval:(double)arg1;

@end
