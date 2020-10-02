#include "binary-trees.h"

int main() {
    btreenode *root = NULL;
    int a[] = {11, 9, 13, 8, 10, 12, 14, 15, 7};
    for(int i=0;i<=8;i++){
        insert(&root, a[i]);
    }
    printTreeH(root);
    printf("delete 10\n");
    delete(&root, 10);
    printTreeH(root);
    printf("delete 14\n");
    delete(&root, 14);
    printTreeH(root);
    printf("delete 8\n");
    delete(&root, 8);
    printTreeH(root);
    printf("delete 13\n");
    delete(&root, 13);
    printTreeH(root);
    return 0;
}