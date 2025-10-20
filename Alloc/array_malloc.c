#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
void preenche (int vet[],int x,int i,int z,int y){
    srand(time(NULL));
    for(x=0;x<TAM;x++){
        vet[x]=rand()%100;
    }
    printf("--------Vetor---------\n");
    for(i=0;i<TAM;i++){
        printf("[%i],",vet[i]);
    }
    printf("\n-------------------\n");
    
    for(y+0;y<TAM;y++){
        vet[y]= vet[y] * 2;
    }
    printf("--------Vetor Multiplicado por 2---------\n");
    for(z=0;z<TAM;z++){
        printf("[%i],",vet[z]*2);
    }
    printf("\n---------------------------------------\n");
}
    

int main(void){
    int vet[TAM],z,x,y,i;
    srand(time(NULL));
    preenche(vet,x,i,z,y);
    
    return 0;
}
