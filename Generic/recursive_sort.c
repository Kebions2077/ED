#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int n,x;
    int *vet;
    srand(time(NULL));
    printf("enter array size:\n");
    scanf("%i",&n);
    vet= malloc(n*sizeof(int));
    if(vet==NULL) printf("Memory error");
    system("cls");
    printf("------------Array------------\n");
    for(x=0;x<n;x++){
        vet[x]=rand() % 1000;
        printf("[%i],",vet[x]);
    }
    printf("\n-----------------------------\n");
    free(vet);
    return 0;

}