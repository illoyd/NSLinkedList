//
//  NSLinkedList.h
//
//  Created by Matt Schettler on 5/30/10.
//  Copyright 2010 mschettler@gmail.com. All rights reserved.
//
//

#import <Foundation/Foundation.h>

typedef struct LNode LNode;

struct LNode {
	id obj;
	LNode *next;
	LNode *prev;
};


@interface NSLinkedList : NSObject {

	LNode *first;
	LNode *last;
	
	unsigned int size;					
	
}

- (id)initWithObject:(id)anObject;		// init the linked list with a single object

- (void)pushBack:(id)anObject;			// add an object to back of list
- (void)pushFront:(id)anObject;			// add an object to front of list
- (void)addObject:(id)anObject;			// same as pushBack
- (void)popBack;						// remove object at end of list
- (void)popFront;						// remove object at front of list
- (void)removeNode:(LNode *)aNode;		// remove a given node
- (void)removeAllObjects;				// clear out the list
- (void)dumpList;						// dumps all the pointers in the list to NSLog


//- (void)replaceObjectAtIndex:(int) withObject:(id);	// replaces object at a given index with the passed object

- (BOOL)containsObject:(id)anObject;	// (YES) if passed object is in the list, (NO) otherwise

- (int)count;							// how many objects are stored


@property (readwrite) LNode *first;
@property (readwrite) LNode *last;

@end



LNode * LNodeMake(id obj, LNode *next, LNode *prev);	// convenience method for creating a LNode
