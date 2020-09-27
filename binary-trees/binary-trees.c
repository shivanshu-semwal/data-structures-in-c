#include "binary-trees.h"

void insert(btreenode **sr, int num) {
    if (*sr == NULL) {
        *sr = malloc(sizeof(btreenode));
        (*sr)->data = num;
        (*sr)->leftchild = NULL;
        (*sr)->rightchild = NULL;
        return;
    } //
    else {
        // use recursion
        if (num < (*sr)->data) {
            insert(&((*sr)->leftchild), num);
        } //
        else {
            insert(&((*sr)->rightchild), num);
        }
    }
    return;
}

void inorder(btreenode *sr) {
    if (sr != NULL) {
        inorder(sr->leftchild);
        printf("%d ", sr->data);
        inorder(sr->rightchild);
    } else {
        // printf("NULL ");
    }
}

void preorder(btreenode *sr) {
    if (sr != NULL) {
        printf("%d ", sr->data);
        postorder(sr->leftchild);
        preorder(sr->rightchild);
    } else {
        // printf("NULL ");
    }
}

void postorder(btreenode *sr) {
    if (sr != NULL) {

        postorder(sr->leftchild);
        postorder(sr->rightchild);
        printf("%d ", sr->data);
    } else {
        // printf("NULL");
    }
}

void printTree1(btreenode *root, int space) {
    // base case
    if (root == NULL){
        space += COUNT;
        for (int i = COUNT; i < space; i++)
            printf(" ");
        printf("(~)\n");
        return;
    }
    space += COUNT;

    printTree1(root->rightchild, space);
    for (int i = COUNT; i < space; i++)
        printf(" "); 
    printf("(%d)\n", root->data);
    printTree1(root->leftchild, space);
}

void printTreeV(btreenode *root){
    printTree1(root, 3);
}

void printTree2(btreenode *tree, int *di, char *depth) {
    printf("(%d)\n", tree->data);
    if (!tree)
        return;
    if (tree->leftchild) {
        printf("%s x--", depth);
        // _push('|', di, depth);
        depth[(*di)++] = ' ';
        depth[(*di)++] = '|';//
        depth[(*di)++] = ' ';
        depth[(*di)++] = ' ';
        depth[(*di)] = 0;

        printTree2(tree->leftchild, di, depth);
        // _pop(di, depth);
        depth[ *di -= 4] = 0;
    }
    else{
        printf("%s x--", depth);
        // _push('|', di, depth);
        depth[(*di)++] = ' ';
        depth[(*di)++] = '|';//
        depth[(*di)++] = ' ';
        depth[(*di)++] = ' ';
        depth[(*di)] = 0;
        printf("(NULL)\n");
        // printTree2(tree->leftchild, di, depth);
        // _pop(di, depth);
        depth[ *di -= 4] = 0; 
    }
    if (tree->rightchild) {
        printf("%s +--", depth);
        // _push(' ', di, depth);
        depth[(*di)++] = ' ';
        depth[(*di)++] = ' ';//
        depth[(*di)++] = ' ';
        depth[(*di)++] = ' ';
        depth[(*di)] = 0;
        printTree2(tree->rightchild, di, depth);
        // _pop(di, depth);
        depth[ *di -= 4] = 0;
    }
    else{
        printf("%s +--", depth);
        // _push(' ', di, depth);
        depth[(*di)++] = ' ';
        depth[(*di)++] = ' ';//
        depth[(*di)++] = ' ';
        depth[(*di)++] = ' ';
        depth[(*di)] = 0;
        printf("(NULL)\n");
        // printTree2(tree->rightchild, di, depth);
        // _pop(di, depth);
        depth[ *di -= 4] = 0;
    }
}

void printTreeH(btreenode *tree) {
    int di = 0;
    char depth[2016] = {0};
    printTree2(tree, &di, depth);
}