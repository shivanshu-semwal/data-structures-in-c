#include "stack.h"

void push(node **q, int data) {
    node *temp;
    temp = malloc(sizeof(node));
    temp->data = data;
    temp->link = *q;
    *q = temp;
}

int pop(node **q) {
    int data;
    node *temp;

    // if stack is empty
    if (*q == NULL) {
        fprintf(stderr, "warning: stack underflow");
    } else {
        temp = *q;
        data = temp->data;
        *q = temp->link;
        free(temp);
        return data;
    }
}

void display(node *q) {
    while (q != NULL) {
        printf("%d->", q->data);
        q = q->link;
    }
    printf("NULL\n");
    return;
}

int count(node *q) {
    int count = 0;
    while (q != NULL) {
        count++;
        q = q->link;
    }
    return count;
}