#ifndef queue
#define queue

#include <stdio.h>
#include <stdlib.h>

/* 
 * Node structure for linked list
 */
typedef struct node {
    int data;
    struct node *link;
} node;

/* 
 * Add element to the queue
 * addq( &front_pointer, &rear_pointer, data)
 */
void addq(node **, node **, int);

/* 
 * Delete element from the queue
 * Returns the element removed
 * delq( &front_pointer, &rear_pointer);
 */
int delq(node **, node **);

/* 
 * Displays the content of the queue
 * displayq( front_pointer ) 
 */
void displayq(node *);

/* 
 * Count the number of elements in the queue
 * countq(front_pointer)
 */
int countq(node *);

#endif