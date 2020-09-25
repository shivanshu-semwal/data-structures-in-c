#include "../linked-list/linked-list.h"

void merge(node **first, node **second) {
    node *temp = *first;
    while (temp->link != NULL) {
        temp = temp->link;
    }
    temp->link = *second;
}
int main() {
    node *first, *second;
    first = second = NULL;

    // adding elemetns to the first list
    append(&first, 1);
    append(&first, 2);
    append(&first, 3);
    display(first);
    // adding to the second element
    append(&second, 4);
    append(&second, 5);
    append(&second, 6);
    append(&second, 7);
    display(second);
    // merging both
    merge(&first, &second);
    display(first);
    return 0;
}