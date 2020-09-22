#include "./dequeue.h"

int main(){
    node *front, *rear;
    front = rear = NULL;

    addq_at_end(&front, &rear, 1);
    addq_at_end(&front, &rear, 2);
    addq_at_end(&front, &rear, 3);
    addq_at_end(&front, &rear, 4);
    displayq(front);
    addq_at_start(&front, &rear, 5);
    addq_at_start(&front, &rear, 6);
    addq_at_start(&front, &rear, 7);
    addq_at_start(&front, &rear, 8);
    displayq(front);
    printf("Deleting at end %d\n", delq_at_end(&front, &rear));
    printf("Deleting at end %d\n", delq_at_end(&front, &rear));
    displayq(front);
    printf("Deleting at start %d\n", delq_at_start(&front, &rear));
    printf("Deleting at start %d\n", delq_at_start(&front, &rear));
    displayq(front);
    printf("Number of elements remaining %d\n", countq(front));
    displayq(front);
    return 0;
}