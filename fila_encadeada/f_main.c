//Nome: Kevin Nogueira Meireles
//Email:kevinmeireles.aluno@unipampa.edu.br

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void clear(void) {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main(void){
    int op;
    float n;
    while (op!=4){
    clear();
    printf("---------Estudo Fila------\n");
    printf("1)Inserir\n2)Retirar\n3)Vizualizar\n4)Sair\n");
    printf("-------------------------------------------\n");
    scanf("%i",&op);
    switch(op){

default:
            printf("Opção Invalida\n");
            break;
case 1:
    clear();
    printf("Digite um numero para adicionar a fila:\n");
    scanf("%f",&n);
    ins_fim(n);
    clear();
    break;
case 2:
    tira_inicio();
    system("pause");
    clear();
    break;
case 3:
        mostrar();
        system("pause");
        clear();
        break;
case 4:
    printf("Saindo...\n");
    printf("..\n");
    printf(".\n");
    exit(1);
    break;
    }
    }
return 0;
}
