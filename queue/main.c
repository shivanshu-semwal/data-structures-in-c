#include "queue.h"

int main() {
    node *front, *rear;
    front = rear = NULL;

    addq(&front, &rear, 1);
    addq(&front, &rear, 2);
    addq(&front, &rear, 3);
    addq(&front, &rear, 4);
    addq(&front, &rear, 5);
    displayq(front);
    printf("Elements count %d\n", countq(front));
    printf("Enement removed: %d\n", delq(&front, &rear));;
    printf("Enement removed: %d\n", delq(&front, &rear));;
    printf("Enement removed: %d\n", delq(&front, &rear));;
    printf("Enement removed: %d\n", delq(&front, &rear));;
    printf("Enement removed: %d\n", delq(&front, &rear));;
    displayq(front);
    return 0;
}