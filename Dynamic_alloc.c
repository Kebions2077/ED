#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main (void){
    int numeros,x,y,*ponteiro;
    ponteiro=NULL;
    srand (time(NULL));
    printf("------------------------------------------\n");
    printf("Digite o Numero de itens do vetor:\n");
    scanf("%i",&numeros);
    printf("------------------------------------------\n");
    system("cls");
    ponteiro= malloc(numeros*sizeof(int));
    printf("---Preenchimento De Vetor---\n");
    for(x=0;x<numeros;x++){
        ponteiro[x]=rand()%100;
    }
    system("cls");
    printf("-----------------------------------------\n");
    printf("-----------Numeros Armazenados-----------\n ");
    for(y=0;y<numeros;y++){
        printf("[%i],",ponteiro[y]);
    }
    printf("\n------------------------------------------\n");
    free(ponteiro);
    return 0;
}