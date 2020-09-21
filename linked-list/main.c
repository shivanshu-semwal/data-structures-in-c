#include "linked-list.h"

int main() {
    // some demo
    node *head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    display(head);
    delete(&head, 1);
    delete(&head, 2);
    delete(&head, 3);
    display(head);

    addatbeg(&head, 32);
    addafter(&head, 0, 44);
    display(head);
    printf("%d", count(head));

    return 0;
}