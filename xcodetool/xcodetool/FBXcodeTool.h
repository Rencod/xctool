
#import <Foundation/Foundation.h>

@interface FBXcodeTool : NSObject

@property (nonatomic, retain) NSFileHandle *standardOutput;
@property (nonatomic, retain) NSFileHandle *standardError;
@property (nonatomic, retain) NSArray *arguments;
@property (nonatomic, assign) int exitStatus;

- (void)run;

@end
