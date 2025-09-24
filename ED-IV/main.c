#include <stdio.h>
#include <stdlib.h>


int main(){
    int op;
while(op!=0){
    printf("-----------------Pilha--------------------\n");
    printf("1)Inserir\n");
    printf("2)Retirar\n");
    printf("3)Visualizar\n");
    printf("4)Destruir\n");
    printf("5)Sair\n");
    printf("------------------------------------------\n");
    printf("Digite uma opção:\n");
    scanf("%i",&op);
    printf("------------------------------------------\n");
    switch(op){
        
        case 1:
            int valor;
            clear();
            printf("---------Inserir--------\n");
            printf("Qual Valor Deseja Inserir?\n");
            scanf("%i",&valor);
            push(valor);
            printf("Digite Qualquer Tecla para prosseguir\n")
            system("pause");
        break;

        case 2:
            clear();
            printf("--------Retirar--------\n");
            pop();
            printf("Digite Qualquer Tecla para prosseguir\n")
            system("pause");
        break;
            
        case 3:
            clear();
            printf("--------Visualizar--------\n");
            show();
            printf("Digite Qualquer Tecla para prosseguir\n")
            system("pause");
        break;

        case 4:
        printf("-----------Destruir Pilha-----------\n");
        clear();
        destroy();
        printf("Digite Qualquer Tecla para prosseguir\n");
        break;

        case 5:
        return printf("Saindo...\n");
        break;

        default:
        printf("Opção Invalida\n");
        break;




    }
}
    return 0;

}