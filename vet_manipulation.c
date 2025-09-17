#include <stdio.h>
#include <stdlib.h>

void preenche( int vet[]){ //Função para preencher o vetor
    vet[0]=1;
    vet[1]=2;
    vet[2]=3;
}
void check(int *ponteiro){ //Confere se tem memoria suficiente
    if(ponteiro == NULL) printf("Memory Error");
}
int main (void){
    int n, vet[3];
    int *ponteiro=NULL;
    char pause;
    
    preenche(vet);
    ponteiro= malloc(5*sizeof(int));
    check(ponteiro);
    ponteiro[0]=vet[0];
    ponteiro[1]=vet[1];
    ponteiro[2]=vet[2];
    ponteiro[3]=0;
    ponteiro[4]=0;
 printf("-------------------------------------------\n");
 printf("Digite qualquer tecla para continuar:\n");
 scanf("%c", &pause);
 printf("-------------------------------------------\n");
    for(n=0;n<5;n++){
        printf("[%i]-", ponteiro[n]);
    }
    free(ponteiro);
    return 0;
    
    
}