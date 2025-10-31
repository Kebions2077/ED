#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

#define TAM 40 

typedef struct aluno {
    int mat;
    char nome[TAM];
    float nota;
    struct aluno* prox;
} no;

no* coloca(no* lista, int mat, char nome[], float nota){
    no*novo=(no*)malloc(sizeof(no));
    if(novo==NULL){
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    novo->mat=mat;
    strcpy(novo->nome,nome);
    novo->nota=nota;
    novo->prox=lista;

    if(!lista || strcmp(nome, lista->nome)<0){
     novo->prox=lista;
     return novo;
        
    }
    no*atual=lista;
    while(atual->prox !=NULL && strcmp(nome, atual->prox->nome)<0){
        atual=atual->prox;
    }    
    novo->prox=atual->prox;
    atual->prox=novo;
    return lista;

}
no* tira(no* lista, char nome[]){
    if(!lista){
        printf("Lista de alunos está vazia!\n");
        return lista;
    }
    no* atual=lista;
    no* ant=NULL;
    while(atual !=NULL && strcmp(nome, atual->nome)!=0){
        ant=atual;
        atual=atual->prox;
    }
    if(!atual){
        printf("Nenhum aluno com esse nome!\n");
        return lista;
    }
    else{
        ant->prox=atual->prox;
    }
    free(atual);
    return lista;
}
void mostra(no* lista){
    if(!lista){
        printf("Lista vazia!\n");
        return;
    }
    no* atual=lista;
    while(atual !=NULL){
        printf("Matricula: %d\nNome: %s\nNota: %.2f\n", atual->mat, atual->nome, atual->nota);
        atual=atual->prox;
    }
}
