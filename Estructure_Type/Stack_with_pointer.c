#include <stdio.h>
#include <stdlib.h>

#define MAX 4

typedef struct{
    int cod[MAX];
    int topo;
} pilha;

void start(pilha *p){
    p->topo=-1;
}

void push(pilha *p,int x){
    if(p->topo==MAX -1){
        fprintf(stderr,"Stack overflow");
        exit(1);
    }
    else{
        p->cod[++p->topo]= x;
    }
}
int pop(pilha *p){
    if(p->topo==-1){
        fprintf(stderr,"stack underflow");
        exit(1);
    }
    else{
        return p->cod[p->topo--];
    }
}
void mostrar(pilha*p){
    while (p->topo!=NULL){
        printf("[%i]\n",p->cod);
        p->topo++;
    }
}
int main(void){
    start();
    push(1);
    push(2);
    push(3);
    push(4);
    mostrar();
    return 0;
}