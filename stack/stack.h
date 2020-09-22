#ifndef stack
#define stack

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node;

/* 
 * Push element in the stack
 */
void push(node **, int);

/* 
 * Pop element from stack and return it
 */
int pop(node **);

/* 
 * Displays the stack contents
 */
void display(node *);

/* 
 * Count the number of elements in the stack
 */
int count(node *);

#endif