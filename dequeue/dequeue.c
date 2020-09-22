#include "dequeue.h"

void addq_at_end(node **front, node **rear, int data) {
    node *temp = malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;

    // if queue is empty
    if (*front == NULL) {
        *front = temp;
    } else {
        (*rear)->link = temp;
    }
    *rear = temp;
}

void addq_at_start(node **front, node **rear, int data) {
    node *temp = malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;

    // if queue is empty
    if (*front == NULL) {
        *front = *rear = temp;
    } else {
        temp->link = *front;
        *front = temp;
    }
}

int delq_at_end(node **front, node **rear) {
    //if queue is empty
    if (*rear == NULL) {
        fprintf(stderr, "warning: dequeue empty.\n");
        return -1;
    } else {
        node *temp, *previous = NULL;
        temp = *front;
        while (temp != *rear) {
            previous = temp;
            temp = temp->link;
        }
        // delete the node
        int data = temp->data;
        free(temp);
        *rear = previous;
        (*rear)->link = NULL;

        // if the queue become empty
        if (*rear == NULL) {
            *front = NULL;
        }
        return data;
    }
}

int delq_at_start(node **front, node **rear) {
    // if queue is empty
    if (*front == NULL) {
        fprintf(stderr, "warning: dequeue empty.\n");
        return -1;
    }
    //delete the node
    node *temp = *front;
    *front = (*front)->link;
    int data = temp->data;
    free(temp);
    if (*front == NULL) {
        *rear = NULL;
    }
    return data;
}

void displayq(node *front) {
    while (front != NULL) {
        printf("%d->", front->data);
        front = front->link;
    }
    printf("NULL\n");
}

int countq(node *front) {
    int count = 0;
    while (front != NULL) {
        count++;
        front = front->link;
    }
    return count;
}