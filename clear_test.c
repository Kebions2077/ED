#include <stdio.h>
#include <stdlib.h>
void clear() {
    #ifdef _WIN32
        system("cls");  
    #else
        system("clear");
    #endif
}
int fat(int a){
    if (a==1){
        return 1;
    }
    else {
        return a * fat(a-1);
    }

}
int pot(int a, int b){
    if(a==1 || b== 0) return 1;
    else return a * pot (a,b-1);
}
int main (void){
    int a,b,r,op;
    printf("------------Calculador------------\n");
    printf("1)Fatora��oo\n");
    printf("2)Potencia��o\n");
    printf("----------------------------------\n");
    printf("Digite uma opção:\n");
    scanf("%i",&op);
    switch(op){
        default:
        clear();
            printf("Operação invalida");
            printf("Saindo...");
            break;
        case 1:
        clear();
            printf("--FATORAÇÃO--\n");
            printf("Digite o numero que deseja fatorar:\n");
            scanf("%i",&a);
            r=fat(a);
            clear();
            printf("--------------------------\n");
            printf("Fatorial de %i:%i",a,r);
            printf("--------------------------\n");
            break;
        
        case 2:
        clear();
        printf("--Potenciação--\n");
        printf("Digite a base:\n");
        scanf("%i",&a);
        printf("digite o expoente:\n");
        scanf("%i",&b);
        r=pot(a,b);
        clear();
        printf("-----------------------\n");
        printf("%i^%i=%i",a,b,r);
        printf("-----------------------\n");
        break;
    }
    return 0;
}