#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void){
    int x,y,numbers,*p=NULL;
    printf("=========================\n");
    printf("Enter Array size:\n");
    scanf("%i",&numbers);
    p= malloc(numbers * sizeof(int));
    for(x=0;x<numbers;x++){
        p[x]=rand() % 100;
    }
    system("cls");
    printf("------------Array--------------\n");
    for(y=0;y<numbers;y++){
        printf("[%i],",p[y]);
    }
        
    printf("-------------------------------");
    free(p);
    return 0;


}