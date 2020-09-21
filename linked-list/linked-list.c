#include "linked-list.h"

void append(node **q, int data) {
    // append - add node at the end of the linked list
    // create a node
    node *temp;
    temp = malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;

    // if the linked list is empty
    if (*q == NULL) {
        *q = temp;
    }
    // go to end and add node
    else {
        node *t = *q;
        while (t->link != NULL) {
            t = t->link;
        }
        t->link = temp;
    }
}

void addatbeg(node **q, int data) {
    // addatbeg - add new node at the begginning of the linked list
    // create a node
    node *temp;
    temp = malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;

    //add node at beginnning
    temp->link = *q;
    *q = temp;
}

void addafter(node **q, int loc, int data) {
    //addafter - add node after a particular location
    // create a node
    node *temp;
    temp = malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;

    node *t = *q;
    for (int i = 0; i < loc; i++) {
        t = t->link;
        if (t == NULL) {
            fprintf(stderr, "warning: insertion at position %d but not emough elements.\n", loc);
            return;
        }
    }

    temp->link = t->link;
    t->link = temp;
}

int count(node *q) {
    // count number of nodes present in the linked list
    int c = 0;
    while (q != NULL) {
        q = q->link;
        c++;
    }
    return c;
}

void delete (node **q, int data) {
    node *temp = *q, *previous;
    while (temp != NULL) {
        if (temp->data == data) {
            // if the node to be deleted is the first one
            if (temp == *q) {
                *q = (*q)->link; //or *q = temp->link;
                free(temp);
                return;
            } else {
                previous->link = temp->link;
                free(temp);
                return;
            }
        } else {
            previous = temp;
            temp = temp->link;
        }
    }
    fprintf(stderr, "warning: element with given data not present");
    return;
}

void display(node *q) {
    node *temp = q;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->link;
    }
    printf("NULL\n");
}