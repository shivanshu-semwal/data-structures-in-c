#include "double-linked-list.h"

int main() {
    dnode *a = NULL;
    d_append(&a, 1);
    d_append(&a, 2);
    d_append(&a, 3);
    d_append(&a, 4);
    d_display(a);
    printf("Number of elements %d\n", d_count(a));
    d_delete_beg(&a);
    d_delete_beg(&a);
    d_delete_beg(&a);
    d_display(a);
    d_addatbeg(&a, 12);
    d_addafter(&a, 1, 12);
    d_display(a);
    return 0;
}