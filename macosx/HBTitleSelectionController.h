/* HBTitleSelectionController.h

 This file is part of the HandBrake source code.
 Homepage: <http://handbrake.fr/>.
 It may be used under the terms of the GNU General Public License. */

#import <Cocoa/Cocoa.h>

@protocol HBTitleSelectionDelegate <NSObject>

- (void)didSelectIndexes:(NSIndexSet *)indexes;

@end

@interface HBTitleSelectionController : NSWindowController

- (instancetype)initWithTitles:(NSArray *)titles delegate:(id<HBTitleSelectionDelegate>)delegate;

@end
