/*
 *  ObjC.h
 *  MachOView
 *
 *  Created by Peter Saghelyi on 17/10/2011.
 *
 */

#import "MachOLayout.h"

typedef std::vector<uint32_t>   PointerVector;
typedef std::vector<uint64_t>   Pointer64Vector;

@interface MachOLayout (ObjC)

- (MVNode *)createObjCCFStringsNode:(MVNode *)parent
                            caption:(NSString *)caption
                           location:(NSUInteger)location
                             length:(NSUInteger)length;

- (MVNode *)createObjCCFStrings64Node:(MVNode *)parent
                              caption:(NSString *)caption
                             location:(NSUInteger)location
                               length:(NSUInteger)length;

- (MVNode *)createObjCImageInfoNode:(MVNode *)parent
                            caption:(NSString *)caption
                           location:(NSUInteger)location
                             length:(NSUInteger)length;

- (MVNode *)createObjCModulesNode:(MVNode *)parent
                          caption:(NSString *)caption
                         location:(NSUInteger)location
                           length:(NSUInteger)length;

- (MVNode *)createObjCClassExtNode:(MVNode *)parent
                           caption:(NSString *)caption
                          location:(NSUInteger)location
                            length:(NSUInteger)length;

- (MVNode *)createObjCProtocolExtNode:(MVNode *)parent
                              caption:(NSString *)caption
                             location:(NSUInteger)location
                               length:(NSUInteger)length;

- (MVNode *)createObjC2PointerListNode:(MVNode *)parent
                               caption:(NSString *)caption
                              location:(NSUInteger)location
                                length:(NSUInteger)length
                              pointers:(PointerVector &)pointers;

- (MVNode *)createObjC2Pointer64ListNode:(MVNode *)parent
                                 caption:(NSString *)caption
                                location:(NSUInteger)location
                                  length:(NSUInteger)length
                                pointers:(Pointer64Vector &)pointers;

- (MVNode *)createObjC2MsgRefsNode:(MVNode *)parent
                           caption:(NSString *)caption
                          location:(NSUInteger)location
                            length:(NSUInteger)length;

- (MVNode *)createObjC2MsgRefs64Node:(MVNode *)parent
                             caption:(NSString *)caption
                            location:(NSUInteger)location
                              length:(NSUInteger)length;

- (void)parseObjC2ClassPointers:(PointerVector const *)classes
               CategoryPointers:(PointerVector const *)categories
               ProtocolPointers:(PointerVector const *)protocols;

- (void)parseObjC2Class64Pointers:(Pointer64Vector const *)classes
               Category64Pointers:(Pointer64Vector const *)categories
               Protocol64Pointers:(Pointer64Vector const *)protocols;

@end
