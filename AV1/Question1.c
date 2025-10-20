#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int pilha[MAX];
int topo=-1;

void push(int x){
    if(topo==MAX -1){
        fprintf(stderr,"Stack Overflow\n");
        exit(1);
    }
    else{
        topo++;
        pilha[topo]=x;
    }
}
int pop(void){
    if(topo==-1){
        fprintf(stderr,"Stack Underflow\n");
    }
    else{
        return pilha[topo--];
    }
}
void show(void){
    printf("---------Stack Content---------\n");
    for(int i=0;i<=topo;i++){
        printf("[%i]\n",pilha[i]);
    }
    printf("------------------------------\n");
}
int main(void){
    push (10);
    push(20);
    push(30);
    show();
    return 0;
}


    

