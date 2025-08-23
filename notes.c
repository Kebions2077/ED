#include <stdio.h>
#include <string.h>

struct class{
    char name[30];
    float n1,n2,n3,n4,median;
};  
    struct class alum;
    int main (void){
        printf("---Median Calculator---\n");
        printf ("Enter Name:\n");
        fgets(alum.name,30,stdin);
        printf("Enter Your Four Notes:\n");
        scanf("%f %f %f %f", &alum.n1,&alum.n2,&alum.n3,&alum.n4);
        alum.median= (alum.n1+alum.n2+alum.n3+alum.n4) /4;
        system("cls");
        printf("=====Alumn Database=====\n");
        printf("Name:%s\n", alum.name);
        printf("Median:%2.f\n",alum.median);
        if(alum.median>=60){
            printf("Aproved!\n");
        }
        else{
            printf("Not Aproved!\n");
        }
        printf("========================\n");
        return 0;
    }