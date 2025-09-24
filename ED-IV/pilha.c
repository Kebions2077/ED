#include <stdio.h>
#include <stdlib.h>

#define MAX 4
int pilha[MAX];
int topo=-1;

void push(int valor){
    if (topo==MAX-1){
        printf("Stack Overflow\n");
}
    else{
        topo++;
        pilha[topo]=valor;
        printf("Adicionado:[%i]\n",valor);
    }
}
int pop(void){
    if (topo==-1){
        printf("Stack Underflow\n");
        
    }
    else {
        int valor=pilha[topo];
        printf("Removido:[%i]\n",pilha[topo]);
        topo --;
        return pilha[topo];

    }
}
void show(void){
    printf("----------Pilha-----------\n");
    for (int o=0;o<topo;o++){
        printf("[%i]\n",pilha[o]);
    }
    printf("--------------------------\n");
}
void destroy(void){
    for(int q=0;q<topo;q++){
        pop();
        printf("Todos os elementos foram removidos da pilha\n");
    }
    
}
void clear(void){
     #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

}

