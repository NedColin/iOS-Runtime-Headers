/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSDateFormatter, NSMutableDictionary, NSString;

@interface CKSQLite : NSObject {
    BOOL _corrupt;
    NSDateFormatter *_dateFormatter;
    struct sqlite3 { } *_db;
    BOOL _hasMigrated;
    NSString *_objectClassPrefix;
    unsigned int _openCount;
    NSString *_path;
    NSString *_schema;
    NSString *_schemaVersion;
    NSMutableDictionary *_statementsBySQL;
    long _userVersion;
}

@property BOOL corrupt;
@property(retain) NSDateFormatter * dateFormatter;
@property struct sqlite3 { }* db;
@property(readonly) BOOL hasMigrated;
@property(readonly) BOOL isOpen;
@property(retain) NSString * objectClassPrefix;
@property unsigned int openCount;
@property(readonly) NSString * path;
@property(readonly) NSString * schema;
@property(readonly) NSString * schemaVersion;
@property(readonly) NSMutableDictionary * statementsBySQL;
@property long userVersion;

- (void).cxx_destruct;
- (id)_boxedPropertyDictionary:(id)arg1 forObjCClass:(id)arg2;
- (id)_boxedValue:(id)arg1 forObjcCProperty:(id)arg2;
- (id)_createSchemaHash;
- (void)_periodicVacuum;
- (id)_tableNameForClass:(Class)arg1;
- (id)allTableNames;
- (void)analyze;
- (void)begin;
- (void)close;
- (BOOL)corrupt;
- (id)creationDate;
- (id)dateFormatter;
- (id)datePropertyForKey:(id)arg1;
- (struct sqlite3 { }*)db;
- (long)dbUserVersion;
- (void)dealloc;
- (void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (void)dropAllTables;
- (void)end;
- (void)executeSQL:(id)arg1;
- (void)executeSQL:(id)arg1 arguments:(void*)arg2;
- (BOOL)hasMigrated;
- (id)initWithPath:(id)arg1 schema:(id)arg2;
- (long long)insertOrReplaceInto:(id)arg1 values:(id)arg2;
- (long long)insertOrReplaceObject:(id)arg1;
- (BOOL)isOpen;
- (long long)lastInsertRowID;
- (id)objectClassPrefix;
- (void)open;
- (unsigned int)openCount;
- (BOOL)openWithError:(id*)arg1;
- (id)path;
- (id)propertyForKey:(id)arg1;
- (void)raise:(id)arg1;
- (void)remove;
- (void)removeAllStatements;
- (void)removePropertyForKey:(id)arg1;
- (void)rollback;
- (id)schema;
- (id)schemaVersion;
- (id)select:(id)arg1 from:(id)arg2;
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4;
- (id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1;
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;
- (unsigned int)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;
- (id)selectObjectOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (void)setCorrupt:(BOOL)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (void)setDb:(struct sqlite3 { }*)arg1;
- (void)setObjectClassPrefix:(id)arg1;
- (void)setOpenCount:(unsigned int)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setUserVersion:(long)arg1;
- (id)statementForSQL:(id)arg1;
- (id)statementsBySQL;
- (long)userVersion;
- (void)vacuum;

@end
