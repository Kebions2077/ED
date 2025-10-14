//Nome: Kevin Nogueira Meireles
//Email:kevinmeireles.aluno@unipampa.edu.br

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct no{
float valor;
struct no *prox;
} no;

no *inicio=NULL;


void ins_fim(float x){
no *novo =(no*) malloc(sizeof(no));
if(!novo){
    fprintf(stderr,"Erro de memoria\n");
    return;
}

    novo->valor=x;
    novo->prox=NULL;

    if(inicio ==NULL){
            inicio=novo;}
    else{
        no *temp=inicio;
        while (temp->prox!=NULL){
               temp=temp->prox;};
               temp ->prox=novo;
    }
}
void tira_inicio(void){
if(inicio==NULL){
    fprintf(stderr,"Fila está vazia\n");
   return;
}
no *temp=inicio;
inicio=inicio->prox;
 printf("Removendo: %.2f\n", temp->valor);
free(temp);
}
void mostrar(void){
    clear();
if(inicio==NULL){
    printf("Fila Vazia\n");
    return;
}
printf("---------lista----------\n");
no *temp=inicio;
while(temp !=NULL){
    printf("[%.2f],",temp->valor);
    temp=temp->prox;
}
printf("\n------------------------\n");
}
