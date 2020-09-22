#include "queue.h"

void addq(node **front, node **rear, int data){
    node *temp=malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;

    // if the queue is empty
    if(*front == NULL){
        *front = temp;
    }
    else{
        (*rear)->link = temp;
    }
    *rear = temp;
}

int delq(node **front, node **rear){
    node *temp;
    int data;

    // if queue is empty
    if(*front == NULL){
        fprintf(stderr, "warning: queue is empty");
        return -1;
    }
    else{
        temp = *front;
        *front = (*front)->link;

        data = temp->data;
        free(temp);
        return data;
    }
}

void displayq(node *front) {
    while (front != NULL) {
        printf("%d->", front->data);
        front = front->link;
    }
    printf("NULL\n");
}

int countq(node *front){
    int count;
    while(front!=NULL){
        front = front->link;
        count++;
    }
    return count;
}