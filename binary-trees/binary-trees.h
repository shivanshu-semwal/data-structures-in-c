#ifndef binary_tree
#define binary_tree

#include <stdio.h>
#include <stdlib.h>
#define COUNT 10

typedef struct btreenode {
    int data;
    struct btreenode *leftchild;
    struct btreenode *rightchild;
} btreenode;

/* 
 * Insert a node in the binary tree
 */
void insert(btreenode **, int);

/* 
 * Inorder traversal - LDR (left-data-right) 
 */
void inorder(btreenode *);

/* 
 * Preorder traversal - DRL (data-left-right) 
 */
void preorder(btreenode *);

/* 
 * Postorder traversal - LRD (left-right-data) 
 */
void postorder(btreenode *);

/* 
 * Prints the tree vertical
 */
void printTreeV(btreenode *);

/* 
 * Print tree hotizontal 
 */
void printTreeH(btreenode *);

/* 
 * Delete a node from binary tree
 */
void delete (btreenode **, int);

/* 
 * search an node with given data
 * return the address of the node found else NULL
 * address of parent 
 * and whether the node is found or node
 * search(root, element_to_search, parent, found)
 */
btreenode *search(btreenode **, int, btreenode **, int *);

#endif