#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

#define MAX 100
#define TAM 50

char pilha[MAX][TAM];
int topo=-1;

void push(char*x){
    if (topo==MAX-1){
            fprintf(stderr,"Stack Overflow\n");
    exit(1);
    }
    else{
        topo++;
        strcpy(pilha[topo],x);
    }
}
char* pop(void){
if(topo==-1){
    fprintf(stderr,"Stack Overflow\n");
    exit(1);
}
else{
        printf("removido:%s\n",pilha[topo]);
    return pilha[topo--];
}
}
void mostrar(void){
    printf("------Conteudo da pilha--------\n");
for(int u=0;u<=topo;u++){
        printf("[%s]\n",pilha[u]);

}
printf("-----------------------------------\n");
}
void destruir(void){
    for(int q=q;q<=topo;q++){
    pop();
}
printf("A pilha foi esvaziada\n");
topo==-1;
}
