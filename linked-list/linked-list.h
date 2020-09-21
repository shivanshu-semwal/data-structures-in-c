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
 * Add node at the end of the list
 */
void append(node **, int);

/*
 * Add node at the beginning
 */
void addatbeg(node **, int);

/* 
 * Add node at a certain position
 */
void addafter(node **, int, int);

/* 
 * Delete the node with given data
 */
void delete (node **, int);

/* 
 * Display the contents of the linked list
 */
void display(node *q);

/* 
 * Count the number of nodes in teh linked list
 */
int count(node *q);