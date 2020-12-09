/*
 *  LinkEdit.h
 *  MachOView
 *
 *  Created by psaghelyi on 20/07/2010.
 *
 */

#import "MachOLayout.h"
@interface MachOLayout (LinkEdit)

- (MVNode *)createRelocNode:(MVNode *)parent
                    caption:(NSString *)caption
                   location:(NSUInteger)location
                     length:(NSUInteger)length
                baseAddress:(uint32_t)baseAddress;

- (MVNode *)createReloc64Node:(MVNode *)parent
                      caption:(NSString *)caption
                     location:(NSUInteger)location
                       length:(NSUInteger)length
                  baseAddress:(uint64_t)baseAddress;

- (MVNode *)createSymbolsNode:parent
                      caption:(NSString *)caption
                     location:(NSUInteger)location
                       length:(NSUInteger)length;

- (MVNode *)createSymbols64Node:parent
                        caption:(NSString *)caption
                       location:(NSUInteger)location
                         length:(NSUInteger)length;

- (MVNode *)createReferencesNode:parent
                         caption:(NSString *)caption
                        location:(NSUInteger)location
                          length:(NSUInteger)length;

- (MVNode *)createISymbolsNode:parent
                       caption:(NSString *)caption
                      location:(NSUInteger)location
                        length:(NSUInteger)length;

- (MVNode *)createISymbols64Node:parent
                         caption:(NSString *)caption
                        location:(NSUInteger)location
                          length:(NSUInteger)length;

- (MVNode *)createTOCNode:parent
                  caption:(NSString *)caption
                 location:(NSUInteger)location
                   length:(NSUInteger)length;

- (MVNode *)createTOC64Node:parent
                    caption:(NSString *)caption
                   location:(NSUInteger)location
                     length:(NSUInteger)length;

- (MVNode *)createModulesNode:parent
                      caption:(NSString *)caption
                     location:(NSUInteger)location
                       length:(NSUInteger)length;

- (MVNode *)createModules64Node:parent
                        caption:(NSString *)caption
                       location:(NSUInteger)location
                         length:(NSUInteger)length;

- (MVNode *)createTwoLevelHintsNode:parent
                            caption:(NSString *)caption
                           location:(NSUInteger)location
                             length:(NSUInteger)length
                              index:(uint32_t)index;

- (MVNode *)createSplitSegmentNode:parent
                           caption:(NSString *)caption
                          location:(NSInteger)location
                            length:(NSUInteger)length
                       baseAddress:(uint64_t)baseAddress;

- (MVNode *)createFunctionStartsNode:parent
                             caption:(NSString *)caption
                            location:(NSUInteger)location
                              length:(NSUInteger)length
                         baseAddress:(uint64_t)baseAddress;

- (MVNode *)createDataInCodeEntriesNode:parent
                                caption:(NSString *)caption
                               location:(NSUInteger)location
                                 length:(NSUInteger)length;

@end
