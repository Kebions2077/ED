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
void crescent(node *root){
    printf("----------Crescent Tree------------\n");
    if(root!=NULL){
        crescent(root->left);
        printf("[%i]",root->info);
         crescent(root->right);
}
    printf("--------------------------------------\n");
}
    void decrescent( node *root){
printf("\n----------------Decrescent Tree---------------------\n");

    decrescent( root->right);
    printf("[%i]",root->info);
    decrescent( root ->left);
    }
printf("-------------------------------------------------------\n");
}

