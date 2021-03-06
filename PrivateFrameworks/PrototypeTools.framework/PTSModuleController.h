/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSString, PTSModule, _UISettings;

@interface PTSModuleController : UITableViewController <PTSModuleObserver, PTSRowTableViewCellDelegate> {
    PTSModule *_module;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) _UISettings * settings;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)additionalToolbarItems;
- (id)initWithSettings:(id)arg1;
- (id)initWithSettings:(id)arg1 presentingRow:(id)arg2;
- (void)module:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3;
- (void)module:(id)arg1 didInsertSections:(id)arg2 deleteSections:(id)arg3;
- (void)moduleDidReload:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)settings;
- (void)showActionsForRowTableViewCell:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)updateToolbarItems:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;

@end
