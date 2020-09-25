#include "../linked-list/linked-list.h"

void selection_sort(node **start) {
    // four pointers are required to swap the links
    // two for the elements to swap
    // and two for the elements before them
    // p,q,r and s with (r->link = p) and (s->link = q)
    node *p, *q, *r, *s;
    fprintf(stderr, "(debug): declaration of node* p,q,r,s\n");
    p = r = *start; // later r->link will be p
    fprintf(stderr, "(debug): p=*start, r=*start\n");
    while (p->link != NULL) {
        // outer loop
        s = q = p->link; // later s->link will be q
        fprintf(stderr, "(debug): s=p->link, q=s->link\n");
        while (q != NULL) {
            if (p->data > q->data) {
                fprintf(stderr, "(debug): found two elements to swap\n");
                if (p->link == q) {
                    fprintf(stderr, "(debug): they are adjacent elements\n");
                    // adjacent nodes
                    if (p == *start) {
                        fprintf(stderr, "(debug): one of them is the first node\n");
                        // first node is replaced
                        p->link = q->link;
                        q->link = p;

                        // now resetting the pointers
                        node *temp = p;
                        p = q;
                        q = temp;

                        *start = p;
                        r = p;

                        s = q;
                        q = q->link; // incrementing q
                        fprintf(stderr, "(debug): done swapping\n");
                    } //
                    else {
                        fprintf(stderr, "(debug): none of them is starting node\n");
                        p->link = q->link;
                        q->link = p;
                        r->link = q;

                        node *temp = p;
                        p = q;
                        q = temp;

                        s = q;
                        q = q->link; // incrementing q
                        fprintf(stderr, "(debug): done swapping\n");
                    }
                } //
                else {
                    // not adjacent elements
                    fprintf(stderr, "(debug): elements are not adjacent\n");
                    if (p == *start) {
                        fprintf(stderr, "(debug): one of them is the starting element\n");
                        // first node is to be replaced
                        node *temp = q->link;
                        q->link = p->link;
                        p->link = temp;

                        s->link = p;

                        temp = p;
                        p = q;
                        q = temp;

                        s = q;
                        q = q->link;
                        *start = p;
                        fprintf(stderr, "(debug): done swapping\n");
                    } //
                    else {
                        fprintf(stderr, "(debug): none of them is starting node\n");
                        node *temp = q->link;
                        q->link = p->link;
                        p->link = temp;

                        r->link = q;
                        s->link = p;

                        temp = p;
                        p = q;
                        q = temp;

                        s = q;
                        q = q->link;
                        fprintf(stderr, "(debug): done swapping\n");
                    }
                }
            } // element found if
            else {
                fprintf(stderr, "(debug): incrementing q\n");
                s = q;
                q = q->link;
            }
            fprintf(stderr, "(debug): exiting inner loop\n");
        } // inner loop
        fprintf(stderr, "(debug): incrementing p\n");
        r = p;
        p = p->link;
        fprintf(stderr, "(debug): exiting outer loop\n");
    } //ouer loop
}

int main() {
    node *a = NULL;
    append(&a, 1);
    append(&a, 0);
    append(&a, 10);
    append(&a, 3);
    append(&a, 2);
    display(a);

    // now sorting
    selection_sort(&a);

    display(a);
    return 0;
}