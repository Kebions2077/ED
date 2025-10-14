//Nome:Kevin N. Meireles
//Email:kevinmeireles.aluno@unipampa.edu.br

#include<stdio.h>
#include <string.h>
#include "pilha.h"
#include <stdlib.h>

#define STAM 30
void clear() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main(void){
    char str[STAM];
    int op = 0;
    while(op != 5){
        clear();
        printf("--------------Estudo De pilha-----------\n");
        printf("1)Adicionar\n2)Remover\n3)mostrar\n4)Destruir\n5)sair\n");
        printf("----------------------------------------\n");
        printf("Digtite uma opção:\n");
        scanf("%i",&op);

        clear();
        switch(op){
            default:
                printf("operação invalida\n");
                break;

            case 1:
                printf("Digite a string para adicionar a pilha:\n");
                scanf("%s",str);
                push(str);
                break;

            case 2:
                pop();
                system("pause");
                break;

            case 3:
                mostrar();
                system("pause");
                break;

            case 4:
                destruir();
                break;

            case 5:
                printf("saindo...\n");
                printf("..\n");
                printf(".\n");
                exit(1);
                break;
        }
    }
    return 0;
}
