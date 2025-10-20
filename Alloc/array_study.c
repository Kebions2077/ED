#include <stdio.h>
#include <stdlib.h>
#include <time.h>
   
void preencher(int n,int *vet){
   int x;
    for(x=0;x<n;x++){
        vet[x]=rand() % 100;
    }
}
int c_maior(int *vet,int n){  
    if (n <= 0) return 0;
    int x;
    int maior = vet[0];
    for(x=1;x<n;x++){
        if(vet[x] > maior){
            maior = vet[x];   /* CORREÇÃO: atualizar a variável, não o vetor */
        }
    }
    return maior;
}
int c_menor(int *vet,int n){
    if (n <= 0) return 0;
    int menor = vet[0];
    int x;
    for(x=1;x<n;x++){
        if(vet[x] < menor){
            menor = vet[x];   /* CORREÇÃO: atualizar a variável, não o vetor */
        }
    }
    return menor;
}
int main(void){
    int y,n,minor,major,*vet=NULL;
    srand((unsigned)time(NULL));
    printf("Enter Array Size:\n");
    scanf("%i",&n);
    vet= malloc(n*sizeof(int));
    preencher(n,vet);
    minor=c_menor(vet,n);
    major=c_maior(vet,n);
    printf("--------------Array---------------\n");
    printf("-------------------------------------\n");
    for(y=0;y<n;y++){
        printf("[%i],",vet[y]);
    }
    printf("\n-------------------------------------\n");
    printf("Major element:%i\n",major);
    printf("Minor Element:%i\n",minor);
    printf("-------------------------------------\n");
    free(vet);
    return 0;

}
