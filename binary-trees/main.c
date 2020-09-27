#include "binary-trees.h"

int main(){
    btreenode *root=NULL;
    insert(&root, 10);
    insert(&root, 2);
    insert(&root, 3);
    insert(&root, 7);
    insert(&root, 6);
    insert(&root, 5);
    insert(&root, 4);
    printTreeH(root);
    printTreeV(root);
    printf("\nInorder: ");
    inorder(root);
    printf("\nPreorder: ");
    preorder(root);
    printf("\nPostorder: ");
    postorder(root);

    return 0;
}