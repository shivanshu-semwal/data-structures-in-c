#include "stack.h"

int main(){
    node *top=NULL;
    push(&top, 1);
    push(&top, 2);
    push(&top, 3);
    push(&top, 4);
    display(top);
    printf("no of elements:: %d\n", count(top));
    printf("Popped %d\n",pop(&top));
    printf("Popped %d\n",pop(&top));
    printf("Popped %d\n",pop(&top));
    display(top);
    printf("Popped %d\n",pop(&top));
    return 0;
}