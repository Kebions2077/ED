#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define MAX 10

int pilha [MAX];
int topo= -1;

void push(int x ){
    if(topo==MAX-1){
        fprintf(stderr,"Pilha cheia\n");
        exit(1);
    }
    else{
        topo++;
        pilha[topo]=x;
    }
}
int pop(void){
if(topo==-1){
        fprintf(stderr,"Pilha vazia\n");
exit(1);
}
else {
    return pilha[topo--];
}
}

void show(void){
int z;
printf("--------------PILHA----------------\n");
    for(z=0;z<=topo;z++){
            printf("elemento:%i [%i]\n",z,pilha[z]);
        }
        printf("\n-------------------------------\n");

}

void destroy(void){
    int u;
    for(u=0;u<=topo;u++){
    pop();
    }
    topo=-1;
}
