#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

int main(void){
    no* lista=NULL;
    int op=0;
    while(op!=4){
    printf("------------Atividade III------------\n");
    printf("1)Insere Aluno\n2)Remove Aluno\n3)Mostrar\n4)Sair\n");
    printf("-------------------------------------\n");
    printf("Digite uma opção: ");
    scanf("%d",&op);
    switch(op){
        case 1:
        
            int mat;
            char nome[TAM];
            float nota;
            printf("Digite a matrícula do aluno: ");
            scanf("%d",&mat);
            printf("Digite o nome do aluno: ");
            scanf(" %s",nome);
            printf("Digite a nota do aluno: ");
            scanf("%f",&nota);
            lista=coloca(lista, mat, nome, nota);
            printf("Aluno inserido com sucesso!\n");
            break;
        case 2:
            if(!lista){
                printf("Lista de alunos está vazia!\n");
                break;
            }
            char nome_remove[TAM];
            printf("Digite o nome do aluno a ser removido: ");
            scanf(" %s",nome_remove);
            lista=tira(lista, nome_remove);
            printf("Aluno removido com sucesso!\n");
            break;
        case 3:    
            if(!lista){
                printf("Lista de alunos está vazia!\n");
                break;
            }
            mostra(lista);
            break;
        case 4:
            printf("Saindo do programa...\n");
            exit(0);
        default:
            printf("Opção inválida!\n");
            break;    
        }
    }
    return 0;
    
}