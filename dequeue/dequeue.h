#ifndef dequeue
#define dequeue 1

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *link;
} node;

/* 
 * Add a node at the end of the queue
 */
void addq_at_end(node **, node **, int);

/* 
 * Add node at the start of the queue
 */
void addq_at_start(node **, node **, int);

/* 
 * Delete element at the end of the queue
 * and return the deleted element
 */
int delq_at_end(node **, node **);

/* 
 * Delete element at the start of the queue 
 */
int delq_at_start(node **, node **);

/* 
 * Displays the content of the queue 
 */
void displayq(node *);

/* 
 * Count the number of elemnts in the queue
 */
int countq(node *);

#endif