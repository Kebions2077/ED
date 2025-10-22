#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int queue[MAX];
int ini=0;
int end=0;

void queue(int x){
    if(fim==MAX){
        fprintf(stderr,"Full Queue\n");
        exit(1);
    }
    else{
        fila[ini]=x;
        ini++;
        end ++;
    }
}
int dequeue(void){
    
}