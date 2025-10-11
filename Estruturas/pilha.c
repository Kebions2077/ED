#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int pilha[MAX];
int topo=-1;

void push (int x){
if (topo==MAX-1){
fprintf(stderr,"Stack Overflow\n");
exit(1);
}
else{
topo++;
pilha[topo]=x;
}

int pop(void){

if(topo==-1){
fprintf(stderr,"Stack Overflow");
exit(1);
}

else{
return pilha[topo--];
}

void mostrar(void){
int i;
printf("----------Pilha------------\n);
for(i=0;i<=topo;i++){
printf("[%i]",pilha[i]);
}
printf("---------------------------\n);
}

void destruir(void){
int o;
for(o=0;o<=topo;o++){
pop();
}
topo=-1;
}





