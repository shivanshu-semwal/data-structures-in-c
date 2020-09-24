#ifndef double_linked_list
#define double_linked_list

#include <stdio.h>
#include <stdlib.h>

/* 
 * Node structure for double-linked list
 */
typedef struct dnode {
    int data;
    struct dnode *prev;
    struct dnode *next;
} dnode;

/* 
 * At node at the end
 */
void d_append(dnode **, int);

/* 
 * Add node at the end of the beginning of double-linked list
 */
void d_addatbeg(dnode **, int);

/* 
 * Add a node after  certai element
 * d_addafter(&front, location, data)
 */
void d_addafter(dnode **, int, int);

/* 
 * Display the contents of the double-linked list 
 */
void d_display(dnode *);

/* 
 * Count the number of elemetns in the linked list
 */
int d_count(dnode *);

/* 
 * Delete a node with given data
 */
int d_delete(dnode **, int);

/* 
 * Delete a node at beginning
 */
int d_delete_beg(dnode **);

/* 
 * Delete a node at end
 */
int d_delete_end(dnode **);

#endif