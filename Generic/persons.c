#include<stdio.h>
#include <string.h>
struct persons{
    char name[30];
    char add[30];
    long int phone;
};
    struct persons person[5];

    int main (void){
        int x,y;
        for(x=0;x<5;x++){
            printf("Enter Name:\n");
            fgets(person[x].name,30,stdin);
            printf("Enter Address:\n");
            fgets(person[x].add,30,stdin);
            printf("Enter Phone:\n");
            scanf("%li", & person[x].phone);
        }
        for(y=0;y<5;y++){
            printf("--------Person %i+1-----------",y);
            printf("Name:%s\n",person[y].name);
            printf("Address:%s\n",person[y].add);
            printf("Phone:%li\n",person[y].phone);
            printf("-----------------------------\n");
        }
        return 0;
    }