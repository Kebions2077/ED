#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    int *p,a;
    srand(time(NULL));
    a=rand() %100;
    p=&a;
    printf("--------------------------\n");
    printf("-------------\n");
    printf("Valor de A:%i\n",a);
    printf("Endereço de a:%p\n",&a);
    printf("Valor Ponteiro:%i\n",*p);
    printf("Endereço Ponteiro:%p\n",&p);
    printf("------------------\n");
    printf("-------------------------\n");
    return 0;
}
