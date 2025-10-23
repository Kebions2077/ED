#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

typedef struct node{
    struct node *left;
    int info;
    struct node *right;
} node;



node* ins(node *root, int x){
    if(root == NULL){
        node *aux= malloc (sizeof(node));
        aux->left=NULL;
        aux->info=x;
        aux->right=NULL;
        return aux;
    }
    if(x<root->info){
        root->left= ins(root->left,x);

    }
    else{
        root->right=ins(root->right,x);

    }
    return root;
}

void show (node *root){
    printf("----------TREE--------------\n");
    if(root!=NULL){
        printf("[%i]", root->info);
        show(root->left);
        show(root->right);
    }
    printf("\n------------------------------\n");
}

