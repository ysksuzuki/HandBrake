/*  HBDistributedArray.h $

 This file is part of the HandBrake source code.
 Homepage: <http://handbrake.fr/>.
 It may be used under the terms of the GNU General Public License. */

#import <Cocoa/Cocoa.h>

extern NSString *HBDistributedArrayChanged;

/**
 *  Objects in HBDistributedArray
 *  must implement this protocol.
 */
@protocol HBUniqueObject <NSObject>

@property (nonatomic, readonly) NSString *uuid;

@end

/**
 *  HBDistributedArray
 *  a mutable array that share its content between processes.
 *  post a HBDistributedArrayChanged when the content is changed
 *  by another process.
 *
 *  Use beginTransaction and commit to wrap atomic changes to the array.
 *
 *  It is safe to keep a reference to an array object.
 */
@interface HBDistributedArray : NSMutableArray

- (instancetype)initWithURL:(NSURL *)fileURL;

/**
 *  Begin a transaction on the array
 */
- (void)beginTransaction;

/**
 *  Commit the changes and notify
 *  the observers about the changes.
 */
- (void)commit;

@end
