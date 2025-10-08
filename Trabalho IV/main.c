#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void){
int op,t;
while(op!=5){
printf("----------------Controle de pilha-------------------\n");
printf("1)Adicionar\n2)Remover\n3)Vizualizar\n4)Destruir\n5)Sair\n");
printf("----------------------------------------------------------\n");
printf("Digite uma opção:\n");
scanf("%i",& op);
switch(op){
default:
       system("cls");
        printf("Opção Invalida\n");
           system("cls");
break;

case 1:

        system("cls");
        printf("Digite o numero para adicionar à pilha:\n");
        scanf("%i",&t);
        push(t);
           system("cls");
break;

case 2:
        system("cls");
        printf("Removido:%i",pop());
        system("pause");
           system("cls");
break;

case 3:
        system("cls");
        show();
        system("pause");
           system("cls");
break;

case 4:
        system("cls");
        destroy();
        printf("pilha destruida\n");
        system("pause");

break;

case 5:
        exit(1);
break;
return 0;
}
}
}
