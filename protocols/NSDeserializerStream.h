/* Generated by RuntimeBrowser.
 */

@protocol NSDeserializerStream

@required

- (id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (unsigned int)readAlignedDataSize;
- (void)readData:(void*)arg1 length:(unsigned int)arg2;
- (int)readInt;

@end
